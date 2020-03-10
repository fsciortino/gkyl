local Lin = require "Lib.Linalg"
local function stencilFn(dx, a, b, val)
  local _M = {}

  _M[1] = Lin.Vec(20)
  _M[1][1] = -2304.0/(407.2935059634517*dx[3]^2*b-45.25483399593907*dx[3]^2*a)*val
  _M[1][2] = 0.0*val
  _M[1][3] = 0.0*val
  _M[1][4] = 3547.24005390106/(407.2935059634517*dx[3]^2*b-45.25483399593907*dx[3]^2*a)*val
  _M[1][5] = 0.0*val
  _M[1][6] = 0.0*val
  _M[1][7] = 0.0*val
  _M[1][8] = 0.0*val
  _M[1][9] = 0.0*val
  _M[1][10] = -3434.600413439677/(407.2935059634517*dx[3]^2*b-45.25483399593907*dx[3]^2*a)*val
  _M[1][11] = 0.0*val
  _M[1][12] = 0.0*val
  _M[1][13] = 0.0*val
  _M[1][14] = 0.0*val
  _M[1][15] = 0.0*val
  _M[1][16] = 0.0*val
  _M[1][17] = 0.0*val
  _M[1][18] = 0.0*val
  _M[1][19] = 0.0*val
  _M[1][20] = 0.0*val
  _M[2] = Lin.Mat(20,20)
  _M[2][1][1] = -(1.0*(2160.0*b-1632.0*a))/(576.0*dx[3]^2*b-64.0*dx[3]^2*a)
  _M[2][1][2] = 0.0
  _M[2][1][3] = 0.0
  _M[2][1][4] = -(1.0*(5487.136958378202*b+1967.609717398245*a))/(1152.0*dx[3]^2*b-128.0*dx[3]^2*a)
  _M[2][1][5] = 0.0
  _M[2][1][6] = 0.0
  _M[2][1][7] = 0.0
  _M[2][1][8] = 0.0
  _M[2][1][9] = 0.0
  _M[2][1][10] = -(1.0*(3863.925465119637*b-6681.371116769372*a))/(1440.0*dx[3]^2*b-160.0*dx[3]^2*a)
  _M[2][1][11] = 0.0
  _M[2][1][12] = 0.0
  _M[2][1][13] = 0.0
  _M[2][1][14] = 0.0
  _M[2][1][15] = 0.0
  _M[2][1][16] = 0.0
  _M[2][1][17] = 0.0
  _M[2][1][18] = 0.0
  _M[2][1][19] = 0.0
  _M[2][1][20] = 0.0
  _M[2][2][1] = 0.0
  _M[2][2][2] = -(1.0*(135.0*b-102.0*a))/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[2][2][3] = 0.0
  _M[2][2][4] = 0.0
  _M[2][2][5] = 0.0
  _M[2][2][6] = -(1.0*(342.9460598986376*b+122.9756073373903*a))/(72.0*dx[3]^2*b-8.0*dx[3]^2*a)
  _M[2][2][7] = 0.0
  _M[2][2][8] = 0.0
  _M[2][2][9] = 0.0
  _M[2][2][10] = 0.0
  _M[2][2][11] = 0.0
  _M[2][2][12] = 0.0
  _M[2][2][13] = 0.0
  _M[2][2][14] = 0.0
  _M[2][2][15] = 0.0
  _M[2][2][16] = -(1.0*(965.9813662799089*b-1670.342779192343*a))/(360.0*dx[3]^2*b-40.0*dx[3]^2*a)
  _M[2][2][17] = 0.0
  _M[2][2][18] = 0.0
  _M[2][2][19] = 0.0
  _M[2][2][20] = 0.0
  _M[2][3][1] = 0.0
  _M[2][3][2] = 0.0
  _M[2][3][3] = -(1.0*(135.0*b-102.0*a))/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[2][3][4] = 0.0
  _M[2][3][5] = 0.0
  _M[2][3][6] = 0.0
  _M[2][3][7] = -(1.0*(342.9460598986376*b+122.9756073373903*a))/(72.0*dx[3]^2*b-8.0*dx[3]^2*a)
  _M[2][3][8] = 0.0
  _M[2][3][9] = 0.0
  _M[2][3][10] = 0.0
  _M[2][3][11] = 0.0
  _M[2][3][12] = 0.0
  _M[2][3][13] = 0.0
  _M[2][3][14] = 0.0
  _M[2][3][15] = 0.0
  _M[2][3][16] = 0.0
  _M[2][3][17] = -(1.0*(965.9813662799089*b-1670.342779192343*a))/(360.0*dx[3]^2*b-40.0*dx[3]^2*a)
  _M[2][3][18] = 0.0
  _M[2][3][19] = 0.0
  _M[2][3][20] = 0.0
  _M[2][4][1] = -(1.0*(2327.876285372571*b+1884.471278634938*a))/(576.0*dx[3]^2*b-64.0*dx[3]^2*a)
  _M[2][4][2] = 0.0
  _M[2][4][3] = 0.0
  _M[2][4][4] = -(1.0*(67104.0*b-23328.0*a))/(4608.0*dx[3]^2*b-512.0*dx[3]^2*a)
  _M[2][4][5] = 0.0
  _M[2][4][6] = 0.0
  _M[2][4][7] = 0.0
  _M[2][4][8] = 0.0
  _M[2][4][9] = 0.0
  _M[2][4][10] = -(1.0*(157026.2367886335*a-27141.86729022158*b))/(23040.0*dx[3]^2*b-2560.0*dx[3]^2*a)
  _M[2][4][11] = 0.0
  _M[2][4][12] = 0.0
  _M[2][4][13] = 0.0
  _M[2][4][14] = 0.0
  _M[2][4][15] = 0.0
  _M[2][4][16] = 0.0
  _M[2][4][17] = 0.0
  _M[2][4][18] = 0.0
  _M[2][4][19] = 0.0
  _M[2][4][20] = 0.0
  _M[2][5][1] = 0.0
  _M[2][5][2] = 0.0
  _M[2][5][3] = 0.0
  _M[2][5][4] = 0.0
  _M[2][5][5] = -(1.0*(135.0*b-102.0*a))/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[2][5][6] = 0.0
  _M[2][5][7] = 0.0
  _M[2][5][8] = 0.0
  _M[2][5][9] = 0.0
  _M[2][5][10] = 0.0
  _M[2][5][11] = -(1.0*(342.9460598986376*b+122.9756073373903*a))/(72.0*dx[3]^2*b-8.0*dx[3]^2*a)
  _M[2][5][12] = 0.0
  _M[2][5][13] = 0.0
  _M[2][5][14] = 0.0
  _M[2][5][15] = 0.0
  _M[2][5][16] = 0.0
  _M[2][5][17] = 0.0
  _M[2][5][18] = 0.0
  _M[2][5][19] = 0.0
  _M[2][5][20] = -(1.0*(965.9813662799093*b-1670.342779192343*a))/(360.0*dx[3]^2*b-40.0*dx[3]^2*a)
  _M[2][6][1] = 0.0
  _M[2][6][2] = -(1.0*(36.37306695894642*b+29.44486372867091*a))/(9.0*dx[3]^2*b-1.0*dx[3]^2*a)
  _M[2][6][3] = 0.0
  _M[2][6][4] = 0.0
  _M[2][6][5] = 0.0
  _M[2][6][6] = -(1.0*(2097.0*b-729.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[2][6][7] = 0.0
  _M[2][6][8] = 0.0
  _M[2][6][9] = 0.0
  _M[2][6][10] = 0.0
  _M[2][6][11] = 0.0
  _M[2][6][12] = 0.0
  _M[2][6][13] = 0.0
  _M[2][6][14] = 0.0
  _M[2][6][15] = 0.0
  _M[2][6][16] = (848.1833528194243*b-4907.069899644797*a)/(720.0*dx[3]^2*b-80.0*dx[3]^2*a)
  _M[2][6][17] = 0.0
  _M[2][6][18] = 0.0
  _M[2][6][19] = 0.0
  _M[2][6][20] = 0.0
  _M[2][7][1] = 0.0
  _M[2][7][2] = 0.0
  _M[2][7][3] = -(1.0*(36.37306695894642*b+29.44486372867091*a))/(9.0*dx[3]^2*b-1.0*dx[3]^2*a)
  _M[2][7][4] = 0.0
  _M[2][7][5] = 0.0
  _M[2][7][6] = 0.0
  _M[2][7][7] = -(1.0*(2097.0*b-729.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[2][7][8] = 0.0
  _M[2][7][9] = 0.0
  _M[2][7][10] = 0.0
  _M[2][7][11] = 0.0
  _M[2][7][12] = 0.0
  _M[2][7][13] = 0.0
  _M[2][7][14] = 0.0
  _M[2][7][15] = 0.0
  _M[2][7][16] = 0.0
  _M[2][7][17] = (848.1833528194243*b-4907.069899644797*a)/(720.0*dx[3]^2*b-80.0*dx[3]^2*a)
  _M[2][7][18] = 0.0
  _M[2][7][19] = 0.0
  _M[2][7][20] = 0.0
  _M[2][8][1] = 0.0
  _M[2][8][2] = 0.0
  _M[2][8][3] = 0.0
  _M[2][8][4] = 0.0
  _M[2][8][5] = 0.0
  _M[2][8][6] = 0.0
  _M[2][8][7] = 0.0
  _M[2][8][8] = -(1.0*(135.0*b-102.0*a))/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[2][8][9] = 0.0
  _M[2][8][10] = 0.0
  _M[2][8][11] = 0.0
  _M[2][8][12] = 0.0
  _M[2][8][13] = 0.0
  _M[2][8][14] = -(1.0*(1714.730299493189*b+614.8780366869514*a))/(360.0*dx[3]^2*b-40.0*dx[3]^2*a)
  _M[2][8][15] = 0.0
  _M[2][8][16] = 0.0
  _M[2][8][17] = 0.0
  _M[2][8][18] = 0.0
  _M[2][8][19] = 0.0
  _M[2][8][20] = 0.0
  _M[2][9][1] = 0.0
  _M[2][9][2] = 0.0
  _M[2][9][3] = 0.0
  _M[2][9][4] = 0.0
  _M[2][9][5] = 0.0
  _M[2][9][6] = 0.0
  _M[2][9][7] = 0.0
  _M[2][9][8] = 0.0
  _M[2][9][9] = -(1.0*(135.0*b-102.0*a))/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[2][9][10] = 0.0
  _M[2][9][11] = 0.0
  _M[2][9][12] = 0.0
  _M[2][9][13] = 0.0
  _M[2][9][14] = 0.0
  _M[2][9][15] = -(1.0*(1714.730299493189*b+614.8780366869514*a))/(360.0*dx[3]^2*b-40.0*dx[3]^2*a)
  _M[2][9][16] = 0.0
  _M[2][9][17] = 0.0
  _M[2][9][18] = 0.0
  _M[2][9][19] = 0.0
  _M[2][9][20] = 0.0
  _M[2][10][1] = -(1.0*(2575.950310079758*b-2361.287784239778*a))/(576.0*dx[3]^2*b-64.0*dx[3]^2*a)
  _M[2][10][2] = 0.0
  _M[2][10][3] = 0.0
  _M[2][10][4] = ((-23423.80327786245*b)-12765.35310909965*a)/(4608.0*dx[3]^2*b-512.0*dx[3]^2*a)
  _M[2][10][5] = 0.0
  _M[2][10][6] = 0.0
  _M[2][10][7] = 0.0
  _M[2][10][8] = 0.0
  _M[2][10][9] = 0.0
  _M[2][10][10] = -(1.0*(192096.0*b-51168.0*a))/(4608.0*dx[3]^2*b-512.0*dx[3]^2*a)
  _M[2][10][11] = 0.0
  _M[2][10][12] = 0.0
  _M[2][10][13] = 0.0
  _M[2][10][14] = 0.0
  _M[2][10][15] = 0.0
  _M[2][10][16] = 0.0
  _M[2][10][17] = 0.0
  _M[2][10][18] = 0.0
  _M[2][10][19] = 0.0
  _M[2][10][20] = 0.0
  _M[2][11][1] = 0.0
  _M[2][11][2] = 0.0
  _M[2][11][3] = 0.0
  _M[2][11][4] = 0.0
  _M[2][11][5] = -(1.0*(36.37306695894642*b+29.44486372867091*a))/(9.0*dx[3]^2*b-1.0*dx[3]^2*a)
  _M[2][11][6] = 0.0
  _M[2][11][7] = 0.0
  _M[2][11][8] = 0.0
  _M[2][11][9] = 0.0
  _M[2][11][10] = 0.0
  _M[2][11][11] = -(1.0*(2097.0*b-729.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[2][11][12] = 0.0
  _M[2][11][13] = 0.0
  _M[2][11][14] = 0.0
  _M[2][11][15] = 0.0
  _M[2][11][16] = 0.0
  _M[2][11][17] = 0.0
  _M[2][11][18] = 0.0
  _M[2][11][19] = 0.0
  _M[2][11][20] = (848.1833528194243*b-4907.069899644797*a)/(720.0*dx[3]^2*b-80.0*dx[3]^2*a)
  _M[2][12][1] = 0.0
  _M[2][12][2] = 0.0
  _M[2][12][3] = 0.0
  _M[2][12][4] = 0.0
  _M[2][12][5] = 0.0
  _M[2][12][6] = 0.0
  _M[2][12][7] = 0.0
  _M[2][12][8] = 0.0
  _M[2][12][9] = 0.0
  _M[2][12][10] = 0.0
  _M[2][12][11] = 0.0
  _M[2][12][12] = -(1.0*(135.0*b-102.0*a))/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[2][12][13] = 0.0
  _M[2][12][14] = 0.0
  _M[2][12][15] = 0.0
  _M[2][12][16] = 0.0
  _M[2][12][17] = 0.0
  _M[2][12][18] = -(1.0*(1714.730299493189*b+614.8780366869514*a))/(360.0*dx[3]^2*b-40.0*dx[3]^2*a)
  _M[2][12][19] = 0.0
  _M[2][12][20] = 0.0
  _M[2][13][1] = 0.0
  _M[2][13][2] = 0.0
  _M[2][13][3] = 0.0
  _M[2][13][4] = 0.0
  _M[2][13][5] = 0.0
  _M[2][13][6] = 0.0
  _M[2][13][7] = 0.0
  _M[2][13][8] = 0.0
  _M[2][13][9] = 0.0
  _M[2][13][10] = 0.0
  _M[2][13][11] = 0.0
  _M[2][13][12] = 0.0
  _M[2][13][13] = -(1.0*(135.0*b-102.0*a))/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[2][13][14] = 0.0
  _M[2][13][15] = 0.0
  _M[2][13][16] = 0.0
  _M[2][13][17] = 0.0
  _M[2][13][18] = 0.0
  _M[2][13][19] = -(1.0*(1714.730299493189*b+614.8780366869514*a))/(360.0*dx[3]^2*b-40.0*dx[3]^2*a)
  _M[2][13][20] = 0.0
  _M[2][14][1] = 0.0
  _M[2][14][2] = 0.0
  _M[2][14][3] = 0.0
  _M[2][14][4] = 0.0
  _M[2][14][5] = 0.0
  _M[2][14][6] = 0.0
  _M[2][14][7] = 0.0
  _M[2][14][8] = -(1.0*(181.8653347947321*b+147.2243186433546*a))/(45.0*dx[3]^2*b-5.0*dx[3]^2*a)
  _M[2][14][9] = 0.0
  _M[2][14][10] = 0.0
  _M[2][14][11] = 0.0
  _M[2][14][12] = 0.0
  _M[2][14][13] = 0.0
  _M[2][14][14] = -(1.0*(2097.0*b-729.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[2][14][15] = 0.0
  _M[2][14][16] = 0.0
  _M[2][14][17] = 0.0
  _M[2][14][18] = 0.0
  _M[2][14][19] = 0.0
  _M[2][14][20] = 0.0
  _M[2][15][1] = 0.0
  _M[2][15][2] = 0.0
  _M[2][15][3] = 0.0
  _M[2][15][4] = 0.0
  _M[2][15][5] = 0.0
  _M[2][15][6] = 0.0
  _M[2][15][7] = 0.0
  _M[2][15][8] = 0.0
  _M[2][15][9] = -(1.0*(181.8653347947321*b+147.2243186433546*a))/(45.0*dx[3]^2*b-5.0*dx[3]^2*a)
  _M[2][15][10] = 0.0
  _M[2][15][11] = 0.0
  _M[2][15][12] = 0.0
  _M[2][15][13] = 0.0
  _M[2][15][14] = 0.0
  _M[2][15][15] = -(1.0*(2097.0*b-729.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[2][15][16] = 0.0
  _M[2][15][17] = 0.0
  _M[2][15][18] = 0.0
  _M[2][15][19] = 0.0
  _M[2][15][20] = 0.0
  _M[2][16][1] = 0.0
  _M[2][16][2] = -(1.0*(160.9968943799848*b-147.5804865149861*a))/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[2][16][3] = 0.0
  _M[2][16][4] = 0.0
  _M[2][16][5] = 0.0
  _M[2][16][6] = -(1.0*(731.9938524332018*b+398.9172846593639*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[2][16][7] = 0.0
  _M[2][16][8] = 0.0
  _M[2][16][9] = 0.0
  _M[2][16][10] = 0.0
  _M[2][16][11] = 0.0
  _M[2][16][12] = 0.0
  _M[2][16][13] = 0.0
  _M[2][16][14] = 0.0
  _M[2][16][15] = 0.0
  _M[2][16][16] = -(1.0*(6003.0*b-1599.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[2][16][17] = 0.0
  _M[2][16][18] = 0.0
  _M[2][16][19] = 0.0
  _M[2][16][20] = 0.0
  _M[2][17][1] = 0.0
  _M[2][17][2] = 0.0
  _M[2][17][3] = -(1.0*(160.9968943799848*b-147.5804865149861*a))/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[2][17][4] = 0.0
  _M[2][17][5] = 0.0
  _M[2][17][6] = 0.0
  _M[2][17][7] = -(1.0*(731.9938524332018*b+398.9172846593639*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[2][17][8] = 0.0
  _M[2][17][9] = 0.0
  _M[2][17][10] = 0.0
  _M[2][17][11] = 0.0
  _M[2][17][12] = 0.0
  _M[2][17][13] = 0.0
  _M[2][17][14] = 0.0
  _M[2][17][15] = 0.0
  _M[2][17][16] = 0.0
  _M[2][17][17] = -(1.0*(6003.0*b-1599.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[2][17][18] = 0.0
  _M[2][17][19] = 0.0
  _M[2][17][20] = 0.0
  _M[2][18][1] = 0.0
  _M[2][18][2] = 0.0
  _M[2][18][3] = 0.0
  _M[2][18][4] = 0.0
  _M[2][18][5] = 0.0
  _M[2][18][6] = 0.0
  _M[2][18][7] = 0.0
  _M[2][18][8] = 0.0
  _M[2][18][9] = 0.0
  _M[2][18][10] = 0.0
  _M[2][18][11] = 0.0
  _M[2][18][12] = -(1.0*(181.8653347947321*b+147.2243186433546*a))/(45.0*dx[3]^2*b-5.0*dx[3]^2*a)
  _M[2][18][13] = 0.0
  _M[2][18][14] = 0.0
  _M[2][18][15] = 0.0
  _M[2][18][16] = 0.0
  _M[2][18][17] = 0.0
  _M[2][18][18] = -(1.0*(2097.0*b-729.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[2][18][19] = 0.0
  _M[2][18][20] = 0.0
  _M[2][19][1] = 0.0
  _M[2][19][2] = 0.0
  _M[2][19][3] = 0.0
  _M[2][19][4] = 0.0
  _M[2][19][5] = 0.0
  _M[2][19][6] = 0.0
  _M[2][19][7] = 0.0
  _M[2][19][8] = 0.0
  _M[2][19][9] = 0.0
  _M[2][19][10] = 0.0
  _M[2][19][11] = 0.0
  _M[2][19][12] = 0.0
  _M[2][19][13] = -(1.0*(181.8653347947321*b+147.2243186433546*a))/(45.0*dx[3]^2*b-5.0*dx[3]^2*a)
  _M[2][19][14] = 0.0
  _M[2][19][15] = 0.0
  _M[2][19][16] = 0.0
  _M[2][19][17] = 0.0
  _M[2][19][18] = 0.0
  _M[2][19][19] = -(1.0*(2097.0*b-729.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[2][19][20] = 0.0
  _M[2][20][1] = 0.0
  _M[2][20][2] = 0.0
  _M[2][20][3] = 0.0
  _M[2][20][4] = 0.0
  _M[2][20][5] = -(1.0*(160.9968943799849*b-147.5804865149861*a))/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[2][20][6] = 0.0
  _M[2][20][7] = 0.0
  _M[2][20][8] = 0.0
  _M[2][20][9] = 0.0
  _M[2][20][10] = 0.0
  _M[2][20][11] = ((-731.9938524332015*b)-398.9172846593639*a)/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[2][20][12] = 0.0
  _M[2][20][13] = 0.0
  _M[2][20][14] = 0.0
  _M[2][20][15] = 0.0
  _M[2][20][16] = 0.0
  _M[2][20][17] = 0.0
  _M[2][20][18] = 0.0
  _M[2][20][19] = 0.0
  _M[2][20][20] = -(1.0*(6003.0*b-1599.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[3] = Lin.Mat(20,20)
  _M[3][1][1] = (2160.0*b-480.0*a)/(576.0*dx[3]^2*b-64.0*dx[3]^2*a)
  _M[3][1][2] = 0.0
  _M[3][1][3] = 0.0
  _M[3][1][4] = -(1.0*(5487.136958378202*b-1302.502207291796*a))/(1152.0*dx[3]^2*b-128.0*dx[3]^2*a)
  _M[3][1][5] = 0.0
  _M[3][1][6] = 0.0
  _M[3][1][7] = 0.0
  _M[3][1][8] = 0.0
  _M[3][1][9] = 0.0
  _M[3][1][10] = (3863.925465119637*b-1046.479813469902*a)/(1440.0*dx[3]^2*b-160.0*dx[3]^2*a)
  _M[3][1][11] = 0.0
  _M[3][1][12] = 0.0
  _M[3][1][13] = 0.0
  _M[3][1][14] = 0.0
  _M[3][1][15] = 0.0
  _M[3][1][16] = 0.0
  _M[3][1][17] = 0.0
  _M[3][1][18] = 0.0
  _M[3][1][19] = 0.0
  _M[3][1][20] = 0.0
  _M[3][2][1] = 0.0
  _M[3][2][2] = (135.0*b-30.0*a)/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[3][2][3] = 0.0
  _M[3][2][4] = 0.0
  _M[3][2][5] = 0.0
  _M[3][2][6] = -(1.0*(342.9460598986376*b-81.40638795573723*a))/(72.0*dx[3]^2*b-8.0*dx[3]^2*a)
  _M[3][2][7] = 0.0
  _M[3][2][8] = 0.0
  _M[3][2][9] = 0.0
  _M[3][2][10] = 0.0
  _M[3][2][11] = 0.0
  _M[3][2][12] = 0.0
  _M[3][2][13] = 0.0
  _M[3][2][14] = 0.0
  _M[3][2][15] = 0.0
  _M[3][2][16] = (965.9813662799089*b-261.6199533674754*a)/(360.0*dx[3]^2*b-40.0*dx[3]^2*a)
  _M[3][2][17] = 0.0
  _M[3][2][18] = 0.0
  _M[3][2][19] = 0.0
  _M[3][2][20] = 0.0
  _M[3][3][1] = 0.0
  _M[3][3][2] = 0.0
  _M[3][3][3] = (135.0*b-30.0*a)/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[3][3][4] = 0.0
  _M[3][3][5] = 0.0
  _M[3][3][6] = 0.0
  _M[3][3][7] = -(1.0*(342.9460598986376*b-81.40638795573723*a))/(72.0*dx[3]^2*b-8.0*dx[3]^2*a)
  _M[3][3][8] = 0.0
  _M[3][3][9] = 0.0
  _M[3][3][10] = 0.0
  _M[3][3][11] = 0.0
  _M[3][3][12] = 0.0
  _M[3][3][13] = 0.0
  _M[3][3][14] = 0.0
  _M[3][3][15] = 0.0
  _M[3][3][16] = 0.0
  _M[3][3][17] = (965.9813662799089*b-261.6199533674754*a)/(360.0*dx[3]^2*b-40.0*dx[3]^2*a)
  _M[3][3][18] = 0.0
  _M[3][3][19] = 0.0
  _M[3][3][20] = 0.0
  _M[3][4][1] = (2327.876285372571*b+110.8512516844081*a)/(576.0*dx[3]^2*b-64.0*dx[3]^2*a)
  _M[3][4][2] = 0.0
  _M[3][4][3] = 0.0
  _M[3][4][4] = -(1.0*(21984.0*b+1824.0*a))/(4608.0*dx[3]^2*b-512.0*dx[3]^2*a)
  _M[3][4][5] = 0.0
  _M[3][4][6] = 0.0
  _M[3][4][7] = 0.0
  _M[3][4][8] = 0.0
  _M[3][4][9] = 0.0
  _M[3][4][10] = (50937.47696931994*b+9543.030965055075*a)/(23040.0*dx[3]^2*b-2560.0*dx[3]^2*a)
  _M[3][4][11] = 0.0
  _M[3][4][12] = 0.0
  _M[3][4][13] = 0.0
  _M[3][4][14] = 0.0
  _M[3][4][15] = 0.0
  _M[3][4][16] = 0.0
  _M[3][4][17] = 0.0
  _M[3][4][18] = 0.0
  _M[3][4][19] = 0.0
  _M[3][4][20] = 0.0
  _M[3][5][1] = 0.0
  _M[3][5][2] = 0.0
  _M[3][5][3] = 0.0
  _M[3][5][4] = 0.0
  _M[3][5][5] = (135.0*b-30.0*a)/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[3][5][6] = 0.0
  _M[3][5][7] = 0.0
  _M[3][5][8] = 0.0
  _M[3][5][9] = 0.0
  _M[3][5][10] = 0.0
  _M[3][5][11] = -(1.0*(342.9460598986376*b-81.40638795573723*a))/(72.0*dx[3]^2*b-8.0*dx[3]^2*a)
  _M[3][5][12] = 0.0
  _M[3][5][13] = 0.0
  _M[3][5][14] = 0.0
  _M[3][5][15] = 0.0
  _M[3][5][16] = 0.0
  _M[3][5][17] = 0.0
  _M[3][5][18] = 0.0
  _M[3][5][19] = 0.0
  _M[3][5][20] = (965.9813662799093*b-261.6199533674754*a)/(360.0*dx[3]^2*b-40.0*dx[3]^2*a)
  _M[3][6][1] = 0.0
  _M[3][6][2] = (36.37306695894642*b+1.732050807568877*a)/(9.0*dx[3]^2*b-1.0*dx[3]^2*a)
  _M[3][6][3] = 0.0
  _M[3][6][4] = 0.0
  _M[3][6][5] = 0.0
  _M[3][6][6] = -(1.0*(687.0*b+57.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[3][6][7] = 0.0
  _M[3][6][8] = 0.0
  _M[3][6][9] = 0.0
  _M[3][6][10] = 0.0
  _M[3][6][11] = 0.0
  _M[3][6][12] = 0.0
  _M[3][6][13] = 0.0
  _M[3][6][14] = 0.0
  _M[3][6][15] = 0.0
  _M[3][6][16] = (1591.796155291248*b+298.2197176579711*a)/(720.0*dx[3]^2*b-80.0*dx[3]^2*a)
  _M[3][6][17] = 0.0
  _M[3][6][18] = 0.0
  _M[3][6][19] = 0.0
  _M[3][6][20] = 0.0
  _M[3][7][1] = 0.0
  _M[3][7][2] = 0.0
  _M[3][7][3] = (36.37306695894642*b+1.732050807568877*a)/(9.0*dx[3]^2*b-1.0*dx[3]^2*a)
  _M[3][7][4] = 0.0
  _M[3][7][5] = 0.0
  _M[3][7][6] = 0.0
  _M[3][7][7] = -(1.0*(687.0*b+57.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[3][7][8] = 0.0
  _M[3][7][9] = 0.0
  _M[3][7][10] = 0.0
  _M[3][7][11] = 0.0
  _M[3][7][12] = 0.0
  _M[3][7][13] = 0.0
  _M[3][7][14] = 0.0
  _M[3][7][15] = 0.0
  _M[3][7][16] = 0.0
  _M[3][7][17] = (1591.796155291248*b+298.2197176579711*a)/(720.0*dx[3]^2*b-80.0*dx[3]^2*a)
  _M[3][7][18] = 0.0
  _M[3][7][19] = 0.0
  _M[3][7][20] = 0.0
  _M[3][8][1] = 0.0
  _M[3][8][2] = 0.0
  _M[3][8][3] = 0.0
  _M[3][8][4] = 0.0
  _M[3][8][5] = 0.0
  _M[3][8][6] = 0.0
  _M[3][8][7] = 0.0
  _M[3][8][8] = (135.0*b-30.0*a)/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[3][8][9] = 0.0
  _M[3][8][10] = 0.0
  _M[3][8][11] = 0.0
  _M[3][8][12] = 0.0
  _M[3][8][13] = 0.0
  _M[3][8][14] = -(1.0*(1714.730299493189*b-407.0319397786862*a))/(360.0*dx[3]^2*b-40.0*dx[3]^2*a)
  _M[3][8][15] = 0.0
  _M[3][8][16] = 0.0
  _M[3][8][17] = 0.0
  _M[3][8][18] = 0.0
  _M[3][8][19] = 0.0
  _M[3][8][20] = 0.0
  _M[3][9][1] = 0.0
  _M[3][9][2] = 0.0
  _M[3][9][3] = 0.0
  _M[3][9][4] = 0.0
  _M[3][9][5] = 0.0
  _M[3][9][6] = 0.0
  _M[3][9][7] = 0.0
  _M[3][9][8] = 0.0
  _M[3][9][9] = (135.0*b-30.0*a)/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[3][9][10] = 0.0
  _M[3][9][11] = 0.0
  _M[3][9][12] = 0.0
  _M[3][9][13] = 0.0
  _M[3][9][14] = 0.0
  _M[3][9][15] = -(1.0*(1714.730299493189*b-407.0319397786862*a))/(360.0*dx[3]^2*b-40.0*dx[3]^2*a)
  _M[3][9][16] = 0.0
  _M[3][9][17] = 0.0
  _M[3][9][18] = 0.0
  _M[3][9][19] = 0.0
  _M[3][9][20] = 0.0
  _M[3][10][1] = (2575.950310079758*b-643.9875775199395*a)/(576.0*dx[3]^2*b-64.0*dx[3]^2*a)
  _M[3][10][2] = 0.0
  _M[3][10][3] = 0.0
  _M[3][10][4] = -(1.0*(24167.41608033428*b-6816.450689325055*a))/(4608.0*dx[3]^2*b-512.0*dx[3]^2*a)
  _M[3][10][5] = 0.0
  _M[3][10][6] = 0.0
  _M[3][10][7] = 0.0
  _M[3][10][8] = 0.0
  _M[3][10][9] = 0.0
  _M[3][10][10] = -(1.0*(4128.0*a-10656.0*b))/(4608.0*dx[3]^2*b-512.0*dx[3]^2*a)
  _M[3][10][11] = 0.0
  _M[3][10][12] = 0.0
  _M[3][10][13] = 0.0
  _M[3][10][14] = 0.0
  _M[3][10][15] = 0.0
  _M[3][10][16] = 0.0
  _M[3][10][17] = 0.0
  _M[3][10][18] = 0.0
  _M[3][10][19] = 0.0
  _M[3][10][20] = 0.0
  _M[3][11][1] = 0.0
  _M[3][11][2] = 0.0
  _M[3][11][3] = 0.0
  _M[3][11][4] = 0.0
  _M[3][11][5] = (36.37306695894642*b+1.732050807568877*a)/(9.0*dx[3]^2*b-1.0*dx[3]^2*a)
  _M[3][11][6] = 0.0
  _M[3][11][7] = 0.0
  _M[3][11][8] = 0.0
  _M[3][11][9] = 0.0
  _M[3][11][10] = 0.0
  _M[3][11][11] = -(1.0*(687.0*b+57.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[3][11][12] = 0.0
  _M[3][11][13] = 0.0
  _M[3][11][14] = 0.0
  _M[3][11][15] = 0.0
  _M[3][11][16] = 0.0
  _M[3][11][17] = 0.0
  _M[3][11][18] = 0.0
  _M[3][11][19] = 0.0
  _M[3][11][20] = (1591.796155291248*b+298.2197176579711*a)/(720.0*dx[3]^2*b-80.0*dx[3]^2*a)
  _M[3][12][1] = 0.0
  _M[3][12][2] = 0.0
  _M[3][12][3] = 0.0
  _M[3][12][4] = 0.0
  _M[3][12][5] = 0.0
  _M[3][12][6] = 0.0
  _M[3][12][7] = 0.0
  _M[3][12][8] = 0.0
  _M[3][12][9] = 0.0
  _M[3][12][10] = 0.0
  _M[3][12][11] = 0.0
  _M[3][12][12] = (135.0*b-30.0*a)/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[3][12][13] = 0.0
  _M[3][12][14] = 0.0
  _M[3][12][15] = 0.0
  _M[3][12][16] = 0.0
  _M[3][12][17] = 0.0
  _M[3][12][18] = -(1.0*(1714.730299493189*b-407.0319397786862*a))/(360.0*dx[3]^2*b-40.0*dx[3]^2*a)
  _M[3][12][19] = 0.0
  _M[3][12][20] = 0.0
  _M[3][13][1] = 0.0
  _M[3][13][2] = 0.0
  _M[3][13][3] = 0.0
  _M[3][13][4] = 0.0
  _M[3][13][5] = 0.0
  _M[3][13][6] = 0.0
  _M[3][13][7] = 0.0
  _M[3][13][8] = 0.0
  _M[3][13][9] = 0.0
  _M[3][13][10] = 0.0
  _M[3][13][11] = 0.0
  _M[3][13][12] = 0.0
  _M[3][13][13] = (135.0*b-30.0*a)/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[3][13][14] = 0.0
  _M[3][13][15] = 0.0
  _M[3][13][16] = 0.0
  _M[3][13][17] = 0.0
  _M[3][13][18] = 0.0
  _M[3][13][19] = -(1.0*(1714.730299493189*b-407.0319397786862*a))/(360.0*dx[3]^2*b-40.0*dx[3]^2*a)
  _M[3][13][20] = 0.0
  _M[3][14][1] = 0.0
  _M[3][14][2] = 0.0
  _M[3][14][3] = 0.0
  _M[3][14][4] = 0.0
  _M[3][14][5] = 0.0
  _M[3][14][6] = 0.0
  _M[3][14][7] = 0.0
  _M[3][14][8] = -(1.0*((-727.4613391789285*b)-34.64101615137755*a))/(180.0*dx[3]^2*b-20.0*dx[3]^2*a)
  _M[3][14][9] = 0.0
  _M[3][14][10] = 0.0
  _M[3][14][11] = 0.0
  _M[3][14][12] = 0.0
  _M[3][14][13] = 0.0
  _M[3][14][14] = -(1.0*(687.0*b+57.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[3][14][15] = 0.0
  _M[3][14][16] = 0.0
  _M[3][14][17] = 0.0
  _M[3][14][18] = 0.0
  _M[3][14][19] = 0.0
  _M[3][14][20] = 0.0
  _M[3][15][1] = 0.0
  _M[3][15][2] = 0.0
  _M[3][15][3] = 0.0
  _M[3][15][4] = 0.0
  _M[3][15][5] = 0.0
  _M[3][15][6] = 0.0
  _M[3][15][7] = 0.0
  _M[3][15][8] = 0.0
  _M[3][15][9] = -(1.0*((-727.4613391789285*b)-34.64101615137755*a))/(180.0*dx[3]^2*b-20.0*dx[3]^2*a)
  _M[3][15][10] = 0.0
  _M[3][15][11] = 0.0
  _M[3][15][12] = 0.0
  _M[3][15][13] = 0.0
  _M[3][15][14] = 0.0
  _M[3][15][15] = -(1.0*(687.0*b+57.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[3][15][16] = 0.0
  _M[3][15][17] = 0.0
  _M[3][15][18] = 0.0
  _M[3][15][19] = 0.0
  _M[3][15][20] = 0.0
  _M[3][16][1] = 0.0
  _M[3][16][2] = (160.9968943799848*b-40.24922359499621*a)/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[3][16][3] = 0.0
  _M[3][16][4] = 0.0
  _M[3][16][5] = 0.0
  _M[3][16][6] = -(1.0*(755.2317525104464*b-213.0140840414079*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[3][16][7] = 0.0
  _M[3][16][8] = 0.0
  _M[3][16][9] = 0.0
  _M[3][16][10] = 0.0
  _M[3][16][11] = 0.0
  _M[3][16][12] = 0.0
  _M[3][16][13] = 0.0
  _M[3][16][14] = 0.0
  _M[3][16][15] = 0.0
  _M[3][16][16] = (333.0*b-129.0*a)/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[3][16][17] = 0.0
  _M[3][16][18] = 0.0
  _M[3][16][19] = 0.0
  _M[3][16][20] = 0.0
  _M[3][17][1] = 0.0
  _M[3][17][2] = 0.0
  _M[3][17][3] = (160.9968943799848*b-40.24922359499621*a)/(36.0*dx[3]^2*b-4.0*dx[3]^2*a)
  _M[3][17][4] = 0.0
  _M[3][17][5] = 0.0
  _M[3][17][6] = 0.0
  _M[3][17][7] = -(1.0*(755.2317525104464*b-213.0140840414079*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[3][17][8] = 0.0
  _M[3][17][9] = 0.0
  _M[3][17][10] = 0.0
  _M[3][17][11] = 0.0
  _M[3][17][12] = 0.0
  _M[3][17][13] = 0.0
  _M[3][17][14] = 0.0
  _M[3][17][15] = 0.0
  _M[3][17][16] = 0.0
  _M[3][17][17] = (333.0*b-129.0*a)/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[3][17][18] = 0.0
  _M[3][17][19] = 0.0
  _M[3][17][20] = 0.0
  _M[3][18][1] = 0.0
  _M[3][18][2] = 0.0
  _M[3][18][3] = 0.0
  _M[3][18][4] = 0.0
  _M[3][18][5] = 0.0
  _M[3][18][6] = 0.0
  _M[3][18][7] = 0.0
  _M[3][18][8] = 0.0
  _M[3][18][9] = 0.0
  _M[3][18][10] = 0.0
  _M[3][18][11] = 0.0
  _M[3][18][12] = -(1.0*((-727.4613391789285*b)-34.64101615137755*a))/(180.0*dx[3]^2*b-20.0*dx[3]^2*a)
  _M[3][18][13] = 0.0
  _M[3][18][14] = 0.0
  _M[3][18][15] = 0.0
  _M[3][18][16] = 0.0
  _M[3][18][17] = 0.0
  _M[3][18][18] = -(1.0*(687.0*b+57.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[3][18][19] = 0.0
  _M[3][18][20] = 0.0
  _M[3][19][1] = 0.0
  _M[3][19][2] = 0.0
  _M[3][19][3] = 0.0
  _M[3][19][4] = 0.0
  _M[3][19][5] = 0.0
  _M[3][19][6] = 0.0
  _M[3][19][7] = 0.0
  _M[3][19][8] = 0.0
  _M[3][19][9] = 0.0
  _M[3][19][10] = 0.0
  _M[3][19][11] = 0.0
  _M[3][19][12] = 0.0
  _M[3][19][13] = -(1.0*((-727.4613391789285*b)-34.64101615137755*a))/(180.0*dx[3]^2*b-20.0*dx[3]^2*a)
  _M[3][19][14] = 0.0
  _M[3][19][15] = 0.0
  _M[3][19][16] = 0.0
  _M[3][19][17] = 0.0
  _M[3][19][18] = 0.0
  _M[3][19][19] = -(1.0*(687.0*b+57.0*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[3][19][20] = 0.0
  _M[3][20][1] = 0.0
  _M[3][20][2] = 0.0
  _M[3][20][3] = 0.0
  _M[3][20][4] = 0.0
  _M[3][20][5] = (80.49844718999243*b-20.12461179749811*a)/(18.0*dx[3]^2*b-2.0*dx[3]^2*a)
  _M[3][20][6] = 0.0
  _M[3][20][7] = 0.0
  _M[3][20][8] = 0.0
  _M[3][20][9] = 0.0
  _M[3][20][10] = 0.0
  _M[3][20][11] = -(1.0*(755.2317525104463*b-213.014084041408*a))/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  _M[3][20][12] = 0.0
  _M[3][20][13] = 0.0
  _M[3][20][14] = 0.0
  _M[3][20][15] = 0.0
  _M[3][20][16] = 0.0
  _M[3][20][17] = 0.0
  _M[3][20][18] = 0.0
  _M[3][20][19] = 0.0
  _M[3][20][20] = (333.0*b-129.0*a)/(144.0*dx[3]^2*b-16.0*dx[3]^2*a)
  return(_M)
end

return(stencilFn)