local Lin = require "Lib.Linalg"
local function stencilFn(dx)
  local _M = {}

  _M[1] = Lin.Mat(20,20)
  _M[1][1][1] = 3.75/dx[3]^2
  _M[1][1][2] = 0.0
  _M[1][1][3] = 0.0
  _M[1][1][4] = 4.763139720814412/dx[3]^2
  _M[1][1][5] = 0.0
  _M[1][1][6] = 0.0
  _M[1][1][7] = 0.0
  _M[1][1][8] = 0.0
  _M[1][1][9] = 0.0
  _M[1][1][10] = 2.683281572999748/dx[3]^2
  _M[1][1][11] = 0.0
  _M[1][1][12] = 0.0
  _M[1][1][13] = 0.0
  _M[1][1][14] = 0.0
  _M[1][1][15] = 0.0
  _M[1][1][16] = 0.0
  _M[1][1][17] = 0.0
  _M[1][1][18] = 0.0
  _M[1][1][19] = 0.0
  _M[1][1][20] = 0.0
  _M[1][2][1] = 0.0
  _M[1][2][2] = 3.75/dx[3]^2
  _M[1][2][3] = 0.0
  _M[1][2][4] = 0.0
  _M[1][2][5] = 0.0
  _M[1][2][6] = 4.763139720814412/dx[3]^2
  _M[1][2][7] = 0.0
  _M[1][2][8] = 0.0
  _M[1][2][9] = 0.0
  _M[1][2][10] = 0.0
  _M[1][2][11] = 0.0
  _M[1][2][12] = 0.0
  _M[1][2][13] = 0.0
  _M[1][2][14] = 0.0
  _M[1][2][15] = 0.0
  _M[1][2][16] = 2.683281572999748/dx[3]^2
  _M[1][2][17] = 0.0
  _M[1][2][18] = 0.0
  _M[1][2][19] = 0.0
  _M[1][2][20] = 0.0
  _M[1][3][1] = 0.0
  _M[1][3][2] = 0.0
  _M[1][3][3] = 3.75/dx[3]^2
  _M[1][3][4] = 0.0
  _M[1][3][5] = 0.0
  _M[1][3][6] = 0.0
  _M[1][3][7] = 4.763139720814412/dx[3]^2
  _M[1][3][8] = 0.0
  _M[1][3][9] = 0.0
  _M[1][3][10] = 0.0
  _M[1][3][11] = 0.0
  _M[1][3][12] = 0.0
  _M[1][3][13] = 0.0
  _M[1][3][14] = 0.0
  _M[1][3][15] = 0.0
  _M[1][3][16] = 0.0
  _M[1][3][17] = 2.683281572999748/dx[3]^2
  _M[1][3][18] = 0.0
  _M[1][3][19] = 0.0
  _M[1][3][20] = 0.0
  _M[1][4][1] = -4.763139720814412/dx[3]^2
  _M[1][4][2] = 0.0
  _M[1][4][3] = 0.0
  _M[1][4][4] = -5.8125/dx[3]^2
  _M[1][4][5] = 0.0
  _M[1][4][6] = 0.0
  _M[1][4][7] = 0.0
  _M[1][4][8] = 0.0
  _M[1][4][9] = 0.0
  _M[1][4][10] = -2.953149801483155/dx[3]^2
  _M[1][4][11] = 0.0
  _M[1][4][12] = 0.0
  _M[1][4][13] = 0.0
  _M[1][4][14] = 0.0
  _M[1][4][15] = 0.0
  _M[1][4][16] = 0.0
  _M[1][4][17] = 0.0
  _M[1][4][18] = 0.0
  _M[1][4][19] = 0.0
  _M[1][4][20] = 0.0
  _M[1][5][1] = 0.0
  _M[1][5][2] = 0.0
  _M[1][5][3] = 0.0
  _M[1][5][4] = 0.0
  _M[1][5][5] = 3.75/dx[3]^2
  _M[1][5][6] = 0.0
  _M[1][5][7] = 0.0
  _M[1][5][8] = 0.0
  _M[1][5][9] = 0.0
  _M[1][5][10] = 0.0
  _M[1][5][11] = 4.763139720814412/dx[3]^2
  _M[1][5][12] = 0.0
  _M[1][5][13] = 0.0
  _M[1][5][14] = 0.0
  _M[1][5][15] = 0.0
  _M[1][5][16] = 0.0
  _M[1][5][17] = 0.0
  _M[1][5][18] = 0.0
  _M[1][5][19] = 0.0
  _M[1][5][20] = 2.683281572999748/dx[3]^2
  _M[1][6][1] = 0.0
  _M[1][6][2] = -4.763139720814412/dx[3]^2
  _M[1][6][3] = 0.0
  _M[1][6][4] = 0.0
  _M[1][6][5] = 0.0
  _M[1][6][6] = -5.8125/dx[3]^2
  _M[1][6][7] = 0.0
  _M[1][6][8] = 0.0
  _M[1][6][9] = 0.0
  _M[1][6][10] = 0.0
  _M[1][6][11] = 0.0
  _M[1][6][12] = 0.0
  _M[1][6][13] = 0.0
  _M[1][6][14] = 0.0
  _M[1][6][15] = 0.0
  _M[1][6][16] = -2.953149801483155/dx[3]^2
  _M[1][6][17] = 0.0
  _M[1][6][18] = 0.0
  _M[1][6][19] = 0.0
  _M[1][6][20] = 0.0
  _M[1][7][1] = 0.0
  _M[1][7][2] = 0.0
  _M[1][7][3] = -4.763139720814412/dx[3]^2
  _M[1][7][4] = 0.0
  _M[1][7][5] = 0.0
  _M[1][7][6] = 0.0
  _M[1][7][7] = -5.8125/dx[3]^2
  _M[1][7][8] = 0.0
  _M[1][7][9] = 0.0
  _M[1][7][10] = 0.0
  _M[1][7][11] = 0.0
  _M[1][7][12] = 0.0
  _M[1][7][13] = 0.0
  _M[1][7][14] = 0.0
  _M[1][7][15] = 0.0
  _M[1][7][16] = 0.0
  _M[1][7][17] = -2.953149801483155/dx[3]^2
  _M[1][7][18] = 0.0
  _M[1][7][19] = 0.0
  _M[1][7][20] = 0.0
  _M[1][8][1] = 0.0
  _M[1][8][2] = 0.0
  _M[1][8][3] = 0.0
  _M[1][8][4] = 0.0
  _M[1][8][5] = 0.0
  _M[1][8][6] = 0.0
  _M[1][8][7] = 0.0
  _M[1][8][8] = 3.75/dx[3]^2
  _M[1][8][9] = 0.0
  _M[1][8][10] = 0.0
  _M[1][8][11] = 0.0
  _M[1][8][12] = 0.0
  _M[1][8][13] = 0.0
  _M[1][8][14] = 4.763139720814412/dx[3]^2
  _M[1][8][15] = 0.0
  _M[1][8][16] = 0.0
  _M[1][8][17] = 0.0
  _M[1][8][18] = 0.0
  _M[1][8][19] = 0.0
  _M[1][8][20] = 0.0
  _M[1][9][1] = 0.0
  _M[1][9][2] = 0.0
  _M[1][9][3] = 0.0
  _M[1][9][4] = 0.0
  _M[1][9][5] = 0.0
  _M[1][9][6] = 0.0
  _M[1][9][7] = 0.0
  _M[1][9][8] = 0.0
  _M[1][9][9] = 3.75/dx[3]^2
  _M[1][9][10] = 0.0
  _M[1][9][11] = 0.0
  _M[1][9][12] = 0.0
  _M[1][9][13] = 0.0
  _M[1][9][14] = 0.0
  _M[1][9][15] = 4.763139720814412/dx[3]^2
  _M[1][9][16] = 0.0
  _M[1][9][17] = 0.0
  _M[1][9][18] = 0.0
  _M[1][9][19] = 0.0
  _M[1][9][20] = 0.0
  _M[1][10][1] = 1.677050983124842/dx[3]^2
  _M[1][10][2] = 0.0
  _M[1][10][3] = 0.0
  _M[1][10][4] = 1.210307295689818/dx[3]^2
  _M[1][10][5] = 0.0
  _M[1][10][6] = 0.0
  _M[1][10][7] = 0.0
  _M[1][10][8] = 0.0
  _M[1][10][9] = 0.0
  _M[1][10][10] = -0.5625/dx[3]^2
  _M[1][10][11] = 0.0
  _M[1][10][12] = 0.0
  _M[1][10][13] = 0.0
  _M[1][10][14] = 0.0
  _M[1][10][15] = 0.0
  _M[1][10][16] = 0.0
  _M[1][10][17] = 0.0
  _M[1][10][18] = 0.0
  _M[1][10][19] = 0.0
  _M[1][10][20] = 0.0
  _M[1][11][1] = 0.0
  _M[1][11][2] = 0.0
  _M[1][11][3] = 0.0
  _M[1][11][4] = 0.0
  _M[1][11][5] = -4.763139720814412/dx[3]^2
  _M[1][11][6] = 0.0
  _M[1][11][7] = 0.0
  _M[1][11][8] = 0.0
  _M[1][11][9] = 0.0
  _M[1][11][10] = 0.0
  _M[1][11][11] = -5.8125/dx[3]^2
  _M[1][11][12] = 0.0
  _M[1][11][13] = 0.0
  _M[1][11][14] = 0.0
  _M[1][11][15] = 0.0
  _M[1][11][16] = 0.0
  _M[1][11][17] = 0.0
  _M[1][11][18] = 0.0
  _M[1][11][19] = 0.0
  _M[1][11][20] = -2.953149801483155/dx[3]^2
  _M[1][12][1] = 0.0
  _M[1][12][2] = 0.0
  _M[1][12][3] = 0.0
  _M[1][12][4] = 0.0
  _M[1][12][5] = 0.0
  _M[1][12][6] = 0.0
  _M[1][12][7] = 0.0
  _M[1][12][8] = 0.0
  _M[1][12][9] = 0.0
  _M[1][12][10] = 0.0
  _M[1][12][11] = 0.0
  _M[1][12][12] = 3.75/dx[3]^2
  _M[1][12][13] = 0.0
  _M[1][12][14] = 0.0
  _M[1][12][15] = 0.0
  _M[1][12][16] = 0.0
  _M[1][12][17] = 0.0
  _M[1][12][18] = 4.763139720814412/dx[3]^2
  _M[1][12][19] = 0.0
  _M[1][12][20] = 0.0
  _M[1][13][1] = 0.0
  _M[1][13][2] = 0.0
  _M[1][13][3] = 0.0
  _M[1][13][4] = 0.0
  _M[1][13][5] = 0.0
  _M[1][13][6] = 0.0
  _M[1][13][7] = 0.0
  _M[1][13][8] = 0.0
  _M[1][13][9] = 0.0
  _M[1][13][10] = 0.0
  _M[1][13][11] = 0.0
  _M[1][13][12] = 0.0
  _M[1][13][13] = 3.75/dx[3]^2
  _M[1][13][14] = 0.0
  _M[1][13][15] = 0.0
  _M[1][13][16] = 0.0
  _M[1][13][17] = 0.0
  _M[1][13][18] = 0.0
  _M[1][13][19] = 4.763139720814412/dx[3]^2
  _M[1][13][20] = 0.0
  _M[1][14][1] = 0.0
  _M[1][14][2] = 0.0
  _M[1][14][3] = 0.0
  _M[1][14][4] = 0.0
  _M[1][14][5] = 0.0
  _M[1][14][6] = 0.0
  _M[1][14][7] = 0.0
  _M[1][14][8] = -4.763139720814412/dx[3]^2
  _M[1][14][9] = 0.0
  _M[1][14][10] = 0.0
  _M[1][14][11] = 0.0
  _M[1][14][12] = 0.0
  _M[1][14][13] = 0.0
  _M[1][14][14] = -5.8125/dx[3]^2
  _M[1][14][15] = 0.0
  _M[1][14][16] = 0.0
  _M[1][14][17] = 0.0
  _M[1][14][18] = 0.0
  _M[1][14][19] = 0.0
  _M[1][14][20] = 0.0
  _M[1][15][1] = 0.0
  _M[1][15][2] = 0.0
  _M[1][15][3] = 0.0
  _M[1][15][4] = 0.0
  _M[1][15][5] = 0.0
  _M[1][15][6] = 0.0
  _M[1][15][7] = 0.0
  _M[1][15][8] = 0.0
  _M[1][15][9] = -4.763139720814412/dx[3]^2
  _M[1][15][10] = 0.0
  _M[1][15][11] = 0.0
  _M[1][15][12] = 0.0
  _M[1][15][13] = 0.0
  _M[1][15][14] = 0.0
  _M[1][15][15] = -5.8125/dx[3]^2
  _M[1][15][16] = 0.0
  _M[1][15][17] = 0.0
  _M[1][15][18] = 0.0
  _M[1][15][19] = 0.0
  _M[1][15][20] = 0.0
  _M[1][16][1] = 0.0
  _M[1][16][2] = 1.677050983124842/dx[3]^2
  _M[1][16][3] = 0.0
  _M[1][16][4] = 0.0
  _M[1][16][5] = 0.0
  _M[1][16][6] = 1.210307295689818/dx[3]^2
  _M[1][16][7] = 0.0
  _M[1][16][8] = 0.0
  _M[1][16][9] = 0.0
  _M[1][16][10] = 0.0
  _M[1][16][11] = 0.0
  _M[1][16][12] = 0.0
  _M[1][16][13] = 0.0
  _M[1][16][14] = 0.0
  _M[1][16][15] = 0.0
  _M[1][16][16] = -0.5625/dx[3]^2
  _M[1][16][17] = 0.0
  _M[1][16][18] = 0.0
  _M[1][16][19] = 0.0
  _M[1][16][20] = 0.0
  _M[1][17][1] = 0.0
  _M[1][17][2] = 0.0
  _M[1][17][3] = 1.677050983124842/dx[3]^2
  _M[1][17][4] = 0.0
  _M[1][17][5] = 0.0
  _M[1][17][6] = 0.0
  _M[1][17][7] = 1.210307295689818/dx[3]^2
  _M[1][17][8] = 0.0
  _M[1][17][9] = 0.0
  _M[1][17][10] = 0.0
  _M[1][17][11] = 0.0
  _M[1][17][12] = 0.0
  _M[1][17][13] = 0.0
  _M[1][17][14] = 0.0
  _M[1][17][15] = 0.0
  _M[1][17][16] = 0.0
  _M[1][17][17] = -0.5625/dx[3]^2
  _M[1][17][18] = 0.0
  _M[1][17][19] = 0.0
  _M[1][17][20] = 0.0
  _M[1][18][1] = 0.0
  _M[1][18][2] = 0.0
  _M[1][18][3] = 0.0
  _M[1][18][4] = 0.0
  _M[1][18][5] = 0.0
  _M[1][18][6] = 0.0
  _M[1][18][7] = 0.0
  _M[1][18][8] = 0.0
  _M[1][18][9] = 0.0
  _M[1][18][10] = 0.0
  _M[1][18][11] = 0.0
  _M[1][18][12] = -4.763139720814412/dx[3]^2
  _M[1][18][13] = 0.0
  _M[1][18][14] = 0.0
  _M[1][18][15] = 0.0
  _M[1][18][16] = 0.0
  _M[1][18][17] = 0.0
  _M[1][18][18] = -5.8125/dx[3]^2
  _M[1][18][19] = 0.0
  _M[1][18][20] = 0.0
  _M[1][19][1] = 0.0
  _M[1][19][2] = 0.0
  _M[1][19][3] = 0.0
  _M[1][19][4] = 0.0
  _M[1][19][5] = 0.0
  _M[1][19][6] = 0.0
  _M[1][19][7] = 0.0
  _M[1][19][8] = 0.0
  _M[1][19][9] = 0.0
  _M[1][19][10] = 0.0
  _M[1][19][11] = 0.0
  _M[1][19][12] = 0.0
  _M[1][19][13] = -4.763139720814412/dx[3]^2
  _M[1][19][14] = 0.0
  _M[1][19][15] = 0.0
  _M[1][19][16] = 0.0
  _M[1][19][17] = 0.0
  _M[1][19][18] = 0.0
  _M[1][19][19] = -5.8125/dx[3]^2
  _M[1][19][20] = 0.0
  _M[1][20][1] = 0.0
  _M[1][20][2] = 0.0
  _M[1][20][3] = 0.0
  _M[1][20][4] = 0.0
  _M[1][20][5] = 1.677050983124842/dx[3]^2
  _M[1][20][6] = 0.0
  _M[1][20][7] = 0.0
  _M[1][20][8] = 0.0
  _M[1][20][9] = 0.0
  _M[1][20][10] = 0.0
  _M[1][20][11] = 1.210307295689818/dx[3]^2
  _M[1][20][12] = 0.0
  _M[1][20][13] = 0.0
  _M[1][20][14] = 0.0
  _M[1][20][15] = 0.0
  _M[1][20][16] = 0.0
  _M[1][20][17] = 0.0
  _M[1][20][18] = 0.0
  _M[1][20][19] = 0.0
  _M[1][20][20] = -0.5625/dx[3]^2
  _M[2] = Lin.Mat(20,20)
  _M[2][1][1] = -7.5/dx[3]^2
  _M[2][1][2] = 0.0
  _M[2][1][3] = 0.0
  _M[2][1][4] = 0.0
  _M[2][1][5] = 0.0
  _M[2][1][6] = 0.0
  _M[2][1][7] = 0.0
  _M[2][1][8] = 0.0
  _M[2][1][9] = 0.0
  _M[2][1][10] = -5.366563145999495/dx[3]^2
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
  _M[2][2][2] = -7.5/dx[3]^2
  _M[2][2][3] = 0.0
  _M[2][2][4] = 0.0
  _M[2][2][5] = 0.0
  _M[2][2][6] = 0.0
  _M[2][2][7] = 0.0
  _M[2][2][8] = 0.0
  _M[2][2][9] = 0.0
  _M[2][2][10] = 0.0
  _M[2][2][11] = 0.0
  _M[2][2][12] = 0.0
  _M[2][2][13] = 0.0
  _M[2][2][14] = 0.0
  _M[2][2][15] = 0.0
  _M[2][2][16] = -5.366563145999495/dx[3]^2
  _M[2][2][17] = 0.0
  _M[2][2][18] = 0.0
  _M[2][2][19] = 0.0
  _M[2][2][20] = 0.0
  _M[2][3][1] = 0.0
  _M[2][3][2] = 0.0
  _M[2][3][3] = -7.5/dx[3]^2
  _M[2][3][4] = 0.0
  _M[2][3][5] = 0.0
  _M[2][3][6] = 0.0
  _M[2][3][7] = 0.0
  _M[2][3][8] = 0.0
  _M[2][3][9] = 0.0
  _M[2][3][10] = 0.0
  _M[2][3][11] = 0.0
  _M[2][3][12] = 0.0
  _M[2][3][13] = 0.0
  _M[2][3][14] = 0.0
  _M[2][3][15] = 0.0
  _M[2][3][16] = 0.0
  _M[2][3][17] = -5.366563145999495/dx[3]^2
  _M[2][3][18] = 0.0
  _M[2][3][19] = 0.0
  _M[2][3][20] = 0.0
  _M[2][4][1] = 0.0
  _M[2][4][2] = 0.0
  _M[2][4][3] = 0.0
  _M[2][4][4] = -21.375/dx[3]^2
  _M[2][4][5] = 0.0
  _M[2][4][6] = 0.0
  _M[2][4][7] = 0.0
  _M[2][4][8] = 0.0
  _M[2][4][9] = 0.0
  _M[2][4][10] = 0.0
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
  _M[2][5][5] = -7.5/dx[3]^2
  _M[2][5][6] = 0.0
  _M[2][5][7] = 0.0
  _M[2][5][8] = 0.0
  _M[2][5][9] = 0.0
  _M[2][5][10] = 0.0
  _M[2][5][11] = 0.0
  _M[2][5][12] = 0.0
  _M[2][5][13] = 0.0
  _M[2][5][14] = 0.0
  _M[2][5][15] = 0.0
  _M[2][5][16] = 0.0
  _M[2][5][17] = 0.0
  _M[2][5][18] = 0.0
  _M[2][5][19] = 0.0
  _M[2][5][20] = -5.366563145999495/dx[3]^2
  _M[2][6][1] = 0.0
  _M[2][6][2] = 0.0
  _M[2][6][3] = 0.0
  _M[2][6][4] = 0.0
  _M[2][6][5] = 0.0
  _M[2][6][6] = -21.375/dx[3]^2
  _M[2][6][7] = 0.0
  _M[2][6][8] = 0.0
  _M[2][6][9] = 0.0
  _M[2][6][10] = 0.0
  _M[2][6][11] = 0.0
  _M[2][6][12] = 0.0
  _M[2][6][13] = 0.0
  _M[2][6][14] = 0.0
  _M[2][6][15] = 0.0
  _M[2][6][16] = 0.0
  _M[2][6][17] = 0.0
  _M[2][6][18] = 0.0
  _M[2][6][19] = 0.0
  _M[2][6][20] = 0.0
  _M[2][7][1] = 0.0
  _M[2][7][2] = 0.0
  _M[2][7][3] = 0.0
  _M[2][7][4] = 0.0
  _M[2][7][5] = 0.0
  _M[2][7][6] = 0.0
  _M[2][7][7] = -21.375/dx[3]^2
  _M[2][7][8] = 0.0
  _M[2][7][9] = 0.0
  _M[2][7][10] = 0.0
  _M[2][7][11] = 0.0
  _M[2][7][12] = 0.0
  _M[2][7][13] = 0.0
  _M[2][7][14] = 0.0
  _M[2][7][15] = 0.0
  _M[2][7][16] = 0.0
  _M[2][7][17] = 0.0
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
  _M[2][8][8] = -7.5/dx[3]^2
  _M[2][8][9] = 0.0
  _M[2][8][10] = 0.0
  _M[2][8][11] = 0.0
  _M[2][8][12] = 0.0
  _M[2][8][13] = 0.0
  _M[2][8][14] = 0.0
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
  _M[2][9][9] = -7.5/dx[3]^2
  _M[2][9][10] = 0.0
  _M[2][9][11] = 0.0
  _M[2][9][12] = 0.0
  _M[2][9][13] = 0.0
  _M[2][9][14] = 0.0
  _M[2][9][15] = 0.0
  _M[2][9][16] = 0.0
  _M[2][9][17] = 0.0
  _M[2][9][18] = 0.0
  _M[2][9][19] = 0.0
  _M[2][9][20] = 0.0
  _M[2][10][1] = -3.354101966249685/dx[3]^2
  _M[2][10][2] = 0.0
  _M[2][10][3] = 0.0
  _M[2][10][4] = 0.0
  _M[2][10][5] = 0.0
  _M[2][10][6] = 0.0
  _M[2][10][7] = 0.0
  _M[2][10][8] = 0.0
  _M[2][10][9] = 0.0
  _M[2][10][10] = -25.125/dx[3]^2
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
  _M[2][11][5] = 0.0
  _M[2][11][6] = 0.0
  _M[2][11][7] = 0.0
  _M[2][11][8] = 0.0
  _M[2][11][9] = 0.0
  _M[2][11][10] = 0.0
  _M[2][11][11] = -21.375/dx[3]^2
  _M[2][11][12] = 0.0
  _M[2][11][13] = 0.0
  _M[2][11][14] = 0.0
  _M[2][11][15] = 0.0
  _M[2][11][16] = 0.0
  _M[2][11][17] = 0.0
  _M[2][11][18] = 0.0
  _M[2][11][19] = 0.0
  _M[2][11][20] = 0.0
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
  _M[2][12][12] = -7.5/dx[3]^2
  _M[2][12][13] = 0.0
  _M[2][12][14] = 0.0
  _M[2][12][15] = 0.0
  _M[2][12][16] = 0.0
  _M[2][12][17] = 0.0
  _M[2][12][18] = 0.0
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
  _M[2][13][13] = -7.5/dx[3]^2
  _M[2][13][14] = 0.0
  _M[2][13][15] = 0.0
  _M[2][13][16] = 0.0
  _M[2][13][17] = 0.0
  _M[2][13][18] = 0.0
  _M[2][13][19] = 0.0
  _M[2][13][20] = 0.0
  _M[2][14][1] = 0.0
  _M[2][14][2] = 0.0
  _M[2][14][3] = 0.0
  _M[2][14][4] = 0.0
  _M[2][14][5] = 0.0
  _M[2][14][6] = 0.0
  _M[2][14][7] = 0.0
  _M[2][14][8] = 0.0
  _M[2][14][9] = 0.0
  _M[2][14][10] = 0.0
  _M[2][14][11] = 0.0
  _M[2][14][12] = 0.0
  _M[2][14][13] = 0.0
  _M[2][14][14] = -21.375/dx[3]^2
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
  _M[2][15][9] = 0.0
  _M[2][15][10] = 0.0
  _M[2][15][11] = 0.0
  _M[2][15][12] = 0.0
  _M[2][15][13] = 0.0
  _M[2][15][14] = 0.0
  _M[2][15][15] = -21.375/dx[3]^2
  _M[2][15][16] = 0.0
  _M[2][15][17] = 0.0
  _M[2][15][18] = 0.0
  _M[2][15][19] = 0.0
  _M[2][15][20] = 0.0
  _M[2][16][1] = 0.0
  _M[2][16][2] = -3.354101966249684/dx[3]^2
  _M[2][16][3] = 0.0
  _M[2][16][4] = 0.0
  _M[2][16][5] = 0.0
  _M[2][16][6] = 0.0
  _M[2][16][7] = 0.0
  _M[2][16][8] = 0.0
  _M[2][16][9] = 0.0
  _M[2][16][10] = 0.0
  _M[2][16][11] = 0.0
  _M[2][16][12] = 0.0
  _M[2][16][13] = 0.0
  _M[2][16][14] = 0.0
  _M[2][16][15] = 0.0
  _M[2][16][16] = -25.125/dx[3]^2
  _M[2][16][17] = 0.0
  _M[2][16][18] = 0.0
  _M[2][16][19] = 0.0
  _M[2][16][20] = 0.0
  _M[2][17][1] = 0.0
  _M[2][17][2] = 0.0
  _M[2][17][3] = -3.354101966249684/dx[3]^2
  _M[2][17][4] = 0.0
  _M[2][17][5] = 0.0
  _M[2][17][6] = 0.0
  _M[2][17][7] = 0.0
  _M[2][17][8] = 0.0
  _M[2][17][9] = 0.0
  _M[2][17][10] = 0.0
  _M[2][17][11] = 0.0
  _M[2][17][12] = 0.0
  _M[2][17][13] = 0.0
  _M[2][17][14] = 0.0
  _M[2][17][15] = 0.0
  _M[2][17][16] = 0.0
  _M[2][17][17] = -25.125/dx[3]^2
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
  _M[2][18][12] = 0.0
  _M[2][18][13] = 0.0
  _M[2][18][14] = 0.0
  _M[2][18][15] = 0.0
  _M[2][18][16] = 0.0
  _M[2][18][17] = 0.0
  _M[2][18][18] = -21.375/dx[3]^2
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
  _M[2][19][13] = 0.0
  _M[2][19][14] = 0.0
  _M[2][19][15] = 0.0
  _M[2][19][16] = 0.0
  _M[2][19][17] = 0.0
  _M[2][19][18] = 0.0
  _M[2][19][19] = -21.375/dx[3]^2
  _M[2][19][20] = 0.0
  _M[2][20][1] = 0.0
  _M[2][20][2] = 0.0
  _M[2][20][3] = 0.0
  _M[2][20][4] = 0.0
  _M[2][20][5] = -3.354101966249685/dx[3]^2
  _M[2][20][6] = 0.0
  _M[2][20][7] = 0.0
  _M[2][20][8] = 0.0
  _M[2][20][9] = 0.0
  _M[2][20][10] = 0.0
  _M[2][20][11] = 0.0
  _M[2][20][12] = 0.0
  _M[2][20][13] = 0.0
  _M[2][20][14] = 0.0
  _M[2][20][15] = 0.0
  _M[2][20][16] = 0.0
  _M[2][20][17] = 0.0
  _M[2][20][18] = 0.0
  _M[2][20][19] = 0.0
  _M[2][20][20] = -25.125/dx[3]^2
  _M[3] = Lin.Mat(20,20)
  _M[3][1][1] = 3.75/dx[3]^2
  _M[3][1][2] = 0.0
  _M[3][1][3] = 0.0
  _M[3][1][4] = -4.763139720814412/dx[3]^2
  _M[3][1][5] = 0.0
  _M[3][1][6] = 0.0
  _M[3][1][7] = 0.0
  _M[3][1][8] = 0.0
  _M[3][1][9] = 0.0
  _M[3][1][10] = 2.683281572999748/dx[3]^2
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
  _M[3][2][2] = 3.75/dx[3]^2
  _M[3][2][3] = 0.0
  _M[3][2][4] = 0.0
  _M[3][2][5] = 0.0
  _M[3][2][6] = -4.763139720814412/dx[3]^2
  _M[3][2][7] = 0.0
  _M[3][2][8] = 0.0
  _M[3][2][9] = 0.0
  _M[3][2][10] = 0.0
  _M[3][2][11] = 0.0
  _M[3][2][12] = 0.0
  _M[3][2][13] = 0.0
  _M[3][2][14] = 0.0
  _M[3][2][15] = 0.0
  _M[3][2][16] = 2.683281572999748/dx[3]^2
  _M[3][2][17] = 0.0
  _M[3][2][18] = 0.0
  _M[3][2][19] = 0.0
  _M[3][2][20] = 0.0
  _M[3][3][1] = 0.0
  _M[3][3][2] = 0.0
  _M[3][3][3] = 3.75/dx[3]^2
  _M[3][3][4] = 0.0
  _M[3][3][5] = 0.0
  _M[3][3][6] = 0.0
  _M[3][3][7] = -4.763139720814412/dx[3]^2
  _M[3][3][8] = 0.0
  _M[3][3][9] = 0.0
  _M[3][3][10] = 0.0
  _M[3][3][11] = 0.0
  _M[3][3][12] = 0.0
  _M[3][3][13] = 0.0
  _M[3][3][14] = 0.0
  _M[3][3][15] = 0.0
  _M[3][3][16] = 0.0
  _M[3][3][17] = 2.683281572999748/dx[3]^2
  _M[3][3][18] = 0.0
  _M[3][3][19] = 0.0
  _M[3][3][20] = 0.0
  _M[3][4][1] = 4.763139720814412/dx[3]^2
  _M[3][4][2] = 0.0
  _M[3][4][3] = 0.0
  _M[3][4][4] = -5.8125/dx[3]^2
  _M[3][4][5] = 0.0
  _M[3][4][6] = 0.0
  _M[3][4][7] = 0.0
  _M[3][4][8] = 0.0
  _M[3][4][9] = 0.0
  _M[3][4][10] = 2.953149801483155/dx[3]^2
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
  _M[3][5][5] = 3.75/dx[3]^2
  _M[3][5][6] = 0.0
  _M[3][5][7] = 0.0
  _M[3][5][8] = 0.0
  _M[3][5][9] = 0.0
  _M[3][5][10] = 0.0
  _M[3][5][11] = -4.763139720814412/dx[3]^2
  _M[3][5][12] = 0.0
  _M[3][5][13] = 0.0
  _M[3][5][14] = 0.0
  _M[3][5][15] = 0.0
  _M[3][5][16] = 0.0
  _M[3][5][17] = 0.0
  _M[3][5][18] = 0.0
  _M[3][5][19] = 0.0
  _M[3][5][20] = 2.683281572999748/dx[3]^2
  _M[3][6][1] = 0.0
  _M[3][6][2] = 4.763139720814412/dx[3]^2
  _M[3][6][3] = 0.0
  _M[3][6][4] = 0.0
  _M[3][6][5] = 0.0
  _M[3][6][6] = -5.8125/dx[3]^2
  _M[3][6][7] = 0.0
  _M[3][6][8] = 0.0
  _M[3][6][9] = 0.0
  _M[3][6][10] = 0.0
  _M[3][6][11] = 0.0
  _M[3][6][12] = 0.0
  _M[3][6][13] = 0.0
  _M[3][6][14] = 0.0
  _M[3][6][15] = 0.0
  _M[3][6][16] = 2.953149801483155/dx[3]^2
  _M[3][6][17] = 0.0
  _M[3][6][18] = 0.0
  _M[3][6][19] = 0.0
  _M[3][6][20] = 0.0
  _M[3][7][1] = 0.0
  _M[3][7][2] = 0.0
  _M[3][7][3] = 4.763139720814412/dx[3]^2
  _M[3][7][4] = 0.0
  _M[3][7][5] = 0.0
  _M[3][7][6] = 0.0
  _M[3][7][7] = -5.8125/dx[3]^2
  _M[3][7][8] = 0.0
  _M[3][7][9] = 0.0
  _M[3][7][10] = 0.0
  _M[3][7][11] = 0.0
  _M[3][7][12] = 0.0
  _M[3][7][13] = 0.0
  _M[3][7][14] = 0.0
  _M[3][7][15] = 0.0
  _M[3][7][16] = 0.0
  _M[3][7][17] = 2.953149801483155/dx[3]^2
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
  _M[3][8][8] = 3.75/dx[3]^2
  _M[3][8][9] = 0.0
  _M[3][8][10] = 0.0
  _M[3][8][11] = 0.0
  _M[3][8][12] = 0.0
  _M[3][8][13] = 0.0
  _M[3][8][14] = -4.763139720814412/dx[3]^2
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
  _M[3][9][9] = 3.75/dx[3]^2
  _M[3][9][10] = 0.0
  _M[3][9][11] = 0.0
  _M[3][9][12] = 0.0
  _M[3][9][13] = 0.0
  _M[3][9][14] = 0.0
  _M[3][9][15] = -4.763139720814412/dx[3]^2
  _M[3][9][16] = 0.0
  _M[3][9][17] = 0.0
  _M[3][9][18] = 0.0
  _M[3][9][19] = 0.0
  _M[3][9][20] = 0.0
  _M[3][10][1] = 1.677050983124842/dx[3]^2
  _M[3][10][2] = 0.0
  _M[3][10][3] = 0.0
  _M[3][10][4] = -1.210307295689818/dx[3]^2
  _M[3][10][5] = 0.0
  _M[3][10][6] = 0.0
  _M[3][10][7] = 0.0
  _M[3][10][8] = 0.0
  _M[3][10][9] = 0.0
  _M[3][10][10] = -0.5625/dx[3]^2
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
  _M[3][11][5] = 4.763139720814412/dx[3]^2
  _M[3][11][6] = 0.0
  _M[3][11][7] = 0.0
  _M[3][11][8] = 0.0
  _M[3][11][9] = 0.0
  _M[3][11][10] = 0.0
  _M[3][11][11] = -5.8125/dx[3]^2
  _M[3][11][12] = 0.0
  _M[3][11][13] = 0.0
  _M[3][11][14] = 0.0
  _M[3][11][15] = 0.0
  _M[3][11][16] = 0.0
  _M[3][11][17] = 0.0
  _M[3][11][18] = 0.0
  _M[3][11][19] = 0.0
  _M[3][11][20] = 2.953149801483155/dx[3]^2
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
  _M[3][12][12] = 3.75/dx[3]^2
  _M[3][12][13] = 0.0
  _M[3][12][14] = 0.0
  _M[3][12][15] = 0.0
  _M[3][12][16] = 0.0
  _M[3][12][17] = 0.0
  _M[3][12][18] = -4.763139720814412/dx[3]^2
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
  _M[3][13][13] = 3.75/dx[3]^2
  _M[3][13][14] = 0.0
  _M[3][13][15] = 0.0
  _M[3][13][16] = 0.0
  _M[3][13][17] = 0.0
  _M[3][13][18] = 0.0
  _M[3][13][19] = -4.763139720814412/dx[3]^2
  _M[3][13][20] = 0.0
  _M[3][14][1] = 0.0
  _M[3][14][2] = 0.0
  _M[3][14][3] = 0.0
  _M[3][14][4] = 0.0
  _M[3][14][5] = 0.0
  _M[3][14][6] = 0.0
  _M[3][14][7] = 0.0
  _M[3][14][8] = 4.763139720814412/dx[3]^2
  _M[3][14][9] = 0.0
  _M[3][14][10] = 0.0
  _M[3][14][11] = 0.0
  _M[3][14][12] = 0.0
  _M[3][14][13] = 0.0
  _M[3][14][14] = -5.8125/dx[3]^2
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
  _M[3][15][9] = 4.763139720814412/dx[3]^2
  _M[3][15][10] = 0.0
  _M[3][15][11] = 0.0
  _M[3][15][12] = 0.0
  _M[3][15][13] = 0.0
  _M[3][15][14] = 0.0
  _M[3][15][15] = -5.8125/dx[3]^2
  _M[3][15][16] = 0.0
  _M[3][15][17] = 0.0
  _M[3][15][18] = 0.0
  _M[3][15][19] = 0.0
  _M[3][15][20] = 0.0
  _M[3][16][1] = 0.0
  _M[3][16][2] = 1.677050983124842/dx[3]^2
  _M[3][16][3] = 0.0
  _M[3][16][4] = 0.0
  _M[3][16][5] = 0.0
  _M[3][16][6] = -1.210307295689818/dx[3]^2
  _M[3][16][7] = 0.0
  _M[3][16][8] = 0.0
  _M[3][16][9] = 0.0
  _M[3][16][10] = 0.0
  _M[3][16][11] = 0.0
  _M[3][16][12] = 0.0
  _M[3][16][13] = 0.0
  _M[3][16][14] = 0.0
  _M[3][16][15] = 0.0
  _M[3][16][16] = -0.5625/dx[3]^2
  _M[3][16][17] = 0.0
  _M[3][16][18] = 0.0
  _M[3][16][19] = 0.0
  _M[3][16][20] = 0.0
  _M[3][17][1] = 0.0
  _M[3][17][2] = 0.0
  _M[3][17][3] = 1.677050983124842/dx[3]^2
  _M[3][17][4] = 0.0
  _M[3][17][5] = 0.0
  _M[3][17][6] = 0.0
  _M[3][17][7] = -1.210307295689818/dx[3]^2
  _M[3][17][8] = 0.0
  _M[3][17][9] = 0.0
  _M[3][17][10] = 0.0
  _M[3][17][11] = 0.0
  _M[3][17][12] = 0.0
  _M[3][17][13] = 0.0
  _M[3][17][14] = 0.0
  _M[3][17][15] = 0.0
  _M[3][17][16] = 0.0
  _M[3][17][17] = -0.5625/dx[3]^2
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
  _M[3][18][12] = 4.763139720814412/dx[3]^2
  _M[3][18][13] = 0.0
  _M[3][18][14] = 0.0
  _M[3][18][15] = 0.0
  _M[3][18][16] = 0.0
  _M[3][18][17] = 0.0
  _M[3][18][18] = -5.8125/dx[3]^2
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
  _M[3][19][13] = 4.763139720814412/dx[3]^2
  _M[3][19][14] = 0.0
  _M[3][19][15] = 0.0
  _M[3][19][16] = 0.0
  _M[3][19][17] = 0.0
  _M[3][19][18] = 0.0
  _M[3][19][19] = -5.8125/dx[3]^2
  _M[3][19][20] = 0.0
  _M[3][20][1] = 0.0
  _M[3][20][2] = 0.0
  _M[3][20][3] = 0.0
  _M[3][20][4] = 0.0
  _M[3][20][5] = 1.677050983124842/dx[3]^2
  _M[3][20][6] = 0.0
  _M[3][20][7] = 0.0
  _M[3][20][8] = 0.0
  _M[3][20][9] = 0.0
  _M[3][20][10] = 0.0
  _M[3][20][11] = -1.210307295689818/dx[3]^2
  _M[3][20][12] = 0.0
  _M[3][20][13] = 0.0
  _M[3][20][14] = 0.0
  _M[3][20][15] = 0.0
  _M[3][20][16] = 0.0
  _M[3][20][17] = 0.0
  _M[3][20][18] = 0.0
  _M[3][20][19] = 0.0
  _M[3][20][20] = -0.5625/dx[3]^2
  return(_M)
end

return(stencilFn)