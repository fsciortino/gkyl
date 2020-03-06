-- Gkyl ------------------------------------------------------------------------
--
--
local Plasma = require("App.PlasmaOnCartGrid").Gyrokinetic

-- This test relaxes a rectangular/square IC and a bump in tail IC.
-- Maxwellian's for comparison with each are also created.

polyOrder = 1
nu        = 0.01                            -- Collision frequency.
n0        = 1.0                             -- Density.
u0        = 0.0                             -- Flow speed.
B0        = 1.0                             -- Background magnetic field
mass      = 1.0                             -- Define mass globally
vMin      = -2.0                            -- Min velocity in grid.
vMax      =  2.0                            -- Max velocity in grid.
muMin     = 0.0 
muMax     = mass*(vMax^2)/(2*B0)
Nx        = {2}                             -- Number of cells in configuration space.
Nv        = {32,32}                         -- Number of cells in velocity space.
-- The next three are for p1, 2x32x16, rectangular IC.
nMr  = 1.06066017                           -- Density of Maxwellian and rectangle. 
uMr  = 0.0                                  -- Flow speed of Maxwellian and rectangle. 
vt2Mr = 0.03323541                          -- Thermal speed of Maxwellian and rectangle.
-- Large bump on tail of Maxwellian:
vt   = math.sqrt(1.0/12.0)                  -- Thermal speed of Maxwellian in bump.
ab   = math.sqrt(0.1)                       -- Amplitude of bump.
ub   = 4*math.sqrt(1/12.0)                    -- Location of bump.
sb   = 0.12                                 -- Softening factor to avoid divergence.
vtb  = 1.0/math.sqrt(2.0)                   -- Thermal speed of Maxwellian in bump.
-- The next three are for p2, 2x32x16, bump in tail IC. 
nMb  = 1.58655301                           -- Density of Maxwellian and bump. 
uMb  = 0.57435311                           -- Flow speed of Maxwellian and bump. 
vt2Mb = 0.33711232                          -- Thermal speed of Maxwellian and bump.

-- Top hat function without drift (u=0).
local function topHat(x, vpar, mu, n, u, vth)
   local Pi     = math.pi
   local fOut   = 0.0
   local v0     = math.sqrt(3.0*(vth^2)/2.0)
   if (math.abs(vpar) <= v0) and (mu <= v0^2*mass/(2*B0)) then
      fOut = (1.0/(2.0*Pi)/v0^3)
   else
      fOut = 0.0
   end
   return fOut
end

-- Maxwellian with a Maxwellian bump in the tail.
local function bumpMaxwell(x,vpar,mu,n,u,vth,bA,bU,bS,bVth)
   local Pi   = math.pi
   local vSq  = ((vpar-u)^2+2*B0*math.abs(mu)/mass)/((math.sqrt(2.0)*vth)^2)
   local vbSq = ((vpar-u)^2+2*B0*math.abs(mu)/mass)/((math.sqrt(2.0)*bVth)^2)

   return (n/math.sqrt(2.0*Pi*(vth^2))^(3/2))*math.exp(-vSq)
      +(n/math.sqrt(2.0*Pi*(bVth^2))^(3/2))*math.exp(-vbSq)*(bA^2)/((vpar-bU)^2+bS^2)
end

plasmaApp = Plasma.App {
   logToFile = false,
   
   tEnd        = 10,           -- End time.
   nFrame      = 1,             -- Number of frames to write.
   lower       = {0.0},         -- Configuration space lower coordinate.
   upper       = {1.0},         -- Configuration space upper coordinate.
   cells       = {Nx[1]},       -- Configuration space cells.
   basis       = "serendipity", -- One of "serendipity" or "maximal-order".
   polyOrder   = polyOrder,     -- Polynomial order.
   timeStepper = "rk3",         -- One of "rk2", "rk3" or "rk3s4".
   
   -- Decomposition for configuration space.
   decompCuts = {1},            -- Cuts in each configuration direction.
   useShared  = false,          -- If to use shared memory.

   -- Boundary conditions for configuration space.
   periodicDirs = {1},          -- Periodic directions.

   -- Neutral species with a rectangular/square IC.
   square = Plasma.Species {
      charge = 1.0, mass = mass,
      -- Velocity space grid.
      lower      = {vMin,muMin},
      upper      = {vMax,muMax},
      cells      = Nv,
      -- Initial conditions.
      init = function (t, xn)
	 local x, vpar, mu = xn[1], xn[2], xn[3]

         return topHat(x, vpar, mu, n0, u0, vt)
      end,
      --bcx = { Plasma.Species.bcOpen,
      --        Plasma.Species.bcOpen },
      -- Evolve species?
      evolve              = true,    -- Evolve this species.
      evolveCollisionless = false,   -- Don't evolve collisionless terms for this test.
--      positivity          = true,    -- Enforce positivity.
--      positivityDiffuse   = true,    -- Add intra-cell diffusion to reduce negativity errors.
      -- Diagnostic moments.
      diagnosticMoments = { "GkM0", "GkM1", "GkM2" },
      -- Collisions.
      coll = Plasma.LBOCollisions {
         collideWith = {'square'},
         frequencies = {nu},
      },
   },

   -- Neutral species with a bump in the tail.
   bump = Plasma.Species {
      charge = 1.0, mass = mass,
      -- Velocity space grid.
      lower      = {vMin,muMin},
      upper      = {vMax,muMax},
      cells      = Nv,
      -- Initial conditions.
      init = function (t, xn)
   	 local x, vpar, mu = xn[1], xn[2], xn[3]

         return bumpMaxwell(x,vpar,mu,n0,u0,vt,ab,ub,sb,vtb)
      end,
      --bcx = { Plasma.Species.bcOpen,
      --        Plasma.Species.bcOpen },
      -- Evolve species?
      evolve              = true,    -- Evolve this species.
      evolveCollisionless = false,   -- Don't evolve collisionless terms for this test.
--      positivity          = true,    -- Enforce positivity.
--      positivityDiffuse   = true,    -- Add intra-cell diffusion to reduce negativity errors.
      -- Diagnostic moments.
      diagnosticMoments = { "GkM0", "GkM1", "GkM2" },
      -- Collisions.
      coll = Plasma.LBOCollisions {
         collideWith = {'bump'},
         frequencies = {nu},
      },
   },

   -- Field solver.
   field = Plasma.Field {
      evolve      = false, -- Evolve fields?
      externalPhi = function (t, xn) return 0.0 end,
      kperp2      = 0.0 
   },
   
   -- Magnetic geometry. 
   funcField = Plasma.Geometry {
      -- Background magnetic field.
      bmag = function (t, xn)
         local x = xn[1]
         return B0
      end,

      -- Geometry is not time-dependent.
      evolve = false,
   },

}
-- Run application.
plasmaApp:run()
