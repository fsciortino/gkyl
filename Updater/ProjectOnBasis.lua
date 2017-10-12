-- Gkyl ------------------------------------------------------------------------
--
-- Updater to project function on basis functions. Uses Gaussian
-- quadrature. The projection is exact if the function being projected
-- is a polynomial of order less than the basis function polyOrder.
--
--    _______     ___
-- + 6 @ |||| # P ||| +
--------------------------------------------------------------------------------

-- Gkyl libraries
local Alloc = require "Lib.Alloc"
local Base = require "Updater.Base"
local GaussQuadRules = require "Lib.GaussQuadRules"
local Lin = require "Lib.Linalg"
local Range = require "Lib.Range"

-- system libraries
local ffi = require "ffi"
local xsys = require "xsys"
local new, copy, fill, sizeof, typeof, metatype = xsys.from(ffi,
     "new, copy, fill, sizeof, typeof, metatype")

-- Template for function to map computional space -> physical space
local compToPhysTempl = xsys.template([[
return function (eta, dx, xc, xOut)
|for i = 1, NDIM do
   xOut[${i}] = 0.5*dx[${i}]*eta[${i}] + xc[${i}]
|end
end
]])

-- Projection  updater object
local ProjectOnBasis = {}

function ProjectOnBasis:new(tbl)
   local self = setmetatable({}, ProjectOnBasis)
   Base.setup(self, tbl) -- setup base object

   self._onGrid = assert(tbl.onGrid, "Updater.ProjectOnBasis: Must provide grid object using 'onGrid'")
   self._basis = assert(tbl.basis, "Updater.ProjectOnBasis: Must specify basis functions to use using 'basis'")
   self._evaluate = assert(tbl.evaluate, "Updater.ProjectOnBasis: Must specify function to project using 'evaluate'")

   assert(self._onGrid:ndim() == self._basis:ndim(), "Dimensions of basis and grid must match")

   local N = tbl.numQuad and tbl.numQuad or self._basis:polyOrder()+1 -- number of quadrature points in each direction

   -- 1D weights and ordinates
   local ordinates, weights = GaussQuadRules.ordinates[N], GaussQuadRules.weights[N]

   local ndim = self._basis:ndim()
   local l, u = {}, {}
   for d = 1, ndim do l[d], u[d] = 1, N end
   local quadRange = Range.Range(l, u) -- for looping over quadrature nodes
   
   -- construct weights and ordinates for integration in multiple dimensions
   self._ordinates, self._weights = {}, {}
   local nodeNum = 1
   for idx in quadRange:colMajorIter() do
      self._weights[nodeNum] = 1.0
      self._ordinates[nodeNum] = Lin.Vec(ndim)
      for d = 1, ndim do
	 self._weights[nodeNum] = self._weights[nodeNum]*weights[idx[d]]
	 self._ordinates[nodeNum][d] = ordinates[idx[d]]
      end
      nodeNum = nodeNum + 1
   end

   local numBasis = self._basis:numBasis()
   self._basisAtOrdinates = {} -- shape numOrdinates X numBasis
   -- pre-compute values of basis functions at quadrature nodes
   for n, ord in ipairs(self._ordinates) do
      self._basisAtOrdinates[n] = Lin.Vec(numBasis)
      self._basis:evalBasis(ord, self._basisAtOrdinates[n])
   end

   -- construct various functions from template representations
   self._compToPhys = loadstring(compToPhysTempl {NDIM = ndim} )()

   return self
end
-- make object callable, and redirect call to the :new method
setmetatable(ProjectOnBasis, { __call = function (self, o) return self.new(self, o) end })

-- advance method
local function advance(self, tCurr, dt, inFld, outFld)
   local grid = self._onGrid
   local qOut = assert(outFld[1], "ProjectOnBasis.advance: Must specify an output field")

   local ndim = grid:ndim()
   local numOrd = #self._weights
   local numBasis = self._basis:numBasis()
   local numVal = qOut:numComponents()/numBasis

   -- sanity check: ensure number of variables, components and basis functions are consistent
   assert(qOut:numComponents() % numBasis == 0, "ProjectOnBasis:advance: Incompatible input field")

   local dx = Lin.Vec(ndim) -- cell shape
   local xc = Lin.Vec(ndim) -- cell center
   local fv = Lin.Mat(numVal, numOrd) -- function values at ordinates
   local xmu = Lin.Vec(ndim) -- coordinate at ordinate

   local localExtRange = qOut:localExtRange()
   local indexer = qOut:genIndexer()   
   local fItr = qOut:get(1)

   -- loop, computing projections in each cell
   for idx in localExtRange:colMajorIter() do
      grid:setIndex(idx)
      -- get cell shape, cell center coordinates
      for d = 1, ndim do dx[d] = grid:dx(d) end
      grid:cellCenter(xc)

      -- precompute value of function at each ordinate
      for mu = 1, numOrd do
	 self._compToPhys(self._ordinates[mu], dx, xc, xmu) -- compute coordinate
	 local v = { self._evaluate(tCurr, xmu) } -- braces around function put return values in table
	 for i = 1, numVal do fv[i][mu] = v[i] end
      end

      local offset = 0
      qOut:fill(indexer(idx), fItr)
      -- update each component
      for n = 1, numVal do
	 -- update each expansion coefficient
	 for k = 1, numBasis do
	    fItr[offset+k] = 0.0
	    -- loop over quadrature points, accumulate contribution to expansion coefficient
	    for mu = 1, numOrd do
	       fItr[offset+k] = fItr[offset+k] + self._weights[mu]*self._basisAtOrdinates[mu][k]*fv[n][mu]
	    end
	 end
	 offset = offset+numBasis
      end
   end
   
   return true, GKYL_MAX_DOUBLE
end

-- Methods in updater
ProjectOnBasis.__index = { advance = Base.advanceFuncWrap(advance) }

return {
   ProjectOnBasis = ProjectOnBasis
}
