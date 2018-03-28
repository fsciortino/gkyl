-- Gkyl ------------------------------------------------------------------------
--
-- App support code: Maxwell field objects
--
--    _______     ___
-- + 6 @ |||| # P ||| +
--------------------------------------------------------------------------------

local AdiosCartFieldIo = require "Io.AdiosCartFieldIo"
local DataStruct = require "DataStruct"
local LinearTrigger = require "LinearTrigger"
local PerfMaxwell = require "Eq.PerfMaxwell"
local Proto = require "Lib.Proto"
local Time = require "Lib.Time"
local Updater = require "Updater"
local xsys = require "xsys"
local FieldBase = require "App.Field.FieldBase"

-- MaxwellField ---------------------------------------------------------------------
--
-- Electromagnetic field (Maxwell equation are evolved)
--------------------------------------------------------------------------------

local MaxwellField = Proto(FieldBase.FieldBase)

-- add constants to object indicate various supported boundary conditions
local EM_BC_OPEN = 1
local EM_BC_REFLECT = 2

MaxwellField.bcOpen = EM_BC_OPEN -- zero gradient
MaxwellField.bcReflect = EM_BC_REFLECT -- perfect electric conductor

-- function to check if BC type is good
local function isBcGood(bcType)
   if bcType == EM_BC_OPEN or bcType == EM_BC_REFLECT then
      return true
   end
   return false
end

-- this ctor simply stores what is passed to it and defers actual
-- construction to the fullInit() method below
function MaxwellField:init(tbl)
   self.tbl = tbl
end

-- Actual function for initialization. This indirection is needed as
-- we need the app top-level table for proper initialization
function MaxwellField:fullInit(appTbl)
   local tbl = self.tbl -- previously store table
   
   self.epsilon0 = tbl.epsilon0
   self.mu0 = tbl.mu0
   self.ioMethod = "MPI"
   self.evolve = xsys.pickBool(tbl.evolve, true) -- by default evolve field

   self.ce = tbl.elcErrorSpeedFactor and tbl.elcErrorSpeedFactor or 0.0
   self.cb = tbl.mgnErrorSpeedFactor and tbl.mgnErrorSpeedFactor or 0.0

   self.hasMagField = xsys.pickBool(tbl.hasMagneticField, true) -- by default there is a magnetic field

   self.lightSpeed = 1/math.sqrt(self.epsilon0*self.mu0)

   -- create triggers to write fields
   if tbl.nFrame then
      self.ioTrigger = LinearTrigger(0, appTbl.tEnd, tbl.nFrame)
   else
      self.ioTrigger = LinearTrigger(0, appTbl.tEnd, appTbl.nFrame)
   end

   self.ioFrame = 0 -- frame number for IO

   -- store initial condition function (this is a wrapper around user
   -- supplied function as we need to add correction potential ICs
   -- here)
   self.initFunc = function (t, xn)
      local ex, ey, ez, bx, by, bz = tbl.init(t, xn)
      return ex, ey, ez, bx, by, bz, 0.0, 0.0
   end

   self.hasNonPeriodicBc = false -- to indicate if we have non-periodic BCs
   self.bcx, self.bcy, self.bcz = { }, { }, { }
   
   -- read in boundary conditions
   if tbl.bcx then
      self.bcx[1], self.bcx[2] = tbl.bcx[1], tbl.bcx[2]
      assert(isBcGood(self.bcx[1]) and isBcGood(self.bcx[2]), "VlasovOnCartGridField: Incorrect X BC type specified!")
      self.hasNonPeriodicBc = true
   end
   if tbl.bcy then
      self.bcy[1], self.bcy[2] = tbl.bcy[1], tbl.bcy[2]
      assert(isBcGood(self.bcy[1]) and isBcGood(self.bcy[2]), "VlasovOnCartGridField: Incorrect Y BC type specified!")
      self.hasNonPeriodicBc = true
   end
   if tbl.bcz then
      self.bcz[1], self.bcz[2] = tbl.bcz[1], tbl.bcz[2]
      assert(isBcGood(self.bcz[1]) and isBcGood(self.bcz[2]), "VlasovOnCartGridField: Incorrect Z BC type specified!")
      self.hasNonPeriodicBc = true
   end

   -- for storing integrated energy components
   self.emEnergy = DataStruct.DynVector { numComponents = 8 }

   self.tmCurrentAccum = 0.0 -- time spent in current accumulate

   self._isFirst = true
end

-- methods for EM field object
function MaxwellField:hasEB() return true, self.hasMagField end
function MaxwellField:setCfl(cfl) self.cfl = cfl end
function MaxwellField:getCfl() return self.cfl end
function MaxwellField:setIoMethod(ioMethod) self.ioMethod = ioMethod end
function MaxwellField:setBasis(basis) self.basis = basis end
function MaxwellField:setGrid(grid) self.grid = grid end

