local Lin = require "Lib.Linalg"
local function stencilFn(dx, a, b, val)
  local _M = {}

  _M[1] = Lin.Vec(3)
  _M[1][1] = -1152.0/(407.2935059634517*dx[1]^2*b-45.25483399593907*dx[1]^2*a)*val
  _M[1][2] = 1773.62002695053/(407.2935059634517*dx[1]^2*b-45.25483399593907*dx[1]^2*a)*val
  _M[1][3] = -1717.300206719839/(407.2935059634517*dx[1]^2*b-45.25483399593907*dx[1]^2*a)*val
  _M[2] = Lin.Mat(3,3)
  _M[2][1][1] = -(1.0*(2160.0*b-1632.0*a))/(576.0*dx[1]^2*b-64.0*dx[1]^2*a)
  _M[2][1][2] = -(1.0*(5487.136958378202*b+1967.609717398245*a))/(1152.0*dx[1]^2*b-128.0*dx[1]^2*a)
  _M[2][1][3] = -(1.0*(3863.925465119637*b-6681.371116769372*a))/(1440.0*dx[1]^2*b-160.0*dx[1]^2*a)
  _M[2][2][1] = -(1.0*(2327.876285372571*b+1884.471278634938*a))/(576.0*dx[1]^2*b-64.0*dx[1]^2*a)
  _M[2][2][2] = -(1.0*(67104.0*b-23328.0*a))/(4608.0*dx[1]^2*b-512.0*dx[1]^2*a)
  _M[2][2][3] = -(1.0*(157026.2367886335*a-27141.86729022158*b))/(23040.0*dx[1]^2*b-2560.0*dx[1]^2*a)
  _M[2][3][1] = -(1.0*(2575.950310079758*b-2361.287784239778*a))/(576.0*dx[1]^2*b-64.0*dx[1]^2*a)
  _M[2][3][2] = ((-23423.80327786245*b)-12765.35310909965*a)/(4608.0*dx[1]^2*b-512.0*dx[1]^2*a)
  _M[2][3][3] = -(1.0*(192096.0*b-51168.0*a))/(4608.0*dx[1]^2*b-512.0*dx[1]^2*a)
  _M[3] = Lin.Mat(3,3)
  _M[3][1][1] = (2160.0*b-480.0*a)/(576.0*dx[1]^2*b-64.0*dx[1]^2*a)
  _M[3][1][2] = -(1.0*(5487.136958378202*b-1302.502207291796*a))/(1152.0*dx[1]^2*b-128.0*dx[1]^2*a)
  _M[3][1][3] = (3863.925465119637*b-1046.479813469902*a)/(1440.0*dx[1]^2*b-160.0*dx[1]^2*a)
  _M[3][2][1] = (2327.876285372571*b+110.8512516844081*a)/(576.0*dx[1]^2*b-64.0*dx[1]^2*a)
  _M[3][2][2] = -(1.0*(21984.0*b+1824.0*a))/(4608.0*dx[1]^2*b-512.0*dx[1]^2*a)
  _M[3][2][3] = (50937.47696931994*b+9543.030965055075*a)/(23040.0*dx[1]^2*b-2560.0*dx[1]^2*a)
  _M[3][3][1] = (2575.950310079758*b-643.9875775199395*a)/(576.0*dx[1]^2*b-64.0*dx[1]^2*a)
  _M[3][3][2] = -(1.0*(24167.41608033428*b-6816.450689325055*a))/(4608.0*dx[1]^2*b-512.0*dx[1]^2*a)
  _M[3][3][3] = -(1.0*(4128.0*a-10656.0*b))/(4608.0*dx[1]^2*b-512.0*dx[1]^2*a)
  return(_M)
end

return(stencilFn)