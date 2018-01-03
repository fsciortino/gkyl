-- Gkyl ------------------------------------------------------------------------
--
-- Vlasov solver on a Cartesian grid. Works in arbitrary CDIM/VDIM
-- (VDIM>=CDIM) with either Maxwell, Poisson or specified EM fields.
--
--    _______     ___
-- + 6 @ |||| # P ||| +
--------------------------------------------------------------------------------

local AdiosCartFieldIo = require "Io.AdiosCartFieldIo"
local Basis = require "Basis"
local BoundaryCondition = require "Updater.BoundaryCondition"
local DataStruct = require "DataStruct"
local DecompRegionCalc = require "Lib.CartDecomp"
local Field = require "App.VlasovOnCartGridField"
local Grid = require "Grid"
local Lin = require "Lib.Linalg"
local Logger = require "Lib.Logger"
local Mpi = require "Comm.Mpi"
local Species = require "App.VlasovOnCartGridSpecies"
local Time = require "Lib.Time"
local Updater = require "Updater"
local date = require "Lib.date"
local xsys = require "xsys"

-- function to create basis functions
local function createBasis(nm, ndim, polyOrder)
   if nm == "serendipity" then
      return Basis.CartModalSerendipity { ndim = ndim, polyOrder = polyOrder }
   elseif nm == "maximal-order" then
      return Basis.CartModalMaxOrder { ndim = ndim, polyOrder = polyOrder }
   end   
end

-- function to check "type" of obj.
local function isType(obj, typeString)
   if type(obj) == typeString then
      return true
   elseif type(obj) == "table" then
      if obj.type == typeString then
	 return true
      end
   end
   return false
end