function MaxwellField:alloc(nRkDup)
   -- allocate fields needed in RK update
   self.em = {}
   for i = 1, nRkDup do
      self.em[i] = DataStruct.Field {
	 onGrid = self.grid,
	 numComponents = 8*self.basis:numBasis(),
	 ghost = {1, 1}
      }
   end
      
   -- create Adios object for field I/O
   self.fieldIo = AdiosCartFieldIo {
      elemType = self.em[1]:elemType(),
      method = self.ioMethod,
   }

end

function MaxwellField:createSolver()
   local maxwellEqn = PerfMaxwell {
      lightSpeed = self.lightSpeed,
      elcErrorSpeedFactor = self.ce,
      mgnErrorSpeedFactor = self.cb,
      basis = self.basis,
   }
   
   self.fieldSlvr = Updater.HyperDisCont {
      onGrid = self.grid,
      basis = self.basis,
      cfl = self.cfl,
      equation = maxwellEqn
   }

   self.emEnergyCalc = Updater.CartFieldIntegratedQuantCalc {
      onGrid = self.grid,
      basis = self.basis,
      numComponents = 8,
      quantity = "V2"
   }

   -- function to construct a BC updater
   local function makeBcUpdater(dir, edge, bcList)
      return Updater.Bc {
	 onGrid = self.grid,
	 boundaryConditions = bcList,
	 dir = dir,
	 edge = edge,
      }
   end

   -- various functions to apply BCs of different types
   local function bcOpen(dir, tm, xc, fIn, fOut)
      local nb = self.basis:numBasis()
      local fInData, fOutData = fIn:data(), fOut:data()
      for i = 1, 8 do
	 self.basis:flipSign(dir, fInData+(i-1)*nb-1, fOutData+(i-1)*nb-1)
      end
   end

   -- functions to make life easier while reading in BCs to apply
   self.boundaryConditions = { } -- list of Bcs to apply
   local function appendBoundaryConditions(dir, edge, bcType)
      if bcType == EM_BC_OPEN then
	 table.insert(self.boundaryConditions, makeBcUpdater(dir, edge, { bcOpen }))
      else
	 assert(false, "VlasovOnCartGridField: Unsupported BC type!")
      end
   end

   local function handleBc(dir, bc)
      if bc[1] then
	 appendBoundaryConditions(dir, "lower", bc[1])
      end
      if bc[2] then
	 appendBoundaryConditions(dir, "upper", bc[2])
      end
   end
   
   -- add various BCs to list of BCs to apply
   handleBc(1, self.bcx)
   handleBc(2, self.bcy)
   handleBc(3, self.bcz)
end

function MaxwellField:createDiagnostics()
end

function MaxwellField:initField()
   local project = Updater.ProjectOnBasis {
      onGrid = self.grid,
      basis = self.basis,
      evaluate = self.initFunc
   }
   project:advance(0.0, 0.0, {}, {self.em[1]})
   self:applyBc(0.0, 0.0, self.em[1])
end

function MaxwellField:write(tm)
   if self.evolve then
      -- compute EM energy integrated over domain
      self.emEnergyCalc:advance(tm, 0.0, { self.em[1] }, { self.emEnergy })
      
      if self.ioTrigger(tm) then
	 self.fieldIo:write(self.em[1], string.format("field_%d.bp", self.ioFrame), tm)
	 self.emEnergy:write(string.format("fieldEnergy_%d.bp", self.ioFrame), tm)
	 
	 self.ioFrame = self.ioFrame+1
      end
   else
      -- if not evolving species, don't write anything except initial conditions
      if self.ioFrame == 0 then
	 self.fieldIo:write(self.em[1], string.format("field_%d.bp", self.ioFrame), tm)
      end
      self.ioFrame = self.ioFrame+1
   end
end

function MaxwellField:rkStepperFields()
   return self.em
end

function MaxwellField:accumulateCurrent(dt, current, em)
   if current == nil then return end

   local tmStart = Time.clock()

   -- these many current components are supplied
   local cItr, eItr = current:get(1), em:get(1)
   local cIdxr, eIdxr = current:genIndexer(), em:genIndexer()

   for idx in em:localRangeIter() do
      current:fill(cIdxr(idx), cItr)
      em:fill(eIdxr(idx), eItr)
      for i = 1, current:numComponents() do
   	 eItr[i] = eItr[i]-dt/self.epsilon0*cItr[i]
      end
   end
   self.tmCurrentAccum = self.tmCurrentAccum + Time.clock()-tmStart
end

