local Lin = require "Lib.Linalg"
local function stencilFn(dx, a, b, val)
  local _M = {}

  _M[1] = Lin.Vec(8)
  _M[1][1] = -36.0/(9.0*dx[1]^2*b-1.0*dx[1]^2*a)*val
  _M[1][2] = 55.42562584220407/(9.0*dx[1]^2*b-1.0*dx[1]^2*a)*val
  _M[1][3] = 0.0*val
  _M[1][4] = 0.0*val
  _M[1][5] = -53.66563145999496/(9.0*dx[1]^2*b-1.0*dx[1]^2*a)*val
  _M[1][6] = 0.0*val
  _M[1][7] = 0.0*val
  _M[1][8] = 0.0*val
  _M[2] = Lin.Mat(8,8)
  _M[2][1][1] = -(1.0*(135.0*b-102.0*a))/(36.0*dx[1]^2*b-4.0*dx[1]^2*a)
  _M[2][1][2] = -(1.0*(342.9460598986376*b+122.9756073373903*a))/(72.0*dx[1]^2*b-8.0*dx[1]^2*a)
  _M[2][1][3] = 0.0
  _M[2][1][4] = 0.0
  _M[2][1][5] = -(1.0*(965.9813662799093*b-1670.342779192343*a))/(360.0*dx[1]^2*b-40.0*dx[1]^2*a)
  _M[2][1][6] = 0.0
  _M[2][1][7] = 0.0
  _M[2][1][8] = 0.0
  _M[2][2][1] = -(1.0*(36.37306695894642*b+29.44486372867091*a))/(9.0*dx[1]^2*b-1.0*dx[1]^2*a)
  _M[2][2][2] = -(1.0*(2097.0*b-729.0*a))/(144.0*dx[1]^2*b-16.0*dx[1]^2*a)
  _M[2][2][3] = 0.0
  _M[2][2][4] = 0.0
  _M[2][2][5] = (848.1833528194243*b-4907.069899644797*a)/(720.0*dx[1]^2*b-80.0*dx[1]^2*a)
  _M[2][2][6] = 0.0
  _M[2][2][7] = 0.0
  _M[2][2][8] = 0.0
  _M[2][3][1] = 0.0
  _M[2][3][2] = 0.0
  _M[2][3][3] = -(1.0*(135.0*b-102.0*a))/(36.0*dx[1]^2*b-4.0*dx[1]^2*a)
  _M[2][3][4] = -(1.0*(342.9460598986376*b+122.9756073373903*a))/(72.0*dx[1]^2*b-8.0*dx[1]^2*a)
  _M[2][3][5] = 0.0
  _M[2][3][6] = 0.0
  _M[2][3][7] = -(1.0*(965.9813662799089*b-1670.342779192343*a))/(360.0*dx[1]^2*b-40.0*dx[1]^2*a)
  _M[2][3][8] = 0.0
  _M[2][4][1] = 0.0
  _M[2][4][2] = 0.0
  _M[2][4][3] = -(1.0*(36.37306695894642*b+29.44486372867091*a))/(9.0*dx[1]^2*b-1.0*dx[1]^2*a)
  _M[2][4][4] = -(1.0*(2097.0*b-729.0*a))/(144.0*dx[1]^2*b-16.0*dx[1]^2*a)
  _M[2][4][5] = 0.0
  _M[2][4][6] = 0.0
  _M[2][4][7] = (848.1833528194243*b-4907.069899644797*a)/(720.0*dx[1]^2*b-80.0*dx[1]^2*a)
  _M[2][4][8] = 0.0
  _M[2][5][1] = -(1.0*(160.9968943799849*b-147.5804865149861*a))/(36.0*dx[1]^2*b-4.0*dx[1]^2*a)
  _M[2][5][2] = ((-731.9938524332015*b)-398.9172846593639*a)/(144.0*dx[1]^2*b-16.0*dx[1]^2*a)
  _M[2][5][3] = 0.0
  _M[2][5][4] = 0.0
  _M[2][5][5] = -(1.0*(6003.0*b-1599.0*a))/(144.0*dx[1]^2*b-16.0*dx[1]^2*a)
  _M[2][5][6] = 0.0
  _M[2][5][7] = 0.0
  _M[2][5][8] = 0.0
  _M[2][6][1] = 0.0
  _M[2][6][2] = 0.0
  _M[2][6][3] = 0.0
  _M[2][6][4] = 0.0
  _M[2][6][5] = 0.0
  _M[2][6][6] = -(1.0*(135.0*b-102.0*a))/(36.0*dx[1]^2*b-4.0*dx[1]^2*a)
  _M[2][6][7] = 0.0
  _M[2][6][8] = -(1.0*(1714.730299493189*b+614.8780366869514*a))/(360.0*dx[1]^2*b-40.0*dx[1]^2*a)
  _M[2][7][1] = 0.0
  _M[2][7][2] = 0.0
  _M[2][7][3] = -(1.0*(160.9968943799848*b-147.5804865149861*a))/(36.0*dx[1]^2*b-4.0*dx[1]^2*a)
  _M[2][7][4] = -(1.0*(731.9938524332018*b+398.9172846593639*a))/(144.0*dx[1]^2*b-16.0*dx[1]^2*a)
  _M[2][7][5] = 0.0
  _M[2][7][6] = 0.0
  _M[2][7][7] = -(1.0*(6003.0*b-1599.0*a))/(144.0*dx[1]^2*b-16.0*dx[1]^2*a)
  _M[2][7][8] = 0.0
  _M[2][8][1] = 0.0
  _M[2][8][2] = 0.0
  _M[2][8][3] = 0.0
  _M[2][8][4] = 0.0
  _M[2][8][5] = 0.0
  _M[2][8][6] = -(1.0*(181.8653347947321*b+147.2243186433546*a))/(45.0*dx[1]^2*b-5.0*dx[1]^2*a)
  _M[2][8][7] = 0.0
  _M[2][8][8] = -(1.0*(2097.0*b-729.0*a))/(144.0*dx[1]^2*b-16.0*dx[1]^2*a)
  _M[3] = Lin.Mat(8,8)
  _M[3][1][1] = (135.0*b-30.0*a)/(36.0*dx[1]^2*b-4.0*dx[1]^2*a)
  _M[3][1][2] = -(1.0*(342.9460598986376*b-81.40638795573723*a))/(72.0*dx[1]^2*b-8.0*dx[1]^2*a)
  _M[3][1][3] = 0.0
  _M[3][1][4] = 0.0
  _M[3][1][5] = (965.9813662799093*b-261.6199533674754*a)/(360.0*dx[1]^2*b-40.0*dx[1]^2*a)
  _M[3][1][6] = 0.0
  _M[3][1][7] = 0.0
  _M[3][1][8] = 0.0
  _M[3][2][1] = (36.37306695894642*b+1.732050807568877*a)/(9.0*dx[1]^2*b-1.0*dx[1]^2*a)
  _M[3][2][2] = -(1.0*(687.0*b+57.0*a))/(144.0*dx[1]^2*b-16.0*dx[1]^2*a)
  _M[3][2][3] = 0.0
  _M[3][2][4] = 0.0
  _M[3][2][5] = (1591.796155291248*b+298.2197176579711*a)/(720.0*dx[1]^2*b-80.0*dx[1]^2*a)
  _M[3][2][6] = 0.0
  _M[3][2][7] = 0.0
  _M[3][2][8] = 0.0
  _M[3][3][1] = 0.0
  _M[3][3][2] = 0.0
  _M[3][3][3] = (135.0*b-30.0*a)/(36.0*dx[1]^2*b-4.0*dx[1]^2*a)
  _M[3][3][4] = -(1.0*(342.9460598986376*b-81.40638795573723*a))/(72.0*dx[1]^2*b-8.0*dx[1]^2*a)
  _M[3][3][5] = 0.0
  _M[3][3][6] = 0.0
  _M[3][3][7] = (965.9813662799089*b-261.6199533674754*a)/(360.0*dx[1]^2*b-40.0*dx[1]^2*a)
  _M[3][3][8] = 0.0
  _M[3][4][1] = 0.0
  _M[3][4][2] = 0.0
  _M[3][4][3] = (36.37306695894642*b+1.732050807568877*a)/(9.0*dx[1]^2*b-1.0*dx[1]^2*a)
  _M[3][4][4] = -(1.0*(687.0*b+57.0*a))/(144.0*dx[1]^2*b-16.0*dx[1]^2*a)
  _M[3][4][5] = 0.0
  _M[3][4][6] = 0.0
  _M[3][4][7] = (1591.796155291248*b+298.2197176579711*a)/(720.0*dx[1]^2*b-80.0*dx[1]^2*a)
  _M[3][4][8] = 0.0
  _M[3][5][1] = (80.49844718999243*b-20.12461179749811*a)/(18.0*dx[1]^2*b-2.0*dx[1]^2*a)
  _M[3][5][2] = -(1.0*(755.2317525104463*b-213.014084041408*a))/(144.0*dx[1]^2*b-16.0*dx[1]^2*a)
  _M[3][5][3] = 0.0
  _M[3][5][4] = 0.0
  _M[3][5][5] = (333.0*b-129.0*a)/(144.0*dx[1]^2*b-16.0*dx[1]^2*a)
  _M[3][5][6] = 0.0
  _M[3][5][7] = 0.0
  _M[3][5][8] = 0.0
  _M[3][6][1] = 0.0
  _M[3][6][2] = 0.0
  _M[3][6][3] = 0.0
  _M[3][6][4] = 0.0
  _M[3][6][5] = 0.0
  _M[3][6][6] = (135.0*b-30.0*a)/(36.0*dx[1]^2*b-4.0*dx[1]^2*a)
  _M[3][6][7] = 0.0
  _M[3][6][8] = -(1.0*(1714.730299493189*b-407.0319397786862*a))/(360.0*dx[1]^2*b-40.0*dx[1]^2*a)
  _M[3][7][1] = 0.0
  _M[3][7][2] = 0.0
  _M[3][7][3] = (160.9968943799848*b-40.24922359499621*a)/(36.0*dx[1]^2*b-4.0*dx[1]^2*a)
  _M[3][7][4] = -(1.0*(755.2317525104464*b-213.0140840414079*a))/(144.0*dx[1]^2*b-16.0*dx[1]^2*a)
  _M[3][7][5] = 0.0
  _M[3][7][6] = 0.0
  _M[3][7][7] = (333.0*b-129.0*a)/(144.0*dx[1]^2*b-16.0*dx[1]^2*a)
  _M[3][7][8] = 0.0
  _M[3][8][1] = 0.0
  _M[3][8][2] = 0.0
  _M[3][8][3] = 0.0
  _M[3][8][4] = 0.0
  _M[3][8][5] = 0.0
  _M[3][8][6] = -(1.0*((-727.4613391789285*b)-34.64101615137755*a))/(180.0*dx[1]^2*b-20.0*dx[1]^2*a)
  _M[3][8][7] = 0.0
  _M[3][8][8] = -(1.0*(687.0*b+57.0*a))/(144.0*dx[1]^2*b-16.0*dx[1]^2*a)
  return(_M)
end

return(stencilFn)