local Lin = require "Lib.Linalg"
local function stencilFn(dx, a, b, val)
  local _M = {}

  _M[1] = Lin.Mat(12,12)
  _M[1][1][1] = (2625.0*b-105.0*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][1][2] = 0.0
  _M[1][1][3] = (3715.248982235241*b-188.7935380250076*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][1][4] = 0.0
  _M[1][1][5] = 0.0
  _M[1][1][6] = (2985.15074996222*b-221.3707297724792*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][1][7] = 0.0
  _M[1][1][8] = 0.0
  _M[1][1][9] = 0.0
  _M[1][1][10] = (9167.528292838808*b-1039.780265248384*a)/(3360.0*dx[2]^2*b+224.0*dx[2]^2*a)
  _M[1][1][11] = 0.0
  _M[1][1][12] = 0.0
  _M[1][2][1] = 0.0
  _M[1][2][2] = (2625.0*b-105.0*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][2][3] = 0.0
  _M[1][2][4] = (11145.74694670572*b-566.3806140750228*a)/(1440.0*dx[2]^2*b+96.0*dx[2]^2*a)
  _M[1][2][5] = 0.0
  _M[1][2][6] = 0.0
  _M[1][2][7] = 0.0
  _M[1][2][8] = (2985.150749962219*b-221.3707297724792*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][2][9] = 0.0
  _M[1][2][10] = 0.0
  _M[1][2][11] = 0.0
  _M[1][2][12] = (27502.58487851641*b-3119.340795745152*a)/(10080.0*dx[2]^2*b+672.0*dx[2]^2*a)
  _M[1][3][1] = -(1.0*(4200.223208354527*b+732.6574916016349*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][3][2] = 0.0
  _M[1][3][3] = -(1.0*(5931.0*b+1101.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][3][4] = 0.0
  _M[1][3][5] = 0.0
  _M[1][3][6] = ((-4736.658632411671*b)-995.3567199753062*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][3][7] = 0.0
  _M[1][3][8] = 0.0
  _M[1][3][9] = 0.0
  _M[1][3][10] = -(1.0*(14338.87934951682*b+3624.81737471007*a))/(3360.0*dx[2]^2*b+224.0*dx[2]^2*a)
  _M[1][3][11] = 0.0
  _M[1][3][12] = 0.0
  _M[1][4][1] = 0.0
  _M[1][4][2] = -(1.0*(4200.223208354527*b+732.6574916016349*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][4][3] = 0.0
  _M[1][4][4] = -(1.0*(5931.0*b+1101.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][4][5] = 0.0
  _M[1][4][6] = 0.0
  _M[1][4][7] = 0.0
  _M[1][4][8] = -(1.0*(4736.658632411671*b+995.3567199753062*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][4][9] = 0.0
  _M[1][4][10] = 0.0
  _M[1][4][11] = 0.0
  _M[1][4][12] = -(1.0*(2048.41133564526*b+517.8310535300099*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][5][1] = 0.0
  _M[1][5][2] = 0.0
  _M[1][5][3] = 0.0
  _M[1][5][4] = 0.0
  _M[1][5][5] = (2625.0*b-105.0*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][5][6] = 0.0
  _M[1][5][7] = (18576.24491117621*b-943.9676901250382*a)/(2400.0*dx[2]^2*b+160.0*dx[2]^2*a)
  _M[1][5][8] = 0.0
  _M[1][5][9] = 0.0
  _M[1][5][10] = 0.0
  _M[1][5][11] = 0.0
  _M[1][5][12] = 0.0
  _M[1][6][1] = (771.4434522374276*b-449.4496634774578*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][6][2] = 0.0
  _M[1][6][3] = -(1.0*(747.4857858180314*a-499.6148516607568*b))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][6][4] = 0.0
  _M[1][6][5] = 0.0
  _M[1][6][6] = -(1.0*(645.0*b+795.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][6][7] = 0.0
  _M[1][6][8] = 0.0
  _M[1][6][9] = 0.0
  _M[1][6][10] = -(1.0*(7613.994680849207*b+3460.906673113276*a))/(3360.0*dx[2]^2*b+224.0*dx[2]^2*a)
  _M[1][6][11] = 0.0
  _M[1][6][12] = 0.0
  _M[1][7][1] = 0.0
  _M[1][7][2] = 0.0
  _M[1][7][3] = 0.0
  _M[1][7][4] = 0.0
  _M[1][7][5] = -(1.0*(21001.11604177265*b+3663.287458008176*a))/(2400.0*dx[2]^2*b+160.0*dx[2]^2*a)
  _M[1][7][6] = 0.0
  _M[1][7][7] = -(1.0*(5931.0*b+1101.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][7][8] = 0.0
  _M[1][7][9] = 0.0
  _M[1][7][10] = 0.0
  _M[1][7][11] = 0.0
  _M[1][7][12] = 0.0
  _M[1][8][1] = 0.0
  _M[1][8][2] = (771.4434522374274*b-449.4496634774577*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][8][3] = 0.0
  _M[1][8][4] = (499.6148516607568*b-747.4857858180314*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][8][5] = 0.0
  _M[1][8][6] = 0.0
  _M[1][8][7] = 0.0
  _M[1][8][8] = -(1.0*(645.0*b+795.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][8][9] = 0.0
  _M[1][8][10] = 0.0
  _M[1][8][11] = 0.0
  _M[1][8][12] = -(1.0*(7613.994680849206*b+3460.906673113276*a))/(3360.0*dx[2]^2*b+224.0*dx[2]^2*a)
  _M[1][9][1] = 0.0
  _M[1][9][2] = 0.0
  _M[1][9][3] = 0.0
  _M[1][9][4] = 0.0
  _M[1][9][5] = 0.0
  _M[1][9][6] = 0.0
  _M[1][9][7] = 0.0
  _M[1][9][8] = 0.0
  _M[1][9][9] = (2625.0*b-105.0*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][9][10] = 0.0
  _M[1][9][11] = (26006.74287564669*b-1321.554766175053*a)/(3360.0*dx[2]^2*b+224.0*dx[2]^2*a)
  _M[1][9][12] = 0.0
  _M[1][10][1] = -(1.0*(3770.195618267042*b+695.8325948099873*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][10][2] = 0.0
  _M[1][10][3] = -(1.0*(5210.388565164791*b+1040.244682754976*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][10][4] = 0.0
  _M[1][10][5] = 0.0
  _M[1][10][6] = ((-3922.360896195046*b)-928.8245259466398*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][10][7] = 0.0
  _M[1][10][8] = 0.0
  _M[1][10][9] = 0.0
  _M[1][10][10] = -(1.0*(1449.0*b+471.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][10][11] = 0.0
  _M[1][10][12] = 0.0
  _M[1][11][1] = 0.0
  _M[1][11][2] = 0.0
  _M[1][11][3] = 0.0
  _M[1][11][4] = 0.0
  _M[1][11][5] = 0.0
  _M[1][11][6] = 0.0
  _M[1][11][7] = 0.0
  _M[1][11][8] = 0.0
  _M[1][11][9] = -(1.0*(29401.56245848169*b+5128.602441211446*a))/(3360.0*dx[2]^2*b+224.0*dx[2]^2*a)
  _M[1][11][10] = 0.0
  _M[1][11][11] = -(1.0*(5931.0*b+1101.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][11][12] = 0.0
  _M[1][12][1] = 0.0
  _M[1][12][2] = -(1.0*(11310.58685480112*b+2087.497784429962*a))/(1440.0*dx[2]^2*b+96.0*dx[2]^2*a)
  _M[1][12][3] = 0.0
  _M[1][12][4] = ((-5210.38856516479*b)-1040.244682754976*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[1][12][5] = 0.0
  _M[1][12][6] = 0.0
  _M[1][12][7] = 0.0
  _M[1][12][8] = -(1.0*(11767.08268858514*b+2786.473577839919*a))/(1440.0*dx[2]^2*b+96.0*dx[2]^2*a)
  _M[1][12][9] = 0.0
  _M[1][12][10] = 0.0
  _M[1][12][11] = 0.0
  _M[1][12][12] = -(1.0*(1449.0*b+471.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2] = Lin.Mat(12,12)
  _M[2][1][1] = -(1.0*(2625.0*b+855.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][1][2] = 0.0
  _M[2][1][3] = (3715.248982235241*b-1837.705906830579*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][1][4] = 0.0
  _M[2][1][5] = 0.0
  _M[2][1][6] = -(1.0*(2985.15074996222*b+1120.270056727395*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][1][7] = 0.0
  _M[2][1][8] = 0.0
  _M[2][1][9] = 0.0
  _M[2][1][10] = (9167.528292838808*b-17295.27632042923*a)/(3360.0*dx[2]^2*b+224.0*dx[2]^2*a)
  _M[2][1][11] = 0.0
  _M[2][1][12] = 0.0
  _M[2][2][1] = 0.0
  _M[2][2][2] = -(1.0*(2625.0*b+855.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][2][3] = 0.0
  _M[2][2][4] = (11145.74694670572*b-5513.117720491736*a)/(1440.0*dx[2]^2*b+96.0*dx[2]^2*a)
  _M[2][2][5] = 0.0
  _M[2][2][6] = 0.0
  _M[2][2][7] = 0.0
  _M[2][2][8] = -(1.0*(2985.150749962219*b+1120.270056727395*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][2][9] = 0.0
  _M[2][2][10] = 0.0
  _M[2][2][11] = 0.0
  _M[2][2][12] = (27502.58487851641*b-51885.82896128768*a)/(10080.0*dx[2]^2*b+672.0*dx[2]^2*a)
  _M[2][3][1] = (4200.223208354527*b-819.2600319800789*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][3][2] = 0.0
  _M[2][3][3] = -(1.0*(11307.0*b+4125.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][3][4] = 0.0
  _M[2][3][5] = 0.0
  _M[2][3][6] = (4736.658632411671*b-1173.513953900847*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][3][7] = 0.0
  _M[2][3][8] = 0.0
  _M[2][3][9] = 0.0
  _M[2][3][10] = -(1.0*(51292.76975364071*b+32366.7321334731*a))/(3360.0*dx[2]^2*b+224.0*dx[2]^2*a)
  _M[2][3][11] = 0.0
  _M[2][3][12] = 0.0
  _M[2][4][1] = 0.0
  _M[2][4][2] = (4200.223208354527*b-819.2600319800789*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][4][3] = 0.0
  _M[2][4][4] = -(1.0*(11307.0*b+4125.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][4][5] = 0.0
  _M[2][4][6] = 0.0
  _M[2][4][7] = 0.0
  _M[2][4][8] = (4736.658632411671*b-1173.513953900847*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][4][9] = 0.0
  _M[2][4][10] = 0.0
  _M[2][4][11] = 0.0
  _M[2][4][12] = -(1.0*(7327.538536234388*b+4623.818876210443*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][5][1] = 0.0
  _M[2][5][2] = 0.0
  _M[2][5][3] = 0.0
  _M[2][5][4] = 0.0
  _M[2][5][5] = -(1.0*(2625.0*b+855.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][5][6] = 0.0
  _M[2][5][7] = (18576.24491117621*b-9188.529534152894*a)/(2400.0*dx[2]^2*b+160.0*dx[2]^2*a)
  _M[2][5][8] = 0.0
  _M[2][5][9] = 0.0
  _M[2][5][10] = 0.0
  _M[2][5][11] = 0.0
  _M[2][5][12] = 0.0
  _M[2][6][1] = -(1.0*(771.4434522374276*b+1267.850543242381*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][6][2] = 0.0
  _M[2][6][3] = -(1.0*(801.7075526649351*b+3783.904729244646*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][6][4] = 0.0
  _M[2][6][5] = 0.0
  _M[2][6][6] = -(1.0*(17355.0*b+2805.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][6][7] = 0.0
  _M[2][6][8] = 0.0
  _M[2][6][9] = 0.0
  _M[2][6][10] = -(1.0*(82582.55769228755*b+37537.52622376708*a))/(3360.0*dx[2]^2*b+224.0*dx[2]^2*a)
  _M[2][6][11] = 0.0
  _M[2][6][12] = 0.0
  _M[2][7][1] = 0.0
  _M[2][7][2] = 0.0
  _M[2][7][3] = 0.0
  _M[2][7][4] = 0.0
  _M[2][7][5] = (21001.11604177265*b-4096.300159900395*a)/(2400.0*dx[2]^2*b+160.0*dx[2]^2*a)
  _M[2][7][6] = 0.0
  _M[2][7][7] = -(1.0*(11307.0*b+4125.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][7][8] = 0.0
  _M[2][7][9] = 0.0
  _M[2][7][10] = 0.0
  _M[2][7][11] = 0.0
  _M[2][7][12] = 0.0
  _M[2][8][1] = 0.0
  _M[2][8][2] = -(1.0*(771.4434522374274*b+1267.85054324238*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][8][3] = 0.0
  _M[2][8][4] = -(1.0*(801.7075526649353*b+3783.904729244646*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][8][5] = 0.0
  _M[2][8][6] = 0.0
  _M[2][8][7] = 0.0
  _M[2][8][8] = -(1.0*(17355.0*b+2805.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][8][9] = 0.0
  _M[2][8][10] = 0.0
  _M[2][8][11] = 0.0
  _M[2][8][12] = -(1.0*(82582.55769228755*b+37537.52622376707*a))/(3360.0*dx[2]^2*b+224.0*dx[2]^2*a)
  _M[2][9][1] = 0.0
  _M[2][9][2] = 0.0
  _M[2][9][3] = 0.0
  _M[2][9][4] = 0.0
  _M[2][9][5] = 0.0
  _M[2][9][6] = 0.0
  _M[2][9][7] = 0.0
  _M[2][9][8] = 0.0
  _M[2][9][9] = -(1.0*(2625.0*b+855.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][9][10] = 0.0
  _M[2][9][11] = (26006.74287564669*b-12863.94134781405*a)/(3360.0*dx[2]^2*b+224.0*dx[2]^2*a)
  _M[2][9][12] = 0.0
  _M[2][10][1] = (3770.195618267042*b-828.1201603632169*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][10][2] = 0.0
  _M[2][10][3] = -(1.0*(10489.51576575392*b+4009.753733086362*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][10][4] = 0.0
  _M[2][10][5] = 0.0
  _M[2][10][6] = (3922.360896195046*b-1200.964195969222*a)/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][10][7] = 0.0
  _M[2][10][8] = 0.0
  _M[2][10][9] = 0.0
  _M[2][10][10] = -(1.0*(49833.0*b+7383.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][10][11] = 0.0
  _M[2][10][12] = 0.0
  _M[2][11][1] = 0.0
  _M[2][11][2] = 0.0
  _M[2][11][3] = 0.0
  _M[2][11][4] = 0.0
  _M[2][11][5] = 0.0
  _M[2][11][6] = 0.0
  _M[2][11][7] = 0.0
  _M[2][11][8] = 0.0
  _M[2][11][9] = (29401.56245848169*b-5734.820223860553*a)/(3360.0*dx[2]^2*b+224.0*dx[2]^2*a)
  _M[2][11][10] = 0.0
  _M[2][11][11] = -(1.0*(11307.0*b+4125.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[2][11][12] = 0.0
  _M[2][12][1] = 0.0
  _M[2][12][2] = (11310.58685480112*b-2484.36048108965*a)/(1440.0*dx[2]^2*b+96.0*dx[2]^2*a)
  _M[2][12][3] = 0.0
  _M[2][12][4] = -(1.0*(31468.54729726175*b+12029.26119925908*a))/(1440.0*dx[2]^2*b+96.0*dx[2]^2*a)
  _M[2][12][5] = 0.0
  _M[2][12][6] = 0.0
  _M[2][12][7] = 0.0
  _M[2][12][8] = (11767.08268858514*b-3602.892587907666*a)/(1440.0*dx[2]^2*b+96.0*dx[2]^2*a)
  _M[2][12][9] = 0.0
  _M[2][12][10] = 0.0
  _M[2][12][11] = 0.0
  _M[2][12][12] = -(1.0*(49833.0*b+7383.0*a))/(480.0*dx[2]^2*b+32.0*dx[2]^2*a)
  _M[3] = Lin.Vec(12)
  _M[3][1] = 60.0/(15.0*dx[2]^2*b+dx[2]^2*a)*val
  _M[3][2] = 0.0*val
  _M[3][3] = 96.99484522385713/(15.0*dx[2]^2*b+dx[2]^2*a)*val
  _M[3][4] = 0.0*val
  _M[3][5] = 0.0*val
  _M[3][6] = 107.3312629199899/(15.0*dx[2]^2*b+dx[2]^2*a)*val
  _M[3][7] = 0.0*val
  _M[3][8] = 0.0*val
  _M[3][9] = 0.0*val
  _M[3][10] = 95.24704719832526/(15.0*dx[2]^2*b+dx[2]^2*a)*val
  _M[3][11] = 0.0*val
  _M[3][12] = 0.0*val
  return(_M)
end

return(stencilFn)