-- top-level method to build application "run" method
local function buildApplication(self, tbl)
   -- create logger
   local log = Logger {
      logToFile = xsys.pickBool(tbl.logToFile, true)
   }

   log(date(false):fmt()) -- time-stamp for sim start

   -- function to warn user about default values
   local function warnDefault(varVal, varNm, default)
      if varVal then return varVal end
      log(string.format(" ** WARNING: %s not specified, assuming %s", varNm, tostring(default)))
      return default
   end

   log("Initializing VlasovOnCartGrid simulation ...")
   local tmStart = Time.clock()

   local cdim = #tbl.lower -- configuration space dimensions
   assert(cdim == #tbl.upper, "upper should have exactly " .. cdim .. " entries")
   assert(cdim == #tbl.cells, "cells should have exactly " .. cdim .. " entries")

   -- basis function name
   local basisNm = warnDefault(tbl.basis, "basis", "serendipity")
   if basisNm ~= "serendipity" and basisNm ~= "maximal-order" then
      assert(false, "Incorrect basis type " .. basisNm .. " specified")
   end

   -- polynomial order
   local polyOrder = tbl.polyOrder

   -- create basis function for configuration space
   local confBasis = createBasis(basisNm, cdim, polyOrder)

   -- I/O method
   local ioMethod = tbl.ioMethod and tbl.ioMethod or "MPI"
   if ioMethod ~= "POSIX" and ioMethod ~= "MPI" then
      assert(false, "ioMethod must be one of 'MPI' or 'POSIX'. Provided '" .. ioMethod .. "' instead")
   end

   -- time-stepper
   local timeStepperNm = warnDefault(tbl.timeStepper, "timeStepper", "rk3")
   if timeStepperNm ~= "rk2" and timeStepperNm ~= "rk3" and timeStepperNm ~= "rk3s4" then
      assert(false, "Incorrect timeStepper type " .. timeStepperNm .. " specified")
   end

   -- CFL fractions for various steppers
   local stepperCFLFracs = { rk2 = 1.0, rk3 = 1.0, rk3s4 = 2.0 }

   local cflFrac = tbl.cflFrac
   -- Compute CFL fraction if not specified
   if  cflFrac == nil then
      cflFrac = stepperCFLFracs[timeStepperNm]
   end

   -- parallel decomposition stuff
   local decompCuts = tbl.decompCuts
   if tbl.decompCuts then
      assert(cdim == #tbl.decompCuts, "decompCuts should have exactly " .. cdim .. " entries")
   else
      -- if not specified, use 1 processor
      decompCuts = {}
      for d = 1, cdim do decompCuts[d] = 1 end
   end
   local useShared = xsys.pickBool(tbl.useShared, false)

   -- extract periodic directions
   local periodicDirs = {}
   if tbl.periodicDirs then
      for i, d in ipairs(tbl.periodicDirs) do
	 if d<1 and d>3 then
	    assert(false, "Directions in periodicDirs table should be 1 (for X), 2 (for Y) or 3 (for Z)")
	 end
	 periodicDirs[i] = d
      end
   end

   -- read in information about each species
   local species = {}
   for nm, val in pairs(tbl) do
      if isType(val, "species") then
	 species[nm] = val
	 species[nm]:setName(nm)
	 species[nm]:setIoMethod(ioMethod)
      end
   end

   local cflMin = GKYL_MAX_DOUBLE
   -- compute CFL numbers
   for _, s in pairs(species) do
      local ndim = cdim+s:ndim()
      local myCfl = tbl.cfl and tbl.cfl or cflFrac/(ndim*(2*polyOrder+1))
      cflMin = math.min(cflMin, myCfl)
      s:setCfl(cflMin)
   end
   log(string.format("Using CFL number %g", cflMin))

   -- setup each species
   for _, s in pairs(species) do
      s:createGrid(tbl.lower, tbl.upper, tbl.cells, decompCuts, periodicDirs)
      s:setConfBasis(confBasis)
      s:createBasis(basisNm, polyOrder)
      s:alloc()
   end

   -- setup configuration space grid
   local grid = Grid.RectCart {
      lower = tbl.lower,
      upper = tbl.upper,
      cells = tbl.cells,
      periodicDirs = periodicDirs,
      -- NEED TO CREATE DECOMPOSITION
   }

   -- setup information about fields: if this is not specified, it is
   -- assumed there are no force terms
   local field = tbl.field and tbl.field or Field.NoField {}
   field:setIoMethod(ioMethod)
   field:setBasis(confBasis)
   field:setGrid(grid)
   do
      local myCfl = tbl.cfl and tbl.cfl or cflFrac/(cdim*(2*polyOrder+1))
      field:setCfl(myCfl)
   end
   -- allocate field data
   field:alloc()

   -- initialize species solvers
   for _, s in pairs(species) do
      local hasE, hasB = field:hasEB()
      s:createSolver(hasE, hasB)
   end   

   -- initialize species distributions and write them out
   for _, s in pairs(species) do
      s:initDist()
   end
   -- initialize fields
   field:initField()

   -- function to write data to file
   local function writeData(frame, tCurr)
      for _, s in pairs(species) do s:write(frame, tCurr) end
      field:write(frame, tCurr)
   end

   writeData(0, 0.0) -- write initial conditions
   
   -- store fields used in RK time-stepping for each species
   local speciesRkFields = { }
   for nm, s in pairs(species) do
      speciesRkFields[nm] = { s:rkStepperFields() } -- package them up as a table
   end

   -- store fields from EM field for RK time-stepper
   local emRkFields = { field:rkStepperFields() } -- package up as table

   -- function to take a single forward-euler time-step
   local function fowardEuler(tCurr, dt, inIdx, outIdx)
      local status, dtSuggested = true, GKYL_MAX_DOUBLE
      -- update species
      for nm, s in pairs(species) do
	 local myStatus, myDtSuggested = s:forwardEuler(
	    tCurr, dt, speciesRkFields[nm][inIdx], emRkFields[inIdx], speciesRkFields[nm][outIdx])
	 status = status and myStatus
	 dtSuggested = math.min(dtSuggested, myDtSuggested)
	 s:applyBc(tCurr, dt, speciesRkFields[nm][outIdx])
      end
      -- update EM field
      local myStatus, myDtSuggested = field:forwardEuler(tCurr, dt, emRkFields[inIdx], emRkFields[outIdx])
      status = status and myStatus
      dtSuggested = math.min(dtSuggested, myDtSuggested)
      field:applyBc(tCurr, dt, emRkFields[outIdx])
      
      return status, dtSuggested
   end

   -- function to increment fields
   local function increment(a, aIdx, b, bIdx, outIdx)
      for nm, s in pairs(species) do
	 speciesRkFields[nm][outIdx]:combine(a, speciesRkFields[nm][aIdx], b, speciesRkFields[nm][bIdx])
      end
      if emRkFields[aIdx] then -- only increment EM fields if there are any
	 emRkFields[outIdx]:combine(a, emRkFields[aIdx], b, emRkFields[bIdx])
      end
   end

   local timeSteppers = {} -- various time-steppers
   -- function to advance solution using SSP-RK2 scheme
   function timeSteppers.rk2(tCurr, dt)
      local status, dtSuggested
      -- RK stage 1
      status, dtSuggested = fowardEuler(tCurr, dt, 1, 2)
      if status == false then return status, dtSuggested end

      -- RK stage 2
      status, dtSuggested = fowardEuler(tCurr, dt, 2, 3)
      if status == false then return status, dtSuggested end

      -- final update
      increment(0.5, 1, 0.5, 3, 2)
      for nm, s in pairs(species) do
	 speciesRkFields[nm][1]:copy(speciesRkFields[nm][2])
      end
      return status, dtSuggested
   end

   -- function to advance solution using SSP-RK3 scheme
   function timeSteppers.rk3(tCurr, dt)

   end

   -- function to advance solution using 4-stage SSP-RK3 scheme
   function timeSteppers.rk3s4(tCurr, dt)
      assert(false, "timeSteppers.rk3s4: NYI!")
   end   

   local tmEnd = Time.clock()
   log(string.format("Initializing completed in %g sec\n", tmEnd-tmStart))

   -- return function that runs main simulation loop   
   return function(self)
      log("Starting main loop of HyperEqnOnCartGrid simulation ...")
      local tStart, tEnd, nFrame = 0, tbl.tEnd, tbl.nFrame
      local initDt =  tbl.suggestedDt and tbl.suggestedDt or tEnd-tStart -- initial time-step
      local frame = 1
      local tFrame = (tEnd-tStart)/nFrame
      local nextIOt = tFrame
      local step = 1
      local tCurr = tStart
      local myDt = initDt

      local tmSimStart = Time.clock()
      -- main simulation loop
      while true do
	 -- if needed adjust dt to hit tEnd exactly
	 if tCurr+myDt > tEnd then myDt = tEnd-tCurr end
	 log (string.format(" Taking step %5d at time %6g with dt %g", step, tCurr, myDt))
	 local status, dtSuggested = timeSteppers[timeStepperNm](tCurr, myDt) -- take a time-step

	 if not status then
	    -- updater failed, time-step too large
	    log (string.format(" ** Time step %g too large! Will retake with dt %g", myDt, dtSuggested))
	    myDt = dtSuggested
	 else
	    -- write out data if needed
	    if tCurr+myDt > nextIOt or tCurr+myDt >= tEnd then
	       log (string.format(" Writing data at time %g (frame %d) ...\n", tCurr+myDt, frame))
	       writeData(frame, tCurr+myDt)
	       frame = frame + 1
	       nextIOt = nextIOt + tFrame
	       step = 0
	    end
	    tCurr = tCurr + myDt
	    myDt = dtSuggested
	    step = step + 1
	    if (tCurr >= tEnd) then
	       break
	    end
	 end 
      end -- end of time-step loop
      local tmSimEnd = Time.clock()

      local tmVlasovSlvr = 0.0 -- total time in Vlasov solver
      for _, s in pairs(species) do
	 tmVlasovSlvr = tmVlasovSlvr+s:totalSolverTime()
      end

      local tmVlasovStream, tmVlasovForce, tmVlasovIncr = 0.0, 0.0, 0.0
      for _, s in pairs(species) do
	 tmVlasovStream = tmVlasovStream + s:streamTime()
	 tmVlasovForce = tmVlasovForce + s:forceTime()
	 tmVlasovIncr = tmVlasovIncr + s:incrementTime()
      end

      log(string.format("Vlasov solver took %g sec", tmVlasovSlvr))
      log(string.format(
	     "  [Streaming updates %g sec. Force updates %g sec]",
	     tmVlasovStream, tmVlasovForce))
      log(string.format("Main loop completed in %g sec", tmSimEnd-tmSimStart))
      log(date(false):fmt()) -- time-stamp for sim end
   end
end

-- VlasovOnCartGrid application object
local App = {}
-- constructor
function App:new(tbl)
   local self = setmetatable({}, App)
   self._runApplication = buildApplication(self, tbl)
   return self
end
-- make object callable, and redirect call to the :new method
setmetatable(App, { __call = function (self, o) return self.new(self, o) end })

-- set callable methods
App.__index = {
   run = function (self)
      return self:_runApplication()
   end
}

return {
   App = App,
   Species = Species,
   EmField = Field.EmField,
}