function MaxwellField:forwardEuler(tCurr, dt, emIn, species, emOut)
   if self._isFirst then
      -- create field for total current density
      do
         local c = 0
         for _, s in pairs(species) do
            if c == 0 then
               self.currentDens = s:allocMomCouplingFields().currentDensity
            end
            c = c+1
         end
      end
      self._isFirst = false
   end

   if self.evolve then
      local mys, mydt = self.fieldSlvr:advance(tCurr, dt, {emIn}, {emOut})
      self.currentDens:clear(0.0)
      for nm, s in pairs(species) do
        self.currentDens:accumulate(s:getCharge(), s:getMomDensity())
      end
      self:accumulateCurrent(dt, self.currentDens, emOut)
      return mys, mydt
   else
      emOut:copy(emIn) -- just copy stuff over
      return true, GKYL_MAX_DOUBLE
   end
end

function MaxwellField:applyBc(tCurr, dt, emIn)
   if self.hasNonPeriodicBc then
      for _, bc in ipairs(self.boundaryConditions) do
	 bc:advance(tCurr, dt, {}, {emIn})
      end
   end   
   emIn:sync()
end
   
function MaxwellField:totalSolverTime()
   return self.fieldSlvr.totalTime + self.tmCurrentAccum
end

function MaxwellField:totalBcTime()
   local tm = 0.0
   for _, bc in ipairs(self.boundaryConditions) do
      tm = tm + bc.totalTime
   end
   return tm
end

function MaxwellField:energyCalcTime()
   return self.emEnergyCalc.totalTime
end

-- FuncMaxwellField ---------------------------------------------------------------------
--
-- A field object with EM fields specified as a time-dependent function
--------------------------------------------------------------------------------

local FuncMaxwellField = Proto(FieldBase.FuncFieldBase)

-- methods for no field object
function FuncMaxwellField:init(tbl)
   self.tbl = tbl
end

function FuncMaxwellField:fullInit(appTbl)
   local tbl = self.tbl -- previously store table

   self.ioMethod = "MPI"
   self.evolve = xsys.pickBool(tbl.evolve, true) -- by default evolve field

   -- create triggers to write fields
   if tbl.nFrame then
      self.ioTrigger = LinearTrigger(0, appTbl.tEnd, tbl.nFrame)
   else
      self.ioTrigger = LinearTrigger(0, appTbl.tEnd, appTbl.nFrame)
   end

   self.ioFrame = 0 -- frame number for IO
   
   -- store function to compute EM field
   self.emFunc = function (t, xn)
      local ex, ey, ez, bx, by, bz = tbl.emFunc(t, xn)
      return ex, ey, ez, bx, by, bz, 0.0, 0.0
   end
end

function FuncMaxwellField:hasEB()
   return true, true
end

function FuncMaxwellField:setCfl() end
function FuncMaxwellField:setIoMethod(ioMethod) self.ioMethod = ioMethod end
function FuncMaxwellField:setBasis(basis) self.basis = basis end
function FuncMaxwellField:setGrid(grid) self.grid = grid end

function FuncMaxwellField:alloc(nField)
   -- allocate fields needed in RK update
   self.em = DataStruct.Field {
      onGrid = self.grid,
      numComponents = 8*self.basis:numBasis(),
      ghost = {1, 1}
   }
      
   -- create Adios object for field I/O
   self.fieldIo = AdiosCartFieldIo {
      elemType = self.em:elemType(),
      method = self.ioMethod,
   }   
end

function FuncMaxwellField:createSolver()
   self.fieldSlvr = Updater.ProjectOnBasis {
      onGrid = self.grid,
      basis = self.basis,
      evaluate = self.emFunc
   }
end

function FuncMaxwellField:createDiagnostics()
end

function FuncMaxwellField:initField()
   self.fieldSlvr:advance(0.0, 0.0, {}, {self.em})
   self:applyBc(0.0, 0.0, self.em)
end

function FuncMaxwellField:write(tm)
   if self.evolve then
      if self.ioTrigger(tm) then
	 self.fieldIo:write(self.em, string.format("func_field_%d.bp", self.ioFrame), tm)
	 
	 self.ioFrame = self.ioFrame+1
      end
   else
      -- if not evolving species, don't write anything except initial conditions
      if self.ioFrame == 0 then
	 self.fieldIo:write(self.em, string.format("func_field_%d.bp", self.ioFrame), tm)
      end
      self.ioFrame = self.ioFrame+1
   end
end

function FuncMaxwellField:rkStepperFields()
   return { self.em, self.em, self.em, self.em }
end

function FuncMaxwellField:forwardEuler(tCurr, dt, momIn, emIn, emOut)
   if self.evolve then
      self.fieldSlvr:advance(tCurr, dt, {}, {emOut})
   end
   return true, GKYL_MAX_DOUBLE
end

function FuncMaxwellField:applyBc(tCurr, dt, emIn)
   emIn:sync()
end

function FuncMaxwellField:totalSolverTime()
   return self.fieldSlvr.totalTime
end

function FuncMaxwellField:totalBcTime() return 0.0 end
function FuncMaxwellField:energyCalcTime() return 0.0 end

return {
   MaxwellField = MaxwellField,
   FuncMaxwellField = FuncMaxwellField,
}