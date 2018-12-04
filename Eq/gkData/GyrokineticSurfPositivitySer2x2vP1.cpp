#include <GyrokineticModDecl.h> 
double GyrokineticSurfPositivity2x2vSer_X_P1_Bvars_0(const double q_, const double m_, const double cflL, const double cflR, const double *w, const double *dxv, const double amax_in, const double *Bmag, const double *BmagInv, const double *Gradpar, const double *BdriftX, const double *BdriftY, const double *Phi, const double *fl, const double *fr, double *outl, double *outr) 
{ 
// w[NDIM]: Cell-center coordinates. dxv[NDIM]: Cell spacing. H/f: Input Hamiltonian/distribution function. out: Incremented output 
  double dfac_x = 2.0/dxv[0]; 
  double dfac_y = 2.0/dxv[1]; 
  double dfac_v = 2.0/dxv[2]; 
  double dfac_m = 2.0/dxv[3]; 
  double wx = w[0]; 
  double wy = w[1]; 
  double wv = w[2]; 
  double wm = w[3]; 
  double wv2 = wv*wv; 
  double dfac_v2 = dfac_v*dfac_v; 
  double q2 = q_*q_; 
  double incr[16]; 
  // surface-averaged phase velocity in this direction 
  double alpha0 = (0.125*(2.0*BdriftX[0]*m_*wv2+BmagInv[0]*(3.0*Phi[3]-1.732050807568877*Phi[2])*dfac_y*q_))/q_; 

  double alpha[8]; 
  alpha[0] = (0.5*(2.828427124746191*BdriftX[0]*m_*wv2+BmagInv[0]*(4.242640687119286*Phi[3]-2.449489742783178*Phi[2])*dfac_y*q_))/q_; 
  alpha[2] = (0.8164965809277261*BdriftX[0]*m_*wv)/(dfac_v*q_); 
#if upwindType == SURFAVG 
  if (alpha0>0) { 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than x 
  rVal[0] = -(1.0*(1.732050807568877*fl[15]-3.0*(fl[13]+fl[12]+fl[11])+5.196152422706631*(fl[8]+fl[6]+fl[5])-9.0*fl[1]))/(20.78460969082652*EPSILON-1.0*fl[14]+1.732050807568877*(fl[10]+fl[9]+fl[7])-3.0*(fl[4]+fl[3]+fl[2])+5.196152422706631*fl[0]); 
  rVal[1] = (1.732050807568877*fl[15]+3.0*(fl[13]-1.0*(fl[12]+fl[11]))+5.196152422706631*(fl[5]-1.0*(fl[8]+fl[6]))+9.0*fl[1])/(20.78460969082652*EPSILON+fl[14]+1.732050807568877*(fl[10]-1.0*(fl[9]+fl[7]))+3.0*(fl[2]-1.0*(fl[4]+fl[3]))+5.196152422706631*fl[0]); 
  rVal[2] = (1.732050807568877*fl[15]+3.0*((-1.0*fl[13])+fl[12]-1.0*fl[11])+5.196152422706631*((-1.0*fl[8])+fl[6]-1.0*fl[5])+9.0*fl[1])/(20.78460969082652*EPSILON+fl[14]+1.732050807568877*((-1.0*fl[10])+fl[9]-1.0*fl[7])+3.0*((-1.0*fl[4])+fl[3]-1.0*fl[2])+5.196152422706631*fl[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fl[15]+3.0*(fl[13]+fl[12]-1.0*fl[11])+5.196152422706631*fl[8]-1.0*(5.196152422706631*(fl[6]+fl[5])+9.0*fl[1])))/(20.78460969082652*EPSILON-1.0*fl[14]+1.732050807568877*(fl[7]-1.0*(fl[10]+fl[9]))+3.0*((-1.0*fl[4])+fl[3]+fl[2])+5.196152422706631*fl[0]); 
  rVal[4] = (1.732050807568877*fl[15]+3.0*(fl[11]-1.0*(fl[13]+fl[12]))+5.196152422706631*(fl[8]-1.0*(fl[6]+fl[5]))+9.0*fl[1])/(20.78460969082652*EPSILON+fl[14]+1.732050807568877*(fl[7]-1.0*(fl[10]+fl[9]))+3.0*(fl[4]-1.0*(fl[3]+fl[2]))+5.196152422706631*fl[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fl[15]+3.0*(fl[13]-1.0*fl[12]+fl[11])+5.196152422706631*(fl[6]-1.0*fl[8])-1.0*(5.196152422706631*fl[5]+9.0*fl[1])))/(20.78460969082652*EPSILON-1.0*fl[14]+1.732050807568877*((-1.0*fl[10])+fl[9]-1.0*fl[7])+3.0*(fl[4]-1.0*fl[3]+fl[2])+5.196152422706631*fl[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fl[15]+3.0*((-1.0*fl[13])+fl[12]+fl[11])+5.196152422706631*(fl[5]-1.0*(fl[8]+fl[6]))-9.0*fl[1]))/(20.78460969082652*EPSILON-1.0*fl[14]+1.732050807568877*(fl[10]-1.0*(fl[9]+fl[7]))+3.0*(fl[4]+fl[3]-1.0*fl[2])+5.196152422706631*fl[0]); 
  rVal[7] = (1.732050807568877*fl[15]+3.0*(fl[13]+fl[12]+fl[11])+5.196152422706631*(fl[8]+fl[6]+fl[5])+9.0*fl[1])/(20.78460969082652*EPSILON+fl[14]+1.732050807568877*(fl[10]+fl[9]+fl[7])+3.0*(fl[4]+fl[3]+fl[2])+5.196152422706631*fl[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on x surface 
  fqVal[0] = -0.04811252243246882*(fl[14]-1.732050807568877*(fl[10]+fl[9]+fl[7])+3.0*(fl[4]+fl[3]+fl[2])-5.196152422706631*fl[0])*limTheta(rVal[0],1.0,cflL); 
  fqVal[1] = 0.04811252243246882*(fl[14]+1.732050807568877*(fl[10]-1.0*(fl[9]+fl[7]))+3.0*(fl[2]-1.0*(fl[4]+fl[3]))+5.196152422706631*fl[0])*limTheta(rVal[1],1.0,cflL); 
  fqVal[2] = 0.04811252243246882*(fl[14]+1.732050807568877*((-1.0*fl[10])+fl[9]-1.0*fl[7])+3.0*((-1.0*fl[4])+fl[3]-1.0*fl[2])+5.196152422706631*fl[0])*limTheta(rVal[2],1.0,cflL); 
  fqVal[3] = -0.04811252243246882*(fl[14]+1.732050807568877*(fl[10]+fl[9]-1.0*fl[7])+3.0*fl[4]-1.0*(3.0*(fl[3]+fl[2])+5.196152422706631*fl[0]))*limTheta(rVal[3],1.0,cflL); 
  fqVal[4] = 0.04811252243246882*(fl[14]+1.732050807568877*(fl[7]-1.0*(fl[10]+fl[9]))+3.0*(fl[4]-1.0*(fl[3]+fl[2]))+5.196152422706631*fl[0])*limTheta(rVal[4],1.0,cflL); 
  fqVal[5] = -0.04811252243246882*(fl[14]+1.732050807568877*(fl[10]-1.0*fl[9]+fl[7])+3.0*(fl[3]-1.0*fl[4])-1.0*(3.0*fl[2]+5.196152422706631*fl[0]))*limTheta(rVal[5],1.0,cflL); 
  fqVal[6] = -0.04811252243246882*(fl[14]+1.732050807568877*((-1.0*fl[10])+fl[9]+fl[7])+3.0*(fl[2]-1.0*(fl[4]+fl[3]))-5.196152422706631*fl[0])*limTheta(rVal[6],1.0,cflL); 
  fqVal[7] = 0.04811252243246882*(fl[14]+1.732050807568877*(fl[10]+fl[9]+fl[7])+3.0*(fl[4]+fl[3]+fl[2])+5.196152422706631*fl[0])*limTheta(rVal[7],1.0,cflL); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_x; 
  incr[1] = -0.4330127018922193*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_x; 
  incr[2] = 0.25*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_x; 
  incr[3] = 0.25*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_x; 
  incr[4] = 0.25*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_x; 
  incr[5] = -0.4330127018922193*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_x; 
  incr[6] = -0.4330127018922193*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_x; 
  incr[7] = 0.25*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_x; 
  incr[8] = -0.4330127018922193*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_x; 
  incr[9] = 0.25*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_x; 
  incr[10] = 0.25*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_x; 
  incr[11] = -0.4330127018922193*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_x; 
  incr[12] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_x; 
  incr[13] = -0.4330127018922193*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_x; 
  incr[14] = 0.25*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_x; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_x; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += incr[1]; 
  outl[2] += -1.0*incr[2]; 
  outl[3] += -1.0*incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += incr[5]; 
  outl[6] += incr[6]; 
  outl[7] += -1.0*incr[7]; 
  outl[8] += incr[8]; 
  outl[9] += -1.0*incr[9]; 
  outl[10] += -1.0*incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += incr[12]; 
  outl[13] += incr[13]; 
  outl[14] += -1.0*incr[14]; 
  outl[15] += incr[15]; 
  } else { 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than x 
  rVal[0] = -(1.0*(1.732050807568877*fr[15]-3.0*(fr[13]+fr[12]+fr[11])+5.196152422706631*(fr[8]+fr[6]+fr[5])-9.0*fr[1]))/(20.78460969082652*EPSILON-1.0*fr[14]+1.732050807568877*(fr[10]+fr[9]+fr[7])-3.0*(fr[4]+fr[3]+fr[2])+5.196152422706631*fr[0]); 
  rVal[1] = (1.732050807568877*fr[15]+3.0*(fr[13]-1.0*(fr[12]+fr[11]))+5.196152422706631*(fr[5]-1.0*(fr[8]+fr[6]))+9.0*fr[1])/(20.78460969082652*EPSILON+fr[14]+1.732050807568877*(fr[10]-1.0*(fr[9]+fr[7]))+3.0*(fr[2]-1.0*(fr[4]+fr[3]))+5.196152422706631*fr[0]); 
  rVal[2] = (1.732050807568877*fr[15]+3.0*((-1.0*fr[13])+fr[12]-1.0*fr[11])+5.196152422706631*((-1.0*fr[8])+fr[6]-1.0*fr[5])+9.0*fr[1])/(20.78460969082652*EPSILON+fr[14]+1.732050807568877*((-1.0*fr[10])+fr[9]-1.0*fr[7])+3.0*((-1.0*fr[4])+fr[3]-1.0*fr[2])+5.196152422706631*fr[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fr[15]+3.0*(fr[13]+fr[12]-1.0*fr[11])+5.196152422706631*fr[8]-1.0*(5.196152422706631*(fr[6]+fr[5])+9.0*fr[1])))/(20.78460969082652*EPSILON-1.0*fr[14]+1.732050807568877*(fr[7]-1.0*(fr[10]+fr[9]))+3.0*((-1.0*fr[4])+fr[3]+fr[2])+5.196152422706631*fr[0]); 
  rVal[4] = (1.732050807568877*fr[15]+3.0*(fr[11]-1.0*(fr[13]+fr[12]))+5.196152422706631*(fr[8]-1.0*(fr[6]+fr[5]))+9.0*fr[1])/(20.78460969082652*EPSILON+fr[14]+1.732050807568877*(fr[7]-1.0*(fr[10]+fr[9]))+3.0*(fr[4]-1.0*(fr[3]+fr[2]))+5.196152422706631*fr[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fr[15]+3.0*(fr[13]-1.0*fr[12]+fr[11])+5.196152422706631*(fr[6]-1.0*fr[8])-1.0*(5.196152422706631*fr[5]+9.0*fr[1])))/(20.78460969082652*EPSILON-1.0*fr[14]+1.732050807568877*((-1.0*fr[10])+fr[9]-1.0*fr[7])+3.0*(fr[4]-1.0*fr[3]+fr[2])+5.196152422706631*fr[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fr[15]+3.0*((-1.0*fr[13])+fr[12]+fr[11])+5.196152422706631*(fr[5]-1.0*(fr[8]+fr[6]))-9.0*fr[1]))/(20.78460969082652*EPSILON-1.0*fr[14]+1.732050807568877*(fr[10]-1.0*(fr[9]+fr[7]))+3.0*(fr[4]+fr[3]-1.0*fr[2])+5.196152422706631*fr[0]); 
  rVal[7] = (1.732050807568877*fr[15]+3.0*(fr[13]+fr[12]+fr[11])+5.196152422706631*(fr[8]+fr[6]+fr[5])+9.0*fr[1])/(20.78460969082652*EPSILON+fr[14]+1.732050807568877*(fr[10]+fr[9]+fr[7])+3.0*(fr[4]+fr[3]+fr[2])+5.196152422706631*fr[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on x surface 
  fqVal[0] = -0.04811252243246882*(fr[14]-1.732050807568877*(fr[10]+fr[9]+fr[7])+3.0*(fr[4]+fr[3]+fr[2])-5.196152422706631*fr[0])*limTheta(rVal[0],-1.0,cflR); 
  fqVal[1] = 0.04811252243246882*(fr[14]+1.732050807568877*(fr[10]-1.0*(fr[9]+fr[7]))+3.0*(fr[2]-1.0*(fr[4]+fr[3]))+5.196152422706631*fr[0])*limTheta(rVal[1],-1.0,cflR); 
  fqVal[2] = 0.04811252243246882*(fr[14]+1.732050807568877*((-1.0*fr[10])+fr[9]-1.0*fr[7])+3.0*((-1.0*fr[4])+fr[3]-1.0*fr[2])+5.196152422706631*fr[0])*limTheta(rVal[2],-1.0,cflR); 
  fqVal[3] = -0.04811252243246882*(fr[14]+1.732050807568877*(fr[10]+fr[9]-1.0*fr[7])+3.0*fr[4]-1.0*(3.0*(fr[3]+fr[2])+5.196152422706631*fr[0]))*limTheta(rVal[3],-1.0,cflR); 
  fqVal[4] = 0.04811252243246882*(fr[14]+1.732050807568877*(fr[7]-1.0*(fr[10]+fr[9]))+3.0*(fr[4]-1.0*(fr[3]+fr[2]))+5.196152422706631*fr[0])*limTheta(rVal[4],-1.0,cflR); 
  fqVal[5] = -0.04811252243246882*(fr[14]+1.732050807568877*(fr[10]-1.0*fr[9]+fr[7])+3.0*(fr[3]-1.0*fr[4])-1.0*(3.0*fr[2]+5.196152422706631*fr[0]))*limTheta(rVal[5],-1.0,cflR); 
  fqVal[6] = -0.04811252243246882*(fr[14]+1.732050807568877*((-1.0*fr[10])+fr[9]+fr[7])+3.0*(fr[2]-1.0*(fr[4]+fr[3]))-5.196152422706631*fr[0])*limTheta(rVal[6],-1.0,cflR); 
  fqVal[7] = 0.04811252243246882*(fr[14]+1.732050807568877*(fr[10]+fr[9]+fr[7])+3.0*(fr[4]+fr[3]+fr[2])+5.196152422706631*fr[0])*limTheta(rVal[7],-1.0,cflR); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_x; 
  incr[1] = -0.4330127018922193*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_x; 
  incr[2] = 0.25*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_x; 
  incr[3] = 0.25*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_x; 
  incr[4] = 0.25*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_x; 
  incr[5] = -0.4330127018922193*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_x; 
  incr[6] = -0.4330127018922193*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_x; 
  incr[7] = 0.25*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_x; 
  incr[8] = -0.4330127018922193*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_x; 
  incr[9] = 0.25*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_x; 
  incr[10] = 0.25*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_x; 
  incr[11] = -0.4330127018922193*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_x; 
  incr[12] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_x; 
  incr[13] = -0.4330127018922193*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_x; 
  incr[14] = 0.25*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_x; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_x; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += incr[1]; 
  outl[2] += -1.0*incr[2]; 
  outl[3] += -1.0*incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += incr[5]; 
  outl[6] += incr[6]; 
  outl[7] += -1.0*incr[7]; 
  outl[8] += incr[8]; 
  outl[9] += -1.0*incr[9]; 
  outl[10] += -1.0*incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += incr[12]; 
  outl[13] += incr[13]; 
  outl[14] += -1.0*incr[14]; 
  outl[15] += incr[15]; 
  } 
#elif upwindType == QUAD 
double fupwind[16];
double fupwindQuad[16];
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[0] = (-0.25*(fl[15]+fl[14]))+0.25*(fl[13]+fl[12]+fl[11]+fl[10]+fl[9])-0.25*fl[8]+0.25*fl[7]-0.25*(fl[6]+fl[5]+fl[4]+fl[3]+fl[2])+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[0] = 0.25*fr[15]-0.25*(fr[14]+fr[13]+fr[12]+fr[11])+0.25*(fr[10]+fr[9]+fr[8]+fr[7]+fr[6]+fr[5])-0.25*(fr[4]+fr[3]+fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[1] = 0.25*fl[15]-0.25*(fl[14]+fl[13]+fl[12]+fl[11])+0.25*(fl[10]+fl[9]+fl[8]+fl[7]+fl[6]+fl[5])-0.25*(fl[4]+fl[3]+fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[1] = (-0.25*(fr[15]+fr[14]))+0.25*(fr[13]+fr[12]+fr[11]+fr[10]+fr[9])-0.25*fr[8]+0.25*fr[7]-0.25*(fr[6]+fr[5]+fr[4]+fr[3]+fr[2])+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[2] = 0.25*(fl[15]+fl[14]+fl[13])-0.25*(fl[12]+fl[11])+0.25*fl[10]-0.25*(fl[9]+fl[8]+fl[7]+fl[6])+0.25*fl[5]-0.25*(fl[4]+fl[3])+0.25*(fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[2] = (-0.25*fr[15])+0.25*fr[14]-0.25*fr[13]+0.25*(fr[12]+fr[11]+fr[10])-0.25*fr[9]+0.25*fr[8]-0.25*fr[7]+0.25*fr[6]-0.25*(fr[5]+fr[4]+fr[3])+0.25*fr[2]-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[3] = (-0.25*fl[15])+0.25*fl[14]-0.25*fl[13]+0.25*(fl[12]+fl[11]+fl[10])-0.25*fl[9]+0.25*fl[8]-0.25*fl[7]+0.25*fl[6]-0.25*(fl[5]+fl[4]+fl[3])+0.25*fl[2]-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[3] = 0.25*(fr[15]+fr[14]+fr[13])-0.25*(fr[12]+fr[11])+0.25*fr[10]-0.25*(fr[9]+fr[8]+fr[7]+fr[6])+0.25*fr[5]-0.25*(fr[4]+fr[3])+0.25*(fr[2]+fr[1]+fr[0]); 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[4] = 0.25*(fl[15]+fl[14])-0.25*fl[13]+0.25*fl[12]-0.25*(fl[11]+fl[10])+0.25*fl[9]-0.25*(fl[8]+fl[7])+0.25*fl[6]-0.25*(fl[5]+fl[4])+0.25*fl[3]-0.25*fl[2]+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[4] = (-0.25*fr[15])+0.25*(fr[14]+fr[13])-0.25*fr[12]+0.25*fr[11]-0.25*fr[10]+0.25*(fr[9]+fr[8])-0.25*(fr[7]+fr[6])+0.25*fr[5]-0.25*fr[4]+0.25*fr[3]-0.25*(fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[5] = (-0.25*fl[15])+0.25*(fl[14]+fl[13])-0.25*fl[12]+0.25*fl[11]-0.25*fl[10]+0.25*(fl[9]+fl[8])-0.25*(fl[7]+fl[6])+0.25*fl[5]-0.25*fl[4]+0.25*fl[3]-0.25*(fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[5] = 0.25*(fr[15]+fr[14])-0.25*fr[13]+0.25*fr[12]-0.25*(fr[11]+fr[10])+0.25*fr[9]-0.25*(fr[8]+fr[7])+0.25*fr[6]-0.25*(fr[5]+fr[4])+0.25*fr[3]-0.25*fr[2]+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[6] = (-0.25*(fl[15]+fl[14]+fl[13]+fl[12]))+0.25*fl[11]-0.25*(fl[10]+fl[9]+fl[8])+0.25*(fl[7]+fl[6]+fl[5])-0.25*fl[4]+0.25*(fl[3]+fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[6] = 0.25*fr[15]-0.25*fr[14]+0.25*(fr[13]+fr[12])-0.25*(fr[11]+fr[10]+fr[9])+0.25*(fr[8]+fr[7])-0.25*(fr[6]+fr[5]+fr[4])+0.25*(fr[3]+fr[2])-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[7] = 0.25*fl[15]-0.25*fl[14]+0.25*(fl[13]+fl[12])-0.25*(fl[11]+fl[10]+fl[9])+0.25*(fl[8]+fl[7])-0.25*(fl[6]+fl[5]+fl[4])+0.25*(fl[3]+fl[2])-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[7] = (-0.25*(fr[15]+fr[14]+fr[13]+fr[12]))+0.25*fr[11]-0.25*(fr[10]+fr[9]+fr[8])+0.25*(fr[7]+fr[6]+fr[5])-0.25*fr[4]+0.25*(fr[3]+fr[2]+fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[8] = 0.25*(fl[15]+fl[14])-0.25*(fl[13]+fl[12])+0.25*fl[11]-0.25*(fl[10]+fl[9])+0.25*(fl[8]+fl[7])-0.25*(fl[6]+fl[5])+0.25*fl[4]-0.25*(fl[3]+fl[2])+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[8] = (-0.25*fr[15])+0.25*(fr[14]+fr[13]+fr[12])-0.25*(fr[11]+fr[10]+fr[9]+fr[8])+0.25*(fr[7]+fr[6]+fr[5]+fr[4])-0.25*(fr[3]+fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[9] = (-0.25*fl[15])+0.25*(fl[14]+fl[13]+fl[12])-0.25*(fl[11]+fl[10]+fl[9]+fl[8])+0.25*(fl[7]+fl[6]+fl[5]+fl[4])-0.25*(fl[3]+fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[9] = 0.25*(fr[15]+fr[14])-0.25*(fr[13]+fr[12])+0.25*fr[11]-0.25*(fr[10]+fr[9])+0.25*(fr[8]+fr[7])-0.25*(fr[6]+fr[5])+0.25*fr[4]-0.25*(fr[3]+fr[2])+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[10] = (-0.25*(fl[15]+fl[14]+fl[13]))+0.25*fl[12]-0.25*(fl[11]+fl[10])+0.25*(fl[9]+fl[8])-0.25*(fl[7]+fl[6])+0.25*(fl[5]+fl[4])-0.25*fl[3]+0.25*(fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[10] = 0.25*fr[15]-0.25*fr[14]+0.25*fr[13]-0.25*fr[12]+0.25*fr[11]-0.25*fr[10]+0.25*fr[9]-0.25*(fr[8]+fr[7])+0.25*fr[6]-0.25*fr[5]+0.25*fr[4]-0.25*fr[3]+0.25*fr[2]-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[11] = 0.25*fl[15]-0.25*fl[14]+0.25*fl[13]-0.25*fl[12]+0.25*fl[11]-0.25*fl[10]+0.25*fl[9]-0.25*(fl[8]+fl[7])+0.25*fl[6]-0.25*fl[5]+0.25*fl[4]-0.25*fl[3]+0.25*fl[2]-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[11] = (-0.25*(fr[15]+fr[14]+fr[13]))+0.25*fr[12]-0.25*(fr[11]+fr[10])+0.25*(fr[9]+fr[8])-0.25*(fr[7]+fr[6])+0.25*(fr[5]+fr[4])-0.25*fr[3]+0.25*(fr[2]+fr[1]+fr[0]); 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[12] = (-0.25*(fl[15]+fl[14]))+0.25*fl[13]-0.25*(fl[12]+fl[11])+0.25*fl[10]-0.25*fl[9]+0.25*fl[8]-0.25*fl[7]+0.25*fl[6]-0.25*fl[5]+0.25*(fl[4]+fl[3])-0.25*fl[2]+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[12] = 0.25*fr[15]-0.25*(fr[14]+fr[13])+0.25*(fr[12]+fr[11]+fr[10])-0.25*(fr[9]+fr[8]+fr[7]+fr[6])+0.25*(fr[5]+fr[4]+fr[3])-0.25*(fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[13] = 0.25*fl[15]-0.25*(fl[14]+fl[13])+0.25*(fl[12]+fl[11]+fl[10])-0.25*(fl[9]+fl[8]+fl[7]+fl[6])+0.25*(fl[5]+fl[4]+fl[3])-0.25*(fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[13] = (-0.25*(fr[15]+fr[14]))+0.25*fr[13]-0.25*(fr[12]+fr[11])+0.25*fr[10]-0.25*fr[9]+0.25*fr[8]-0.25*fr[7]+0.25*fr[6]-0.25*fr[5]+0.25*(fr[4]+fr[3])-0.25*fr[2]+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[14] = 0.25*(fl[15]+fl[14]+fl[13]+fl[12]+fl[11]+fl[10]+fl[9]+fl[8]+fl[7]+fl[6]+fl[5]+fl[4]+fl[3]+fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[14] = (-0.25*fr[15])+0.25*fr[14]-0.25*(fr[13]+fr[12]+fr[11])+0.25*(fr[10]+fr[9])-0.25*fr[8]+0.25*fr[7]-0.25*(fr[6]+fr[5])+0.25*(fr[4]+fr[3]+fr[2])-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[15] = (-0.25*fl[15])+0.25*fl[14]-0.25*(fl[13]+fl[12]+fl[11])+0.25*(fl[10]+fl[9])-0.25*fl[8]+0.25*fl[7]-0.25*(fl[6]+fl[5])+0.25*(fl[4]+fl[3]+fl[2])-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[15] = 0.25*(fr[15]+fr[14]+fr[13]+fr[12]+fr[11]+fr[10]+fr[9]+fr[8]+fr[7]+fr[6]+fr[5]+fr[4]+fr[3]+fr[2]+fr[1]+fr[0]); 
  }
  fupwind[0] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[1] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*fupwindQuad[12]+fupwindQuad[11]-1.0*fupwindQuad[10]+fupwindQuad[9]-1.0*fupwindQuad[8]+fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[2] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12])+fupwindQuad[11]+fupwindQuad[10]-1.0*(fupwindQuad[9]+fupwindQuad[8])+fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[3] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]-1.0*(fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8])+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[4] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]-1.0*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[5] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]+fupwindQuad[11]-1.0*(fupwindQuad[10]+fupwindQuad[9])+fupwindQuad[8]+fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  fupwind[6] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*(fupwindQuad[12]+fupwindQuad[11])+fupwindQuad[10]-1.0*fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[7] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10])+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[8] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*fupwindQuad[12]+fupwindQuad[11]-1.0*fupwindQuad[10]+fupwindQuad[9]-1.0*(fupwindQuad[8]+fupwindQuad[7])+fupwindQuad[6]-1.0*fupwindQuad[5]+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[9] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12])+fupwindQuad[11]+fupwindQuad[10]-1.0*(fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6])+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[10] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]-1.0*(fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[11] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]-1.0*fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]-1.0*fupwindQuad[8]+fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[12] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]+fupwindQuad[11]-1.0*(fupwindQuad[10]+fupwindQuad[9])+fupwindQuad[8]-1.0*fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[13] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*(fupwindQuad[12]+fupwindQuad[11])+fupwindQuad[10]-1.0*fupwindQuad[9]+fupwindQuad[8]-1.0*fupwindQuad[7]+fupwindQuad[6]-1.0*fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[14] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10])+fupwindQuad[9]+fupwindQuad[8]-1.0*(fupwindQuad[7]+fupwindQuad[6])+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[15] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]-1.0*fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]-1.0*(fupwindQuad[8]+fupwindQuad[7])+fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than x 
  rVal[0] = -(1.0*(1.732050807568877*fupwind[15]-3.0*(fupwind[13]+fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[8]+fupwind[6]+fupwind[5])-9.0*fupwind[1]))/(20.78460969082652*EPSILON-1.0*fupwind[14]+1.732050807568877*(fupwind[10]+fupwind[9]+fupwind[7])-3.0*(fupwind[4]+fupwind[3]+fupwind[2])+5.196152422706631*fupwind[0]); 
  rVal[1] = (1.732050807568877*fupwind[15]+3.0*(fupwind[13]-1.0*(fupwind[12]+fupwind[11]))+5.196152422706631*(fupwind[5]-1.0*(fupwind[8]+fupwind[6]))+9.0*fupwind[1])/(20.78460969082652*EPSILON+fupwind[14]+1.732050807568877*(fupwind[10]-1.0*(fupwind[9]+fupwind[7]))+3.0*(fupwind[2]-1.0*(fupwind[4]+fupwind[3]))+5.196152422706631*fupwind[0]); 
  rVal[2] = (1.732050807568877*fupwind[15]+3.0*((-1.0*fupwind[13])+fupwind[12]-1.0*fupwind[11])+5.196152422706631*((-1.0*fupwind[8])+fupwind[6]-1.0*fupwind[5])+9.0*fupwind[1])/(20.78460969082652*EPSILON+fupwind[14]+1.732050807568877*((-1.0*fupwind[10])+fupwind[9]-1.0*fupwind[7])+3.0*((-1.0*fupwind[4])+fupwind[3]-1.0*fupwind[2])+5.196152422706631*fupwind[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fupwind[15]+3.0*(fupwind[13]+fupwind[12]-1.0*fupwind[11])+5.196152422706631*fupwind[8]-1.0*(5.196152422706631*(fupwind[6]+fupwind[5])+9.0*fupwind[1])))/(20.78460969082652*EPSILON-1.0*fupwind[14]+1.732050807568877*(fupwind[7]-1.0*(fupwind[10]+fupwind[9]))+3.0*((-1.0*fupwind[4])+fupwind[3]+fupwind[2])+5.196152422706631*fupwind[0]); 
  rVal[4] = (1.732050807568877*fupwind[15]+3.0*(fupwind[11]-1.0*(fupwind[13]+fupwind[12]))+5.196152422706631*(fupwind[8]-1.0*(fupwind[6]+fupwind[5]))+9.0*fupwind[1])/(20.78460969082652*EPSILON+fupwind[14]+1.732050807568877*(fupwind[7]-1.0*(fupwind[10]+fupwind[9]))+3.0*(fupwind[4]-1.0*(fupwind[3]+fupwind[2]))+5.196152422706631*fupwind[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fupwind[15]+3.0*(fupwind[13]-1.0*fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[6]-1.0*fupwind[8])-1.0*(5.196152422706631*fupwind[5]+9.0*fupwind[1])))/(20.78460969082652*EPSILON-1.0*fupwind[14]+1.732050807568877*((-1.0*fupwind[10])+fupwind[9]-1.0*fupwind[7])+3.0*(fupwind[4]-1.0*fupwind[3]+fupwind[2])+5.196152422706631*fupwind[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fupwind[15]+3.0*((-1.0*fupwind[13])+fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[5]-1.0*(fupwind[8]+fupwind[6]))-9.0*fupwind[1]))/(20.78460969082652*EPSILON-1.0*fupwind[14]+1.732050807568877*(fupwind[10]-1.0*(fupwind[9]+fupwind[7]))+3.0*(fupwind[4]+fupwind[3]-1.0*fupwind[2])+5.196152422706631*fupwind[0]); 
  rVal[7] = (1.732050807568877*fupwind[15]+3.0*(fupwind[13]+fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[8]+fupwind[6]+fupwind[5])+9.0*fupwind[1])/(20.78460969082652*EPSILON+fupwind[14]+1.732050807568877*(fupwind[10]+fupwind[9]+fupwind[7])+3.0*(fupwind[4]+fupwind[3]+fupwind[2])+5.196152422706631*fupwind[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on x surface 
  fqVal[0] = -0.04811252243246882*(fupwind[14]-1.732050807568877*(fupwind[10]+fupwind[9]+fupwind[7])+3.0*(fupwind[4]+fupwind[3]+fupwind[2])-5.196152422706631*fupwind[0])*limTheta(rVal[0],-1.0,cflR); 
  fqVal[1] = 0.04811252243246882*(fupwind[14]+1.732050807568877*(fupwind[10]-1.0*(fupwind[9]+fupwind[7]))+3.0*(fupwind[2]-1.0*(fupwind[4]+fupwind[3]))+5.196152422706631*fupwind[0])*limTheta(rVal[1],-1.0,cflR); 
  fqVal[2] = 0.04811252243246882*(fupwind[14]+1.732050807568877*((-1.0*fupwind[10])+fupwind[9]-1.0*fupwind[7])+3.0*((-1.0*fupwind[4])+fupwind[3]-1.0*fupwind[2])+5.196152422706631*fupwind[0])*limTheta(rVal[2],-1.0,cflR); 
  fqVal[3] = -0.04811252243246882*(fupwind[14]+1.732050807568877*(fupwind[10]+fupwind[9]-1.0*fupwind[7])+3.0*fupwind[4]-1.0*(3.0*(fupwind[3]+fupwind[2])+5.196152422706631*fupwind[0]))*limTheta(rVal[3],-1.0,cflR); 
  fqVal[4] = 0.04811252243246882*(fupwind[14]+1.732050807568877*(fupwind[7]-1.0*(fupwind[10]+fupwind[9]))+3.0*(fupwind[4]-1.0*(fupwind[3]+fupwind[2]))+5.196152422706631*fupwind[0])*limTheta(rVal[4],-1.0,cflR); 
  fqVal[5] = -0.04811252243246882*(fupwind[14]+1.732050807568877*(fupwind[10]-1.0*fupwind[9]+fupwind[7])+3.0*(fupwind[3]-1.0*fupwind[4])-1.0*(3.0*fupwind[2]+5.196152422706631*fupwind[0]))*limTheta(rVal[5],-1.0,cflR); 
  fqVal[6] = -0.04811252243246882*(fupwind[14]+1.732050807568877*((-1.0*fupwind[10])+fupwind[9]+fupwind[7])+3.0*(fupwind[2]-1.0*(fupwind[4]+fupwind[3]))-5.196152422706631*fupwind[0])*limTheta(rVal[6],-1.0,cflR); 
  fqVal[7] = 0.04811252243246882*(fupwind[14]+1.732050807568877*(fupwind[10]+fupwind[9]+fupwind[7])+3.0*(fupwind[4]+fupwind[3]+fupwind[2])+5.196152422706631*fupwind[0])*limTheta(rVal[7],-1.0,cflR); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_x; 
  incr[1] = -0.4330127018922193*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_x; 
  incr[2] = 0.25*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_x; 
  incr[3] = 0.25*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_x; 
  incr[4] = 0.25*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_x; 
  incr[5] = -0.4330127018922193*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_x; 
  incr[6] = -0.4330127018922193*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_x; 
  incr[7] = 0.25*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_x; 
  incr[8] = -0.4330127018922193*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_x; 
  incr[9] = 0.25*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_x; 
  incr[10] = 0.25*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_x; 
  incr[11] = -0.4330127018922193*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_x; 
  incr[12] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_x; 
  incr[13] = -0.4330127018922193*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_x; 
  incr[14] = 0.25*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_x; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_x; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += incr[1]; 
  outl[2] += -1.0*incr[2]; 
  outl[3] += -1.0*incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += incr[5]; 
  outl[6] += incr[6]; 
  outl[7] += -1.0*incr[7]; 
  outl[8] += incr[8]; 
  outl[9] += -1.0*incr[9]; 
  outl[10] += -1.0*incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += incr[12]; 
  outl[13] += incr[13]; 
  outl[14] += -1.0*incr[14]; 
  outl[15] += incr[15]; 
#endif
  return std::abs(alpha0); 
} 
double GyrokineticSurfPositivity2x2vSer_Y_P1_Bvars_0(const double q_, const double m_, const double cflL, const double cflR, const double *w, const double *dxv, const double amax_in, const double *Bmag, const double *BmagInv, const double *Gradpar, const double *BdriftX, const double *BdriftY, const double *Phi, const double *fl, const double *fr, double *outl, double *outr) 
{ 
// w[NDIM]: Cell-center coordinates. dxv[NDIM]: Cell spacing. H/f: Input Hamiltonian/distribution function. out: Incremented output 
  double dfac_x = 2.0/dxv[0]; 
  double dfac_y = 2.0/dxv[1]; 
  double dfac_v = 2.0/dxv[2]; 
  double dfac_m = 2.0/dxv[3]; 
  double wx = w[0]; 
  double wy = w[1]; 
  double wv = w[2]; 
  double wm = w[3]; 
  double wv2 = wv*wv; 
  double dfac_v2 = dfac_v*dfac_v; 
  double q2 = q_*q_; 
  double incr[16]; 
  // surface-averaged phase velocity in this direction 
  double alpha0 = (0.125*(2.0*BdriftY[0]*m_*wv2+BmagInv[0]*(1.732050807568877*Phi[1]-3.0*Phi[3])*dfac_x*q_))/q_; 

  double alpha[8]; 
  alpha[0] = (0.5*(2.828427124746191*BdriftY[0]*m_*wv2+BmagInv[0]*(2.449489742783178*Phi[1]-4.242640687119286*Phi[3])*dfac_x*q_))/q_; 
  alpha[2] = (0.8164965809277261*BdriftY[0]*m_*wv)/(dfac_v*q_); 
#if upwindType == SURFAVG 
  if (alpha0>0) { 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than y 
  rVal[0] = -(1.0*(1.732050807568877*fl[15]-3.0*(fl[14]+fl[12]+fl[11])+5.196152422706631*(fl[9]+fl[7]+fl[5])-9.0*fl[2]))/(20.78460969082652*EPSILON-1.0*fl[13]+1.732050807568877*(fl[10]+fl[8]+fl[6])-3.0*(fl[4]+fl[3]+fl[1])+5.196152422706631*fl[0]); 
  rVal[1] = (1.732050807568877*fl[15]+3.0*(fl[14]-1.0*(fl[12]+fl[11]))+5.196152422706631*(fl[5]-1.0*(fl[9]+fl[7]))+9.0*fl[2])/(20.78460969082652*EPSILON+fl[13]+1.732050807568877*(fl[10]-1.0*(fl[8]+fl[6]))+3.0*(fl[1]-1.0*(fl[4]+fl[3]))+5.196152422706631*fl[0]); 
  rVal[2] = (1.732050807568877*fl[15]+3.0*((-1.0*fl[14])+fl[12]-1.0*fl[11])+5.196152422706631*((-1.0*fl[9])+fl[7]-1.0*fl[5])+9.0*fl[2])/(20.78460969082652*EPSILON+fl[13]+1.732050807568877*((-1.0*fl[10])+fl[8]-1.0*fl[6])+3.0*((-1.0*fl[4])+fl[3]-1.0*fl[1])+5.196152422706631*fl[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fl[15]+3.0*(fl[14]+fl[12]-1.0*fl[11])+5.196152422706631*fl[9]-1.0*(5.196152422706631*(fl[7]+fl[5])+9.0*fl[2])))/(20.78460969082652*EPSILON-1.0*fl[13]+1.732050807568877*(fl[6]-1.0*(fl[10]+fl[8]))+3.0*((-1.0*fl[4])+fl[3]+fl[1])+5.196152422706631*fl[0]); 
  rVal[4] = (1.732050807568877*fl[15]+3.0*(fl[11]-1.0*(fl[14]+fl[12]))+5.196152422706631*(fl[9]-1.0*(fl[7]+fl[5]))+9.0*fl[2])/(20.78460969082652*EPSILON+fl[13]+1.732050807568877*(fl[6]-1.0*(fl[10]+fl[8]))+3.0*(fl[4]-1.0*(fl[3]+fl[1]))+5.196152422706631*fl[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fl[15]+3.0*(fl[14]-1.0*fl[12]+fl[11])+5.196152422706631*(fl[7]-1.0*fl[9])-1.0*(5.196152422706631*fl[5]+9.0*fl[2])))/(20.78460969082652*EPSILON-1.0*fl[13]+1.732050807568877*((-1.0*fl[10])+fl[8]-1.0*fl[6])+3.0*(fl[4]-1.0*fl[3]+fl[1])+5.196152422706631*fl[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fl[15]+3.0*((-1.0*fl[14])+fl[12]+fl[11])+5.196152422706631*(fl[5]-1.0*(fl[9]+fl[7]))-9.0*fl[2]))/(20.78460969082652*EPSILON-1.0*fl[13]+1.732050807568877*(fl[10]-1.0*(fl[8]+fl[6]))+3.0*(fl[4]+fl[3]-1.0*fl[1])+5.196152422706631*fl[0]); 
  rVal[7] = (1.732050807568877*fl[15]+3.0*(fl[14]+fl[12]+fl[11])+5.196152422706631*(fl[9]+fl[7]+fl[5])+9.0*fl[2])/(20.78460969082652*EPSILON+fl[13]+1.732050807568877*(fl[10]+fl[8]+fl[6])+3.0*(fl[4]+fl[3]+fl[1])+5.196152422706631*fl[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on y surface 
  fqVal[0] = -0.04811252243246882*(fl[13]-1.732050807568877*(fl[10]+fl[8]+fl[6])+3.0*(fl[4]+fl[3]+fl[1])-5.196152422706631*fl[0])*limTheta(rVal[0],1.0,cflL); 
  fqVal[1] = 0.04811252243246882*(fl[13]+1.732050807568877*(fl[10]-1.0*(fl[8]+fl[6]))+3.0*(fl[1]-1.0*(fl[4]+fl[3]))+5.196152422706631*fl[0])*limTheta(rVal[1],1.0,cflL); 
  fqVal[2] = 0.04811252243246882*(fl[13]+1.732050807568877*((-1.0*fl[10])+fl[8]-1.0*fl[6])+3.0*((-1.0*fl[4])+fl[3]-1.0*fl[1])+5.196152422706631*fl[0])*limTheta(rVal[2],1.0,cflL); 
  fqVal[3] = -0.04811252243246882*(fl[13]+1.732050807568877*(fl[10]+fl[8]-1.0*fl[6])+3.0*fl[4]-1.0*(3.0*(fl[3]+fl[1])+5.196152422706631*fl[0]))*limTheta(rVal[3],1.0,cflL); 
  fqVal[4] = 0.04811252243246882*(fl[13]+1.732050807568877*(fl[6]-1.0*(fl[10]+fl[8]))+3.0*(fl[4]-1.0*(fl[3]+fl[1]))+5.196152422706631*fl[0])*limTheta(rVal[4],1.0,cflL); 
  fqVal[5] = -0.04811252243246882*(fl[13]+1.732050807568877*(fl[10]-1.0*fl[8]+fl[6])+3.0*(fl[3]-1.0*fl[4])-1.0*(3.0*fl[1]+5.196152422706631*fl[0]))*limTheta(rVal[5],1.0,cflL); 
  fqVal[6] = -0.04811252243246882*(fl[13]+1.732050807568877*((-1.0*fl[10])+fl[8]+fl[6])+3.0*(fl[1]-1.0*(fl[4]+fl[3]))-5.196152422706631*fl[0])*limTheta(rVal[6],1.0,cflL); 
  fqVal[7] = 0.04811252243246882*(fl[13]+1.732050807568877*(fl[10]+fl[8]+fl[6])+3.0*(fl[4]+fl[3]+fl[1])+5.196152422706631*fl[0])*limTheta(rVal[7],1.0,cflL); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_y; 
  incr[1] = 0.25*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_y; 
  incr[2] = -0.4330127018922193*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_y; 
  incr[3] = 0.25*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_y; 
  incr[4] = 0.25*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_y; 
  incr[5] = -0.4330127018922193*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_y; 
  incr[6] = 0.25*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_y; 
  incr[7] = -0.4330127018922193*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_y; 
  incr[8] = 0.25*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_y; 
  incr[9] = -0.4330127018922193*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_y; 
  incr[10] = 0.25*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_y; 
  incr[11] = -0.4330127018922193*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_y; 
  incr[12] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_y; 
  incr[13] = 0.25*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_y; 
  incr[14] = -0.4330127018922193*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_y; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_y; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += incr[2]; 
  outl[3] += -1.0*incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += incr[5]; 
  outl[6] += -1.0*incr[6]; 
  outl[7] += incr[7]; 
  outl[8] += -1.0*incr[8]; 
  outl[9] += incr[9]; 
  outl[10] += -1.0*incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += incr[12]; 
  outl[13] += -1.0*incr[13]; 
  outl[14] += incr[14]; 
  outl[15] += incr[15]; 
  } else { 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than y 
  rVal[0] = -(1.0*(1.732050807568877*fr[15]-3.0*(fr[14]+fr[12]+fr[11])+5.196152422706631*(fr[9]+fr[7]+fr[5])-9.0*fr[2]))/(20.78460969082652*EPSILON-1.0*fr[13]+1.732050807568877*(fr[10]+fr[8]+fr[6])-3.0*(fr[4]+fr[3]+fr[1])+5.196152422706631*fr[0]); 
  rVal[1] = (1.732050807568877*fr[15]+3.0*(fr[14]-1.0*(fr[12]+fr[11]))+5.196152422706631*(fr[5]-1.0*(fr[9]+fr[7]))+9.0*fr[2])/(20.78460969082652*EPSILON+fr[13]+1.732050807568877*(fr[10]-1.0*(fr[8]+fr[6]))+3.0*(fr[1]-1.0*(fr[4]+fr[3]))+5.196152422706631*fr[0]); 
  rVal[2] = (1.732050807568877*fr[15]+3.0*((-1.0*fr[14])+fr[12]-1.0*fr[11])+5.196152422706631*((-1.0*fr[9])+fr[7]-1.0*fr[5])+9.0*fr[2])/(20.78460969082652*EPSILON+fr[13]+1.732050807568877*((-1.0*fr[10])+fr[8]-1.0*fr[6])+3.0*((-1.0*fr[4])+fr[3]-1.0*fr[1])+5.196152422706631*fr[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fr[15]+3.0*(fr[14]+fr[12]-1.0*fr[11])+5.196152422706631*fr[9]-1.0*(5.196152422706631*(fr[7]+fr[5])+9.0*fr[2])))/(20.78460969082652*EPSILON-1.0*fr[13]+1.732050807568877*(fr[6]-1.0*(fr[10]+fr[8]))+3.0*((-1.0*fr[4])+fr[3]+fr[1])+5.196152422706631*fr[0]); 
  rVal[4] = (1.732050807568877*fr[15]+3.0*(fr[11]-1.0*(fr[14]+fr[12]))+5.196152422706631*(fr[9]-1.0*(fr[7]+fr[5]))+9.0*fr[2])/(20.78460969082652*EPSILON+fr[13]+1.732050807568877*(fr[6]-1.0*(fr[10]+fr[8]))+3.0*(fr[4]-1.0*(fr[3]+fr[1]))+5.196152422706631*fr[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fr[15]+3.0*(fr[14]-1.0*fr[12]+fr[11])+5.196152422706631*(fr[7]-1.0*fr[9])-1.0*(5.196152422706631*fr[5]+9.0*fr[2])))/(20.78460969082652*EPSILON-1.0*fr[13]+1.732050807568877*((-1.0*fr[10])+fr[8]-1.0*fr[6])+3.0*(fr[4]-1.0*fr[3]+fr[1])+5.196152422706631*fr[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fr[15]+3.0*((-1.0*fr[14])+fr[12]+fr[11])+5.196152422706631*(fr[5]-1.0*(fr[9]+fr[7]))-9.0*fr[2]))/(20.78460969082652*EPSILON-1.0*fr[13]+1.732050807568877*(fr[10]-1.0*(fr[8]+fr[6]))+3.0*(fr[4]+fr[3]-1.0*fr[1])+5.196152422706631*fr[0]); 
  rVal[7] = (1.732050807568877*fr[15]+3.0*(fr[14]+fr[12]+fr[11])+5.196152422706631*(fr[9]+fr[7]+fr[5])+9.0*fr[2])/(20.78460969082652*EPSILON+fr[13]+1.732050807568877*(fr[10]+fr[8]+fr[6])+3.0*(fr[4]+fr[3]+fr[1])+5.196152422706631*fr[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on y surface 
  fqVal[0] = -0.04811252243246882*(fr[13]-1.732050807568877*(fr[10]+fr[8]+fr[6])+3.0*(fr[4]+fr[3]+fr[1])-5.196152422706631*fr[0])*limTheta(rVal[0],-1.0,cflR); 
  fqVal[1] = 0.04811252243246882*(fr[13]+1.732050807568877*(fr[10]-1.0*(fr[8]+fr[6]))+3.0*(fr[1]-1.0*(fr[4]+fr[3]))+5.196152422706631*fr[0])*limTheta(rVal[1],-1.0,cflR); 
  fqVal[2] = 0.04811252243246882*(fr[13]+1.732050807568877*((-1.0*fr[10])+fr[8]-1.0*fr[6])+3.0*((-1.0*fr[4])+fr[3]-1.0*fr[1])+5.196152422706631*fr[0])*limTheta(rVal[2],-1.0,cflR); 
  fqVal[3] = -0.04811252243246882*(fr[13]+1.732050807568877*(fr[10]+fr[8]-1.0*fr[6])+3.0*fr[4]-1.0*(3.0*(fr[3]+fr[1])+5.196152422706631*fr[0]))*limTheta(rVal[3],-1.0,cflR); 
  fqVal[4] = 0.04811252243246882*(fr[13]+1.732050807568877*(fr[6]-1.0*(fr[10]+fr[8]))+3.0*(fr[4]-1.0*(fr[3]+fr[1]))+5.196152422706631*fr[0])*limTheta(rVal[4],-1.0,cflR); 
  fqVal[5] = -0.04811252243246882*(fr[13]+1.732050807568877*(fr[10]-1.0*fr[8]+fr[6])+3.0*(fr[3]-1.0*fr[4])-1.0*(3.0*fr[1]+5.196152422706631*fr[0]))*limTheta(rVal[5],-1.0,cflR); 
  fqVal[6] = -0.04811252243246882*(fr[13]+1.732050807568877*((-1.0*fr[10])+fr[8]+fr[6])+3.0*(fr[1]-1.0*(fr[4]+fr[3]))-5.196152422706631*fr[0])*limTheta(rVal[6],-1.0,cflR); 
  fqVal[7] = 0.04811252243246882*(fr[13]+1.732050807568877*(fr[10]+fr[8]+fr[6])+3.0*(fr[4]+fr[3]+fr[1])+5.196152422706631*fr[0])*limTheta(rVal[7],-1.0,cflR); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_y; 
  incr[1] = 0.25*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_y; 
  incr[2] = -0.4330127018922193*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_y; 
  incr[3] = 0.25*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_y; 
  incr[4] = 0.25*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_y; 
  incr[5] = -0.4330127018922193*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_y; 
  incr[6] = 0.25*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_y; 
  incr[7] = -0.4330127018922193*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_y; 
  incr[8] = 0.25*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_y; 
  incr[9] = -0.4330127018922193*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_y; 
  incr[10] = 0.25*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_y; 
  incr[11] = -0.4330127018922193*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_y; 
  incr[12] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_y; 
  incr[13] = 0.25*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_y; 
  incr[14] = -0.4330127018922193*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_y; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_y; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += incr[2]; 
  outl[3] += -1.0*incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += incr[5]; 
  outl[6] += -1.0*incr[6]; 
  outl[7] += incr[7]; 
  outl[8] += -1.0*incr[8]; 
  outl[9] += incr[9]; 
  outl[10] += -1.0*incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += incr[12]; 
  outl[13] += -1.0*incr[13]; 
  outl[14] += incr[14]; 
  outl[15] += incr[15]; 
  } 
#elif upwindType == QUAD 
double fupwind[16];
double fupwindQuad[16];
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[0] = (-0.25*fl[15])+0.25*fl[14]-0.25*fl[13]+0.25*(fl[12]+fl[11]+fl[10])-0.25*fl[9]+0.25*fl[8]-0.25*fl[7]+0.25*fl[6]-0.25*(fl[5]+fl[4]+fl[3])+0.25*fl[2]-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[0] = 0.25*fr[15]-0.25*(fr[14]+fr[13]+fr[12]+fr[11])+0.25*(fr[10]+fr[9]+fr[8]+fr[7]+fr[6]+fr[5])-0.25*(fr[4]+fr[3]+fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[1] = 0.25*(fl[15]+fl[14]+fl[13])-0.25*(fl[12]+fl[11])+0.25*fl[10]-0.25*(fl[9]+fl[8]+fl[7]+fl[6])+0.25*fl[5]-0.25*(fl[4]+fl[3])+0.25*(fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[1] = (-0.25*(fr[15]+fr[14]))+0.25*(fr[13]+fr[12]+fr[11]+fr[10]+fr[9])-0.25*fr[8]+0.25*fr[7]-0.25*(fr[6]+fr[5]+fr[4]+fr[3]+fr[2])+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[2] = 0.25*fl[15]-0.25*(fl[14]+fl[13]+fl[12]+fl[11])+0.25*(fl[10]+fl[9]+fl[8]+fl[7]+fl[6]+fl[5])-0.25*(fl[4]+fl[3]+fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[2] = (-0.25*fr[15])+0.25*fr[14]-0.25*fr[13]+0.25*(fr[12]+fr[11]+fr[10])-0.25*fr[9]+0.25*fr[8]-0.25*fr[7]+0.25*fr[6]-0.25*(fr[5]+fr[4]+fr[3])+0.25*fr[2]-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[3] = (-0.25*(fl[15]+fl[14]))+0.25*(fl[13]+fl[12]+fl[11]+fl[10]+fl[9])-0.25*fl[8]+0.25*fl[7]-0.25*(fl[6]+fl[5]+fl[4]+fl[3]+fl[2])+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[3] = 0.25*(fr[15]+fr[14]+fr[13])-0.25*(fr[12]+fr[11])+0.25*fr[10]-0.25*(fr[9]+fr[8]+fr[7]+fr[6])+0.25*fr[5]-0.25*(fr[4]+fr[3])+0.25*(fr[2]+fr[1]+fr[0]); 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[4] = 0.25*fl[15]-0.25*fl[14]+0.25*(fl[13]+fl[12])-0.25*(fl[11]+fl[10]+fl[9])+0.25*(fl[8]+fl[7])-0.25*(fl[6]+fl[5]+fl[4])+0.25*(fl[3]+fl[2])-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[4] = (-0.25*fr[15])+0.25*(fr[14]+fr[13])-0.25*fr[12]+0.25*fr[11]-0.25*fr[10]+0.25*(fr[9]+fr[8])-0.25*(fr[7]+fr[6])+0.25*fr[5]-0.25*fr[4]+0.25*fr[3]-0.25*(fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[5] = (-0.25*(fl[15]+fl[14]+fl[13]+fl[12]))+0.25*fl[11]-0.25*(fl[10]+fl[9]+fl[8])+0.25*(fl[7]+fl[6]+fl[5])-0.25*fl[4]+0.25*(fl[3]+fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[5] = 0.25*(fr[15]+fr[14])-0.25*fr[13]+0.25*fr[12]-0.25*(fr[11]+fr[10])+0.25*fr[9]-0.25*(fr[8]+fr[7])+0.25*fr[6]-0.25*(fr[5]+fr[4])+0.25*fr[3]-0.25*fr[2]+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[6] = (-0.25*fl[15])+0.25*(fl[14]+fl[13])-0.25*fl[12]+0.25*fl[11]-0.25*fl[10]+0.25*(fl[9]+fl[8])-0.25*(fl[7]+fl[6])+0.25*fl[5]-0.25*fl[4]+0.25*fl[3]-0.25*(fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[6] = 0.25*fr[15]-0.25*fr[14]+0.25*(fr[13]+fr[12])-0.25*(fr[11]+fr[10]+fr[9])+0.25*(fr[8]+fr[7])-0.25*(fr[6]+fr[5]+fr[4])+0.25*(fr[3]+fr[2])-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[7] = 0.25*(fl[15]+fl[14])-0.25*fl[13]+0.25*fl[12]-0.25*(fl[11]+fl[10])+0.25*fl[9]-0.25*(fl[8]+fl[7])+0.25*fl[6]-0.25*(fl[5]+fl[4])+0.25*fl[3]-0.25*fl[2]+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[7] = (-0.25*(fr[15]+fr[14]+fr[13]+fr[12]))+0.25*fr[11]-0.25*(fr[10]+fr[9]+fr[8])+0.25*(fr[7]+fr[6]+fr[5])-0.25*fr[4]+0.25*(fr[3]+fr[2]+fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[8] = 0.25*fl[15]-0.25*fl[14]+0.25*fl[13]-0.25*fl[12]+0.25*fl[11]-0.25*fl[10]+0.25*fl[9]-0.25*(fl[8]+fl[7])+0.25*fl[6]-0.25*fl[5]+0.25*fl[4]-0.25*fl[3]+0.25*fl[2]-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[8] = (-0.25*fr[15])+0.25*(fr[14]+fr[13]+fr[12])-0.25*(fr[11]+fr[10]+fr[9]+fr[8])+0.25*(fr[7]+fr[6]+fr[5]+fr[4])-0.25*(fr[3]+fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[9] = (-0.25*(fl[15]+fl[14]+fl[13]))+0.25*fl[12]-0.25*(fl[11]+fl[10])+0.25*(fl[9]+fl[8])-0.25*(fl[7]+fl[6])+0.25*(fl[5]+fl[4])-0.25*fl[3]+0.25*(fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[9] = 0.25*(fr[15]+fr[14])-0.25*(fr[13]+fr[12])+0.25*fr[11]-0.25*(fr[10]+fr[9])+0.25*(fr[8]+fr[7])-0.25*(fr[6]+fr[5])+0.25*fr[4]-0.25*(fr[3]+fr[2])+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[10] = (-0.25*fl[15])+0.25*(fl[14]+fl[13]+fl[12])-0.25*(fl[11]+fl[10]+fl[9]+fl[8])+0.25*(fl[7]+fl[6]+fl[5]+fl[4])-0.25*(fl[3]+fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[10] = 0.25*fr[15]-0.25*fr[14]+0.25*fr[13]-0.25*fr[12]+0.25*fr[11]-0.25*fr[10]+0.25*fr[9]-0.25*(fr[8]+fr[7])+0.25*fr[6]-0.25*fr[5]+0.25*fr[4]-0.25*fr[3]+0.25*fr[2]-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[11] = 0.25*(fl[15]+fl[14])-0.25*(fl[13]+fl[12])+0.25*fl[11]-0.25*(fl[10]+fl[9])+0.25*(fl[8]+fl[7])-0.25*(fl[6]+fl[5])+0.25*fl[4]-0.25*(fl[3]+fl[2])+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[11] = (-0.25*(fr[15]+fr[14]+fr[13]))+0.25*fr[12]-0.25*(fr[11]+fr[10])+0.25*(fr[9]+fr[8])-0.25*(fr[7]+fr[6])+0.25*(fr[5]+fr[4])-0.25*fr[3]+0.25*(fr[2]+fr[1]+fr[0]); 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[12] = (-0.25*fl[15])+0.25*fl[14]-0.25*(fl[13]+fl[12]+fl[11])+0.25*(fl[10]+fl[9])-0.25*fl[8]+0.25*fl[7]-0.25*(fl[6]+fl[5])+0.25*(fl[4]+fl[3]+fl[2])-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[12] = 0.25*fr[15]-0.25*(fr[14]+fr[13])+0.25*(fr[12]+fr[11]+fr[10])-0.25*(fr[9]+fr[8]+fr[7]+fr[6])+0.25*(fr[5]+fr[4]+fr[3])-0.25*(fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[13] = 0.25*(fl[15]+fl[14]+fl[13]+fl[12]+fl[11]+fl[10]+fl[9]+fl[8]+fl[7]+fl[6]+fl[5]+fl[4]+fl[3]+fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[13] = (-0.25*(fr[15]+fr[14]))+0.25*fr[13]-0.25*(fr[12]+fr[11])+0.25*fr[10]-0.25*fr[9]+0.25*fr[8]-0.25*fr[7]+0.25*fr[6]-0.25*fr[5]+0.25*(fr[4]+fr[3])-0.25*fr[2]+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[14] = 0.25*fl[15]-0.25*(fl[14]+fl[13])+0.25*(fl[12]+fl[11]+fl[10])-0.25*(fl[9]+fl[8]+fl[7]+fl[6])+0.25*(fl[5]+fl[4]+fl[3])-0.25*(fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[14] = (-0.25*fr[15])+0.25*fr[14]-0.25*(fr[13]+fr[12]+fr[11])+0.25*(fr[10]+fr[9])-0.25*fr[8]+0.25*fr[7]-0.25*(fr[6]+fr[5])+0.25*(fr[4]+fr[3]+fr[2])-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[15] = (-0.25*(fl[15]+fl[14]))+0.25*fl[13]-0.25*(fl[12]+fl[11])+0.25*fl[10]-0.25*fl[9]+0.25*fl[8]-0.25*fl[7]+0.25*fl[6]-0.25*fl[5]+0.25*(fl[4]+fl[3])-0.25*fl[2]+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[15] = 0.25*(fr[15]+fr[14]+fr[13]+fr[12]+fr[11]+fr[10]+fr[9]+fr[8]+fr[7]+fr[6]+fr[5]+fr[4]+fr[3]+fr[2]+fr[1]+fr[0]); 
  }
  fupwind[0] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[1] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*fupwindQuad[12]+fupwindQuad[11]-1.0*fupwindQuad[10]+fupwindQuad[9]-1.0*fupwindQuad[8]+fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[2] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12])+fupwindQuad[11]+fupwindQuad[10]-1.0*(fupwindQuad[9]+fupwindQuad[8])+fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[3] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]-1.0*(fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8])+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[4] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]-1.0*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[5] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]+fupwindQuad[11]-1.0*(fupwindQuad[10]+fupwindQuad[9])+fupwindQuad[8]+fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  fupwind[6] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*(fupwindQuad[12]+fupwindQuad[11])+fupwindQuad[10]-1.0*fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[7] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10])+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[8] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*fupwindQuad[12]+fupwindQuad[11]-1.0*fupwindQuad[10]+fupwindQuad[9]-1.0*(fupwindQuad[8]+fupwindQuad[7])+fupwindQuad[6]-1.0*fupwindQuad[5]+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[9] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12])+fupwindQuad[11]+fupwindQuad[10]-1.0*(fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6])+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[10] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]-1.0*(fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[11] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]-1.0*fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]-1.0*fupwindQuad[8]+fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[12] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]+fupwindQuad[11]-1.0*(fupwindQuad[10]+fupwindQuad[9])+fupwindQuad[8]-1.0*fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[13] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*(fupwindQuad[12]+fupwindQuad[11])+fupwindQuad[10]-1.0*fupwindQuad[9]+fupwindQuad[8]-1.0*fupwindQuad[7]+fupwindQuad[6]-1.0*fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[14] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10])+fupwindQuad[9]+fupwindQuad[8]-1.0*(fupwindQuad[7]+fupwindQuad[6])+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[15] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]-1.0*fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]-1.0*(fupwindQuad[8]+fupwindQuad[7])+fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than y 
  rVal[0] = -(1.0*(1.732050807568877*fupwind[15]-3.0*(fupwind[14]+fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[9]+fupwind[7]+fupwind[5])-9.0*fupwind[2]))/(20.78460969082652*EPSILON-1.0*fupwind[13]+1.732050807568877*(fupwind[10]+fupwind[8]+fupwind[6])-3.0*(fupwind[4]+fupwind[3]+fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[1] = (1.732050807568877*fupwind[15]+3.0*(fupwind[14]-1.0*(fupwind[12]+fupwind[11]))+5.196152422706631*(fupwind[5]-1.0*(fupwind[9]+fupwind[7]))+9.0*fupwind[2])/(20.78460969082652*EPSILON+fupwind[13]+1.732050807568877*(fupwind[10]-1.0*(fupwind[8]+fupwind[6]))+3.0*(fupwind[1]-1.0*(fupwind[4]+fupwind[3]))+5.196152422706631*fupwind[0]); 
  rVal[2] = (1.732050807568877*fupwind[15]+3.0*((-1.0*fupwind[14])+fupwind[12]-1.0*fupwind[11])+5.196152422706631*((-1.0*fupwind[9])+fupwind[7]-1.0*fupwind[5])+9.0*fupwind[2])/(20.78460969082652*EPSILON+fupwind[13]+1.732050807568877*((-1.0*fupwind[10])+fupwind[8]-1.0*fupwind[6])+3.0*((-1.0*fupwind[4])+fupwind[3]-1.0*fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fupwind[15]+3.0*(fupwind[14]+fupwind[12]-1.0*fupwind[11])+5.196152422706631*fupwind[9]-1.0*(5.196152422706631*(fupwind[7]+fupwind[5])+9.0*fupwind[2])))/(20.78460969082652*EPSILON-1.0*fupwind[13]+1.732050807568877*(fupwind[6]-1.0*(fupwind[10]+fupwind[8]))+3.0*((-1.0*fupwind[4])+fupwind[3]+fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[4] = (1.732050807568877*fupwind[15]+3.0*(fupwind[11]-1.0*(fupwind[14]+fupwind[12]))+5.196152422706631*(fupwind[9]-1.0*(fupwind[7]+fupwind[5]))+9.0*fupwind[2])/(20.78460969082652*EPSILON+fupwind[13]+1.732050807568877*(fupwind[6]-1.0*(fupwind[10]+fupwind[8]))+3.0*(fupwind[4]-1.0*(fupwind[3]+fupwind[1]))+5.196152422706631*fupwind[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fupwind[15]+3.0*(fupwind[14]-1.0*fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[7]-1.0*fupwind[9])-1.0*(5.196152422706631*fupwind[5]+9.0*fupwind[2])))/(20.78460969082652*EPSILON-1.0*fupwind[13]+1.732050807568877*((-1.0*fupwind[10])+fupwind[8]-1.0*fupwind[6])+3.0*(fupwind[4]-1.0*fupwind[3]+fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fupwind[15]+3.0*((-1.0*fupwind[14])+fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[5]-1.0*(fupwind[9]+fupwind[7]))-9.0*fupwind[2]))/(20.78460969082652*EPSILON-1.0*fupwind[13]+1.732050807568877*(fupwind[10]-1.0*(fupwind[8]+fupwind[6]))+3.0*(fupwind[4]+fupwind[3]-1.0*fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[7] = (1.732050807568877*fupwind[15]+3.0*(fupwind[14]+fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[9]+fupwind[7]+fupwind[5])+9.0*fupwind[2])/(20.78460969082652*EPSILON+fupwind[13]+1.732050807568877*(fupwind[10]+fupwind[8]+fupwind[6])+3.0*(fupwind[4]+fupwind[3]+fupwind[1])+5.196152422706631*fupwind[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on y surface 
  fqVal[0] = -0.04811252243246882*(fupwind[13]-1.732050807568877*(fupwind[10]+fupwind[8]+fupwind[6])+3.0*(fupwind[4]+fupwind[3]+fupwind[1])-5.196152422706631*fupwind[0])*limTheta(rVal[0],-1.0,cflR); 
  fqVal[1] = 0.04811252243246882*(fupwind[13]+1.732050807568877*(fupwind[10]-1.0*(fupwind[8]+fupwind[6]))+3.0*(fupwind[1]-1.0*(fupwind[4]+fupwind[3]))+5.196152422706631*fupwind[0])*limTheta(rVal[1],-1.0,cflR); 
  fqVal[2] = 0.04811252243246882*(fupwind[13]+1.732050807568877*((-1.0*fupwind[10])+fupwind[8]-1.0*fupwind[6])+3.0*((-1.0*fupwind[4])+fupwind[3]-1.0*fupwind[1])+5.196152422706631*fupwind[0])*limTheta(rVal[2],-1.0,cflR); 
  fqVal[3] = -0.04811252243246882*(fupwind[13]+1.732050807568877*(fupwind[10]+fupwind[8]-1.0*fupwind[6])+3.0*fupwind[4]-1.0*(3.0*(fupwind[3]+fupwind[1])+5.196152422706631*fupwind[0]))*limTheta(rVal[3],-1.0,cflR); 
  fqVal[4] = 0.04811252243246882*(fupwind[13]+1.732050807568877*(fupwind[6]-1.0*(fupwind[10]+fupwind[8]))+3.0*(fupwind[4]-1.0*(fupwind[3]+fupwind[1]))+5.196152422706631*fupwind[0])*limTheta(rVal[4],-1.0,cflR); 
  fqVal[5] = -0.04811252243246882*(fupwind[13]+1.732050807568877*(fupwind[10]-1.0*fupwind[8]+fupwind[6])+3.0*(fupwind[3]-1.0*fupwind[4])-1.0*(3.0*fupwind[1]+5.196152422706631*fupwind[0]))*limTheta(rVal[5],-1.0,cflR); 
  fqVal[6] = -0.04811252243246882*(fupwind[13]+1.732050807568877*((-1.0*fupwind[10])+fupwind[8]+fupwind[6])+3.0*(fupwind[1]-1.0*(fupwind[4]+fupwind[3]))-5.196152422706631*fupwind[0])*limTheta(rVal[6],-1.0,cflR); 
  fqVal[7] = 0.04811252243246882*(fupwind[13]+1.732050807568877*(fupwind[10]+fupwind[8]+fupwind[6])+3.0*(fupwind[4]+fupwind[3]+fupwind[1])+5.196152422706631*fupwind[0])*limTheta(rVal[7],-1.0,cflR); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_y; 
  incr[1] = 0.25*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_y; 
  incr[2] = -0.4330127018922193*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_y; 
  incr[3] = 0.25*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_y; 
  incr[4] = 0.25*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_y; 
  incr[5] = -0.4330127018922193*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_y; 
  incr[6] = 0.25*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_y; 
  incr[7] = -0.4330127018922193*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_y; 
  incr[8] = 0.25*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_y; 
  incr[9] = -0.4330127018922193*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_y; 
  incr[10] = 0.25*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_y; 
  incr[11] = -0.4330127018922193*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_y; 
  incr[12] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_y; 
  incr[13] = 0.25*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_y; 
  incr[14] = -0.4330127018922193*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_y; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_y; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += incr[2]; 
  outl[3] += -1.0*incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += incr[5]; 
  outl[6] += -1.0*incr[6]; 
  outl[7] += incr[7]; 
  outl[8] += -1.0*incr[8]; 
  outl[9] += incr[9]; 
  outl[10] += -1.0*incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += incr[12]; 
  outl[13] += -1.0*incr[13]; 
  outl[14] += incr[14]; 
  outl[15] += incr[15]; 
#endif
  return std::abs(alpha0); 
} 
double GyrokineticSurfPositivity2x2vSer_Vpar_P1_Bvars_0(const double q_, const double m_, const double cflL, const double cflR, const double *w, const double *dxv, const double amax_in, const double *Bmag, const double *BmagInv, const double *Gradpar, const double *BdriftX, const double *BdriftY, const double *Phi, const double *fl, const double *fr, double *outl, double *outr) 
{ 
// w[NDIM]: Cell-center coordinates. dxv[NDIM]: Cell spacing. H/f: Input Hamiltonian/distribution function. out: Incremented output 
  double dfac_x = 2.0/dxv[0]; 
  double dfac_y = 2.0/dxv[1]; 
  double dfac_v = 2.0/dxv[2]; 
  double dfac_m = 2.0/dxv[3]; 
  double wx = w[0]; 
  double wy = w[1]; 
  double wv = w[2]; 
  double wm = w[3]; 
  double wv2 = wv*wv; 
  double dfac_v2 = dfac_v*dfac_v; 
  double q2 = q_*q_; 
  double incr[16]; 
  // surface-averaged phase velocity in this direction 
  double alpha0 = -(0.2165063509461096*(dfac_v*(BdriftY[0]*Phi[2]*dfac_y+BdriftX[0]*Phi[1]*dfac_x)*wv-1.0*(BdriftY[0]*Phi[2]*dfac_y+BdriftX[0]*Phi[1]*dfac_x)))/dfac_v; 

  double alpha[8]; 
  alpha[0] = -(0.7071067811865475*(BdriftY[0]*Phi[2]*dfac_y+BdriftX[0]*Phi[1]*dfac_x)*(1.732050807568877*dfac_v*wv-1.732050807568877))/dfac_v; 
  alpha[1] = -(0.7071067811865475*BdriftY[0]*Phi[3]*dfac_y*(1.732050807568877*dfac_v*wv-1.732050807568877))/dfac_v; 
  alpha[2] = -(0.7071067811865475*BdriftX[0]*Phi[3]*dfac_x*(1.732050807568877*dfac_v*wv-1.732050807568877))/dfac_v; 
#if upwindType == SURFAVG 
  if (alpha0>0) { 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than vx 
  rVal[0] = -(1.0*(1.732050807568877*fl[15]-3.0*(fl[14]+fl[13]+fl[11])+5.196152422706631*(fl[10]+fl[7]+fl[6])-9.0*fl[3]))/(20.78460969082652*EPSILON-1.0*fl[12]+1.732050807568877*(fl[9]+fl[8]+fl[5])-3.0*(fl[4]+fl[2]+fl[1])+5.196152422706631*fl[0]); 
  rVal[1] = (1.732050807568877*fl[15]+3.0*(fl[14]-1.0*(fl[13]+fl[11]))+5.196152422706631*(fl[6]-1.0*(fl[10]+fl[7]))+9.0*fl[3])/(20.78460969082652*EPSILON+fl[12]+1.732050807568877*(fl[9]-1.0*(fl[8]+fl[5]))+3.0*(fl[1]-1.0*(fl[4]+fl[2]))+5.196152422706631*fl[0]); 
  rVal[2] = (1.732050807568877*fl[15]+3.0*((-1.0*fl[14])+fl[13]-1.0*fl[11])+5.196152422706631*((-1.0*fl[10])+fl[7]-1.0*fl[6])+9.0*fl[3])/(20.78460969082652*EPSILON+fl[12]+1.732050807568877*((-1.0*fl[9])+fl[8]-1.0*fl[5])+3.0*((-1.0*fl[4])+fl[2]-1.0*fl[1])+5.196152422706631*fl[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fl[15]+3.0*(fl[14]+fl[13]-1.0*fl[11])+5.196152422706631*fl[10]-1.0*(5.196152422706631*(fl[7]+fl[6])+9.0*fl[3])))/(20.78460969082652*EPSILON-1.0*fl[12]+1.732050807568877*(fl[5]-1.0*(fl[9]+fl[8]))+3.0*((-1.0*fl[4])+fl[2]+fl[1])+5.196152422706631*fl[0]); 
  rVal[4] = (1.732050807568877*fl[15]+3.0*(fl[11]-1.0*(fl[14]+fl[13]))+5.196152422706631*(fl[10]-1.0*(fl[7]+fl[6]))+9.0*fl[3])/(20.78460969082652*EPSILON+fl[12]+1.732050807568877*(fl[5]-1.0*(fl[9]+fl[8]))+3.0*(fl[4]-1.0*(fl[2]+fl[1]))+5.196152422706631*fl[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fl[15]+3.0*(fl[14]-1.0*fl[13]+fl[11])+5.196152422706631*(fl[7]-1.0*fl[10])-1.0*(5.196152422706631*fl[6]+9.0*fl[3])))/(20.78460969082652*EPSILON-1.0*fl[12]+1.732050807568877*((-1.0*fl[9])+fl[8]-1.0*fl[5])+3.0*(fl[4]-1.0*fl[2]+fl[1])+5.196152422706631*fl[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fl[15]+3.0*((-1.0*fl[14])+fl[13]+fl[11])+5.196152422706631*(fl[6]-1.0*(fl[10]+fl[7]))-9.0*fl[3]))/(20.78460969082652*EPSILON-1.0*fl[12]+1.732050807568877*(fl[9]-1.0*(fl[8]+fl[5]))+3.0*(fl[4]+fl[2]-1.0*fl[1])+5.196152422706631*fl[0]); 
  rVal[7] = (1.732050807568877*fl[15]+3.0*(fl[14]+fl[13]+fl[11])+5.196152422706631*(fl[10]+fl[7]+fl[6])+9.0*fl[3])/(20.78460969082652*EPSILON+fl[12]+1.732050807568877*(fl[9]+fl[8]+fl[5])+3.0*(fl[4]+fl[2]+fl[1])+5.196152422706631*fl[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on vx surface 
  fqVal[0] = -0.04811252243246882*(fl[12]-1.732050807568877*(fl[9]+fl[8]+fl[5])+3.0*(fl[4]+fl[2]+fl[1])-5.196152422706631*fl[0])*limTheta(rVal[0],1.0,cflL); 
  fqVal[1] = 0.04811252243246882*(fl[12]+1.732050807568877*(fl[9]-1.0*(fl[8]+fl[5]))+3.0*(fl[1]-1.0*(fl[4]+fl[2]))+5.196152422706631*fl[0])*limTheta(rVal[1],1.0,cflL); 
  fqVal[2] = 0.04811252243246882*(fl[12]+1.732050807568877*((-1.0*fl[9])+fl[8]-1.0*fl[5])+3.0*((-1.0*fl[4])+fl[2]-1.0*fl[1])+5.196152422706631*fl[0])*limTheta(rVal[2],1.0,cflL); 
  fqVal[3] = -0.04811252243246882*(fl[12]+1.732050807568877*(fl[9]+fl[8]-1.0*fl[5])+3.0*fl[4]-1.0*(3.0*(fl[2]+fl[1])+5.196152422706631*fl[0]))*limTheta(rVal[3],1.0,cflL); 
  fqVal[4] = 0.04811252243246882*(fl[12]+1.732050807568877*(fl[5]-1.0*(fl[9]+fl[8]))+3.0*(fl[4]-1.0*(fl[2]+fl[1]))+5.196152422706631*fl[0])*limTheta(rVal[4],1.0,cflL); 
  fqVal[5] = -0.04811252243246882*(fl[12]+1.732050807568877*(fl[9]-1.0*fl[8]+fl[5])+3.0*(fl[2]-1.0*fl[4])-1.0*(3.0*fl[1]+5.196152422706631*fl[0]))*limTheta(rVal[5],1.0,cflL); 
  fqVal[6] = -0.04811252243246882*(fl[12]+1.732050807568877*((-1.0*fl[9])+fl[8]+fl[5])+3.0*(fl[1]-1.0*(fl[4]+fl[2]))-5.196152422706631*fl[0])*limTheta(rVal[6],1.0,cflL); 
  fqVal[7] = 0.04811252243246882*(fl[12]+1.732050807568877*(fl[9]+fl[8]+fl[5])+3.0*(fl[4]+fl[2]+fl[1])+5.196152422706631*fl[0])*limTheta(rVal[7],1.0,cflL); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_v; 
  incr[1] = 0.25*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_v; 
  incr[2] = 0.25*(alpha[1]*fhatALVal[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_v; 
  incr[3] = -0.4330127018922193*(alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_v; 
  incr[4] = 0.25*(alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+alpha[0]*fhatALVal[3])*dfac_v; 
  incr[5] = 0.25*(alpha[0]*fhatALVal[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_v; 
  incr[6] = -0.4330127018922193*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_v; 
  incr[7] = -0.4330127018922193*(alpha[1]*fhatALVal[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_v; 
  incr[8] = 0.25*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5]+alpha[1]*fhatALVal[3])*dfac_v; 
  incr[9] = 0.25*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_v; 
  incr[10] = -0.4330127018922193*(alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+alpha[0]*fhatALVal[3])*dfac_v; 
  incr[11] = -0.4330127018922193*(alpha[0]*fhatALVal[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_v; 
  incr[12] = 0.25*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5])*dfac_v; 
  incr[13] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5]+alpha[1]*fhatALVal[3])*dfac_v; 
  incr[14] = -0.4330127018922193*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_v; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5])*dfac_v; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += -1.0*incr[2]; 
  outl[3] += incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += -1.0*incr[5]; 
  outl[6] += incr[6]; 
  outl[7] += incr[7]; 
  outl[8] += -1.0*incr[8]; 
  outl[9] += -1.0*incr[9]; 
  outl[10] += incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += -1.0*incr[12]; 
  outl[13] += incr[13]; 
  outl[14] += incr[14]; 
  outl[15] += incr[15]; 
  } else { 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than vx 
  rVal[0] = -(1.0*(1.732050807568877*fr[15]-3.0*(fr[14]+fr[13]+fr[11])+5.196152422706631*(fr[10]+fr[7]+fr[6])-9.0*fr[3]))/(20.78460969082652*EPSILON-1.0*fr[12]+1.732050807568877*(fr[9]+fr[8]+fr[5])-3.0*(fr[4]+fr[2]+fr[1])+5.196152422706631*fr[0]); 
  rVal[1] = (1.732050807568877*fr[15]+3.0*(fr[14]-1.0*(fr[13]+fr[11]))+5.196152422706631*(fr[6]-1.0*(fr[10]+fr[7]))+9.0*fr[3])/(20.78460969082652*EPSILON+fr[12]+1.732050807568877*(fr[9]-1.0*(fr[8]+fr[5]))+3.0*(fr[1]-1.0*(fr[4]+fr[2]))+5.196152422706631*fr[0]); 
  rVal[2] = (1.732050807568877*fr[15]+3.0*((-1.0*fr[14])+fr[13]-1.0*fr[11])+5.196152422706631*((-1.0*fr[10])+fr[7]-1.0*fr[6])+9.0*fr[3])/(20.78460969082652*EPSILON+fr[12]+1.732050807568877*((-1.0*fr[9])+fr[8]-1.0*fr[5])+3.0*((-1.0*fr[4])+fr[2]-1.0*fr[1])+5.196152422706631*fr[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fr[15]+3.0*(fr[14]+fr[13]-1.0*fr[11])+5.196152422706631*fr[10]-1.0*(5.196152422706631*(fr[7]+fr[6])+9.0*fr[3])))/(20.78460969082652*EPSILON-1.0*fr[12]+1.732050807568877*(fr[5]-1.0*(fr[9]+fr[8]))+3.0*((-1.0*fr[4])+fr[2]+fr[1])+5.196152422706631*fr[0]); 
  rVal[4] = (1.732050807568877*fr[15]+3.0*(fr[11]-1.0*(fr[14]+fr[13]))+5.196152422706631*(fr[10]-1.0*(fr[7]+fr[6]))+9.0*fr[3])/(20.78460969082652*EPSILON+fr[12]+1.732050807568877*(fr[5]-1.0*(fr[9]+fr[8]))+3.0*(fr[4]-1.0*(fr[2]+fr[1]))+5.196152422706631*fr[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fr[15]+3.0*(fr[14]-1.0*fr[13]+fr[11])+5.196152422706631*(fr[7]-1.0*fr[10])-1.0*(5.196152422706631*fr[6]+9.0*fr[3])))/(20.78460969082652*EPSILON-1.0*fr[12]+1.732050807568877*((-1.0*fr[9])+fr[8]-1.0*fr[5])+3.0*(fr[4]-1.0*fr[2]+fr[1])+5.196152422706631*fr[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fr[15]+3.0*((-1.0*fr[14])+fr[13]+fr[11])+5.196152422706631*(fr[6]-1.0*(fr[10]+fr[7]))-9.0*fr[3]))/(20.78460969082652*EPSILON-1.0*fr[12]+1.732050807568877*(fr[9]-1.0*(fr[8]+fr[5]))+3.0*(fr[4]+fr[2]-1.0*fr[1])+5.196152422706631*fr[0]); 
  rVal[7] = (1.732050807568877*fr[15]+3.0*(fr[14]+fr[13]+fr[11])+5.196152422706631*(fr[10]+fr[7]+fr[6])+9.0*fr[3])/(20.78460969082652*EPSILON+fr[12]+1.732050807568877*(fr[9]+fr[8]+fr[5])+3.0*(fr[4]+fr[2]+fr[1])+5.196152422706631*fr[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on vx surface 
  fqVal[0] = -0.04811252243246882*(fr[12]-1.732050807568877*(fr[9]+fr[8]+fr[5])+3.0*(fr[4]+fr[2]+fr[1])-5.196152422706631*fr[0])*limTheta(rVal[0],-1.0,cflR); 
  fqVal[1] = 0.04811252243246882*(fr[12]+1.732050807568877*(fr[9]-1.0*(fr[8]+fr[5]))+3.0*(fr[1]-1.0*(fr[4]+fr[2]))+5.196152422706631*fr[0])*limTheta(rVal[1],-1.0,cflR); 
  fqVal[2] = 0.04811252243246882*(fr[12]+1.732050807568877*((-1.0*fr[9])+fr[8]-1.0*fr[5])+3.0*((-1.0*fr[4])+fr[2]-1.0*fr[1])+5.196152422706631*fr[0])*limTheta(rVal[2],-1.0,cflR); 
  fqVal[3] = -0.04811252243246882*(fr[12]+1.732050807568877*(fr[9]+fr[8]-1.0*fr[5])+3.0*fr[4]-1.0*(3.0*(fr[2]+fr[1])+5.196152422706631*fr[0]))*limTheta(rVal[3],-1.0,cflR); 
  fqVal[4] = 0.04811252243246882*(fr[12]+1.732050807568877*(fr[5]-1.0*(fr[9]+fr[8]))+3.0*(fr[4]-1.0*(fr[2]+fr[1]))+5.196152422706631*fr[0])*limTheta(rVal[4],-1.0,cflR); 
  fqVal[5] = -0.04811252243246882*(fr[12]+1.732050807568877*(fr[9]-1.0*fr[8]+fr[5])+3.0*(fr[2]-1.0*fr[4])-1.0*(3.0*fr[1]+5.196152422706631*fr[0]))*limTheta(rVal[5],-1.0,cflR); 
  fqVal[6] = -0.04811252243246882*(fr[12]+1.732050807568877*((-1.0*fr[9])+fr[8]+fr[5])+3.0*(fr[1]-1.0*(fr[4]+fr[2]))-5.196152422706631*fr[0])*limTheta(rVal[6],-1.0,cflR); 
  fqVal[7] = 0.04811252243246882*(fr[12]+1.732050807568877*(fr[9]+fr[8]+fr[5])+3.0*(fr[4]+fr[2]+fr[1])+5.196152422706631*fr[0])*limTheta(rVal[7],-1.0,cflR); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_v; 
  incr[1] = 0.25*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_v; 
  incr[2] = 0.25*(alpha[1]*fhatALVal[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_v; 
  incr[3] = -0.4330127018922193*(alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_v; 
  incr[4] = 0.25*(alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+alpha[0]*fhatALVal[3])*dfac_v; 
  incr[5] = 0.25*(alpha[0]*fhatALVal[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_v; 
  incr[6] = -0.4330127018922193*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_v; 
  incr[7] = -0.4330127018922193*(alpha[1]*fhatALVal[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_v; 
  incr[8] = 0.25*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5]+alpha[1]*fhatALVal[3])*dfac_v; 
  incr[9] = 0.25*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_v; 
  incr[10] = -0.4330127018922193*(alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+alpha[0]*fhatALVal[3])*dfac_v; 
  incr[11] = -0.4330127018922193*(alpha[0]*fhatALVal[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_v; 
  incr[12] = 0.25*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5])*dfac_v; 
  incr[13] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5]+alpha[1]*fhatALVal[3])*dfac_v; 
  incr[14] = -0.4330127018922193*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_v; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5])*dfac_v; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += -1.0*incr[2]; 
  outl[3] += incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += -1.0*incr[5]; 
  outl[6] += incr[6]; 
  outl[7] += incr[7]; 
  outl[8] += -1.0*incr[8]; 
  outl[9] += -1.0*incr[9]; 
  outl[10] += incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += -1.0*incr[12]; 
  outl[13] += incr[13]; 
  outl[14] += incr[14]; 
  outl[15] += incr[15]; 
  } 
#elif upwindType == QUAD 
double fupwind[16];
double fupwindQuad[16];
  if(0.3535533905932737*alpha[0]-0.3535533905932737*(alpha[2]+alpha[1]) > 0) {
  fupwindQuad[0] = (-0.25*fl[15])+0.25*(fl[14]+fl[13])-0.25*fl[12]+0.25*fl[11]-0.25*fl[10]+0.25*(fl[9]+fl[8])-0.25*(fl[7]+fl[6])+0.25*fl[5]-0.25*fl[4]+0.25*fl[3]-0.25*(fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[0] = 0.25*fr[15]-0.25*(fr[14]+fr[13]+fr[12]+fr[11])+0.25*(fr[10]+fr[9]+fr[8]+fr[7]+fr[6]+fr[5])-0.25*(fr[4]+fr[3]+fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[1]+alpha[0])-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[1] = 0.25*(fl[15]+fl[14])-0.25*fl[13]+0.25*fl[12]-0.25*(fl[11]+fl[10])+0.25*fl[9]-0.25*(fl[8]+fl[7])+0.25*fl[6]-0.25*(fl[5]+fl[4])+0.25*fl[3]-0.25*fl[2]+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[1] = (-0.25*(fr[15]+fr[14]))+0.25*(fr[13]+fr[12]+fr[11]+fr[10]+fr[9])-0.25*fr[8]+0.25*fr[7]-0.25*(fr[6]+fr[5]+fr[4]+fr[3]+fr[2])+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[2]-0.3535533905932737*alpha[1]+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[2] = 0.25*fl[15]-0.25*fl[14]+0.25*(fl[13]+fl[12])-0.25*(fl[11]+fl[10]+fl[9])+0.25*(fl[8]+fl[7])-0.25*(fl[6]+fl[5]+fl[4])+0.25*(fl[3]+fl[2])-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[2] = (-0.25*fr[15])+0.25*fr[14]-0.25*fr[13]+0.25*(fr[12]+fr[11]+fr[10])-0.25*fr[9]+0.25*fr[8]-0.25*fr[7]+0.25*fr[6]-0.25*(fr[5]+fr[4]+fr[3])+0.25*fr[2]-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[1]+alpha[0]) > 0) {
  fupwindQuad[3] = (-0.25*(fl[15]+fl[14]+fl[13]+fl[12]))+0.25*fl[11]-0.25*(fl[10]+fl[9]+fl[8])+0.25*(fl[7]+fl[6]+fl[5])-0.25*fl[4]+0.25*(fl[3]+fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[3] = 0.25*(fr[15]+fr[14]+fr[13])-0.25*(fr[12]+fr[11])+0.25*fr[10]-0.25*(fr[9]+fr[8]+fr[7]+fr[6])+0.25*fr[5]-0.25*(fr[4]+fr[3])+0.25*(fr[2]+fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*(alpha[2]+alpha[1]) > 0) {
  fupwindQuad[4] = 0.25*fl[15]-0.25*(fl[14]+fl[13]+fl[12]+fl[11])+0.25*(fl[10]+fl[9]+fl[8]+fl[7]+fl[6]+fl[5])-0.25*(fl[4]+fl[3]+fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[4] = (-0.25*fr[15])+0.25*(fr[14]+fr[13])-0.25*fr[12]+0.25*fr[11]-0.25*fr[10]+0.25*(fr[9]+fr[8])-0.25*(fr[7]+fr[6])+0.25*fr[5]-0.25*fr[4]+0.25*fr[3]-0.25*(fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[1]+alpha[0])-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[5] = (-0.25*(fl[15]+fl[14]))+0.25*(fl[13]+fl[12]+fl[11]+fl[10]+fl[9])-0.25*fl[8]+0.25*fl[7]-0.25*(fl[6]+fl[5]+fl[4]+fl[3]+fl[2])+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[5] = 0.25*(fr[15]+fr[14])-0.25*fr[13]+0.25*fr[12]-0.25*(fr[11]+fr[10])+0.25*fr[9]-0.25*(fr[8]+fr[7])+0.25*fr[6]-0.25*(fr[5]+fr[4])+0.25*fr[3]-0.25*fr[2]+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[2]-0.3535533905932737*alpha[1]+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[6] = (-0.25*fl[15])+0.25*fl[14]-0.25*fl[13]+0.25*(fl[12]+fl[11]+fl[10])-0.25*fl[9]+0.25*fl[8]-0.25*fl[7]+0.25*fl[6]-0.25*(fl[5]+fl[4]+fl[3])+0.25*fl[2]-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[6] = 0.25*fr[15]-0.25*fr[14]+0.25*(fr[13]+fr[12])-0.25*(fr[11]+fr[10]+fr[9])+0.25*(fr[8]+fr[7])-0.25*(fr[6]+fr[5]+fr[4])+0.25*(fr[3]+fr[2])-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[1]+alpha[0]) > 0) {
  fupwindQuad[7] = 0.25*(fl[15]+fl[14]+fl[13])-0.25*(fl[12]+fl[11])+0.25*fl[10]-0.25*(fl[9]+fl[8]+fl[7]+fl[6])+0.25*fl[5]-0.25*(fl[4]+fl[3])+0.25*(fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[7] = (-0.25*(fr[15]+fr[14]+fr[13]+fr[12]))+0.25*fr[11]-0.25*(fr[10]+fr[9]+fr[8])+0.25*(fr[7]+fr[6]+fr[5])-0.25*fr[4]+0.25*(fr[3]+fr[2]+fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*(alpha[2]+alpha[1]) > 0) {
  fupwindQuad[8] = 0.25*fl[15]-0.25*(fl[14]+fl[13])+0.25*(fl[12]+fl[11]+fl[10])-0.25*(fl[9]+fl[8]+fl[7]+fl[6])+0.25*(fl[5]+fl[4]+fl[3])-0.25*(fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[8] = (-0.25*fr[15])+0.25*(fr[14]+fr[13]+fr[12])-0.25*(fr[11]+fr[10]+fr[9]+fr[8])+0.25*(fr[7]+fr[6]+fr[5]+fr[4])-0.25*(fr[3]+fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[1]+alpha[0])-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[9] = (-0.25*(fl[15]+fl[14]))+0.25*fl[13]-0.25*(fl[12]+fl[11])+0.25*fl[10]-0.25*fl[9]+0.25*fl[8]-0.25*fl[7]+0.25*fl[6]-0.25*fl[5]+0.25*(fl[4]+fl[3])-0.25*fl[2]+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[9] = 0.25*(fr[15]+fr[14])-0.25*(fr[13]+fr[12])+0.25*fr[11]-0.25*(fr[10]+fr[9])+0.25*(fr[8]+fr[7])-0.25*(fr[6]+fr[5])+0.25*fr[4]-0.25*(fr[3]+fr[2])+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[2]-0.3535533905932737*alpha[1]+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[10] = (-0.25*fl[15])+0.25*fl[14]-0.25*(fl[13]+fl[12]+fl[11])+0.25*(fl[10]+fl[9])-0.25*fl[8]+0.25*fl[7]-0.25*(fl[6]+fl[5])+0.25*(fl[4]+fl[3]+fl[2])-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[10] = 0.25*fr[15]-0.25*fr[14]+0.25*fr[13]-0.25*fr[12]+0.25*fr[11]-0.25*fr[10]+0.25*fr[9]-0.25*(fr[8]+fr[7])+0.25*fr[6]-0.25*fr[5]+0.25*fr[4]-0.25*fr[3]+0.25*fr[2]-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[1]+alpha[0]) > 0) {
  fupwindQuad[11] = 0.25*(fl[15]+fl[14]+fl[13]+fl[12]+fl[11]+fl[10]+fl[9]+fl[8]+fl[7]+fl[6]+fl[5]+fl[4]+fl[3]+fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[11] = (-0.25*(fr[15]+fr[14]+fr[13]))+0.25*fr[12]-0.25*(fr[11]+fr[10])+0.25*(fr[9]+fr[8])-0.25*(fr[7]+fr[6])+0.25*(fr[5]+fr[4])-0.25*fr[3]+0.25*(fr[2]+fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*(alpha[2]+alpha[1]) > 0) {
  fupwindQuad[12] = (-0.25*fl[15])+0.25*(fl[14]+fl[13]+fl[12])-0.25*(fl[11]+fl[10]+fl[9]+fl[8])+0.25*(fl[7]+fl[6]+fl[5]+fl[4])-0.25*(fl[3]+fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[12] = 0.25*fr[15]-0.25*(fr[14]+fr[13])+0.25*(fr[12]+fr[11]+fr[10])-0.25*(fr[9]+fr[8]+fr[7]+fr[6])+0.25*(fr[5]+fr[4]+fr[3])-0.25*(fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[1]+alpha[0])-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[13] = 0.25*(fl[15]+fl[14])-0.25*(fl[13]+fl[12])+0.25*fl[11]-0.25*(fl[10]+fl[9])+0.25*(fl[8]+fl[7])-0.25*(fl[6]+fl[5])+0.25*fl[4]-0.25*(fl[3]+fl[2])+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[13] = (-0.25*(fr[15]+fr[14]))+0.25*fr[13]-0.25*(fr[12]+fr[11])+0.25*fr[10]-0.25*fr[9]+0.25*fr[8]-0.25*fr[7]+0.25*fr[6]-0.25*fr[5]+0.25*(fr[4]+fr[3])-0.25*fr[2]+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[2]-0.3535533905932737*alpha[1]+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[14] = 0.25*fl[15]-0.25*fl[14]+0.25*fl[13]-0.25*fl[12]+0.25*fl[11]-0.25*fl[10]+0.25*fl[9]-0.25*(fl[8]+fl[7])+0.25*fl[6]-0.25*fl[5]+0.25*fl[4]-0.25*fl[3]+0.25*fl[2]-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[14] = (-0.25*fr[15])+0.25*fr[14]-0.25*(fr[13]+fr[12]+fr[11])+0.25*(fr[10]+fr[9])-0.25*fr[8]+0.25*fr[7]-0.25*(fr[6]+fr[5])+0.25*(fr[4]+fr[3]+fr[2])-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[1]+alpha[0]) > 0) {
  fupwindQuad[15] = (-0.25*(fl[15]+fl[14]+fl[13]))+0.25*fl[12]-0.25*(fl[11]+fl[10])+0.25*(fl[9]+fl[8])-0.25*(fl[7]+fl[6])+0.25*(fl[5]+fl[4])-0.25*fl[3]+0.25*(fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[15] = 0.25*(fr[15]+fr[14]+fr[13]+fr[12]+fr[11]+fr[10]+fr[9]+fr[8]+fr[7]+fr[6]+fr[5]+fr[4]+fr[3]+fr[2]+fr[1]+fr[0]); 
  }
  fupwind[0] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[1] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*fupwindQuad[12]+fupwindQuad[11]-1.0*fupwindQuad[10]+fupwindQuad[9]-1.0*fupwindQuad[8]+fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[2] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12])+fupwindQuad[11]+fupwindQuad[10]-1.0*(fupwindQuad[9]+fupwindQuad[8])+fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[3] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]-1.0*(fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8])+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[4] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]-1.0*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[5] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]+fupwindQuad[11]-1.0*(fupwindQuad[10]+fupwindQuad[9])+fupwindQuad[8]+fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  fupwind[6] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*(fupwindQuad[12]+fupwindQuad[11])+fupwindQuad[10]-1.0*fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[7] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10])+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[8] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*fupwindQuad[12]+fupwindQuad[11]-1.0*fupwindQuad[10]+fupwindQuad[9]-1.0*(fupwindQuad[8]+fupwindQuad[7])+fupwindQuad[6]-1.0*fupwindQuad[5]+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[9] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12])+fupwindQuad[11]+fupwindQuad[10]-1.0*(fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6])+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[10] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]-1.0*(fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[11] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]-1.0*fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]-1.0*fupwindQuad[8]+fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[12] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]+fupwindQuad[11]-1.0*(fupwindQuad[10]+fupwindQuad[9])+fupwindQuad[8]-1.0*fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[13] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*(fupwindQuad[12]+fupwindQuad[11])+fupwindQuad[10]-1.0*fupwindQuad[9]+fupwindQuad[8]-1.0*fupwindQuad[7]+fupwindQuad[6]-1.0*fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[14] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10])+fupwindQuad[9]+fupwindQuad[8]-1.0*(fupwindQuad[7]+fupwindQuad[6])+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[15] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]-1.0*fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]-1.0*(fupwindQuad[8]+fupwindQuad[7])+fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than vx 
  rVal[0] = -(1.0*(1.732050807568877*fupwind[15]-3.0*(fupwind[14]+fupwind[13]+fupwind[11])+5.196152422706631*(fupwind[10]+fupwind[7]+fupwind[6])-9.0*fupwind[3]))/(20.78460969082652*EPSILON-1.0*fupwind[12]+1.732050807568877*(fupwind[9]+fupwind[8]+fupwind[5])-3.0*(fupwind[4]+fupwind[2]+fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[1] = (1.732050807568877*fupwind[15]+3.0*(fupwind[14]-1.0*(fupwind[13]+fupwind[11]))+5.196152422706631*(fupwind[6]-1.0*(fupwind[10]+fupwind[7]))+9.0*fupwind[3])/(20.78460969082652*EPSILON+fupwind[12]+1.732050807568877*(fupwind[9]-1.0*(fupwind[8]+fupwind[5]))+3.0*(fupwind[1]-1.0*(fupwind[4]+fupwind[2]))+5.196152422706631*fupwind[0]); 
  rVal[2] = (1.732050807568877*fupwind[15]+3.0*((-1.0*fupwind[14])+fupwind[13]-1.0*fupwind[11])+5.196152422706631*((-1.0*fupwind[10])+fupwind[7]-1.0*fupwind[6])+9.0*fupwind[3])/(20.78460969082652*EPSILON+fupwind[12]+1.732050807568877*((-1.0*fupwind[9])+fupwind[8]-1.0*fupwind[5])+3.0*((-1.0*fupwind[4])+fupwind[2]-1.0*fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fupwind[15]+3.0*(fupwind[14]+fupwind[13]-1.0*fupwind[11])+5.196152422706631*fupwind[10]-1.0*(5.196152422706631*(fupwind[7]+fupwind[6])+9.0*fupwind[3])))/(20.78460969082652*EPSILON-1.0*fupwind[12]+1.732050807568877*(fupwind[5]-1.0*(fupwind[9]+fupwind[8]))+3.0*((-1.0*fupwind[4])+fupwind[2]+fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[4] = (1.732050807568877*fupwind[15]+3.0*(fupwind[11]-1.0*(fupwind[14]+fupwind[13]))+5.196152422706631*(fupwind[10]-1.0*(fupwind[7]+fupwind[6]))+9.0*fupwind[3])/(20.78460969082652*EPSILON+fupwind[12]+1.732050807568877*(fupwind[5]-1.0*(fupwind[9]+fupwind[8]))+3.0*(fupwind[4]-1.0*(fupwind[2]+fupwind[1]))+5.196152422706631*fupwind[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fupwind[15]+3.0*(fupwind[14]-1.0*fupwind[13]+fupwind[11])+5.196152422706631*(fupwind[7]-1.0*fupwind[10])-1.0*(5.196152422706631*fupwind[6]+9.0*fupwind[3])))/(20.78460969082652*EPSILON-1.0*fupwind[12]+1.732050807568877*((-1.0*fupwind[9])+fupwind[8]-1.0*fupwind[5])+3.0*(fupwind[4]-1.0*fupwind[2]+fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fupwind[15]+3.0*((-1.0*fupwind[14])+fupwind[13]+fupwind[11])+5.196152422706631*(fupwind[6]-1.0*(fupwind[10]+fupwind[7]))-9.0*fupwind[3]))/(20.78460969082652*EPSILON-1.0*fupwind[12]+1.732050807568877*(fupwind[9]-1.0*(fupwind[8]+fupwind[5]))+3.0*(fupwind[4]+fupwind[2]-1.0*fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[7] = (1.732050807568877*fupwind[15]+3.0*(fupwind[14]+fupwind[13]+fupwind[11])+5.196152422706631*(fupwind[10]+fupwind[7]+fupwind[6])+9.0*fupwind[3])/(20.78460969082652*EPSILON+fupwind[12]+1.732050807568877*(fupwind[9]+fupwind[8]+fupwind[5])+3.0*(fupwind[4]+fupwind[2]+fupwind[1])+5.196152422706631*fupwind[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on vx surface 
  fqVal[0] = -0.04811252243246882*(fupwind[12]-1.732050807568877*(fupwind[9]+fupwind[8]+fupwind[5])+3.0*(fupwind[4]+fupwind[2]+fupwind[1])-5.196152422706631*fupwind[0])*limTheta(rVal[0],-1.0,cflR); 
  fqVal[1] = 0.04811252243246882*(fupwind[12]+1.732050807568877*(fupwind[9]-1.0*(fupwind[8]+fupwind[5]))+3.0*(fupwind[1]-1.0*(fupwind[4]+fupwind[2]))+5.196152422706631*fupwind[0])*limTheta(rVal[1],-1.0,cflR); 
  fqVal[2] = 0.04811252243246882*(fupwind[12]+1.732050807568877*((-1.0*fupwind[9])+fupwind[8]-1.0*fupwind[5])+3.0*((-1.0*fupwind[4])+fupwind[2]-1.0*fupwind[1])+5.196152422706631*fupwind[0])*limTheta(rVal[2],-1.0,cflR); 
  fqVal[3] = -0.04811252243246882*(fupwind[12]+1.732050807568877*(fupwind[9]+fupwind[8]-1.0*fupwind[5])+3.0*fupwind[4]-1.0*(3.0*(fupwind[2]+fupwind[1])+5.196152422706631*fupwind[0]))*limTheta(rVal[3],-1.0,cflR); 
  fqVal[4] = 0.04811252243246882*(fupwind[12]+1.732050807568877*(fupwind[5]-1.0*(fupwind[9]+fupwind[8]))+3.0*(fupwind[4]-1.0*(fupwind[2]+fupwind[1]))+5.196152422706631*fupwind[0])*limTheta(rVal[4],-1.0,cflR); 
  fqVal[5] = -0.04811252243246882*(fupwind[12]+1.732050807568877*(fupwind[9]-1.0*fupwind[8]+fupwind[5])+3.0*(fupwind[2]-1.0*fupwind[4])-1.0*(3.0*fupwind[1]+5.196152422706631*fupwind[0]))*limTheta(rVal[5],-1.0,cflR); 
  fqVal[6] = -0.04811252243246882*(fupwind[12]+1.732050807568877*((-1.0*fupwind[9])+fupwind[8]+fupwind[5])+3.0*(fupwind[1]-1.0*(fupwind[4]+fupwind[2]))-5.196152422706631*fupwind[0])*limTheta(rVal[6],-1.0,cflR); 
  fqVal[7] = 0.04811252243246882*(fupwind[12]+1.732050807568877*(fupwind[9]+fupwind[8]+fupwind[5])+3.0*(fupwind[4]+fupwind[2]+fupwind[1])+5.196152422706631*fupwind[0])*limTheta(rVal[7],-1.0,cflR); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_v; 
  incr[1] = 0.25*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_v; 
  incr[2] = 0.25*(alpha[1]*fhatALVal[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_v; 
  incr[3] = -0.4330127018922193*(alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_v; 
  incr[4] = 0.25*(alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+alpha[0]*fhatALVal[3])*dfac_v; 
  incr[5] = 0.25*(alpha[0]*fhatALVal[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_v; 
  incr[6] = -0.4330127018922193*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_v; 
  incr[7] = -0.4330127018922193*(alpha[1]*fhatALVal[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_v; 
  incr[8] = 0.25*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5]+alpha[1]*fhatALVal[3])*dfac_v; 
  incr[9] = 0.25*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_v; 
  incr[10] = -0.4330127018922193*(alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+alpha[0]*fhatALVal[3])*dfac_v; 
  incr[11] = -0.4330127018922193*(alpha[0]*fhatALVal[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_v; 
  incr[12] = 0.25*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5])*dfac_v; 
  incr[13] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5]+alpha[1]*fhatALVal[3])*dfac_v; 
  incr[14] = -0.4330127018922193*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_v; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5])*dfac_v; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += -1.0*incr[2]; 
  outl[3] += incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += -1.0*incr[5]; 
  outl[6] += incr[6]; 
  outl[7] += incr[7]; 
  outl[8] += -1.0*incr[8]; 
  outl[9] += -1.0*incr[9]; 
  outl[10] += incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += -1.0*incr[12]; 
  outl[13] += incr[13]; 
  outl[14] += incr[14]; 
  outl[15] += incr[15]; 
#endif
  return std::abs(alpha0); 
} 
double GyrokineticSurfPositivity2x2vSer_X_P1_Bvars_1(const double q_, const double m_, const double cflL, const double cflR, const double *w, const double *dxv, const double amax_in, const double *Bmag, const double *BmagInv, const double *Gradpar, const double *BdriftX, const double *BdriftY, const double *Phi, const double *fl, const double *fr, double *outl, double *outr) 
{ 
// w[NDIM]: Cell-center coordinates. dxv[NDIM]: Cell spacing. H/f: Input Hamiltonian/distribution function. out: Incremented output 
  double dfac_x = 2.0/dxv[0]; 
  double dfac_y = 2.0/dxv[1]; 
  double dfac_v = 2.0/dxv[2]; 
  double dfac_m = 2.0/dxv[3]; 
  double wx = w[0]; 
  double wy = w[1]; 
  double wv = w[2]; 
  double wm = w[3]; 
  double wv2 = wv*wv; 
  double dfac_v2 = dfac_v*dfac_v; 
  double q2 = q_*q_; 
  double incr[16]; 
  // surface-averaged phase velocity in this direction 
  double alpha0 = -(0.125*(2.0*(1.732050807568877*BdriftX[1]-1.0*BdriftX[0])*m_*wv2+((5.196152422706631*BmagInv[1]-3.0*BmagInv[0])*Phi[3]+(1.732050807568877*BmagInv[0]-3.0*BmagInv[1])*Phi[2])*dfac_y*q_))/q_; 

  double alpha[8]; 
  alpha[0] = -(0.5*((4.898979485566357*BdriftX[1]-2.828427124746191*BdriftX[0])*m_*wv2+((7.348469228349534*BmagInv[1]-4.242640687119286*BmagInv[0])*Phi[3]+(2.449489742783178*BmagInv[0]-4.242640687119286*BmagInv[1])*Phi[2])*dfac_y*q_))/q_; 
  alpha[2] = -(0.3333333333333333*(4.242640687119286*BdriftX[1]-2.449489742783178*BdriftX[0])*m_*wv)/(dfac_v*q_); 
#if upwindType == SURFAVG 
  if (alpha0>0) { 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than x 
  rVal[0] = -(1.0*(1.732050807568877*fl[15]-3.0*(fl[13]+fl[12]+fl[11])+5.196152422706631*(fl[8]+fl[6]+fl[5])-9.0*fl[1]))/(20.78460969082652*EPSILON-1.0*fl[14]+1.732050807568877*(fl[10]+fl[9]+fl[7])-3.0*(fl[4]+fl[3]+fl[2])+5.196152422706631*fl[0]); 
  rVal[1] = (1.732050807568877*fl[15]+3.0*(fl[13]-1.0*(fl[12]+fl[11]))+5.196152422706631*(fl[5]-1.0*(fl[8]+fl[6]))+9.0*fl[1])/(20.78460969082652*EPSILON+fl[14]+1.732050807568877*(fl[10]-1.0*(fl[9]+fl[7]))+3.0*(fl[2]-1.0*(fl[4]+fl[3]))+5.196152422706631*fl[0]); 
  rVal[2] = (1.732050807568877*fl[15]+3.0*((-1.0*fl[13])+fl[12]-1.0*fl[11])+5.196152422706631*((-1.0*fl[8])+fl[6]-1.0*fl[5])+9.0*fl[1])/(20.78460969082652*EPSILON+fl[14]+1.732050807568877*((-1.0*fl[10])+fl[9]-1.0*fl[7])+3.0*((-1.0*fl[4])+fl[3]-1.0*fl[2])+5.196152422706631*fl[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fl[15]+3.0*(fl[13]+fl[12]-1.0*fl[11])+5.196152422706631*fl[8]-1.0*(5.196152422706631*(fl[6]+fl[5])+9.0*fl[1])))/(20.78460969082652*EPSILON-1.0*fl[14]+1.732050807568877*(fl[7]-1.0*(fl[10]+fl[9]))+3.0*((-1.0*fl[4])+fl[3]+fl[2])+5.196152422706631*fl[0]); 
  rVal[4] = (1.732050807568877*fl[15]+3.0*(fl[11]-1.0*(fl[13]+fl[12]))+5.196152422706631*(fl[8]-1.0*(fl[6]+fl[5]))+9.0*fl[1])/(20.78460969082652*EPSILON+fl[14]+1.732050807568877*(fl[7]-1.0*(fl[10]+fl[9]))+3.0*(fl[4]-1.0*(fl[3]+fl[2]))+5.196152422706631*fl[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fl[15]+3.0*(fl[13]-1.0*fl[12]+fl[11])+5.196152422706631*(fl[6]-1.0*fl[8])-1.0*(5.196152422706631*fl[5]+9.0*fl[1])))/(20.78460969082652*EPSILON-1.0*fl[14]+1.732050807568877*((-1.0*fl[10])+fl[9]-1.0*fl[7])+3.0*(fl[4]-1.0*fl[3]+fl[2])+5.196152422706631*fl[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fl[15]+3.0*((-1.0*fl[13])+fl[12]+fl[11])+5.196152422706631*(fl[5]-1.0*(fl[8]+fl[6]))-9.0*fl[1]))/(20.78460969082652*EPSILON-1.0*fl[14]+1.732050807568877*(fl[10]-1.0*(fl[9]+fl[7]))+3.0*(fl[4]+fl[3]-1.0*fl[2])+5.196152422706631*fl[0]); 
  rVal[7] = (1.732050807568877*fl[15]+3.0*(fl[13]+fl[12]+fl[11])+5.196152422706631*(fl[8]+fl[6]+fl[5])+9.0*fl[1])/(20.78460969082652*EPSILON+fl[14]+1.732050807568877*(fl[10]+fl[9]+fl[7])+3.0*(fl[4]+fl[3]+fl[2])+5.196152422706631*fl[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on x surface 
  fqVal[0] = -0.04811252243246882*(fl[14]-1.732050807568877*(fl[10]+fl[9]+fl[7])+3.0*(fl[4]+fl[3]+fl[2])-5.196152422706631*fl[0])*limTheta(rVal[0],1.0,cflL); 
  fqVal[1] = 0.04811252243246882*(fl[14]+1.732050807568877*(fl[10]-1.0*(fl[9]+fl[7]))+3.0*(fl[2]-1.0*(fl[4]+fl[3]))+5.196152422706631*fl[0])*limTheta(rVal[1],1.0,cflL); 
  fqVal[2] = 0.04811252243246882*(fl[14]+1.732050807568877*((-1.0*fl[10])+fl[9]-1.0*fl[7])+3.0*((-1.0*fl[4])+fl[3]-1.0*fl[2])+5.196152422706631*fl[0])*limTheta(rVal[2],1.0,cflL); 
  fqVal[3] = -0.04811252243246882*(fl[14]+1.732050807568877*(fl[10]+fl[9]-1.0*fl[7])+3.0*fl[4]-1.0*(3.0*(fl[3]+fl[2])+5.196152422706631*fl[0]))*limTheta(rVal[3],1.0,cflL); 
  fqVal[4] = 0.04811252243246882*(fl[14]+1.732050807568877*(fl[7]-1.0*(fl[10]+fl[9]))+3.0*(fl[4]-1.0*(fl[3]+fl[2]))+5.196152422706631*fl[0])*limTheta(rVal[4],1.0,cflL); 
  fqVal[5] = -0.04811252243246882*(fl[14]+1.732050807568877*(fl[10]-1.0*fl[9]+fl[7])+3.0*(fl[3]-1.0*fl[4])-1.0*(3.0*fl[2]+5.196152422706631*fl[0]))*limTheta(rVal[5],1.0,cflL); 
  fqVal[6] = -0.04811252243246882*(fl[14]+1.732050807568877*((-1.0*fl[10])+fl[9]+fl[7])+3.0*(fl[2]-1.0*(fl[4]+fl[3]))-5.196152422706631*fl[0])*limTheta(rVal[6],1.0,cflL); 
  fqVal[7] = 0.04811252243246882*(fl[14]+1.732050807568877*(fl[10]+fl[9]+fl[7])+3.0*(fl[4]+fl[3]+fl[2])+5.196152422706631*fl[0])*limTheta(rVal[7],1.0,cflL); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_x; 
  incr[1] = -0.4330127018922193*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_x; 
  incr[2] = 0.25*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_x; 
  incr[3] = 0.25*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_x; 
  incr[4] = 0.25*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_x; 
  incr[5] = -0.4330127018922193*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_x; 
  incr[6] = -0.4330127018922193*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_x; 
  incr[7] = 0.25*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_x; 
  incr[8] = -0.4330127018922193*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_x; 
  incr[9] = 0.25*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_x; 
  incr[10] = 0.25*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_x; 
  incr[11] = -0.4330127018922193*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_x; 
  incr[12] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_x; 
  incr[13] = -0.4330127018922193*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_x; 
  incr[14] = 0.25*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_x; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_x; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += incr[1]; 
  outl[2] += -1.0*incr[2]; 
  outl[3] += -1.0*incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += incr[5]; 
  outl[6] += incr[6]; 
  outl[7] += -1.0*incr[7]; 
  outl[8] += incr[8]; 
  outl[9] += -1.0*incr[9]; 
  outl[10] += -1.0*incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += incr[12]; 
  outl[13] += incr[13]; 
  outl[14] += -1.0*incr[14]; 
  outl[15] += incr[15]; 
  } else { 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than x 
  rVal[0] = -(1.0*(1.732050807568877*fr[15]-3.0*(fr[13]+fr[12]+fr[11])+5.196152422706631*(fr[8]+fr[6]+fr[5])-9.0*fr[1]))/(20.78460969082652*EPSILON-1.0*fr[14]+1.732050807568877*(fr[10]+fr[9]+fr[7])-3.0*(fr[4]+fr[3]+fr[2])+5.196152422706631*fr[0]); 
  rVal[1] = (1.732050807568877*fr[15]+3.0*(fr[13]-1.0*(fr[12]+fr[11]))+5.196152422706631*(fr[5]-1.0*(fr[8]+fr[6]))+9.0*fr[1])/(20.78460969082652*EPSILON+fr[14]+1.732050807568877*(fr[10]-1.0*(fr[9]+fr[7]))+3.0*(fr[2]-1.0*(fr[4]+fr[3]))+5.196152422706631*fr[0]); 
  rVal[2] = (1.732050807568877*fr[15]+3.0*((-1.0*fr[13])+fr[12]-1.0*fr[11])+5.196152422706631*((-1.0*fr[8])+fr[6]-1.0*fr[5])+9.0*fr[1])/(20.78460969082652*EPSILON+fr[14]+1.732050807568877*((-1.0*fr[10])+fr[9]-1.0*fr[7])+3.0*((-1.0*fr[4])+fr[3]-1.0*fr[2])+5.196152422706631*fr[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fr[15]+3.0*(fr[13]+fr[12]-1.0*fr[11])+5.196152422706631*fr[8]-1.0*(5.196152422706631*(fr[6]+fr[5])+9.0*fr[1])))/(20.78460969082652*EPSILON-1.0*fr[14]+1.732050807568877*(fr[7]-1.0*(fr[10]+fr[9]))+3.0*((-1.0*fr[4])+fr[3]+fr[2])+5.196152422706631*fr[0]); 
  rVal[4] = (1.732050807568877*fr[15]+3.0*(fr[11]-1.0*(fr[13]+fr[12]))+5.196152422706631*(fr[8]-1.0*(fr[6]+fr[5]))+9.0*fr[1])/(20.78460969082652*EPSILON+fr[14]+1.732050807568877*(fr[7]-1.0*(fr[10]+fr[9]))+3.0*(fr[4]-1.0*(fr[3]+fr[2]))+5.196152422706631*fr[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fr[15]+3.0*(fr[13]-1.0*fr[12]+fr[11])+5.196152422706631*(fr[6]-1.0*fr[8])-1.0*(5.196152422706631*fr[5]+9.0*fr[1])))/(20.78460969082652*EPSILON-1.0*fr[14]+1.732050807568877*((-1.0*fr[10])+fr[9]-1.0*fr[7])+3.0*(fr[4]-1.0*fr[3]+fr[2])+5.196152422706631*fr[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fr[15]+3.0*((-1.0*fr[13])+fr[12]+fr[11])+5.196152422706631*(fr[5]-1.0*(fr[8]+fr[6]))-9.0*fr[1]))/(20.78460969082652*EPSILON-1.0*fr[14]+1.732050807568877*(fr[10]-1.0*(fr[9]+fr[7]))+3.0*(fr[4]+fr[3]-1.0*fr[2])+5.196152422706631*fr[0]); 
  rVal[7] = (1.732050807568877*fr[15]+3.0*(fr[13]+fr[12]+fr[11])+5.196152422706631*(fr[8]+fr[6]+fr[5])+9.0*fr[1])/(20.78460969082652*EPSILON+fr[14]+1.732050807568877*(fr[10]+fr[9]+fr[7])+3.0*(fr[4]+fr[3]+fr[2])+5.196152422706631*fr[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on x surface 
  fqVal[0] = -0.04811252243246882*(fr[14]-1.732050807568877*(fr[10]+fr[9]+fr[7])+3.0*(fr[4]+fr[3]+fr[2])-5.196152422706631*fr[0])*limTheta(rVal[0],-1.0,cflR); 
  fqVal[1] = 0.04811252243246882*(fr[14]+1.732050807568877*(fr[10]-1.0*(fr[9]+fr[7]))+3.0*(fr[2]-1.0*(fr[4]+fr[3]))+5.196152422706631*fr[0])*limTheta(rVal[1],-1.0,cflR); 
  fqVal[2] = 0.04811252243246882*(fr[14]+1.732050807568877*((-1.0*fr[10])+fr[9]-1.0*fr[7])+3.0*((-1.0*fr[4])+fr[3]-1.0*fr[2])+5.196152422706631*fr[0])*limTheta(rVal[2],-1.0,cflR); 
  fqVal[3] = -0.04811252243246882*(fr[14]+1.732050807568877*(fr[10]+fr[9]-1.0*fr[7])+3.0*fr[4]-1.0*(3.0*(fr[3]+fr[2])+5.196152422706631*fr[0]))*limTheta(rVal[3],-1.0,cflR); 
  fqVal[4] = 0.04811252243246882*(fr[14]+1.732050807568877*(fr[7]-1.0*(fr[10]+fr[9]))+3.0*(fr[4]-1.0*(fr[3]+fr[2]))+5.196152422706631*fr[0])*limTheta(rVal[4],-1.0,cflR); 
  fqVal[5] = -0.04811252243246882*(fr[14]+1.732050807568877*(fr[10]-1.0*fr[9]+fr[7])+3.0*(fr[3]-1.0*fr[4])-1.0*(3.0*fr[2]+5.196152422706631*fr[0]))*limTheta(rVal[5],-1.0,cflR); 
  fqVal[6] = -0.04811252243246882*(fr[14]+1.732050807568877*((-1.0*fr[10])+fr[9]+fr[7])+3.0*(fr[2]-1.0*(fr[4]+fr[3]))-5.196152422706631*fr[0])*limTheta(rVal[6],-1.0,cflR); 
  fqVal[7] = 0.04811252243246882*(fr[14]+1.732050807568877*(fr[10]+fr[9]+fr[7])+3.0*(fr[4]+fr[3]+fr[2])+5.196152422706631*fr[0])*limTheta(rVal[7],-1.0,cflR); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_x; 
  incr[1] = -0.4330127018922193*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_x; 
  incr[2] = 0.25*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_x; 
  incr[3] = 0.25*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_x; 
  incr[4] = 0.25*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_x; 
  incr[5] = -0.4330127018922193*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_x; 
  incr[6] = -0.4330127018922193*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_x; 
  incr[7] = 0.25*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_x; 
  incr[8] = -0.4330127018922193*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_x; 
  incr[9] = 0.25*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_x; 
  incr[10] = 0.25*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_x; 
  incr[11] = -0.4330127018922193*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_x; 
  incr[12] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_x; 
  incr[13] = -0.4330127018922193*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_x; 
  incr[14] = 0.25*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_x; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_x; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += incr[1]; 
  outl[2] += -1.0*incr[2]; 
  outl[3] += -1.0*incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += incr[5]; 
  outl[6] += incr[6]; 
  outl[7] += -1.0*incr[7]; 
  outl[8] += incr[8]; 
  outl[9] += -1.0*incr[9]; 
  outl[10] += -1.0*incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += incr[12]; 
  outl[13] += incr[13]; 
  outl[14] += -1.0*incr[14]; 
  outl[15] += incr[15]; 
  } 
#elif upwindType == QUAD 
double fupwind[16];
double fupwindQuad[16];
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[0] = (-0.25*(fl[15]+fl[14]))+0.25*(fl[13]+fl[12]+fl[11]+fl[10]+fl[9])-0.25*fl[8]+0.25*fl[7]-0.25*(fl[6]+fl[5]+fl[4]+fl[3]+fl[2])+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[0] = 0.25*fr[15]-0.25*(fr[14]+fr[13]+fr[12]+fr[11])+0.25*(fr[10]+fr[9]+fr[8]+fr[7]+fr[6]+fr[5])-0.25*(fr[4]+fr[3]+fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[1] = 0.25*fl[15]-0.25*(fl[14]+fl[13]+fl[12]+fl[11])+0.25*(fl[10]+fl[9]+fl[8]+fl[7]+fl[6]+fl[5])-0.25*(fl[4]+fl[3]+fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[1] = (-0.25*(fr[15]+fr[14]))+0.25*(fr[13]+fr[12]+fr[11]+fr[10]+fr[9])-0.25*fr[8]+0.25*fr[7]-0.25*(fr[6]+fr[5]+fr[4]+fr[3]+fr[2])+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[2] = 0.25*(fl[15]+fl[14]+fl[13])-0.25*(fl[12]+fl[11])+0.25*fl[10]-0.25*(fl[9]+fl[8]+fl[7]+fl[6])+0.25*fl[5]-0.25*(fl[4]+fl[3])+0.25*(fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[2] = (-0.25*fr[15])+0.25*fr[14]-0.25*fr[13]+0.25*(fr[12]+fr[11]+fr[10])-0.25*fr[9]+0.25*fr[8]-0.25*fr[7]+0.25*fr[6]-0.25*(fr[5]+fr[4]+fr[3])+0.25*fr[2]-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[3] = (-0.25*fl[15])+0.25*fl[14]-0.25*fl[13]+0.25*(fl[12]+fl[11]+fl[10])-0.25*fl[9]+0.25*fl[8]-0.25*fl[7]+0.25*fl[6]-0.25*(fl[5]+fl[4]+fl[3])+0.25*fl[2]-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[3] = 0.25*(fr[15]+fr[14]+fr[13])-0.25*(fr[12]+fr[11])+0.25*fr[10]-0.25*(fr[9]+fr[8]+fr[7]+fr[6])+0.25*fr[5]-0.25*(fr[4]+fr[3])+0.25*(fr[2]+fr[1]+fr[0]); 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[4] = 0.25*(fl[15]+fl[14])-0.25*fl[13]+0.25*fl[12]-0.25*(fl[11]+fl[10])+0.25*fl[9]-0.25*(fl[8]+fl[7])+0.25*fl[6]-0.25*(fl[5]+fl[4])+0.25*fl[3]-0.25*fl[2]+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[4] = (-0.25*fr[15])+0.25*(fr[14]+fr[13])-0.25*fr[12]+0.25*fr[11]-0.25*fr[10]+0.25*(fr[9]+fr[8])-0.25*(fr[7]+fr[6])+0.25*fr[5]-0.25*fr[4]+0.25*fr[3]-0.25*(fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[5] = (-0.25*fl[15])+0.25*(fl[14]+fl[13])-0.25*fl[12]+0.25*fl[11]-0.25*fl[10]+0.25*(fl[9]+fl[8])-0.25*(fl[7]+fl[6])+0.25*fl[5]-0.25*fl[4]+0.25*fl[3]-0.25*(fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[5] = 0.25*(fr[15]+fr[14])-0.25*fr[13]+0.25*fr[12]-0.25*(fr[11]+fr[10])+0.25*fr[9]-0.25*(fr[8]+fr[7])+0.25*fr[6]-0.25*(fr[5]+fr[4])+0.25*fr[3]-0.25*fr[2]+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[6] = (-0.25*(fl[15]+fl[14]+fl[13]+fl[12]))+0.25*fl[11]-0.25*(fl[10]+fl[9]+fl[8])+0.25*(fl[7]+fl[6]+fl[5])-0.25*fl[4]+0.25*(fl[3]+fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[6] = 0.25*fr[15]-0.25*fr[14]+0.25*(fr[13]+fr[12])-0.25*(fr[11]+fr[10]+fr[9])+0.25*(fr[8]+fr[7])-0.25*(fr[6]+fr[5]+fr[4])+0.25*(fr[3]+fr[2])-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[7] = 0.25*fl[15]-0.25*fl[14]+0.25*(fl[13]+fl[12])-0.25*(fl[11]+fl[10]+fl[9])+0.25*(fl[8]+fl[7])-0.25*(fl[6]+fl[5]+fl[4])+0.25*(fl[3]+fl[2])-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[7] = (-0.25*(fr[15]+fr[14]+fr[13]+fr[12]))+0.25*fr[11]-0.25*(fr[10]+fr[9]+fr[8])+0.25*(fr[7]+fr[6]+fr[5])-0.25*fr[4]+0.25*(fr[3]+fr[2]+fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[8] = 0.25*(fl[15]+fl[14])-0.25*(fl[13]+fl[12])+0.25*fl[11]-0.25*(fl[10]+fl[9])+0.25*(fl[8]+fl[7])-0.25*(fl[6]+fl[5])+0.25*fl[4]-0.25*(fl[3]+fl[2])+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[8] = (-0.25*fr[15])+0.25*(fr[14]+fr[13]+fr[12])-0.25*(fr[11]+fr[10]+fr[9]+fr[8])+0.25*(fr[7]+fr[6]+fr[5]+fr[4])-0.25*(fr[3]+fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[9] = (-0.25*fl[15])+0.25*(fl[14]+fl[13]+fl[12])-0.25*(fl[11]+fl[10]+fl[9]+fl[8])+0.25*(fl[7]+fl[6]+fl[5]+fl[4])-0.25*(fl[3]+fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[9] = 0.25*(fr[15]+fr[14])-0.25*(fr[13]+fr[12])+0.25*fr[11]-0.25*(fr[10]+fr[9])+0.25*(fr[8]+fr[7])-0.25*(fr[6]+fr[5])+0.25*fr[4]-0.25*(fr[3]+fr[2])+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[10] = (-0.25*(fl[15]+fl[14]+fl[13]))+0.25*fl[12]-0.25*(fl[11]+fl[10])+0.25*(fl[9]+fl[8])-0.25*(fl[7]+fl[6])+0.25*(fl[5]+fl[4])-0.25*fl[3]+0.25*(fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[10] = 0.25*fr[15]-0.25*fr[14]+0.25*fr[13]-0.25*fr[12]+0.25*fr[11]-0.25*fr[10]+0.25*fr[9]-0.25*(fr[8]+fr[7])+0.25*fr[6]-0.25*fr[5]+0.25*fr[4]-0.25*fr[3]+0.25*fr[2]-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[0]-0.3535533905932737*alpha[2] > 0) {
  fupwindQuad[11] = 0.25*fl[15]-0.25*fl[14]+0.25*fl[13]-0.25*fl[12]+0.25*fl[11]-0.25*fl[10]+0.25*fl[9]-0.25*(fl[8]+fl[7])+0.25*fl[6]-0.25*fl[5]+0.25*fl[4]-0.25*fl[3]+0.25*fl[2]-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[11] = (-0.25*(fr[15]+fr[14]+fr[13]))+0.25*fr[12]-0.25*(fr[11]+fr[10])+0.25*(fr[9]+fr[8])-0.25*(fr[7]+fr[6])+0.25*(fr[5]+fr[4])-0.25*fr[3]+0.25*(fr[2]+fr[1]+fr[0]); 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[12] = (-0.25*(fl[15]+fl[14]))+0.25*fl[13]-0.25*(fl[12]+fl[11])+0.25*fl[10]-0.25*fl[9]+0.25*fl[8]-0.25*fl[7]+0.25*fl[6]-0.25*fl[5]+0.25*(fl[4]+fl[3])-0.25*fl[2]+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[12] = 0.25*fr[15]-0.25*(fr[14]+fr[13])+0.25*(fr[12]+fr[11]+fr[10])-0.25*(fr[9]+fr[8]+fr[7]+fr[6])+0.25*(fr[5]+fr[4]+fr[3])-0.25*(fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[13] = 0.25*fl[15]-0.25*(fl[14]+fl[13])+0.25*(fl[12]+fl[11]+fl[10])-0.25*(fl[9]+fl[8]+fl[7]+fl[6])+0.25*(fl[5]+fl[4]+fl[3])-0.25*(fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[13] = (-0.25*(fr[15]+fr[14]))+0.25*fr[13]-0.25*(fr[12]+fr[11])+0.25*fr[10]-0.25*fr[9]+0.25*fr[8]-0.25*fr[7]+0.25*fr[6]-0.25*fr[5]+0.25*(fr[4]+fr[3])-0.25*fr[2]+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[14] = 0.25*(fl[15]+fl[14]+fl[13]+fl[12]+fl[11]+fl[10]+fl[9]+fl[8]+fl[7]+fl[6]+fl[5]+fl[4]+fl[3]+fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[14] = (-0.25*fr[15])+0.25*fr[14]-0.25*(fr[13]+fr[12]+fr[11])+0.25*(fr[10]+fr[9])-0.25*fr[8]+0.25*fr[7]-0.25*(fr[6]+fr[5])+0.25*(fr[4]+fr[3]+fr[2])-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[2]+alpha[0]) > 0) {
  fupwindQuad[15] = (-0.25*fl[15])+0.25*fl[14]-0.25*(fl[13]+fl[12]+fl[11])+0.25*(fl[10]+fl[9])-0.25*fl[8]+0.25*fl[7]-0.25*(fl[6]+fl[5])+0.25*(fl[4]+fl[3]+fl[2])-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[15] = 0.25*(fr[15]+fr[14]+fr[13]+fr[12]+fr[11]+fr[10]+fr[9]+fr[8]+fr[7]+fr[6]+fr[5]+fr[4]+fr[3]+fr[2]+fr[1]+fr[0]); 
  }
  fupwind[0] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[1] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*fupwindQuad[12]+fupwindQuad[11]-1.0*fupwindQuad[10]+fupwindQuad[9]-1.0*fupwindQuad[8]+fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[2] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12])+fupwindQuad[11]+fupwindQuad[10]-1.0*(fupwindQuad[9]+fupwindQuad[8])+fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[3] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]-1.0*(fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8])+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[4] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]-1.0*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[5] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]+fupwindQuad[11]-1.0*(fupwindQuad[10]+fupwindQuad[9])+fupwindQuad[8]+fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  fupwind[6] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*(fupwindQuad[12]+fupwindQuad[11])+fupwindQuad[10]-1.0*fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[7] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10])+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[8] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*fupwindQuad[12]+fupwindQuad[11]-1.0*fupwindQuad[10]+fupwindQuad[9]-1.0*(fupwindQuad[8]+fupwindQuad[7])+fupwindQuad[6]-1.0*fupwindQuad[5]+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[9] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12])+fupwindQuad[11]+fupwindQuad[10]-1.0*(fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6])+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[10] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]-1.0*(fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[11] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]-1.0*fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]-1.0*fupwindQuad[8]+fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[12] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]+fupwindQuad[11]-1.0*(fupwindQuad[10]+fupwindQuad[9])+fupwindQuad[8]-1.0*fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[13] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*(fupwindQuad[12]+fupwindQuad[11])+fupwindQuad[10]-1.0*fupwindQuad[9]+fupwindQuad[8]-1.0*fupwindQuad[7]+fupwindQuad[6]-1.0*fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[14] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10])+fupwindQuad[9]+fupwindQuad[8]-1.0*(fupwindQuad[7]+fupwindQuad[6])+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[15] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]-1.0*fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]-1.0*(fupwindQuad[8]+fupwindQuad[7])+fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than x 
  rVal[0] = -(1.0*(1.732050807568877*fupwind[15]-3.0*(fupwind[13]+fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[8]+fupwind[6]+fupwind[5])-9.0*fupwind[1]))/(20.78460969082652*EPSILON-1.0*fupwind[14]+1.732050807568877*(fupwind[10]+fupwind[9]+fupwind[7])-3.0*(fupwind[4]+fupwind[3]+fupwind[2])+5.196152422706631*fupwind[0]); 
  rVal[1] = (1.732050807568877*fupwind[15]+3.0*(fupwind[13]-1.0*(fupwind[12]+fupwind[11]))+5.196152422706631*(fupwind[5]-1.0*(fupwind[8]+fupwind[6]))+9.0*fupwind[1])/(20.78460969082652*EPSILON+fupwind[14]+1.732050807568877*(fupwind[10]-1.0*(fupwind[9]+fupwind[7]))+3.0*(fupwind[2]-1.0*(fupwind[4]+fupwind[3]))+5.196152422706631*fupwind[0]); 
  rVal[2] = (1.732050807568877*fupwind[15]+3.0*((-1.0*fupwind[13])+fupwind[12]-1.0*fupwind[11])+5.196152422706631*((-1.0*fupwind[8])+fupwind[6]-1.0*fupwind[5])+9.0*fupwind[1])/(20.78460969082652*EPSILON+fupwind[14]+1.732050807568877*((-1.0*fupwind[10])+fupwind[9]-1.0*fupwind[7])+3.0*((-1.0*fupwind[4])+fupwind[3]-1.0*fupwind[2])+5.196152422706631*fupwind[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fupwind[15]+3.0*(fupwind[13]+fupwind[12]-1.0*fupwind[11])+5.196152422706631*fupwind[8]-1.0*(5.196152422706631*(fupwind[6]+fupwind[5])+9.0*fupwind[1])))/(20.78460969082652*EPSILON-1.0*fupwind[14]+1.732050807568877*(fupwind[7]-1.0*(fupwind[10]+fupwind[9]))+3.0*((-1.0*fupwind[4])+fupwind[3]+fupwind[2])+5.196152422706631*fupwind[0]); 
  rVal[4] = (1.732050807568877*fupwind[15]+3.0*(fupwind[11]-1.0*(fupwind[13]+fupwind[12]))+5.196152422706631*(fupwind[8]-1.0*(fupwind[6]+fupwind[5]))+9.0*fupwind[1])/(20.78460969082652*EPSILON+fupwind[14]+1.732050807568877*(fupwind[7]-1.0*(fupwind[10]+fupwind[9]))+3.0*(fupwind[4]-1.0*(fupwind[3]+fupwind[2]))+5.196152422706631*fupwind[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fupwind[15]+3.0*(fupwind[13]-1.0*fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[6]-1.0*fupwind[8])-1.0*(5.196152422706631*fupwind[5]+9.0*fupwind[1])))/(20.78460969082652*EPSILON-1.0*fupwind[14]+1.732050807568877*((-1.0*fupwind[10])+fupwind[9]-1.0*fupwind[7])+3.0*(fupwind[4]-1.0*fupwind[3]+fupwind[2])+5.196152422706631*fupwind[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fupwind[15]+3.0*((-1.0*fupwind[13])+fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[5]-1.0*(fupwind[8]+fupwind[6]))-9.0*fupwind[1]))/(20.78460969082652*EPSILON-1.0*fupwind[14]+1.732050807568877*(fupwind[10]-1.0*(fupwind[9]+fupwind[7]))+3.0*(fupwind[4]+fupwind[3]-1.0*fupwind[2])+5.196152422706631*fupwind[0]); 
  rVal[7] = (1.732050807568877*fupwind[15]+3.0*(fupwind[13]+fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[8]+fupwind[6]+fupwind[5])+9.0*fupwind[1])/(20.78460969082652*EPSILON+fupwind[14]+1.732050807568877*(fupwind[10]+fupwind[9]+fupwind[7])+3.0*(fupwind[4]+fupwind[3]+fupwind[2])+5.196152422706631*fupwind[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on x surface 
  fqVal[0] = -0.04811252243246882*(fupwind[14]-1.732050807568877*(fupwind[10]+fupwind[9]+fupwind[7])+3.0*(fupwind[4]+fupwind[3]+fupwind[2])-5.196152422706631*fupwind[0])*limTheta(rVal[0],-1.0,cflR); 
  fqVal[1] = 0.04811252243246882*(fupwind[14]+1.732050807568877*(fupwind[10]-1.0*(fupwind[9]+fupwind[7]))+3.0*(fupwind[2]-1.0*(fupwind[4]+fupwind[3]))+5.196152422706631*fupwind[0])*limTheta(rVal[1],-1.0,cflR); 
  fqVal[2] = 0.04811252243246882*(fupwind[14]+1.732050807568877*((-1.0*fupwind[10])+fupwind[9]-1.0*fupwind[7])+3.0*((-1.0*fupwind[4])+fupwind[3]-1.0*fupwind[2])+5.196152422706631*fupwind[0])*limTheta(rVal[2],-1.0,cflR); 
  fqVal[3] = -0.04811252243246882*(fupwind[14]+1.732050807568877*(fupwind[10]+fupwind[9]-1.0*fupwind[7])+3.0*fupwind[4]-1.0*(3.0*(fupwind[3]+fupwind[2])+5.196152422706631*fupwind[0]))*limTheta(rVal[3],-1.0,cflR); 
  fqVal[4] = 0.04811252243246882*(fupwind[14]+1.732050807568877*(fupwind[7]-1.0*(fupwind[10]+fupwind[9]))+3.0*(fupwind[4]-1.0*(fupwind[3]+fupwind[2]))+5.196152422706631*fupwind[0])*limTheta(rVal[4],-1.0,cflR); 
  fqVal[5] = -0.04811252243246882*(fupwind[14]+1.732050807568877*(fupwind[10]-1.0*fupwind[9]+fupwind[7])+3.0*(fupwind[3]-1.0*fupwind[4])-1.0*(3.0*fupwind[2]+5.196152422706631*fupwind[0]))*limTheta(rVal[5],-1.0,cflR); 
  fqVal[6] = -0.04811252243246882*(fupwind[14]+1.732050807568877*((-1.0*fupwind[10])+fupwind[9]+fupwind[7])+3.0*(fupwind[2]-1.0*(fupwind[4]+fupwind[3]))-5.196152422706631*fupwind[0])*limTheta(rVal[6],-1.0,cflR); 
  fqVal[7] = 0.04811252243246882*(fupwind[14]+1.732050807568877*(fupwind[10]+fupwind[9]+fupwind[7])+3.0*(fupwind[4]+fupwind[3]+fupwind[2])+5.196152422706631*fupwind[0])*limTheta(rVal[7],-1.0,cflR); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_x; 
  incr[1] = -0.4330127018922193*(alpha[2]*fhatALVal[2]+alpha[0]*fhatALVal[0])*dfac_x; 
  incr[2] = 0.25*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_x; 
  incr[3] = 0.25*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_x; 
  incr[4] = 0.25*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_x; 
  incr[5] = -0.4330127018922193*(alpha[2]*fhatALVal[4]+alpha[0]*fhatALVal[1])*dfac_x; 
  incr[6] = -0.4330127018922193*(alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_x; 
  incr[7] = 0.25*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_x; 
  incr[8] = -0.4330127018922193*(alpha[2]*fhatALVal[6]+alpha[0]*fhatALVal[3])*dfac_x; 
  incr[9] = 0.25*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_x; 
  incr[10] = 0.25*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_x; 
  incr[11] = -0.4330127018922193*(alpha[0]*fhatALVal[4]+fhatALVal[1]*alpha[2])*dfac_x; 
  incr[12] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[0]*fhatALVal[5])*dfac_x; 
  incr[13] = -0.4330127018922193*(alpha[0]*fhatALVal[6]+alpha[2]*fhatALVal[3])*dfac_x; 
  incr[14] = 0.25*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_x; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[2]*fhatALVal[5])*dfac_x; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += incr[1]; 
  outl[2] += -1.0*incr[2]; 
  outl[3] += -1.0*incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += incr[5]; 
  outl[6] += incr[6]; 
  outl[7] += -1.0*incr[7]; 
  outl[8] += incr[8]; 
  outl[9] += -1.0*incr[9]; 
  outl[10] += -1.0*incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += incr[12]; 
  outl[13] += incr[13]; 
  outl[14] += -1.0*incr[14]; 
  outl[15] += incr[15]; 
#endif
  return std::abs(alpha0); 
} 
double GyrokineticSurfPositivity2x2vSer_Y_P1_Bvars_1(const double q_, const double m_, const double cflL, const double cflR, const double *w, const double *dxv, const double amax_in, const double *Bmag, const double *BmagInv, const double *Gradpar, const double *BdriftX, const double *BdriftY, const double *Phi, const double *fl, const double *fr, double *outl, double *outr) 
{ 
// w[NDIM]: Cell-center coordinates. dxv[NDIM]: Cell spacing. H/f: Input Hamiltonian/distribution function. out: Incremented output 
  double dfac_x = 2.0/dxv[0]; 
  double dfac_y = 2.0/dxv[1]; 
  double dfac_v = 2.0/dxv[2]; 
  double dfac_m = 2.0/dxv[3]; 
  double wx = w[0]; 
  double wy = w[1]; 
  double wv = w[2]; 
  double wm = w[3]; 
  double wv2 = wv*wv; 
  double dfac_v2 = dfac_v*dfac_v; 
  double q2 = q_*q_; 
  double incr[16]; 
  // surface-averaged phase velocity in this direction 
  double alpha0 = (0.125*(2.0*BdriftY[0]*m_*wv2+BmagInv[0]*dfac_x*(1.732050807568877*Bmag[1]*wm+(1.732050807568877*Phi[1]-3.0*Phi[3])*q_)))/q_; 

  double alpha[8]; 
  alpha[0] = (0.7071067811865475*(2.0*BdriftY[0]*m_*wv2+BmagInv[0]*dfac_x*(1.732050807568877*Bmag[1]*wm+(1.732050807568877*Phi[1]-3.0*Phi[3])*q_)))/q_; 
  alpha[1] = (0.7071067811865475*(2.0*BdriftY[1]*m_*wv2+BmagInv[1]*dfac_x*(1.732050807568877*Bmag[1]*wm+(1.732050807568877*Phi[1]-3.0*Phi[3])*q_)))/q_; 
  alpha[2] = (0.8164965809277261*BdriftY[0]*m_*wv)/(dfac_v*q_); 
  alpha[3] = (0.7071067811865475*BmagInv[0]*Bmag[1]*dfac_x)/(dfac_m*q_); 
  alpha[4] = (0.8164965809277261*BdriftY[1]*m_*wv)/(dfac_v*q_); 
  alpha[5] = (0.7071067811865475*Bmag[1]*BmagInv[1]*dfac_x)/(dfac_m*q_); 
#if upwindType == SURFAVG 
  if (alpha0>0) { 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than y 
  rVal[0] = -(1.0*(1.732050807568877*fl[15]-3.0*(fl[14]+fl[12]+fl[11])+5.196152422706631*(fl[9]+fl[7]+fl[5])-9.0*fl[2]))/(20.78460969082652*EPSILON-1.0*fl[13]+1.732050807568877*(fl[10]+fl[8]+fl[6])-3.0*(fl[4]+fl[3]+fl[1])+5.196152422706631*fl[0]); 
  rVal[1] = (1.732050807568877*fl[15]+3.0*(fl[14]-1.0*(fl[12]+fl[11]))+5.196152422706631*(fl[5]-1.0*(fl[9]+fl[7]))+9.0*fl[2])/(20.78460969082652*EPSILON+fl[13]+1.732050807568877*(fl[10]-1.0*(fl[8]+fl[6]))+3.0*(fl[1]-1.0*(fl[4]+fl[3]))+5.196152422706631*fl[0]); 
  rVal[2] = (1.732050807568877*fl[15]+3.0*((-1.0*fl[14])+fl[12]-1.0*fl[11])+5.196152422706631*((-1.0*fl[9])+fl[7]-1.0*fl[5])+9.0*fl[2])/(20.78460969082652*EPSILON+fl[13]+1.732050807568877*((-1.0*fl[10])+fl[8]-1.0*fl[6])+3.0*((-1.0*fl[4])+fl[3]-1.0*fl[1])+5.196152422706631*fl[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fl[15]+3.0*(fl[14]+fl[12]-1.0*fl[11])+5.196152422706631*fl[9]-1.0*(5.196152422706631*(fl[7]+fl[5])+9.0*fl[2])))/(20.78460969082652*EPSILON-1.0*fl[13]+1.732050807568877*(fl[6]-1.0*(fl[10]+fl[8]))+3.0*((-1.0*fl[4])+fl[3]+fl[1])+5.196152422706631*fl[0]); 
  rVal[4] = (1.732050807568877*fl[15]+3.0*(fl[11]-1.0*(fl[14]+fl[12]))+5.196152422706631*(fl[9]-1.0*(fl[7]+fl[5]))+9.0*fl[2])/(20.78460969082652*EPSILON+fl[13]+1.732050807568877*(fl[6]-1.0*(fl[10]+fl[8]))+3.0*(fl[4]-1.0*(fl[3]+fl[1]))+5.196152422706631*fl[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fl[15]+3.0*(fl[14]-1.0*fl[12]+fl[11])+5.196152422706631*(fl[7]-1.0*fl[9])-1.0*(5.196152422706631*fl[5]+9.0*fl[2])))/(20.78460969082652*EPSILON-1.0*fl[13]+1.732050807568877*((-1.0*fl[10])+fl[8]-1.0*fl[6])+3.0*(fl[4]-1.0*fl[3]+fl[1])+5.196152422706631*fl[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fl[15]+3.0*((-1.0*fl[14])+fl[12]+fl[11])+5.196152422706631*(fl[5]-1.0*(fl[9]+fl[7]))-9.0*fl[2]))/(20.78460969082652*EPSILON-1.0*fl[13]+1.732050807568877*(fl[10]-1.0*(fl[8]+fl[6]))+3.0*(fl[4]+fl[3]-1.0*fl[1])+5.196152422706631*fl[0]); 
  rVal[7] = (1.732050807568877*fl[15]+3.0*(fl[14]+fl[12]+fl[11])+5.196152422706631*(fl[9]+fl[7]+fl[5])+9.0*fl[2])/(20.78460969082652*EPSILON+fl[13]+1.732050807568877*(fl[10]+fl[8]+fl[6])+3.0*(fl[4]+fl[3]+fl[1])+5.196152422706631*fl[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on y surface 
  fqVal[0] = -0.04811252243246882*(fl[13]-1.732050807568877*(fl[10]+fl[8]+fl[6])+3.0*(fl[4]+fl[3]+fl[1])-5.196152422706631*fl[0])*limTheta(rVal[0],1.0,cflL); 
  fqVal[1] = 0.04811252243246882*(fl[13]+1.732050807568877*(fl[10]-1.0*(fl[8]+fl[6]))+3.0*(fl[1]-1.0*(fl[4]+fl[3]))+5.196152422706631*fl[0])*limTheta(rVal[1],1.0,cflL); 
  fqVal[2] = 0.04811252243246882*(fl[13]+1.732050807568877*((-1.0*fl[10])+fl[8]-1.0*fl[6])+3.0*((-1.0*fl[4])+fl[3]-1.0*fl[1])+5.196152422706631*fl[0])*limTheta(rVal[2],1.0,cflL); 
  fqVal[3] = -0.04811252243246882*(fl[13]+1.732050807568877*(fl[10]+fl[8]-1.0*fl[6])+3.0*fl[4]-1.0*(3.0*(fl[3]+fl[1])+5.196152422706631*fl[0]))*limTheta(rVal[3],1.0,cflL); 
  fqVal[4] = 0.04811252243246882*(fl[13]+1.732050807568877*(fl[6]-1.0*(fl[10]+fl[8]))+3.0*(fl[4]-1.0*(fl[3]+fl[1]))+5.196152422706631*fl[0])*limTheta(rVal[4],1.0,cflL); 
  fqVal[5] = -0.04811252243246882*(fl[13]+1.732050807568877*(fl[10]-1.0*fl[8]+fl[6])+3.0*(fl[3]-1.0*fl[4])-1.0*(3.0*fl[1]+5.196152422706631*fl[0]))*limTheta(rVal[5],1.0,cflL); 
  fqVal[6] = -0.04811252243246882*(fl[13]+1.732050807568877*((-1.0*fl[10])+fl[8]+fl[6])+3.0*(fl[1]-1.0*(fl[4]+fl[3]))-5.196152422706631*fl[0])*limTheta(rVal[6],1.0,cflL); 
  fqVal[7] = 0.04811252243246882*(fl[13]+1.732050807568877*(fl[10]+fl[8]+fl[6])+3.0*(fl[4]+fl[3]+fl[1])+5.196152422706631*fl[0])*limTheta(rVal[7],1.0,cflL); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[5]*fhatALVal[5]+alpha[4]*fhatALVal[4]+alpha[3]*fhatALVal[3]+alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_y; 
  incr[1] = 0.25*(alpha[3]*fhatALVal[5]+fhatALVal[3]*alpha[5]+alpha[2]*fhatALVal[4]+fhatALVal[2]*alpha[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_y; 
  incr[2] = -0.4330127018922193*(alpha[5]*fhatALVal[5]+alpha[4]*fhatALVal[4]+alpha[3]*fhatALVal[3]+alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_y; 
  incr[3] = 0.25*(alpha[5]*fhatALVal[7]+alpha[3]*fhatALVal[6]+alpha[1]*fhatALVal[4]+fhatALVal[1]*alpha[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_y; 
  incr[4] = 0.25*(alpha[4]*fhatALVal[7]+alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+fhatALVal[1]*alpha[5]+alpha[0]*fhatALVal[3]+fhatALVal[0]*alpha[3])*dfac_y; 
  incr[5] = -0.4330127018922193*(alpha[3]*fhatALVal[5]+fhatALVal[3]*alpha[5]+alpha[2]*fhatALVal[4]+fhatALVal[2]*alpha[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_y; 
  incr[6] = 0.25*(alpha[3]*fhatALVal[7]+alpha[5]*fhatALVal[6]+alpha[0]*fhatALVal[4]+fhatALVal[0]*alpha[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_y; 
  incr[7] = -0.4330127018922193*(alpha[5]*fhatALVal[7]+alpha[3]*fhatALVal[6]+alpha[1]*fhatALVal[4]+fhatALVal[1]*alpha[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_y; 
  incr[8] = 0.25*(alpha[2]*fhatALVal[7]+alpha[4]*fhatALVal[6]+alpha[0]*fhatALVal[5]+fhatALVal[0]*alpha[5]+alpha[1]*fhatALVal[3]+fhatALVal[1]*alpha[3])*dfac_y; 
  incr[9] = -0.4330127018922193*(alpha[4]*fhatALVal[7]+alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+fhatALVal[1]*alpha[5]+alpha[0]*fhatALVal[3]+fhatALVal[0]*alpha[3])*dfac_y; 
  incr[10] = 0.25*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[4]*fhatALVal[5]+fhatALVal[4]*alpha[5]+alpha[2]*fhatALVal[3]+fhatALVal[2]*alpha[3])*dfac_y; 
  incr[11] = -0.4330127018922193*(alpha[3]*fhatALVal[7]+alpha[5]*fhatALVal[6]+alpha[0]*fhatALVal[4]+fhatALVal[0]*alpha[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_y; 
  incr[12] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[4]*fhatALVal[6]+alpha[0]*fhatALVal[5]+fhatALVal[0]*alpha[5]+alpha[1]*fhatALVal[3]+fhatALVal[1]*alpha[3])*dfac_y; 
  incr[13] = 0.25*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5]+fhatALVal[2]*alpha[5]+alpha[3]*fhatALVal[4]+fhatALVal[3]*alpha[4])*dfac_y; 
  incr[14] = -0.4330127018922193*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[4]*fhatALVal[5]+fhatALVal[4]*alpha[5]+alpha[2]*fhatALVal[3]+fhatALVal[2]*alpha[3])*dfac_y; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5]+fhatALVal[2]*alpha[5]+alpha[3]*fhatALVal[4]+fhatALVal[3]*alpha[4])*dfac_y; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += incr[2]; 
  outl[3] += -1.0*incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += incr[5]; 
  outl[6] += -1.0*incr[6]; 
  outl[7] += incr[7]; 
  outl[8] += -1.0*incr[8]; 
  outl[9] += incr[9]; 
  outl[10] += -1.0*incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += incr[12]; 
  outl[13] += -1.0*incr[13]; 
  outl[14] += incr[14]; 
  outl[15] += incr[15]; 
  } else { 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than y 
  rVal[0] = -(1.0*(1.732050807568877*fr[15]-3.0*(fr[14]+fr[12]+fr[11])+5.196152422706631*(fr[9]+fr[7]+fr[5])-9.0*fr[2]))/(20.78460969082652*EPSILON-1.0*fr[13]+1.732050807568877*(fr[10]+fr[8]+fr[6])-3.0*(fr[4]+fr[3]+fr[1])+5.196152422706631*fr[0]); 
  rVal[1] = (1.732050807568877*fr[15]+3.0*(fr[14]-1.0*(fr[12]+fr[11]))+5.196152422706631*(fr[5]-1.0*(fr[9]+fr[7]))+9.0*fr[2])/(20.78460969082652*EPSILON+fr[13]+1.732050807568877*(fr[10]-1.0*(fr[8]+fr[6]))+3.0*(fr[1]-1.0*(fr[4]+fr[3]))+5.196152422706631*fr[0]); 
  rVal[2] = (1.732050807568877*fr[15]+3.0*((-1.0*fr[14])+fr[12]-1.0*fr[11])+5.196152422706631*((-1.0*fr[9])+fr[7]-1.0*fr[5])+9.0*fr[2])/(20.78460969082652*EPSILON+fr[13]+1.732050807568877*((-1.0*fr[10])+fr[8]-1.0*fr[6])+3.0*((-1.0*fr[4])+fr[3]-1.0*fr[1])+5.196152422706631*fr[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fr[15]+3.0*(fr[14]+fr[12]-1.0*fr[11])+5.196152422706631*fr[9]-1.0*(5.196152422706631*(fr[7]+fr[5])+9.0*fr[2])))/(20.78460969082652*EPSILON-1.0*fr[13]+1.732050807568877*(fr[6]-1.0*(fr[10]+fr[8]))+3.0*((-1.0*fr[4])+fr[3]+fr[1])+5.196152422706631*fr[0]); 
  rVal[4] = (1.732050807568877*fr[15]+3.0*(fr[11]-1.0*(fr[14]+fr[12]))+5.196152422706631*(fr[9]-1.0*(fr[7]+fr[5]))+9.0*fr[2])/(20.78460969082652*EPSILON+fr[13]+1.732050807568877*(fr[6]-1.0*(fr[10]+fr[8]))+3.0*(fr[4]-1.0*(fr[3]+fr[1]))+5.196152422706631*fr[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fr[15]+3.0*(fr[14]-1.0*fr[12]+fr[11])+5.196152422706631*(fr[7]-1.0*fr[9])-1.0*(5.196152422706631*fr[5]+9.0*fr[2])))/(20.78460969082652*EPSILON-1.0*fr[13]+1.732050807568877*((-1.0*fr[10])+fr[8]-1.0*fr[6])+3.0*(fr[4]-1.0*fr[3]+fr[1])+5.196152422706631*fr[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fr[15]+3.0*((-1.0*fr[14])+fr[12]+fr[11])+5.196152422706631*(fr[5]-1.0*(fr[9]+fr[7]))-9.0*fr[2]))/(20.78460969082652*EPSILON-1.0*fr[13]+1.732050807568877*(fr[10]-1.0*(fr[8]+fr[6]))+3.0*(fr[4]+fr[3]-1.0*fr[1])+5.196152422706631*fr[0]); 
  rVal[7] = (1.732050807568877*fr[15]+3.0*(fr[14]+fr[12]+fr[11])+5.196152422706631*(fr[9]+fr[7]+fr[5])+9.0*fr[2])/(20.78460969082652*EPSILON+fr[13]+1.732050807568877*(fr[10]+fr[8]+fr[6])+3.0*(fr[4]+fr[3]+fr[1])+5.196152422706631*fr[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on y surface 
  fqVal[0] = -0.04811252243246882*(fr[13]-1.732050807568877*(fr[10]+fr[8]+fr[6])+3.0*(fr[4]+fr[3]+fr[1])-5.196152422706631*fr[0])*limTheta(rVal[0],-1.0,cflR); 
  fqVal[1] = 0.04811252243246882*(fr[13]+1.732050807568877*(fr[10]-1.0*(fr[8]+fr[6]))+3.0*(fr[1]-1.0*(fr[4]+fr[3]))+5.196152422706631*fr[0])*limTheta(rVal[1],-1.0,cflR); 
  fqVal[2] = 0.04811252243246882*(fr[13]+1.732050807568877*((-1.0*fr[10])+fr[8]-1.0*fr[6])+3.0*((-1.0*fr[4])+fr[3]-1.0*fr[1])+5.196152422706631*fr[0])*limTheta(rVal[2],-1.0,cflR); 
  fqVal[3] = -0.04811252243246882*(fr[13]+1.732050807568877*(fr[10]+fr[8]-1.0*fr[6])+3.0*fr[4]-1.0*(3.0*(fr[3]+fr[1])+5.196152422706631*fr[0]))*limTheta(rVal[3],-1.0,cflR); 
  fqVal[4] = 0.04811252243246882*(fr[13]+1.732050807568877*(fr[6]-1.0*(fr[10]+fr[8]))+3.0*(fr[4]-1.0*(fr[3]+fr[1]))+5.196152422706631*fr[0])*limTheta(rVal[4],-1.0,cflR); 
  fqVal[5] = -0.04811252243246882*(fr[13]+1.732050807568877*(fr[10]-1.0*fr[8]+fr[6])+3.0*(fr[3]-1.0*fr[4])-1.0*(3.0*fr[1]+5.196152422706631*fr[0]))*limTheta(rVal[5],-1.0,cflR); 
  fqVal[6] = -0.04811252243246882*(fr[13]+1.732050807568877*((-1.0*fr[10])+fr[8]+fr[6])+3.0*(fr[1]-1.0*(fr[4]+fr[3]))-5.196152422706631*fr[0])*limTheta(rVal[6],-1.0,cflR); 
  fqVal[7] = 0.04811252243246882*(fr[13]+1.732050807568877*(fr[10]+fr[8]+fr[6])+3.0*(fr[4]+fr[3]+fr[1])+5.196152422706631*fr[0])*limTheta(rVal[7],-1.0,cflR); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[5]*fhatALVal[5]+alpha[4]*fhatALVal[4]+alpha[3]*fhatALVal[3]+alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_y; 
  incr[1] = 0.25*(alpha[3]*fhatALVal[5]+fhatALVal[3]*alpha[5]+alpha[2]*fhatALVal[4]+fhatALVal[2]*alpha[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_y; 
  incr[2] = -0.4330127018922193*(alpha[5]*fhatALVal[5]+alpha[4]*fhatALVal[4]+alpha[3]*fhatALVal[3]+alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_y; 
  incr[3] = 0.25*(alpha[5]*fhatALVal[7]+alpha[3]*fhatALVal[6]+alpha[1]*fhatALVal[4]+fhatALVal[1]*alpha[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_y; 
  incr[4] = 0.25*(alpha[4]*fhatALVal[7]+alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+fhatALVal[1]*alpha[5]+alpha[0]*fhatALVal[3]+fhatALVal[0]*alpha[3])*dfac_y; 
  incr[5] = -0.4330127018922193*(alpha[3]*fhatALVal[5]+fhatALVal[3]*alpha[5]+alpha[2]*fhatALVal[4]+fhatALVal[2]*alpha[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_y; 
  incr[6] = 0.25*(alpha[3]*fhatALVal[7]+alpha[5]*fhatALVal[6]+alpha[0]*fhatALVal[4]+fhatALVal[0]*alpha[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_y; 
  incr[7] = -0.4330127018922193*(alpha[5]*fhatALVal[7]+alpha[3]*fhatALVal[6]+alpha[1]*fhatALVal[4]+fhatALVal[1]*alpha[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_y; 
  incr[8] = 0.25*(alpha[2]*fhatALVal[7]+alpha[4]*fhatALVal[6]+alpha[0]*fhatALVal[5]+fhatALVal[0]*alpha[5]+alpha[1]*fhatALVal[3]+fhatALVal[1]*alpha[3])*dfac_y; 
  incr[9] = -0.4330127018922193*(alpha[4]*fhatALVal[7]+alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+fhatALVal[1]*alpha[5]+alpha[0]*fhatALVal[3]+fhatALVal[0]*alpha[3])*dfac_y; 
  incr[10] = 0.25*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[4]*fhatALVal[5]+fhatALVal[4]*alpha[5]+alpha[2]*fhatALVal[3]+fhatALVal[2]*alpha[3])*dfac_y; 
  incr[11] = -0.4330127018922193*(alpha[3]*fhatALVal[7]+alpha[5]*fhatALVal[6]+alpha[0]*fhatALVal[4]+fhatALVal[0]*alpha[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_y; 
  incr[12] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[4]*fhatALVal[6]+alpha[0]*fhatALVal[5]+fhatALVal[0]*alpha[5]+alpha[1]*fhatALVal[3]+fhatALVal[1]*alpha[3])*dfac_y; 
  incr[13] = 0.25*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5]+fhatALVal[2]*alpha[5]+alpha[3]*fhatALVal[4]+fhatALVal[3]*alpha[4])*dfac_y; 
  incr[14] = -0.4330127018922193*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[4]*fhatALVal[5]+fhatALVal[4]*alpha[5]+alpha[2]*fhatALVal[3]+fhatALVal[2]*alpha[3])*dfac_y; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5]+fhatALVal[2]*alpha[5]+alpha[3]*fhatALVal[4]+fhatALVal[3]*alpha[4])*dfac_y; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += incr[2]; 
  outl[3] += -1.0*incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += incr[5]; 
  outl[6] += -1.0*incr[6]; 
  outl[7] += incr[7]; 
  outl[8] += -1.0*incr[8]; 
  outl[9] += incr[9]; 
  outl[10] += -1.0*incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += incr[12]; 
  outl[13] += -1.0*incr[13]; 
  outl[14] += incr[14]; 
  outl[15] += incr[15]; 
  } 
#elif upwindType == QUAD 
double fupwind[16];
double fupwindQuad[16];
  if(0.3535533905932737*(alpha[5]+alpha[4])-0.3535533905932737*(alpha[3]+alpha[2]+alpha[1])+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[0] = (-0.25*fl[15])+0.25*fl[14]-0.25*fl[13]+0.25*(fl[12]+fl[11]+fl[10])-0.25*fl[9]+0.25*fl[8]-0.25*fl[7]+0.25*fl[6]-0.25*(fl[5]+fl[4]+fl[3])+0.25*fl[2]-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[0] = 0.25*fr[15]-0.25*(fr[14]+fr[13]+fr[12]+fr[11])+0.25*(fr[10]+fr[9]+fr[8]+fr[7]+fr[6]+fr[5])-0.25*(fr[4]+fr[3]+fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[1]+alpha[0])-0.3535533905932737*(alpha[5]+alpha[4]+alpha[3]+alpha[2]) > 0) {
  fupwindQuad[1] = 0.25*(fl[15]+fl[14]+fl[13])-0.25*(fl[12]+fl[11])+0.25*fl[10]-0.25*(fl[9]+fl[8]+fl[7]+fl[6])+0.25*fl[5]-0.25*(fl[4]+fl[3])+0.25*(fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[1] = (-0.25*(fr[15]+fr[14]))+0.25*(fr[13]+fr[12]+fr[11]+fr[10]+fr[9])-0.25*fr[8]+0.25*fr[7]-0.25*(fr[6]+fr[5]+fr[4]+fr[3]+fr[2])+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*(alpha[5]+alpha[4])-0.3535533905932737*(alpha[3]+alpha[2]+alpha[1])+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[2] = 0.25*fl[15]-0.25*(fl[14]+fl[13]+fl[12]+fl[11])+0.25*(fl[10]+fl[9]+fl[8]+fl[7]+fl[6]+fl[5])-0.25*(fl[4]+fl[3]+fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[2] = (-0.25*fr[15])+0.25*fr[14]-0.25*fr[13]+0.25*(fr[12]+fr[11]+fr[10])-0.25*fr[9]+0.25*fr[8]-0.25*fr[7]+0.25*fr[6]-0.25*(fr[5]+fr[4]+fr[3])+0.25*fr[2]-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[1]+alpha[0])-0.3535533905932737*(alpha[5]+alpha[4]+alpha[3]+alpha[2]) > 0) {
  fupwindQuad[3] = (-0.25*(fl[15]+fl[14]))+0.25*(fl[13]+fl[12]+fl[11]+fl[10]+fl[9])-0.25*fl[8]+0.25*fl[7]-0.25*(fl[6]+fl[5]+fl[4]+fl[3]+fl[2])+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[3] = 0.25*(fr[15]+fr[14]+fr[13])-0.25*(fr[12]+fr[11])+0.25*fr[10]-0.25*(fr[9]+fr[8]+fr[7]+fr[6])+0.25*fr[5]-0.25*(fr[4]+fr[3])+0.25*(fr[2]+fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[5]-0.3535533905932737*(alpha[4]+alpha[3])+0.3535533905932737*alpha[2]-0.3535533905932737*alpha[1]+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[4] = 0.25*fl[15]-0.25*fl[14]+0.25*(fl[13]+fl[12])-0.25*(fl[11]+fl[10]+fl[9])+0.25*(fl[8]+fl[7])-0.25*(fl[6]+fl[5]+fl[4])+0.25*(fl[3]+fl[2])-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[4] = (-0.25*fr[15])+0.25*(fr[14]+fr[13])-0.25*fr[12]+0.25*fr[11]-0.25*fr[10]+0.25*(fr[9]+fr[8])-0.25*(fr[7]+fr[6])+0.25*fr[5]-0.25*fr[4]+0.25*fr[3]-0.25*(fr[2]+fr[1])+0.25*fr[0]; 
  }
  if((-0.3535533905932737*alpha[5])+0.3535533905932737*alpha[4]-0.3535533905932737*alpha[3]+0.3535533905932737*(alpha[2]+alpha[1]+alpha[0]) > 0) {
  fupwindQuad[5] = (-0.25*(fl[15]+fl[14]+fl[13]+fl[12]))+0.25*fl[11]-0.25*(fl[10]+fl[9]+fl[8])+0.25*(fl[7]+fl[6]+fl[5])-0.25*fl[4]+0.25*(fl[3]+fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[5] = 0.25*(fr[15]+fr[14])-0.25*fr[13]+0.25*fr[12]-0.25*(fr[11]+fr[10])+0.25*fr[9]-0.25*(fr[8]+fr[7])+0.25*fr[6]-0.25*(fr[5]+fr[4])+0.25*fr[3]-0.25*fr[2]+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[5]-0.3535533905932737*(alpha[4]+alpha[3])+0.3535533905932737*alpha[2]-0.3535533905932737*alpha[1]+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[6] = (-0.25*fl[15])+0.25*(fl[14]+fl[13])-0.25*fl[12]+0.25*fl[11]-0.25*fl[10]+0.25*(fl[9]+fl[8])-0.25*(fl[7]+fl[6])+0.25*fl[5]-0.25*fl[4]+0.25*fl[3]-0.25*(fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[6] = 0.25*fr[15]-0.25*fr[14]+0.25*(fr[13]+fr[12])-0.25*(fr[11]+fr[10]+fr[9])+0.25*(fr[8]+fr[7])-0.25*(fr[6]+fr[5]+fr[4])+0.25*(fr[3]+fr[2])-0.25*fr[1]+0.25*fr[0]; 
  }
  if((-0.3535533905932737*alpha[5])+0.3535533905932737*alpha[4]-0.3535533905932737*alpha[3]+0.3535533905932737*(alpha[2]+alpha[1]+alpha[0]) > 0) {
  fupwindQuad[7] = 0.25*(fl[15]+fl[14])-0.25*fl[13]+0.25*fl[12]-0.25*(fl[11]+fl[10])+0.25*fl[9]-0.25*(fl[8]+fl[7])+0.25*fl[6]-0.25*(fl[5]+fl[4])+0.25*fl[3]-0.25*fl[2]+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[7] = (-0.25*(fr[15]+fr[14]+fr[13]+fr[12]))+0.25*fr[11]-0.25*(fr[10]+fr[9]+fr[8])+0.25*(fr[7]+fr[6]+fr[5])-0.25*fr[4]+0.25*(fr[3]+fr[2]+fr[1]+fr[0]); 
  }
  if((-0.3535533905932737*alpha[5])+0.3535533905932737*(alpha[4]+alpha[3])-0.3535533905932737*(alpha[2]+alpha[1])+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[8] = 0.25*fl[15]-0.25*fl[14]+0.25*fl[13]-0.25*fl[12]+0.25*fl[11]-0.25*fl[10]+0.25*fl[9]-0.25*(fl[8]+fl[7])+0.25*fl[6]-0.25*fl[5]+0.25*fl[4]-0.25*fl[3]+0.25*fl[2]-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[8] = (-0.25*fr[15])+0.25*(fr[14]+fr[13]+fr[12])-0.25*(fr[11]+fr[10]+fr[9]+fr[8])+0.25*(fr[7]+fr[6]+fr[5]+fr[4])-0.25*(fr[3]+fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[5]-0.3535533905932737*alpha[4]+0.3535533905932737*alpha[3]-0.3535533905932737*alpha[2]+0.3535533905932737*(alpha[1]+alpha[0]) > 0) {
  fupwindQuad[9] = (-0.25*(fl[15]+fl[14]+fl[13]))+0.25*fl[12]-0.25*(fl[11]+fl[10])+0.25*(fl[9]+fl[8])-0.25*(fl[7]+fl[6])+0.25*(fl[5]+fl[4])-0.25*fl[3]+0.25*(fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[9] = 0.25*(fr[15]+fr[14])-0.25*(fr[13]+fr[12])+0.25*fr[11]-0.25*(fr[10]+fr[9])+0.25*(fr[8]+fr[7])-0.25*(fr[6]+fr[5])+0.25*fr[4]-0.25*(fr[3]+fr[2])+0.25*(fr[1]+fr[0]); 
  }
  if((-0.3535533905932737*alpha[5])+0.3535533905932737*(alpha[4]+alpha[3])-0.3535533905932737*(alpha[2]+alpha[1])+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[10] = (-0.25*fl[15])+0.25*(fl[14]+fl[13]+fl[12])-0.25*(fl[11]+fl[10]+fl[9]+fl[8])+0.25*(fl[7]+fl[6]+fl[5]+fl[4])-0.25*(fl[3]+fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[10] = 0.25*fr[15]-0.25*fr[14]+0.25*fr[13]-0.25*fr[12]+0.25*fr[11]-0.25*fr[10]+0.25*fr[9]-0.25*(fr[8]+fr[7])+0.25*fr[6]-0.25*fr[5]+0.25*fr[4]-0.25*fr[3]+0.25*fr[2]-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[5]-0.3535533905932737*alpha[4]+0.3535533905932737*alpha[3]-0.3535533905932737*alpha[2]+0.3535533905932737*(alpha[1]+alpha[0]) > 0) {
  fupwindQuad[11] = 0.25*(fl[15]+fl[14])-0.25*(fl[13]+fl[12])+0.25*fl[11]-0.25*(fl[10]+fl[9])+0.25*(fl[8]+fl[7])-0.25*(fl[6]+fl[5])+0.25*fl[4]-0.25*(fl[3]+fl[2])+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[11] = (-0.25*(fr[15]+fr[14]+fr[13]))+0.25*fr[12]-0.25*(fr[11]+fr[10])+0.25*(fr[9]+fr[8])-0.25*(fr[7]+fr[6])+0.25*(fr[5]+fr[4])-0.25*fr[3]+0.25*(fr[2]+fr[1]+fr[0]); 
  }
  if((-0.3535533905932737*(alpha[5]+alpha[4]))+0.3535533905932737*(alpha[3]+alpha[2])-0.3535533905932737*alpha[1]+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[12] = (-0.25*fl[15])+0.25*fl[14]-0.25*(fl[13]+fl[12]+fl[11])+0.25*(fl[10]+fl[9])-0.25*fl[8]+0.25*fl[7]-0.25*(fl[6]+fl[5])+0.25*(fl[4]+fl[3]+fl[2])-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[12] = 0.25*fr[15]-0.25*(fr[14]+fr[13])+0.25*(fr[12]+fr[11]+fr[10])-0.25*(fr[9]+fr[8]+fr[7]+fr[6])+0.25*(fr[5]+fr[4]+fr[3])-0.25*(fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[5]+alpha[4]+alpha[3]+alpha[2]+alpha[1]+alpha[0]) > 0) {
  fupwindQuad[13] = 0.25*(fl[15]+fl[14]+fl[13]+fl[12]+fl[11]+fl[10]+fl[9]+fl[8]+fl[7]+fl[6]+fl[5]+fl[4]+fl[3]+fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[13] = (-0.25*(fr[15]+fr[14]))+0.25*fr[13]-0.25*(fr[12]+fr[11])+0.25*fr[10]-0.25*fr[9]+0.25*fr[8]-0.25*fr[7]+0.25*fr[6]-0.25*fr[5]+0.25*(fr[4]+fr[3])-0.25*fr[2]+0.25*(fr[1]+fr[0]); 
  }
  if((-0.3535533905932737*(alpha[5]+alpha[4]))+0.3535533905932737*(alpha[3]+alpha[2])-0.3535533905932737*alpha[1]+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[14] = 0.25*fl[15]-0.25*(fl[14]+fl[13])+0.25*(fl[12]+fl[11]+fl[10])-0.25*(fl[9]+fl[8]+fl[7]+fl[6])+0.25*(fl[5]+fl[4]+fl[3])-0.25*(fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[14] = (-0.25*fr[15])+0.25*fr[14]-0.25*(fr[13]+fr[12]+fr[11])+0.25*(fr[10]+fr[9])-0.25*fr[8]+0.25*fr[7]-0.25*(fr[6]+fr[5])+0.25*(fr[4]+fr[3]+fr[2])-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[5]+alpha[4]+alpha[3]+alpha[2]+alpha[1]+alpha[0]) > 0) {
  fupwindQuad[15] = (-0.25*(fl[15]+fl[14]))+0.25*fl[13]-0.25*(fl[12]+fl[11])+0.25*fl[10]-0.25*fl[9]+0.25*fl[8]-0.25*fl[7]+0.25*fl[6]-0.25*fl[5]+0.25*(fl[4]+fl[3])-0.25*fl[2]+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[15] = 0.25*(fr[15]+fr[14]+fr[13]+fr[12]+fr[11]+fr[10]+fr[9]+fr[8]+fr[7]+fr[6]+fr[5]+fr[4]+fr[3]+fr[2]+fr[1]+fr[0]); 
  }
  fupwind[0] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[1] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*fupwindQuad[12]+fupwindQuad[11]-1.0*fupwindQuad[10]+fupwindQuad[9]-1.0*fupwindQuad[8]+fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[2] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12])+fupwindQuad[11]+fupwindQuad[10]-1.0*(fupwindQuad[9]+fupwindQuad[8])+fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[3] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]-1.0*(fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8])+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[4] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]-1.0*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[5] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]+fupwindQuad[11]-1.0*(fupwindQuad[10]+fupwindQuad[9])+fupwindQuad[8]+fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  fupwind[6] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*(fupwindQuad[12]+fupwindQuad[11])+fupwindQuad[10]-1.0*fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[7] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10])+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[8] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*fupwindQuad[12]+fupwindQuad[11]-1.0*fupwindQuad[10]+fupwindQuad[9]-1.0*(fupwindQuad[8]+fupwindQuad[7])+fupwindQuad[6]-1.0*fupwindQuad[5]+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[9] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12])+fupwindQuad[11]+fupwindQuad[10]-1.0*(fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6])+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[10] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]-1.0*(fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[11] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]-1.0*fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]-1.0*fupwindQuad[8]+fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[12] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]+fupwindQuad[11]-1.0*(fupwindQuad[10]+fupwindQuad[9])+fupwindQuad[8]-1.0*fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[13] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*(fupwindQuad[12]+fupwindQuad[11])+fupwindQuad[10]-1.0*fupwindQuad[9]+fupwindQuad[8]-1.0*fupwindQuad[7]+fupwindQuad[6]-1.0*fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[14] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10])+fupwindQuad[9]+fupwindQuad[8]-1.0*(fupwindQuad[7]+fupwindQuad[6])+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[15] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]-1.0*fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]-1.0*(fupwindQuad[8]+fupwindQuad[7])+fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than y 
  rVal[0] = -(1.0*(1.732050807568877*fupwind[15]-3.0*(fupwind[14]+fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[9]+fupwind[7]+fupwind[5])-9.0*fupwind[2]))/(20.78460969082652*EPSILON-1.0*fupwind[13]+1.732050807568877*(fupwind[10]+fupwind[8]+fupwind[6])-3.0*(fupwind[4]+fupwind[3]+fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[1] = (1.732050807568877*fupwind[15]+3.0*(fupwind[14]-1.0*(fupwind[12]+fupwind[11]))+5.196152422706631*(fupwind[5]-1.0*(fupwind[9]+fupwind[7]))+9.0*fupwind[2])/(20.78460969082652*EPSILON+fupwind[13]+1.732050807568877*(fupwind[10]-1.0*(fupwind[8]+fupwind[6]))+3.0*(fupwind[1]-1.0*(fupwind[4]+fupwind[3]))+5.196152422706631*fupwind[0]); 
  rVal[2] = (1.732050807568877*fupwind[15]+3.0*((-1.0*fupwind[14])+fupwind[12]-1.0*fupwind[11])+5.196152422706631*((-1.0*fupwind[9])+fupwind[7]-1.0*fupwind[5])+9.0*fupwind[2])/(20.78460969082652*EPSILON+fupwind[13]+1.732050807568877*((-1.0*fupwind[10])+fupwind[8]-1.0*fupwind[6])+3.0*((-1.0*fupwind[4])+fupwind[3]-1.0*fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fupwind[15]+3.0*(fupwind[14]+fupwind[12]-1.0*fupwind[11])+5.196152422706631*fupwind[9]-1.0*(5.196152422706631*(fupwind[7]+fupwind[5])+9.0*fupwind[2])))/(20.78460969082652*EPSILON-1.0*fupwind[13]+1.732050807568877*(fupwind[6]-1.0*(fupwind[10]+fupwind[8]))+3.0*((-1.0*fupwind[4])+fupwind[3]+fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[4] = (1.732050807568877*fupwind[15]+3.0*(fupwind[11]-1.0*(fupwind[14]+fupwind[12]))+5.196152422706631*(fupwind[9]-1.0*(fupwind[7]+fupwind[5]))+9.0*fupwind[2])/(20.78460969082652*EPSILON+fupwind[13]+1.732050807568877*(fupwind[6]-1.0*(fupwind[10]+fupwind[8]))+3.0*(fupwind[4]-1.0*(fupwind[3]+fupwind[1]))+5.196152422706631*fupwind[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fupwind[15]+3.0*(fupwind[14]-1.0*fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[7]-1.0*fupwind[9])-1.0*(5.196152422706631*fupwind[5]+9.0*fupwind[2])))/(20.78460969082652*EPSILON-1.0*fupwind[13]+1.732050807568877*((-1.0*fupwind[10])+fupwind[8]-1.0*fupwind[6])+3.0*(fupwind[4]-1.0*fupwind[3]+fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fupwind[15]+3.0*((-1.0*fupwind[14])+fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[5]-1.0*(fupwind[9]+fupwind[7]))-9.0*fupwind[2]))/(20.78460969082652*EPSILON-1.0*fupwind[13]+1.732050807568877*(fupwind[10]-1.0*(fupwind[8]+fupwind[6]))+3.0*(fupwind[4]+fupwind[3]-1.0*fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[7] = (1.732050807568877*fupwind[15]+3.0*(fupwind[14]+fupwind[12]+fupwind[11])+5.196152422706631*(fupwind[9]+fupwind[7]+fupwind[5])+9.0*fupwind[2])/(20.78460969082652*EPSILON+fupwind[13]+1.732050807568877*(fupwind[10]+fupwind[8]+fupwind[6])+3.0*(fupwind[4]+fupwind[3]+fupwind[1])+5.196152422706631*fupwind[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on y surface 
  fqVal[0] = -0.04811252243246882*(fupwind[13]-1.732050807568877*(fupwind[10]+fupwind[8]+fupwind[6])+3.0*(fupwind[4]+fupwind[3]+fupwind[1])-5.196152422706631*fupwind[0])*limTheta(rVal[0],-1.0,cflR); 
  fqVal[1] = 0.04811252243246882*(fupwind[13]+1.732050807568877*(fupwind[10]-1.0*(fupwind[8]+fupwind[6]))+3.0*(fupwind[1]-1.0*(fupwind[4]+fupwind[3]))+5.196152422706631*fupwind[0])*limTheta(rVal[1],-1.0,cflR); 
  fqVal[2] = 0.04811252243246882*(fupwind[13]+1.732050807568877*((-1.0*fupwind[10])+fupwind[8]-1.0*fupwind[6])+3.0*((-1.0*fupwind[4])+fupwind[3]-1.0*fupwind[1])+5.196152422706631*fupwind[0])*limTheta(rVal[2],-1.0,cflR); 
  fqVal[3] = -0.04811252243246882*(fupwind[13]+1.732050807568877*(fupwind[10]+fupwind[8]-1.0*fupwind[6])+3.0*fupwind[4]-1.0*(3.0*(fupwind[3]+fupwind[1])+5.196152422706631*fupwind[0]))*limTheta(rVal[3],-1.0,cflR); 
  fqVal[4] = 0.04811252243246882*(fupwind[13]+1.732050807568877*(fupwind[6]-1.0*(fupwind[10]+fupwind[8]))+3.0*(fupwind[4]-1.0*(fupwind[3]+fupwind[1]))+5.196152422706631*fupwind[0])*limTheta(rVal[4],-1.0,cflR); 
  fqVal[5] = -0.04811252243246882*(fupwind[13]+1.732050807568877*(fupwind[10]-1.0*fupwind[8]+fupwind[6])+3.0*(fupwind[3]-1.0*fupwind[4])-1.0*(3.0*fupwind[1]+5.196152422706631*fupwind[0]))*limTheta(rVal[5],-1.0,cflR); 
  fqVal[6] = -0.04811252243246882*(fupwind[13]+1.732050807568877*((-1.0*fupwind[10])+fupwind[8]+fupwind[6])+3.0*(fupwind[1]-1.0*(fupwind[4]+fupwind[3]))-5.196152422706631*fupwind[0])*limTheta(rVal[6],-1.0,cflR); 
  fqVal[7] = 0.04811252243246882*(fupwind[13]+1.732050807568877*(fupwind[10]+fupwind[8]+fupwind[6])+3.0*(fupwind[4]+fupwind[3]+fupwind[1])+5.196152422706631*fupwind[0])*limTheta(rVal[7],-1.0,cflR); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[5]*fhatALVal[5]+alpha[4]*fhatALVal[4]+alpha[3]*fhatALVal[3]+alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_y; 
  incr[1] = 0.25*(alpha[3]*fhatALVal[5]+fhatALVal[3]*alpha[5]+alpha[2]*fhatALVal[4]+fhatALVal[2]*alpha[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_y; 
  incr[2] = -0.4330127018922193*(alpha[5]*fhatALVal[5]+alpha[4]*fhatALVal[4]+alpha[3]*fhatALVal[3]+alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_y; 
  incr[3] = 0.25*(alpha[5]*fhatALVal[7]+alpha[3]*fhatALVal[6]+alpha[1]*fhatALVal[4]+fhatALVal[1]*alpha[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_y; 
  incr[4] = 0.25*(alpha[4]*fhatALVal[7]+alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+fhatALVal[1]*alpha[5]+alpha[0]*fhatALVal[3]+fhatALVal[0]*alpha[3])*dfac_y; 
  incr[5] = -0.4330127018922193*(alpha[3]*fhatALVal[5]+fhatALVal[3]*alpha[5]+alpha[2]*fhatALVal[4]+fhatALVal[2]*alpha[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_y; 
  incr[6] = 0.25*(alpha[3]*fhatALVal[7]+alpha[5]*fhatALVal[6]+alpha[0]*fhatALVal[4]+fhatALVal[0]*alpha[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_y; 
  incr[7] = -0.4330127018922193*(alpha[5]*fhatALVal[7]+alpha[3]*fhatALVal[6]+alpha[1]*fhatALVal[4]+fhatALVal[1]*alpha[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_y; 
  incr[8] = 0.25*(alpha[2]*fhatALVal[7]+alpha[4]*fhatALVal[6]+alpha[0]*fhatALVal[5]+fhatALVal[0]*alpha[5]+alpha[1]*fhatALVal[3]+fhatALVal[1]*alpha[3])*dfac_y; 
  incr[9] = -0.4330127018922193*(alpha[4]*fhatALVal[7]+alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+fhatALVal[1]*alpha[5]+alpha[0]*fhatALVal[3]+fhatALVal[0]*alpha[3])*dfac_y; 
  incr[10] = 0.25*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[4]*fhatALVal[5]+fhatALVal[4]*alpha[5]+alpha[2]*fhatALVal[3]+fhatALVal[2]*alpha[3])*dfac_y; 
  incr[11] = -0.4330127018922193*(alpha[3]*fhatALVal[7]+alpha[5]*fhatALVal[6]+alpha[0]*fhatALVal[4]+fhatALVal[0]*alpha[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_y; 
  incr[12] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[4]*fhatALVal[6]+alpha[0]*fhatALVal[5]+fhatALVal[0]*alpha[5]+alpha[1]*fhatALVal[3]+fhatALVal[1]*alpha[3])*dfac_y; 
  incr[13] = 0.25*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5]+fhatALVal[2]*alpha[5]+alpha[3]*fhatALVal[4]+fhatALVal[3]*alpha[4])*dfac_y; 
  incr[14] = -0.4330127018922193*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[4]*fhatALVal[5]+fhatALVal[4]*alpha[5]+alpha[2]*fhatALVal[3]+fhatALVal[2]*alpha[3])*dfac_y; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5]+fhatALVal[2]*alpha[5]+alpha[3]*fhatALVal[4]+fhatALVal[3]*alpha[4])*dfac_y; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += incr[2]; 
  outl[3] += -1.0*incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += incr[5]; 
  outl[6] += -1.0*incr[6]; 
  outl[7] += incr[7]; 
  outl[8] += -1.0*incr[8]; 
  outl[9] += incr[9]; 
  outl[10] += -1.0*incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += incr[12]; 
  outl[13] += -1.0*incr[13]; 
  outl[14] += incr[14]; 
  outl[15] += incr[15]; 
#endif
  return std::abs(alpha0); 
} 
double GyrokineticSurfPositivity2x2vSer_Vpar_P1_Bvars_1(const double q_, const double m_, const double cflL, const double cflR, const double *w, const double *dxv, const double amax_in, const double *Bmag, const double *BmagInv, const double *Gradpar, const double *BdriftX, const double *BdriftY, const double *Phi, const double *fl, const double *fr, double *outl, double *outr) 
{ 
// w[NDIM]: Cell-center coordinates. dxv[NDIM]: Cell spacing. H/f: Input Hamiltonian/distribution function. out: Incremented output 
  double dfac_x = 2.0/dxv[0]; 
  double dfac_y = 2.0/dxv[1]; 
  double dfac_v = 2.0/dxv[2]; 
  double dfac_m = 2.0/dxv[3]; 
  double wx = w[0]; 
  double wy = w[1]; 
  double wv = w[2]; 
  double wm = w[3]; 
  double wv2 = wv*wv; 
  double dfac_v2 = dfac_v*dfac_v; 
  double q2 = q_*q_; 
  double incr[16]; 
  // surface-averaged phase velocity in this direction 
  double alpha0 = -(0.2165063509461096*(dfac_v*(BdriftX[0]*Bmag[1]*dfac_x*wm+((BdriftY[1]*Phi[3]+BdriftY[0]*Phi[2])*dfac_y+BdriftX[0]*Phi[1]*dfac_x)*q_)*wv-1.0*(BdriftX[0]*Bmag[1]*dfac_x*wm+((BdriftY[1]*Phi[3]+BdriftY[0]*Phi[2])*dfac_y+BdriftX[0]*Phi[1]*dfac_x)*q_)))/(dfac_v*q_); 

  double alpha[8]; 
  alpha[0] = -(0.7071067811865475*(BdriftX[0]*Bmag[1]*dfac_x*wm+((BdriftY[1]*Phi[3]+BdriftY[0]*Phi[2])*dfac_y+BdriftX[0]*Phi[1]*dfac_x)*q_)*(1.732050807568877*dfac_v*wv-1.732050807568877))/(dfac_v*q_); 
  alpha[1] = -(0.7071067811865475*(BdriftX[1]*Bmag[1]*dfac_x*wm+((BdriftY[0]*Phi[3]+BdriftY[1]*Phi[2])*dfac_y+BdriftX[1]*Phi[1]*dfac_x)*q_)*(1.732050807568877*dfac_v*wv-1.732050807568877))/(dfac_v*q_); 
  alpha[2] = -(0.7071067811865475*BdriftX[0]*Phi[3]*dfac_x*(1.732050807568877*dfac_v*wv-1.732050807568877))/dfac_v; 
  alpha[3] = -(0.7071067811865475*BdriftX[0]*Bmag[1]*dfac_x*(dfac_v*wv-1.0))/(dfac_m*dfac_v*q_); 
  alpha[4] = -(0.7071067811865475*BdriftX[1]*Phi[3]*dfac_x*(1.732050807568877*dfac_v*wv-1.732050807568877))/dfac_v; 
  alpha[5] = -(0.7071067811865475*BdriftX[1]*Bmag[1]*dfac_x*(dfac_v*wv-1.0))/(dfac_m*dfac_v*q_); 
#if upwindType == SURFAVG 
  if (alpha0>0) { 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than vx 
  rVal[0] = -(1.0*(1.732050807568877*fl[15]-3.0*(fl[14]+fl[13]+fl[11])+5.196152422706631*(fl[10]+fl[7]+fl[6])-9.0*fl[3]))/(20.78460969082652*EPSILON-1.0*fl[12]+1.732050807568877*(fl[9]+fl[8]+fl[5])-3.0*(fl[4]+fl[2]+fl[1])+5.196152422706631*fl[0]); 
  rVal[1] = (1.732050807568877*fl[15]+3.0*(fl[14]-1.0*(fl[13]+fl[11]))+5.196152422706631*(fl[6]-1.0*(fl[10]+fl[7]))+9.0*fl[3])/(20.78460969082652*EPSILON+fl[12]+1.732050807568877*(fl[9]-1.0*(fl[8]+fl[5]))+3.0*(fl[1]-1.0*(fl[4]+fl[2]))+5.196152422706631*fl[0]); 
  rVal[2] = (1.732050807568877*fl[15]+3.0*((-1.0*fl[14])+fl[13]-1.0*fl[11])+5.196152422706631*((-1.0*fl[10])+fl[7]-1.0*fl[6])+9.0*fl[3])/(20.78460969082652*EPSILON+fl[12]+1.732050807568877*((-1.0*fl[9])+fl[8]-1.0*fl[5])+3.0*((-1.0*fl[4])+fl[2]-1.0*fl[1])+5.196152422706631*fl[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fl[15]+3.0*(fl[14]+fl[13]-1.0*fl[11])+5.196152422706631*fl[10]-1.0*(5.196152422706631*(fl[7]+fl[6])+9.0*fl[3])))/(20.78460969082652*EPSILON-1.0*fl[12]+1.732050807568877*(fl[5]-1.0*(fl[9]+fl[8]))+3.0*((-1.0*fl[4])+fl[2]+fl[1])+5.196152422706631*fl[0]); 
  rVal[4] = (1.732050807568877*fl[15]+3.0*(fl[11]-1.0*(fl[14]+fl[13]))+5.196152422706631*(fl[10]-1.0*(fl[7]+fl[6]))+9.0*fl[3])/(20.78460969082652*EPSILON+fl[12]+1.732050807568877*(fl[5]-1.0*(fl[9]+fl[8]))+3.0*(fl[4]-1.0*(fl[2]+fl[1]))+5.196152422706631*fl[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fl[15]+3.0*(fl[14]-1.0*fl[13]+fl[11])+5.196152422706631*(fl[7]-1.0*fl[10])-1.0*(5.196152422706631*fl[6]+9.0*fl[3])))/(20.78460969082652*EPSILON-1.0*fl[12]+1.732050807568877*((-1.0*fl[9])+fl[8]-1.0*fl[5])+3.0*(fl[4]-1.0*fl[2]+fl[1])+5.196152422706631*fl[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fl[15]+3.0*((-1.0*fl[14])+fl[13]+fl[11])+5.196152422706631*(fl[6]-1.0*(fl[10]+fl[7]))-9.0*fl[3]))/(20.78460969082652*EPSILON-1.0*fl[12]+1.732050807568877*(fl[9]-1.0*(fl[8]+fl[5]))+3.0*(fl[4]+fl[2]-1.0*fl[1])+5.196152422706631*fl[0]); 
  rVal[7] = (1.732050807568877*fl[15]+3.0*(fl[14]+fl[13]+fl[11])+5.196152422706631*(fl[10]+fl[7]+fl[6])+9.0*fl[3])/(20.78460969082652*EPSILON+fl[12]+1.732050807568877*(fl[9]+fl[8]+fl[5])+3.0*(fl[4]+fl[2]+fl[1])+5.196152422706631*fl[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on vx surface 
  fqVal[0] = -0.04811252243246882*(fl[12]-1.732050807568877*(fl[9]+fl[8]+fl[5])+3.0*(fl[4]+fl[2]+fl[1])-5.196152422706631*fl[0])*limTheta(rVal[0],1.0,cflL); 
  fqVal[1] = 0.04811252243246882*(fl[12]+1.732050807568877*(fl[9]-1.0*(fl[8]+fl[5]))+3.0*(fl[1]-1.0*(fl[4]+fl[2]))+5.196152422706631*fl[0])*limTheta(rVal[1],1.0,cflL); 
  fqVal[2] = 0.04811252243246882*(fl[12]+1.732050807568877*((-1.0*fl[9])+fl[8]-1.0*fl[5])+3.0*((-1.0*fl[4])+fl[2]-1.0*fl[1])+5.196152422706631*fl[0])*limTheta(rVal[2],1.0,cflL); 
  fqVal[3] = -0.04811252243246882*(fl[12]+1.732050807568877*(fl[9]+fl[8]-1.0*fl[5])+3.0*fl[4]-1.0*(3.0*(fl[2]+fl[1])+5.196152422706631*fl[0]))*limTheta(rVal[3],1.0,cflL); 
  fqVal[4] = 0.04811252243246882*(fl[12]+1.732050807568877*(fl[5]-1.0*(fl[9]+fl[8]))+3.0*(fl[4]-1.0*(fl[2]+fl[1]))+5.196152422706631*fl[0])*limTheta(rVal[4],1.0,cflL); 
  fqVal[5] = -0.04811252243246882*(fl[12]+1.732050807568877*(fl[9]-1.0*fl[8]+fl[5])+3.0*(fl[2]-1.0*fl[4])-1.0*(3.0*fl[1]+5.196152422706631*fl[0]))*limTheta(rVal[5],1.0,cflL); 
  fqVal[6] = -0.04811252243246882*(fl[12]+1.732050807568877*((-1.0*fl[9])+fl[8]+fl[5])+3.0*(fl[1]-1.0*(fl[4]+fl[2]))-5.196152422706631*fl[0])*limTheta(rVal[6],1.0,cflL); 
  fqVal[7] = 0.04811252243246882*(fl[12]+1.732050807568877*(fl[9]+fl[8]+fl[5])+3.0*(fl[4]+fl[2]+fl[1])+5.196152422706631*fl[0])*limTheta(rVal[7],1.0,cflL); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[5]*fhatALVal[5]+alpha[4]*fhatALVal[4]+alpha[3]*fhatALVal[3]+alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_v; 
  incr[1] = 0.25*(alpha[3]*fhatALVal[5]+fhatALVal[3]*alpha[5]+alpha[2]*fhatALVal[4]+fhatALVal[2]*alpha[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_v; 
  incr[2] = 0.25*(alpha[5]*fhatALVal[7]+alpha[3]*fhatALVal[6]+alpha[1]*fhatALVal[4]+fhatALVal[1]*alpha[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_v; 
  incr[3] = -0.4330127018922193*(alpha[5]*fhatALVal[5]+alpha[4]*fhatALVal[4]+alpha[3]*fhatALVal[3]+alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_v; 
  incr[4] = 0.25*(alpha[4]*fhatALVal[7]+alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+fhatALVal[1]*alpha[5]+alpha[0]*fhatALVal[3]+fhatALVal[0]*alpha[3])*dfac_v; 
  incr[5] = 0.25*(alpha[3]*fhatALVal[7]+alpha[5]*fhatALVal[6]+alpha[0]*fhatALVal[4]+fhatALVal[0]*alpha[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_v; 
  incr[6] = -0.4330127018922193*(alpha[3]*fhatALVal[5]+fhatALVal[3]*alpha[5]+alpha[2]*fhatALVal[4]+fhatALVal[2]*alpha[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_v; 
  incr[7] = -0.4330127018922193*(alpha[5]*fhatALVal[7]+alpha[3]*fhatALVal[6]+alpha[1]*fhatALVal[4]+fhatALVal[1]*alpha[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_v; 
  incr[8] = 0.25*(alpha[2]*fhatALVal[7]+alpha[4]*fhatALVal[6]+alpha[0]*fhatALVal[5]+fhatALVal[0]*alpha[5]+alpha[1]*fhatALVal[3]+fhatALVal[1]*alpha[3])*dfac_v; 
  incr[9] = 0.25*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[4]*fhatALVal[5]+fhatALVal[4]*alpha[5]+alpha[2]*fhatALVal[3]+fhatALVal[2]*alpha[3])*dfac_v; 
  incr[10] = -0.4330127018922193*(alpha[4]*fhatALVal[7]+alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+fhatALVal[1]*alpha[5]+alpha[0]*fhatALVal[3]+fhatALVal[0]*alpha[3])*dfac_v; 
  incr[11] = -0.4330127018922193*(alpha[3]*fhatALVal[7]+alpha[5]*fhatALVal[6]+alpha[0]*fhatALVal[4]+fhatALVal[0]*alpha[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_v; 
  incr[12] = 0.25*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5]+fhatALVal[2]*alpha[5]+alpha[3]*fhatALVal[4]+fhatALVal[3]*alpha[4])*dfac_v; 
  incr[13] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[4]*fhatALVal[6]+alpha[0]*fhatALVal[5]+fhatALVal[0]*alpha[5]+alpha[1]*fhatALVal[3]+fhatALVal[1]*alpha[3])*dfac_v; 
  incr[14] = -0.4330127018922193*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[4]*fhatALVal[5]+fhatALVal[4]*alpha[5]+alpha[2]*fhatALVal[3]+fhatALVal[2]*alpha[3])*dfac_v; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5]+fhatALVal[2]*alpha[5]+alpha[3]*fhatALVal[4]+fhatALVal[3]*alpha[4])*dfac_v; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += -1.0*incr[2]; 
  outl[3] += incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += -1.0*incr[5]; 
  outl[6] += incr[6]; 
  outl[7] += incr[7]; 
  outl[8] += -1.0*incr[8]; 
  outl[9] += -1.0*incr[9]; 
  outl[10] += incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += -1.0*incr[12]; 
  outl[13] += incr[13]; 
  outl[14] += incr[14]; 
  outl[15] += incr[15]; 
  } else { 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than vx 
  rVal[0] = -(1.0*(1.732050807568877*fr[15]-3.0*(fr[14]+fr[13]+fr[11])+5.196152422706631*(fr[10]+fr[7]+fr[6])-9.0*fr[3]))/(20.78460969082652*EPSILON-1.0*fr[12]+1.732050807568877*(fr[9]+fr[8]+fr[5])-3.0*(fr[4]+fr[2]+fr[1])+5.196152422706631*fr[0]); 
  rVal[1] = (1.732050807568877*fr[15]+3.0*(fr[14]-1.0*(fr[13]+fr[11]))+5.196152422706631*(fr[6]-1.0*(fr[10]+fr[7]))+9.0*fr[3])/(20.78460969082652*EPSILON+fr[12]+1.732050807568877*(fr[9]-1.0*(fr[8]+fr[5]))+3.0*(fr[1]-1.0*(fr[4]+fr[2]))+5.196152422706631*fr[0]); 
  rVal[2] = (1.732050807568877*fr[15]+3.0*((-1.0*fr[14])+fr[13]-1.0*fr[11])+5.196152422706631*((-1.0*fr[10])+fr[7]-1.0*fr[6])+9.0*fr[3])/(20.78460969082652*EPSILON+fr[12]+1.732050807568877*((-1.0*fr[9])+fr[8]-1.0*fr[5])+3.0*((-1.0*fr[4])+fr[2]-1.0*fr[1])+5.196152422706631*fr[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fr[15]+3.0*(fr[14]+fr[13]-1.0*fr[11])+5.196152422706631*fr[10]-1.0*(5.196152422706631*(fr[7]+fr[6])+9.0*fr[3])))/(20.78460969082652*EPSILON-1.0*fr[12]+1.732050807568877*(fr[5]-1.0*(fr[9]+fr[8]))+3.0*((-1.0*fr[4])+fr[2]+fr[1])+5.196152422706631*fr[0]); 
  rVal[4] = (1.732050807568877*fr[15]+3.0*(fr[11]-1.0*(fr[14]+fr[13]))+5.196152422706631*(fr[10]-1.0*(fr[7]+fr[6]))+9.0*fr[3])/(20.78460969082652*EPSILON+fr[12]+1.732050807568877*(fr[5]-1.0*(fr[9]+fr[8]))+3.0*(fr[4]-1.0*(fr[2]+fr[1]))+5.196152422706631*fr[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fr[15]+3.0*(fr[14]-1.0*fr[13]+fr[11])+5.196152422706631*(fr[7]-1.0*fr[10])-1.0*(5.196152422706631*fr[6]+9.0*fr[3])))/(20.78460969082652*EPSILON-1.0*fr[12]+1.732050807568877*((-1.0*fr[9])+fr[8]-1.0*fr[5])+3.0*(fr[4]-1.0*fr[2]+fr[1])+5.196152422706631*fr[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fr[15]+3.0*((-1.0*fr[14])+fr[13]+fr[11])+5.196152422706631*(fr[6]-1.0*(fr[10]+fr[7]))-9.0*fr[3]))/(20.78460969082652*EPSILON-1.0*fr[12]+1.732050807568877*(fr[9]-1.0*(fr[8]+fr[5]))+3.0*(fr[4]+fr[2]-1.0*fr[1])+5.196152422706631*fr[0]); 
  rVal[7] = (1.732050807568877*fr[15]+3.0*(fr[14]+fr[13]+fr[11])+5.196152422706631*(fr[10]+fr[7]+fr[6])+9.0*fr[3])/(20.78460969082652*EPSILON+fr[12]+1.732050807568877*(fr[9]+fr[8]+fr[5])+3.0*(fr[4]+fr[2]+fr[1])+5.196152422706631*fr[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on vx surface 
  fqVal[0] = -0.04811252243246882*(fr[12]-1.732050807568877*(fr[9]+fr[8]+fr[5])+3.0*(fr[4]+fr[2]+fr[1])-5.196152422706631*fr[0])*limTheta(rVal[0],-1.0,cflR); 
  fqVal[1] = 0.04811252243246882*(fr[12]+1.732050807568877*(fr[9]-1.0*(fr[8]+fr[5]))+3.0*(fr[1]-1.0*(fr[4]+fr[2]))+5.196152422706631*fr[0])*limTheta(rVal[1],-1.0,cflR); 
  fqVal[2] = 0.04811252243246882*(fr[12]+1.732050807568877*((-1.0*fr[9])+fr[8]-1.0*fr[5])+3.0*((-1.0*fr[4])+fr[2]-1.0*fr[1])+5.196152422706631*fr[0])*limTheta(rVal[2],-1.0,cflR); 
  fqVal[3] = -0.04811252243246882*(fr[12]+1.732050807568877*(fr[9]+fr[8]-1.0*fr[5])+3.0*fr[4]-1.0*(3.0*(fr[2]+fr[1])+5.196152422706631*fr[0]))*limTheta(rVal[3],-1.0,cflR); 
  fqVal[4] = 0.04811252243246882*(fr[12]+1.732050807568877*(fr[5]-1.0*(fr[9]+fr[8]))+3.0*(fr[4]-1.0*(fr[2]+fr[1]))+5.196152422706631*fr[0])*limTheta(rVal[4],-1.0,cflR); 
  fqVal[5] = -0.04811252243246882*(fr[12]+1.732050807568877*(fr[9]-1.0*fr[8]+fr[5])+3.0*(fr[2]-1.0*fr[4])-1.0*(3.0*fr[1]+5.196152422706631*fr[0]))*limTheta(rVal[5],-1.0,cflR); 
  fqVal[6] = -0.04811252243246882*(fr[12]+1.732050807568877*((-1.0*fr[9])+fr[8]+fr[5])+3.0*(fr[1]-1.0*(fr[4]+fr[2]))-5.196152422706631*fr[0])*limTheta(rVal[6],-1.0,cflR); 
  fqVal[7] = 0.04811252243246882*(fr[12]+1.732050807568877*(fr[9]+fr[8]+fr[5])+3.0*(fr[4]+fr[2]+fr[1])+5.196152422706631*fr[0])*limTheta(rVal[7],-1.0,cflR); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[5]*fhatALVal[5]+alpha[4]*fhatALVal[4]+alpha[3]*fhatALVal[3]+alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_v; 
  incr[1] = 0.25*(alpha[3]*fhatALVal[5]+fhatALVal[3]*alpha[5]+alpha[2]*fhatALVal[4]+fhatALVal[2]*alpha[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_v; 
  incr[2] = 0.25*(alpha[5]*fhatALVal[7]+alpha[3]*fhatALVal[6]+alpha[1]*fhatALVal[4]+fhatALVal[1]*alpha[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_v; 
  incr[3] = -0.4330127018922193*(alpha[5]*fhatALVal[5]+alpha[4]*fhatALVal[4]+alpha[3]*fhatALVal[3]+alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_v; 
  incr[4] = 0.25*(alpha[4]*fhatALVal[7]+alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+fhatALVal[1]*alpha[5]+alpha[0]*fhatALVal[3]+fhatALVal[0]*alpha[3])*dfac_v; 
  incr[5] = 0.25*(alpha[3]*fhatALVal[7]+alpha[5]*fhatALVal[6]+alpha[0]*fhatALVal[4]+fhatALVal[0]*alpha[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_v; 
  incr[6] = -0.4330127018922193*(alpha[3]*fhatALVal[5]+fhatALVal[3]*alpha[5]+alpha[2]*fhatALVal[4]+fhatALVal[2]*alpha[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_v; 
  incr[7] = -0.4330127018922193*(alpha[5]*fhatALVal[7]+alpha[3]*fhatALVal[6]+alpha[1]*fhatALVal[4]+fhatALVal[1]*alpha[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_v; 
  incr[8] = 0.25*(alpha[2]*fhatALVal[7]+alpha[4]*fhatALVal[6]+alpha[0]*fhatALVal[5]+fhatALVal[0]*alpha[5]+alpha[1]*fhatALVal[3]+fhatALVal[1]*alpha[3])*dfac_v; 
  incr[9] = 0.25*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[4]*fhatALVal[5]+fhatALVal[4]*alpha[5]+alpha[2]*fhatALVal[3]+fhatALVal[2]*alpha[3])*dfac_v; 
  incr[10] = -0.4330127018922193*(alpha[4]*fhatALVal[7]+alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+fhatALVal[1]*alpha[5]+alpha[0]*fhatALVal[3]+fhatALVal[0]*alpha[3])*dfac_v; 
  incr[11] = -0.4330127018922193*(alpha[3]*fhatALVal[7]+alpha[5]*fhatALVal[6]+alpha[0]*fhatALVal[4]+fhatALVal[0]*alpha[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_v; 
  incr[12] = 0.25*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5]+fhatALVal[2]*alpha[5]+alpha[3]*fhatALVal[4]+fhatALVal[3]*alpha[4])*dfac_v; 
  incr[13] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[4]*fhatALVal[6]+alpha[0]*fhatALVal[5]+fhatALVal[0]*alpha[5]+alpha[1]*fhatALVal[3]+fhatALVal[1]*alpha[3])*dfac_v; 
  incr[14] = -0.4330127018922193*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[4]*fhatALVal[5]+fhatALVal[4]*alpha[5]+alpha[2]*fhatALVal[3]+fhatALVal[2]*alpha[3])*dfac_v; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5]+fhatALVal[2]*alpha[5]+alpha[3]*fhatALVal[4]+fhatALVal[3]*alpha[4])*dfac_v; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += -1.0*incr[2]; 
  outl[3] += incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += -1.0*incr[5]; 
  outl[6] += incr[6]; 
  outl[7] += incr[7]; 
  outl[8] += -1.0*incr[8]; 
  outl[9] += -1.0*incr[9]; 
  outl[10] += incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += -1.0*incr[12]; 
  outl[13] += incr[13]; 
  outl[14] += incr[14]; 
  outl[15] += incr[15]; 
  } 
#elif upwindType == QUAD 
double fupwind[16];
double fupwindQuad[16];
  if(0.3535533905932737*(alpha[5]+alpha[4])-0.3535533905932737*(alpha[3]+alpha[2]+alpha[1])+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[0] = (-0.25*fl[15])+0.25*(fl[14]+fl[13])-0.25*fl[12]+0.25*fl[11]-0.25*fl[10]+0.25*(fl[9]+fl[8])-0.25*(fl[7]+fl[6])+0.25*fl[5]-0.25*fl[4]+0.25*fl[3]-0.25*(fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[0] = 0.25*fr[15]-0.25*(fr[14]+fr[13]+fr[12]+fr[11])+0.25*(fr[10]+fr[9]+fr[8]+fr[7]+fr[6]+fr[5])-0.25*(fr[4]+fr[3]+fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[1]+alpha[0])-0.3535533905932737*(alpha[5]+alpha[4]+alpha[3]+alpha[2]) > 0) {
  fupwindQuad[1] = 0.25*(fl[15]+fl[14])-0.25*fl[13]+0.25*fl[12]-0.25*(fl[11]+fl[10])+0.25*fl[9]-0.25*(fl[8]+fl[7])+0.25*fl[6]-0.25*(fl[5]+fl[4])+0.25*fl[3]-0.25*fl[2]+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[1] = (-0.25*(fr[15]+fr[14]))+0.25*(fr[13]+fr[12]+fr[11]+fr[10]+fr[9])-0.25*fr[8]+0.25*fr[7]-0.25*(fr[6]+fr[5]+fr[4]+fr[3]+fr[2])+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[5]-0.3535533905932737*(alpha[4]+alpha[3])+0.3535533905932737*alpha[2]-0.3535533905932737*alpha[1]+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[2] = 0.25*fl[15]-0.25*fl[14]+0.25*(fl[13]+fl[12])-0.25*(fl[11]+fl[10]+fl[9])+0.25*(fl[8]+fl[7])-0.25*(fl[6]+fl[5]+fl[4])+0.25*(fl[3]+fl[2])-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[2] = (-0.25*fr[15])+0.25*fr[14]-0.25*fr[13]+0.25*(fr[12]+fr[11]+fr[10])-0.25*fr[9]+0.25*fr[8]-0.25*fr[7]+0.25*fr[6]-0.25*(fr[5]+fr[4]+fr[3])+0.25*fr[2]-0.25*fr[1]+0.25*fr[0]; 
  }
  if((-0.3535533905932737*alpha[5])+0.3535533905932737*alpha[4]-0.3535533905932737*alpha[3]+0.3535533905932737*(alpha[2]+alpha[1]+alpha[0]) > 0) {
  fupwindQuad[3] = (-0.25*(fl[15]+fl[14]+fl[13]+fl[12]))+0.25*fl[11]-0.25*(fl[10]+fl[9]+fl[8])+0.25*(fl[7]+fl[6]+fl[5])-0.25*fl[4]+0.25*(fl[3]+fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[3] = 0.25*(fr[15]+fr[14]+fr[13])-0.25*(fr[12]+fr[11])+0.25*fr[10]-0.25*(fr[9]+fr[8]+fr[7]+fr[6])+0.25*fr[5]-0.25*(fr[4]+fr[3])+0.25*(fr[2]+fr[1]+fr[0]); 
  }
  if(0.3535533905932737*(alpha[5]+alpha[4])-0.3535533905932737*(alpha[3]+alpha[2]+alpha[1])+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[4] = 0.25*fl[15]-0.25*(fl[14]+fl[13]+fl[12]+fl[11])+0.25*(fl[10]+fl[9]+fl[8]+fl[7]+fl[6]+fl[5])-0.25*(fl[4]+fl[3]+fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[4] = (-0.25*fr[15])+0.25*(fr[14]+fr[13])-0.25*fr[12]+0.25*fr[11]-0.25*fr[10]+0.25*(fr[9]+fr[8])-0.25*(fr[7]+fr[6])+0.25*fr[5]-0.25*fr[4]+0.25*fr[3]-0.25*(fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[1]+alpha[0])-0.3535533905932737*(alpha[5]+alpha[4]+alpha[3]+alpha[2]) > 0) {
  fupwindQuad[5] = (-0.25*(fl[15]+fl[14]))+0.25*(fl[13]+fl[12]+fl[11]+fl[10]+fl[9])-0.25*fl[8]+0.25*fl[7]-0.25*(fl[6]+fl[5]+fl[4]+fl[3]+fl[2])+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[5] = 0.25*(fr[15]+fr[14])-0.25*fr[13]+0.25*fr[12]-0.25*(fr[11]+fr[10])+0.25*fr[9]-0.25*(fr[8]+fr[7])+0.25*fr[6]-0.25*(fr[5]+fr[4])+0.25*fr[3]-0.25*fr[2]+0.25*(fr[1]+fr[0]); 
  }
  if(0.3535533905932737*alpha[5]-0.3535533905932737*(alpha[4]+alpha[3])+0.3535533905932737*alpha[2]-0.3535533905932737*alpha[1]+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[6] = (-0.25*fl[15])+0.25*fl[14]-0.25*fl[13]+0.25*(fl[12]+fl[11]+fl[10])-0.25*fl[9]+0.25*fl[8]-0.25*fl[7]+0.25*fl[6]-0.25*(fl[5]+fl[4]+fl[3])+0.25*fl[2]-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[6] = 0.25*fr[15]-0.25*fr[14]+0.25*(fr[13]+fr[12])-0.25*(fr[11]+fr[10]+fr[9])+0.25*(fr[8]+fr[7])-0.25*(fr[6]+fr[5]+fr[4])+0.25*(fr[3]+fr[2])-0.25*fr[1]+0.25*fr[0]; 
  }
  if((-0.3535533905932737*alpha[5])+0.3535533905932737*alpha[4]-0.3535533905932737*alpha[3]+0.3535533905932737*(alpha[2]+alpha[1]+alpha[0]) > 0) {
  fupwindQuad[7] = 0.25*(fl[15]+fl[14]+fl[13])-0.25*(fl[12]+fl[11])+0.25*fl[10]-0.25*(fl[9]+fl[8]+fl[7]+fl[6])+0.25*fl[5]-0.25*(fl[4]+fl[3])+0.25*(fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[7] = (-0.25*(fr[15]+fr[14]+fr[13]+fr[12]))+0.25*fr[11]-0.25*(fr[10]+fr[9]+fr[8])+0.25*(fr[7]+fr[6]+fr[5])-0.25*fr[4]+0.25*(fr[3]+fr[2]+fr[1]+fr[0]); 
  }
  if((-0.3535533905932737*alpha[5])+0.3535533905932737*(alpha[4]+alpha[3])-0.3535533905932737*(alpha[2]+alpha[1])+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[8] = 0.25*fl[15]-0.25*(fl[14]+fl[13])+0.25*(fl[12]+fl[11]+fl[10])-0.25*(fl[9]+fl[8]+fl[7]+fl[6])+0.25*(fl[5]+fl[4]+fl[3])-0.25*(fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[8] = (-0.25*fr[15])+0.25*(fr[14]+fr[13]+fr[12])-0.25*(fr[11]+fr[10]+fr[9]+fr[8])+0.25*(fr[7]+fr[6]+fr[5]+fr[4])-0.25*(fr[3]+fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[5]-0.3535533905932737*alpha[4]+0.3535533905932737*alpha[3]-0.3535533905932737*alpha[2]+0.3535533905932737*(alpha[1]+alpha[0]) > 0) {
  fupwindQuad[9] = (-0.25*(fl[15]+fl[14]))+0.25*fl[13]-0.25*(fl[12]+fl[11])+0.25*fl[10]-0.25*fl[9]+0.25*fl[8]-0.25*fl[7]+0.25*fl[6]-0.25*fl[5]+0.25*(fl[4]+fl[3])-0.25*fl[2]+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[9] = 0.25*(fr[15]+fr[14])-0.25*(fr[13]+fr[12])+0.25*fr[11]-0.25*(fr[10]+fr[9])+0.25*(fr[8]+fr[7])-0.25*(fr[6]+fr[5])+0.25*fr[4]-0.25*(fr[3]+fr[2])+0.25*(fr[1]+fr[0]); 
  }
  if((-0.3535533905932737*(alpha[5]+alpha[4]))+0.3535533905932737*(alpha[3]+alpha[2])-0.3535533905932737*alpha[1]+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[10] = (-0.25*fl[15])+0.25*fl[14]-0.25*(fl[13]+fl[12]+fl[11])+0.25*(fl[10]+fl[9])-0.25*fl[8]+0.25*fl[7]-0.25*(fl[6]+fl[5])+0.25*(fl[4]+fl[3]+fl[2])-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[10] = 0.25*fr[15]-0.25*fr[14]+0.25*fr[13]-0.25*fr[12]+0.25*fr[11]-0.25*fr[10]+0.25*fr[9]-0.25*(fr[8]+fr[7])+0.25*fr[6]-0.25*fr[5]+0.25*fr[4]-0.25*fr[3]+0.25*fr[2]-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[5]+alpha[4]+alpha[3]+alpha[2]+alpha[1]+alpha[0]) > 0) {
  fupwindQuad[11] = 0.25*(fl[15]+fl[14]+fl[13]+fl[12]+fl[11]+fl[10]+fl[9]+fl[8]+fl[7]+fl[6]+fl[5]+fl[4]+fl[3]+fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[11] = (-0.25*(fr[15]+fr[14]+fr[13]))+0.25*fr[12]-0.25*(fr[11]+fr[10])+0.25*(fr[9]+fr[8])-0.25*(fr[7]+fr[6])+0.25*(fr[5]+fr[4])-0.25*fr[3]+0.25*(fr[2]+fr[1]+fr[0]); 
  }
  if((-0.3535533905932737*alpha[5])+0.3535533905932737*(alpha[4]+alpha[3])-0.3535533905932737*(alpha[2]+alpha[1])+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[12] = (-0.25*fl[15])+0.25*(fl[14]+fl[13]+fl[12])-0.25*(fl[11]+fl[10]+fl[9]+fl[8])+0.25*(fl[7]+fl[6]+fl[5]+fl[4])-0.25*(fl[3]+fl[2]+fl[1])+0.25*fl[0]; 
  } else {
  fupwindQuad[12] = 0.25*fr[15]-0.25*(fr[14]+fr[13])+0.25*(fr[12]+fr[11]+fr[10])-0.25*(fr[9]+fr[8]+fr[7]+fr[6])+0.25*(fr[5]+fr[4]+fr[3])-0.25*(fr[2]+fr[1])+0.25*fr[0]; 
  }
  if(0.3535533905932737*alpha[5]-0.3535533905932737*alpha[4]+0.3535533905932737*alpha[3]-0.3535533905932737*alpha[2]+0.3535533905932737*(alpha[1]+alpha[0]) > 0) {
  fupwindQuad[13] = 0.25*(fl[15]+fl[14])-0.25*(fl[13]+fl[12])+0.25*fl[11]-0.25*(fl[10]+fl[9])+0.25*(fl[8]+fl[7])-0.25*(fl[6]+fl[5])+0.25*fl[4]-0.25*(fl[3]+fl[2])+0.25*(fl[1]+fl[0]); 
  } else {
  fupwindQuad[13] = (-0.25*(fr[15]+fr[14]))+0.25*fr[13]-0.25*(fr[12]+fr[11])+0.25*fr[10]-0.25*fr[9]+0.25*fr[8]-0.25*fr[7]+0.25*fr[6]-0.25*fr[5]+0.25*(fr[4]+fr[3])-0.25*fr[2]+0.25*(fr[1]+fr[0]); 
  }
  if((-0.3535533905932737*(alpha[5]+alpha[4]))+0.3535533905932737*(alpha[3]+alpha[2])-0.3535533905932737*alpha[1]+0.3535533905932737*alpha[0] > 0) {
  fupwindQuad[14] = 0.25*fl[15]-0.25*fl[14]+0.25*fl[13]-0.25*fl[12]+0.25*fl[11]-0.25*fl[10]+0.25*fl[9]-0.25*(fl[8]+fl[7])+0.25*fl[6]-0.25*fl[5]+0.25*fl[4]-0.25*fl[3]+0.25*fl[2]-0.25*fl[1]+0.25*fl[0]; 
  } else {
  fupwindQuad[14] = (-0.25*fr[15])+0.25*fr[14]-0.25*(fr[13]+fr[12]+fr[11])+0.25*(fr[10]+fr[9])-0.25*fr[8]+0.25*fr[7]-0.25*(fr[6]+fr[5])+0.25*(fr[4]+fr[3]+fr[2])-0.25*fr[1]+0.25*fr[0]; 
  }
  if(0.3535533905932737*(alpha[5]+alpha[4]+alpha[3]+alpha[2]+alpha[1]+alpha[0]) > 0) {
  fupwindQuad[15] = (-0.25*(fl[15]+fl[14]+fl[13]))+0.25*fl[12]-0.25*(fl[11]+fl[10])+0.25*(fl[9]+fl[8])-0.25*(fl[7]+fl[6])+0.25*(fl[5]+fl[4])-0.25*fl[3]+0.25*(fl[2]+fl[1]+fl[0]); 
  } else {
  fupwindQuad[15] = 0.25*(fr[15]+fr[14]+fr[13]+fr[12]+fr[11]+fr[10]+fr[9]+fr[8]+fr[7]+fr[6]+fr[5]+fr[4]+fr[3]+fr[2]+fr[1]+fr[0]); 
  }
  fupwind[0] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[1] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*fupwindQuad[12]+fupwindQuad[11]-1.0*fupwindQuad[10]+fupwindQuad[9]-1.0*fupwindQuad[8]+fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[2] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12])+fupwindQuad[11]+fupwindQuad[10]-1.0*(fupwindQuad[9]+fupwindQuad[8])+fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[3] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]-1.0*(fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8])+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[4] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]-1.0*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[5] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]+fupwindQuad[11]-1.0*(fupwindQuad[10]+fupwindQuad[9])+fupwindQuad[8]+fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  fupwind[6] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*(fupwindQuad[12]+fupwindQuad[11])+fupwindQuad[10]-1.0*fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[7] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10])+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[8] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*fupwindQuad[12]+fupwindQuad[11]-1.0*fupwindQuad[10]+fupwindQuad[9]-1.0*(fupwindQuad[8]+fupwindQuad[7])+fupwindQuad[6]-1.0*fupwindQuad[5]+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[9] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12])+fupwindQuad[11]+fupwindQuad[10]-1.0*(fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6])+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[10] = 0.25*(fupwindQuad[15]+fupwindQuad[14]+fupwindQuad[13]+fupwindQuad[12]-1.0*(fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]+fupwindQuad[8]+fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[11] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]-1.0*fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]-1.0*fupwindQuad[8]+fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[12] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]+fupwindQuad[11]-1.0*(fupwindQuad[10]+fupwindQuad[9])+fupwindQuad[8]-1.0*fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[13] = 0.25*(fupwindQuad[15]-1.0*fupwindQuad[14]+fupwindQuad[13]-1.0*(fupwindQuad[12]+fupwindQuad[11])+fupwindQuad[10]-1.0*fupwindQuad[9]+fupwindQuad[8]-1.0*fupwindQuad[7]+fupwindQuad[6]-1.0*fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[14] = 0.25*(fupwindQuad[15]+fupwindQuad[14]-1.0*(fupwindQuad[13]+fupwindQuad[12]+fupwindQuad[11]+fupwindQuad[10])+fupwindQuad[9]+fupwindQuad[8]-1.0*(fupwindQuad[7]+fupwindQuad[6])+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[15] = 0.25*(fupwindQuad[15]-1.0*(fupwindQuad[14]+fupwindQuad[13])+fupwindQuad[12]-1.0*fupwindQuad[11]+fupwindQuad[10]+fupwindQuad[9]-1.0*(fupwindQuad[8]+fupwindQuad[7])+fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  double rVal[8];  // rVal=f1/f0 at each control node in dimensions other than vx 
  rVal[0] = -(1.0*(1.732050807568877*fupwind[15]-3.0*(fupwind[14]+fupwind[13]+fupwind[11])+5.196152422706631*(fupwind[10]+fupwind[7]+fupwind[6])-9.0*fupwind[3]))/(20.78460969082652*EPSILON-1.0*fupwind[12]+1.732050807568877*(fupwind[9]+fupwind[8]+fupwind[5])-3.0*(fupwind[4]+fupwind[2]+fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[1] = (1.732050807568877*fupwind[15]+3.0*(fupwind[14]-1.0*(fupwind[13]+fupwind[11]))+5.196152422706631*(fupwind[6]-1.0*(fupwind[10]+fupwind[7]))+9.0*fupwind[3])/(20.78460969082652*EPSILON+fupwind[12]+1.732050807568877*(fupwind[9]-1.0*(fupwind[8]+fupwind[5]))+3.0*(fupwind[1]-1.0*(fupwind[4]+fupwind[2]))+5.196152422706631*fupwind[0]); 
  rVal[2] = (1.732050807568877*fupwind[15]+3.0*((-1.0*fupwind[14])+fupwind[13]-1.0*fupwind[11])+5.196152422706631*((-1.0*fupwind[10])+fupwind[7]-1.0*fupwind[6])+9.0*fupwind[3])/(20.78460969082652*EPSILON+fupwind[12]+1.732050807568877*((-1.0*fupwind[9])+fupwind[8]-1.0*fupwind[5])+3.0*((-1.0*fupwind[4])+fupwind[2]-1.0*fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[3] = -(1.0*(1.732050807568877*fupwind[15]+3.0*(fupwind[14]+fupwind[13]-1.0*fupwind[11])+5.196152422706631*fupwind[10]-1.0*(5.196152422706631*(fupwind[7]+fupwind[6])+9.0*fupwind[3])))/(20.78460969082652*EPSILON-1.0*fupwind[12]+1.732050807568877*(fupwind[5]-1.0*(fupwind[9]+fupwind[8]))+3.0*((-1.0*fupwind[4])+fupwind[2]+fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[4] = (1.732050807568877*fupwind[15]+3.0*(fupwind[11]-1.0*(fupwind[14]+fupwind[13]))+5.196152422706631*(fupwind[10]-1.0*(fupwind[7]+fupwind[6]))+9.0*fupwind[3])/(20.78460969082652*EPSILON+fupwind[12]+1.732050807568877*(fupwind[5]-1.0*(fupwind[9]+fupwind[8]))+3.0*(fupwind[4]-1.0*(fupwind[2]+fupwind[1]))+5.196152422706631*fupwind[0]); 
  rVal[5] = -(1.0*(1.732050807568877*fupwind[15]+3.0*(fupwind[14]-1.0*fupwind[13]+fupwind[11])+5.196152422706631*(fupwind[7]-1.0*fupwind[10])-1.0*(5.196152422706631*fupwind[6]+9.0*fupwind[3])))/(20.78460969082652*EPSILON-1.0*fupwind[12]+1.732050807568877*((-1.0*fupwind[9])+fupwind[8]-1.0*fupwind[5])+3.0*(fupwind[4]-1.0*fupwind[2]+fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[6] = -(1.0*(1.732050807568877*fupwind[15]+3.0*((-1.0*fupwind[14])+fupwind[13]+fupwind[11])+5.196152422706631*(fupwind[6]-1.0*(fupwind[10]+fupwind[7]))-9.0*fupwind[3]))/(20.78460969082652*EPSILON-1.0*fupwind[12]+1.732050807568877*(fupwind[9]-1.0*(fupwind[8]+fupwind[5]))+3.0*(fupwind[4]+fupwind[2]-1.0*fupwind[1])+5.196152422706631*fupwind[0]); 
  rVal[7] = (1.732050807568877*fupwind[15]+3.0*(fupwind[14]+fupwind[13]+fupwind[11])+5.196152422706631*(fupwind[10]+fupwind[7]+fupwind[6])+9.0*fupwind[3])/(20.78460969082652*EPSILON+fupwind[12]+1.732050807568877*(fupwind[9]+fupwind[8]+fupwind[5])+3.0*(fupwind[4]+fupwind[2]+fupwind[1])+5.196152422706631*fupwind[0]); 
  double fqVal[8];  // fqVal = anti-limited f evaluated at each control node on vx surface 
  fqVal[0] = -0.04811252243246882*(fupwind[12]-1.732050807568877*(fupwind[9]+fupwind[8]+fupwind[5])+3.0*(fupwind[4]+fupwind[2]+fupwind[1])-5.196152422706631*fupwind[0])*limTheta(rVal[0],-1.0,cflR); 
  fqVal[1] = 0.04811252243246882*(fupwind[12]+1.732050807568877*(fupwind[9]-1.0*(fupwind[8]+fupwind[5]))+3.0*(fupwind[1]-1.0*(fupwind[4]+fupwind[2]))+5.196152422706631*fupwind[0])*limTheta(rVal[1],-1.0,cflR); 
  fqVal[2] = 0.04811252243246882*(fupwind[12]+1.732050807568877*((-1.0*fupwind[9])+fupwind[8]-1.0*fupwind[5])+3.0*((-1.0*fupwind[4])+fupwind[2]-1.0*fupwind[1])+5.196152422706631*fupwind[0])*limTheta(rVal[2],-1.0,cflR); 
  fqVal[3] = -0.04811252243246882*(fupwind[12]+1.732050807568877*(fupwind[9]+fupwind[8]-1.0*fupwind[5])+3.0*fupwind[4]-1.0*(3.0*(fupwind[2]+fupwind[1])+5.196152422706631*fupwind[0]))*limTheta(rVal[3],-1.0,cflR); 
  fqVal[4] = 0.04811252243246882*(fupwind[12]+1.732050807568877*(fupwind[5]-1.0*(fupwind[9]+fupwind[8]))+3.0*(fupwind[4]-1.0*(fupwind[2]+fupwind[1]))+5.196152422706631*fupwind[0])*limTheta(rVal[4],-1.0,cflR); 
  fqVal[5] = -0.04811252243246882*(fupwind[12]+1.732050807568877*(fupwind[9]-1.0*fupwind[8]+fupwind[5])+3.0*(fupwind[2]-1.0*fupwind[4])-1.0*(3.0*fupwind[1]+5.196152422706631*fupwind[0]))*limTheta(rVal[5],-1.0,cflR); 
  fqVal[6] = -0.04811252243246882*(fupwind[12]+1.732050807568877*((-1.0*fupwind[9])+fupwind[8]+fupwind[5])+3.0*(fupwind[1]-1.0*(fupwind[4]+fupwind[2]))-5.196152422706631*fupwind[0])*limTheta(rVal[6],-1.0,cflR); 
  fqVal[7] = 0.04811252243246882*(fupwind[12]+1.732050807568877*(fupwind[9]+fupwind[8]+fupwind[5])+3.0*(fupwind[4]+fupwind[2]+fupwind[1])+5.196152422706631*fupwind[0])*limTheta(rVal[7],-1.0,cflR); 
  double fhatALVal[8];  // fhatALVal = mode coefficients of anti-limited f 
  fhatALVal[0] = 0.3535533905932737*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0]); 
  fhatALVal[1] = 0.6123724356957944*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*fqVal[4]+fqVal[3]-1.0*fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  fhatALVal[2] = 0.6123724356957944*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4])+fqVal[3]+fqVal[2]-1.0*(fqVal[1]+fqVal[0])); 
  fhatALVal[3] = 0.6123724356957944*(fqVal[7]+fqVal[6]+fqVal[5]+fqVal[4]-1.0*(fqVal[3]+fqVal[2]+fqVal[1]+fqVal[0])); 
  fhatALVal[4] = 1.060660171779821*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]+fqVal[3]-1.0*(fqVal[2]+fqVal[1])+fqVal[0]); 
  fhatALVal[5] = 1.060660171779821*(fqVal[7]-1.0*fqVal[6]+fqVal[5]-1.0*(fqVal[4]+fqVal[3])+fqVal[2]-1.0*fqVal[1]+fqVal[0]); 
  fhatALVal[6] = 1.060660171779821*(fqVal[7]+fqVal[6]-1.0*(fqVal[5]+fqVal[4]+fqVal[3]+fqVal[2])+fqVal[1]+fqVal[0]); 
  fhatALVal[7] = 1.837117307087383*(fqVal[7]-1.0*(fqVal[6]+fqVal[5])+fqVal[4]-1.0*fqVal[3]+fqVal[2]+fqVal[1]-1.0*fqVal[0]); 
  incr[0] = 0.25*(alpha[5]*fhatALVal[5]+alpha[4]*fhatALVal[4]+alpha[3]*fhatALVal[3]+alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_v; 
  incr[1] = 0.25*(alpha[3]*fhatALVal[5]+fhatALVal[3]*alpha[5]+alpha[2]*fhatALVal[4]+fhatALVal[2]*alpha[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_v; 
  incr[2] = 0.25*(alpha[5]*fhatALVal[7]+alpha[3]*fhatALVal[6]+alpha[1]*fhatALVal[4]+fhatALVal[1]*alpha[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_v; 
  incr[3] = -0.4330127018922193*(alpha[5]*fhatALVal[5]+alpha[4]*fhatALVal[4]+alpha[3]*fhatALVal[3]+alpha[2]*fhatALVal[2]+alpha[1]*fhatALVal[1]+alpha[0]*fhatALVal[0])*dfac_v; 
  incr[4] = 0.25*(alpha[4]*fhatALVal[7]+alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+fhatALVal[1]*alpha[5]+alpha[0]*fhatALVal[3]+fhatALVal[0]*alpha[3])*dfac_v; 
  incr[5] = 0.25*(alpha[3]*fhatALVal[7]+alpha[5]*fhatALVal[6]+alpha[0]*fhatALVal[4]+fhatALVal[0]*alpha[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_v; 
  incr[6] = -0.4330127018922193*(alpha[3]*fhatALVal[5]+fhatALVal[3]*alpha[5]+alpha[2]*fhatALVal[4]+fhatALVal[2]*alpha[4]+alpha[0]*fhatALVal[1]+fhatALVal[0]*alpha[1])*dfac_v; 
  incr[7] = -0.4330127018922193*(alpha[5]*fhatALVal[7]+alpha[3]*fhatALVal[6]+alpha[1]*fhatALVal[4]+fhatALVal[1]*alpha[4]+alpha[0]*fhatALVal[2]+fhatALVal[0]*alpha[2])*dfac_v; 
  incr[8] = 0.25*(alpha[2]*fhatALVal[7]+alpha[4]*fhatALVal[6]+alpha[0]*fhatALVal[5]+fhatALVal[0]*alpha[5]+alpha[1]*fhatALVal[3]+fhatALVal[1]*alpha[3])*dfac_v; 
  incr[9] = 0.25*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[4]*fhatALVal[5]+fhatALVal[4]*alpha[5]+alpha[2]*fhatALVal[3]+fhatALVal[2]*alpha[3])*dfac_v; 
  incr[10] = -0.4330127018922193*(alpha[4]*fhatALVal[7]+alpha[2]*fhatALVal[6]+alpha[1]*fhatALVal[5]+fhatALVal[1]*alpha[5]+alpha[0]*fhatALVal[3]+fhatALVal[0]*alpha[3])*dfac_v; 
  incr[11] = -0.4330127018922193*(alpha[3]*fhatALVal[7]+alpha[5]*fhatALVal[6]+alpha[0]*fhatALVal[4]+fhatALVal[0]*alpha[4]+alpha[1]*fhatALVal[2]+fhatALVal[1]*alpha[2])*dfac_v; 
  incr[12] = 0.25*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5]+fhatALVal[2]*alpha[5]+alpha[3]*fhatALVal[4]+fhatALVal[3]*alpha[4])*dfac_v; 
  incr[13] = -0.4330127018922193*(alpha[2]*fhatALVal[7]+alpha[4]*fhatALVal[6]+alpha[0]*fhatALVal[5]+fhatALVal[0]*alpha[5]+alpha[1]*fhatALVal[3]+fhatALVal[1]*alpha[3])*dfac_v; 
  incr[14] = -0.4330127018922193*(alpha[1]*fhatALVal[7]+alpha[0]*fhatALVal[6]+alpha[4]*fhatALVal[5]+fhatALVal[4]*alpha[5]+alpha[2]*fhatALVal[3]+fhatALVal[2]*alpha[3])*dfac_v; 
  incr[15] = -0.4330127018922193*(alpha[0]*fhatALVal[7]+alpha[1]*fhatALVal[6]+alpha[2]*fhatALVal[5]+fhatALVal[2]*alpha[5]+alpha[3]*fhatALVal[4]+fhatALVal[3]*alpha[4])*dfac_v; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 
  outr[8] += incr[8]; 
  outr[9] += incr[9]; 
  outr[10] += incr[10]; 
  outr[11] += incr[11]; 
  outr[12] += incr[12]; 
  outr[13] += incr[13]; 
  outr[14] += incr[14]; 
  outr[15] += incr[15]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += -1.0*incr[2]; 
  outl[3] += incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += -1.0*incr[5]; 
  outl[6] += incr[6]; 
  outl[7] += incr[7]; 
  outl[8] += -1.0*incr[8]; 
  outl[9] += -1.0*incr[9]; 
  outl[10] += incr[10]; 
  outl[11] += incr[11]; 
  outl[12] += -1.0*incr[12]; 
  outl[13] += incr[13]; 
  outl[14] += incr[14]; 
  outl[15] += incr[15]; 
#endif
  return std::abs(alpha0); 
} 
