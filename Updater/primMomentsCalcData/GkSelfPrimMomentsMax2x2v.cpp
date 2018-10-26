#include <PrimMomentsModDecl.h> 
 
using namespace Eigen; 
 
void GkM0Star2x2vMax_VX(const double intFac, const double *wl, const double *wr, const double *dxvl, const double *dxvr, const double *fl, const double *fr, double *out) 
{ 
  // intFac:  =2pi/m for gyrokinetics (not used in Vlasov). 
  // w[NDIM]: Cell-center coordinates. 
  // dxv[4]:  cell length in each direciton. 
  // fl/fr:   Distribution function in left/right cells 
  // out:     Increment to M_0^star from this cell surface. 
 
  const double dS = 0.5*dxvl[3]*intFac*(wr[2]-wl[2]); 
 
  out[0] += ((-0.5773502691896258*fr[3])+0.5773502691896258*fl[3]+0.5*fr[0]+0.5*fl[0])*dS; 
  out[1] += (0.5*fr[1]+0.5*fl[1])*dS; 
  out[2] += (0.5*fr[2]+0.5*fl[2])*dS; 
 
} 
 
void GkM1iM2Star2x2vMax(const double *w, const double *dxv, const double intFac, const double m_, const double *Bmag, const double *f, double *outM1i, double *outM2) 
{ 
  // w[4]:    Cell-center coordinates. 
  // dxv[4]:  Cell length in each direciton. 
  // intFac:  =2pi/m for gyrokinetics. 
  // m_:      mass. 
  // Bmag[3]: Magnetic field magnitude. 
  // f:       Distribution function. 
  // outM1i:  Contribution to M_1^star from this cell. 
  // outM2:   Contribution to M_2^star from this cell. 
 
  const double volFact = intFac*0.25*dxv[2]*dxv[3]; 
  double wvSq[2]; 
  wvSq[0]  = w[2]*w[2]; 
  wvSq[1]  = w[3]*w[3]; 
  double dvSq[2]; 
  dvSq[0] = dxv[2]*dxv[2]; 
  dvSq[1] = dxv[3]*dxv[3]; 
 
  outM1i[0] += 2.0*f[0]*w[2]*volFact; 
  outM1i[1] += 2.0*f[1]*w[2]*volFact; 
  outM1i[2] += 2.0*f[2]*w[2]*volFact; 
 
  double tmp[3]; 
  tmp[0] = 0.5773502691896258*dxv[3]*f[4]+2.0*f[0]*w[3]; 
  tmp[1] = 2.0*f[1]*w[3]; 
  tmp[2] = 2.0*f[2]*w[3]; 
 
  outM2[0] += ((1.0*Bmag[2]*tmp[2]+1.0*Bmag[1]*tmp[1]+1.0*Bmag[0]*tmp[0])/m_+0.5773502691896258*dxv[2]*w[2]*f[3]+2.0*f[0]*wvSq[0])*volFact; 
  outM2[1] += ((1.0*Bmag[0]*tmp[1]+1.0*tmp[0]*Bmag[1])/m_+2.0*f[1]*wvSq[0])*volFact; 
  outM2[2] += ((1.0*Bmag[0]*tmp[2]+1.0*tmp[0]*Bmag[2])/m_+2.0*f[2]*wvSq[0])*volFact; 
 
} 
void GkBoundaryIntegral2x2vMax_F_VX_P1(const bool atLower, const double intFac, const double vBoundary, const double *dxv, const double *fIn, double *out) 
{ 
  // atLower:   =true(false) if in cell at lower(upper) velocity boundary. 
  // intFac:    =2pi/m or 4pi/m for GkLBO (not used for Vlasov). 
  // vBoundary: velocity at the boundary of the velocity grid. 
  // dxv[4]:    cell length in each direciton. 
  // fIn[5]:    distribution function at velocity boundaries. 
  // out:       int dS of f|^(vmax)_(vmin) or vf^(vmax)_(vmin). 
 
  const double dS = 0.5*dxv[3]*intFac; 
 
  if (atLower) {
 
    out[0] += (1.732050807568877*fIn[3]-1.0*fIn[0])*dS; 
    out[1] += -1.0*fIn[1]*dS; 
    out[2] += -1.0*fIn[2]*dS; 
 
  } else {
 
    out[0] += (1.732050807568877*fIn[3]+fIn[0])*dS; 
    out[1] += fIn[1]*dS; 
    out[2] += fIn[2]*dS; 
 
  }
 
} 
 
void GkBoundaryIntegral2x2vMax_F_VX_P2(const bool atLower, const double intFac, const double vBoundary, const double *dxv, const double *fIn, double *out) 
{ 
  // atLower:   =true(false) if in cell at lower(upper) velocity boundary. 
  // intFac:    =2pi/m or 4pi/m for GkLBO (not used for Vlasov). 
  // vBoundary: velocity at the boundary of the velocity grid. 
  // dxv[4]:    cell length in each direciton. 
  // fIn[15]:    distribution function at velocity boundaries. 
  // out:       int dS of f|^(vmax)_(vmin) or vf^(vmax)_(vmin). 
 
  const double dS = 0.5*dxv[3]*intFac; 
 
  if (atLower) {
 
    out[0] += ((-2.23606797749979*fIn[13])+1.732050807568877*fIn[3]-1.0*fIn[0])*dS; 
    out[1] += (1.732050807568877*fIn[6]-1.0*fIn[1])*dS; 
    out[2] += (1.732050807568877*fIn[7]-1.0*fIn[2])*dS; 
    out[3] += -1.0*fIn[5]*dS; 
    out[4] += -1.0*fIn[11]*dS; 
    out[5] += -1.0*fIn[12]*dS; 
 
  } else {
 
    out[0] += (2.23606797749979*fIn[13]+1.732050807568877*fIn[3]+fIn[0])*dS; 
    out[1] += (1.732050807568877*fIn[6]+fIn[1])*dS; 
    out[2] += (1.732050807568877*fIn[7]+fIn[2])*dS; 
    out[3] += fIn[5]*dS; 
    out[4] += fIn[11]*dS; 
    out[5] += fIn[12]*dS; 
 
  }
 
} 
 
void GkBoundaryIntegral2x2vMax_vF_VX_P1(const bool atLower, const double intFac, const double vBoundary, const double *dxv, const double *fIn, double *out) 
{ 
  // atLower:   =true(false) if in cell at lower(upper) velocity boundary. 
  // intFac:    =2pi/m or 4pi/m for GkLBO (not used for Vlasov). 
  // vBoundary: velocity at the boundary of the velocity grid. 
  // dxv[4]:    cell length in each direciton. 
  // fIn[5]:    distribution function at velocity boundaries. 
  // out:       int dS of f|^(vmax)_(vmin) or vf^(vmax)_(vmin). 
 
  const double dS = 0.5*dxv[3]*intFac; 
 
  if (atLower) {
 
    out[0] += (1.732050807568877*fIn[3]-1.0*fIn[0])*dS*vBoundary+(0.8660254037844386*dxv[2]*fIn[3]-0.5*fIn[0]*dxv[2])*dS; 
    out[1] += (-1.0*fIn[1]*dS*vBoundary)-0.5*fIn[1]*dxv[2]*dS; 
    out[2] += (-1.0*fIn[2]*dS*vBoundary)-0.5*dxv[2]*fIn[2]*dS; 
 
  } else {
 
    out[0] += (1.732050807568877*fIn[3]+fIn[0])*dS*vBoundary+((-0.8660254037844386*dxv[2]*fIn[3])-0.5*fIn[0]*dxv[2])*dS; 
    out[1] += fIn[1]*dS*vBoundary-0.5*fIn[1]*dxv[2]*dS; 
    out[2] += fIn[2]*dS*vBoundary-0.5*dxv[2]*fIn[2]*dS; 
 
  }
 
} 
 
void GkBoundaryIntegral2x2vMax_vF_VX_P2(const bool atLower, const double intFac, const double vBoundary, const double *dxv, const double *fIn, double *out) 
{ 
  // atLower:   =true(false) if in cell at lower(upper) velocity boundary. 
  // intFac:    =2pi/m or 4pi/m for GkLBO (not used for Vlasov). 
  // vBoundary: velocity at the boundary of the velocity grid. 
  // dxv[4]:    cell length in each direciton. 
  // fIn[15]:    distribution function at velocity boundaries. 
  // out:       int dS of f|^(vmax)_(vmin) or vf^(vmax)_(vmin). 
 
  const double dS = 0.5*dxv[3]*intFac; 
 
  if (atLower) {
 
    out[0] += ((-2.23606797749979*fIn[13])+1.732050807568877*fIn[3]-1.0*fIn[0])*dS*vBoundary; 
    out[1] += (1.732050807568877*fIn[6]-1.0*fIn[1])*dS*vBoundary; 
    out[2] += (1.732050807568877*fIn[7]-1.0*fIn[2])*dS*vBoundary; 
    out[3] += -1.0*fIn[5]*dS*vBoundary; 
    out[4] += -1.0*fIn[11]*dS*vBoundary; 
    out[5] += -1.0*fIn[12]*dS*vBoundary; 
 
  } else {
 
    out[0] += (2.23606797749979*fIn[13]+1.732050807568877*fIn[3]+fIn[0])*dS*vBoundary; 
    out[1] += (1.732050807568877*fIn[6]+fIn[1])*dS*vBoundary; 
    out[2] += (1.732050807568877*fIn[7]+fIn[2])*dS*vBoundary; 
    out[3] += fIn[5]*dS*vBoundary; 
    out[4] += fIn[11]*dS*vBoundary; 
    out[5] += fIn[12]*dS*vBoundary; 
 
  }
 
} 
 
void GkBoundaryIntegral2x2vMax_vF_VY_P1(const bool atLower, const double intFac, const double vBoundary, const double *dxv, const double *fIn, double *out) 
{ 
  // atLower:   =true(false) if in cell at lower(upper) velocity boundary. 
  // intFac:    =2pi/m or 4pi/m for GkLBO (not used for Vlasov). 
  // vBoundary: velocity at the boundary of the velocity grid. 
  // dxv[4]:    cell length in each direciton. 
  // fIn[5]:    distribution function at velocity boundaries. 
  // out:       int dS of f|^(vmax)_(vmin) or vf^(vmax)_(vmin). 
 
  const double dS = 0.5*dxv[2]*intFac; 
 
  if (atLower) {
 
    out[0] += (1.732050807568877*fIn[4]-1.0*fIn[0])*dS*vBoundary; 
    out[1] += -1.0*fIn[1]*dS*vBoundary; 
    out[2] += -1.0*fIn[2]*dS*vBoundary; 
 
  } else {
 
    out[0] += (1.732050807568877*fIn[4]+fIn[0])*dS*vBoundary; 
    out[1] += fIn[1]*dS*vBoundary; 
    out[2] += fIn[2]*dS*vBoundary; 
 
  }
 
} 
 
void GkBoundaryIntegral2x2vMax_vF_VY_P2(const bool atLower, const double intFac, const double vBoundary, const double *dxv, const double *fIn, double *out) 
{ 
  // atLower:   =true(false) if in cell at lower(upper) velocity boundary. 
  // intFac:    =2pi/m or 4pi/m for GkLBO (not used for Vlasov). 
  // vBoundary: velocity at the boundary of the velocity grid. 
  // dxv[4]:    cell length in each direciton. 
  // fIn[15]:    distribution function at velocity boundaries. 
  // out:       int dS of f|^(vmax)_(vmin) or vf^(vmax)_(vmin). 
 
  const double dS = 0.5*dxv[2]*intFac; 
 
  if (atLower) {
 
    out[0] += ((-2.23606797749979*fIn[14])+1.732050807568877*fIn[4]-1.0*fIn[0])*dS*vBoundary; 
    out[1] += (1.732050807568877*fIn[8]-1.0*fIn[1])*dS*vBoundary; 
    out[2] += (1.732050807568877*fIn[9]-1.0*fIn[2])*dS*vBoundary; 
    out[3] += -1.0*fIn[5]*dS*vBoundary; 
    out[4] += -1.0*fIn[11]*dS*vBoundary; 
    out[5] += -1.0*fIn[12]*dS*vBoundary; 
 
  } else {
 
    out[0] += (2.23606797749979*fIn[14]+1.732050807568877*fIn[4]+fIn[0])*dS*vBoundary; 
    out[1] += (1.732050807568877*fIn[8]+fIn[1])*dS*vBoundary; 
    out[2] += (1.732050807568877*fIn[9]+fIn[2])*dS*vBoundary; 
    out[3] += fIn[5]*dS*vBoundary; 
    out[4] += fIn[11]*dS*vBoundary; 
    out[5] += fIn[12]*dS*vBoundary; 
 
  }
 
} 
 
void GkSelfPrimMoments2x2vMax_P1(const double *m0, const double *m1, const double *m0S, const double *m1S, const double *m2S, const double *cM, const double *cE, double *u, double *vtSq) 
{ 
  // m0,m1:       moments of the distribution function. 
  // m0S,m1S,m1S: star moments (only used for piecewise linear). 
  // cM, cE:   vtSq*cM and vtSq*cE are corrections to u and vtSq, respectively. 
  // u:        velocity. 
  // vtSq:     squared thermal speed, sqrt(T/m). 
 
  // If a corner value is below zero, use cell average m0.
  bool cellAvg = false;
  if ((-0.8660254037844386*m0[2])-0.8660254037844386*m0[1]+0.5*m0[0] < 0) { 
    cellAvg = true;
  }
  if ((-0.8660254037844386*m0[2])-0.8660254037844386*m0[1]+0.5*m0[0] < 0) { 
    cellAvg = true;
  }
  if ((-0.8660254037844386*m0[2])+0.8660254037844386*m0[1]+0.5*m0[0] < 0) { 
    cellAvg = true;
  }
  if ((-0.8660254037844386*m0[2])+0.8660254037844386*m0[1]+0.5*m0[0] < 0) { 
    cellAvg = true;
  }
 
  double m0r[3]; 
  double m1r[3]; 
  double m0Sr[3]; 
  double m1Sr[3]; 
  double m2Sr[3]; 
  if (cellAvg) { 
    m0r[0] = m0[0]; 
    m0r[1] = 0.0; 
    m0r[2] = 0.0; 
    m1r[0] = m1[0]; 
    m1r[1] = 0.0; 
    m1r[2] = 0.0; 
    m0Sr[0] = m0S[0]; 
    m0Sr[1] = 0.0; 
    m0Sr[2] = 0.0; 
    m1Sr[0] = m1S[0]; 
    m1Sr[1] = 0.0; 
    m1Sr[2] = 0.0; 
    m2Sr[0] = m2S[0]; 
    m2Sr[1] = 0.0; 
    m2Sr[2] = 0.0; 
  } else { 
    m0r[0] = m0[0]; 
    m0r[1] = m0[1]; 
    m0r[2] = m0[2]; 
    m1r[0] = m1[0]; 
    m1r[1] = m1[1]; 
    m1r[2] = m1[2]; 
    m0Sr[0] = m0S[0]; 
    m0Sr[1] = m0S[1]; 
    m0Sr[2] = m0S[2]; 
    m1Sr[0] = m1S[0]; 
    m1Sr[1] = m1S[1]; 
    m1Sr[2] = m1S[2]; 
    m2Sr[0] = m2S[0]; 
    m2Sr[1] = m2S[1]; 
    m2Sr[2] = m2S[2]; 
  } 
 
  // Declare Eigen matrix and vectors for weak division. 
  Eigen::MatrixXd BigAEM = Eigen::MatrixXd::Zero(6,6); 
  Eigen::VectorXd bEV = Eigen::VectorXd::Zero(6);  
  Eigen::VectorXd xEV = Eigen::VectorXd::Zero(6);  
 
  // ....... Block from weak multiply of uX and m0  .......... // 
  BigAEM(0,0) = 0.5*m0r[0]; 
  BigAEM(0,1) = 0.5*m0r[1]; 
  BigAEM(0,2) = 0.5*m0r[2]; 
  BigAEM(1,0) = 0.5*m0r[1]; 
  BigAEM(1,1) = 0.5*m0r[0]; 
  BigAEM(2,0) = 0.5*m0r[2]; 
  BigAEM(2,2) = 0.5*m0r[0]; 
 
  // ....... Block from correction to uX .......... // 
  BigAEM(0,3) = -0.5*cM[0]; 
  BigAEM(0,4) = -0.5*cM[1]; 
  BigAEM(0,5) = -0.5*cM[2]; 
  BigAEM(1,3) = -0.5*cM[1]; 
  BigAEM(1,4) = -0.5*cM[0]; 
  BigAEM(2,3) = -0.5*cM[2]; 
  BigAEM(2,5) = -0.5*cM[0]; 
 
  // ....... Block from weak multiply of uX and m1X  .......... // 
  BigAEM(3,0) = 0.5*m1Sr[0]; 
  BigAEM(3,1) = 0.5*m1Sr[1]; 
  BigAEM(3,2) = 0.5*m1Sr[2]; 
  BigAEM(4,0) = 0.5*m1Sr[1]; 
  BigAEM(4,1) = 0.5*m1Sr[0]; 
  BigAEM(5,0) = 0.5*m1Sr[2]; 
  BigAEM(5,2) = 0.5*m1Sr[0]; 
 
  // ....... Block from correction to vtSq .......... // 
  BigAEM(3,3) = m0r[0]+0.5*m0Sr[0]-0.5*cE[0]; 
  BigAEM(3,4) = m0r[1]+0.5*m0Sr[1]-0.5*cE[1]; 
  BigAEM(3,5) = m0r[2]+0.5*m0Sr[2]-0.5*cE[2]; 
  BigAEM(4,3) = m0r[1]+0.5*m0Sr[1]-0.5*cE[1]; 
  BigAEM(4,4) = m0r[0]+0.5*m0Sr[0]-0.5*cE[0]; 
  BigAEM(5,3) = m0r[2]+0.5*m0Sr[2]-0.5*cE[2]; 
  BigAEM(5,5) = m0r[0]+0.5*m0Sr[0]-0.5*cE[0]; 
 
  // ....... RHS vector is composed of m1 and m2 .......... // 
  bEV << m1r[0],m1r[1],m1r[2],m2Sr[0],m2Sr[1],m2Sr[2]; 
 
  xEV = BigAEM.colPivHouseholderQr().solve(bEV); 
 
  Eigen::Map<VectorXd>(u,3,1) = xEV.segment<3>(0); 
 
  Eigen::Map<VectorXd>(vtSq,3,1) = xEV.segment<3>(3); 
 
} 
 
void GkSelfPrimMoments2x2vMax_P2(const double *m0, const double *m1, const double *m2, const double *cM, const double *cE, double *u, double *vtSq) 
{ 
  // m0,m1,m2: moments of the distribution function. 
  // cM, cE:   vtSq*cM and vtSq*cE are corrections to u and vtSq, respectively. 
  // u:        velocity. 
  // vtSq:     squared thermal speed, sqrt(T/m). 
 
  // If a corner value is below zero, use cell average m0.
  bool cellAvg = false;
  if (1.118033988749895*m0[5]+1.118033988749895*m0[4]+1.5*m0[3]-0.8660254037844386*m0[2]-0.8660254037844386*m0[1]+0.5*m0[0] < 0) { 
    cellAvg = true;
  }
  if (1.118033988749895*m0[5]+1.118033988749895*m0[4]+1.5*m0[3]-0.8660254037844386*m0[2]-0.8660254037844386*m0[1]+0.5*m0[0] < 0) { 
    cellAvg = true;
  }
  if (1.118033988749895*m0[5]+1.118033988749895*m0[4]-1.5*m0[3]-0.8660254037844386*m0[2]+0.8660254037844386*m0[1]+0.5*m0[0] < 0) { 
    cellAvg = true;
  }
  if (1.118033988749895*m0[5]+1.118033988749895*m0[4]-1.5*m0[3]-0.8660254037844386*m0[2]+0.8660254037844386*m0[1]+0.5*m0[0] < 0) { 
    cellAvg = true;
  }
 
  double m0r[6]; 
  double m1r[6]; 
  double m2r[6]; 
  if (cellAvg) { 
    m0r[0] = m0[0]; 
    m0r[1] = 0.0; 
    m0r[2] = 0.0; 
    m0r[3] = 0.0; 
    m0r[4] = 0.0; 
    m0r[5] = 0.0; 
    m1r[0] = m1[0]; 
    m1r[1] = 0.0; 
    m1r[2] = 0.0; 
    m1r[3] = 0.0; 
    m1r[4] = 0.0; 
    m1r[5] = 0.0; 
    m2r[0] = m2[0]; 
    m2r[1] = 0.0; 
    m2r[2] = 0.0; 
    m2r[3] = 0.0; 
    m2r[4] = 0.0; 
    m2r[5] = 0.0; 
  } else { 
    m0r[0] = m0[0]; 
    m0r[1] = m0[1]; 
    m0r[2] = m0[2]; 
    m0r[3] = m0[3]; 
    m0r[4] = m0[4]; 
    m0r[5] = m0[5]; 
    m1r[0] = m1[0]; 
    m1r[1] = m1[1]; 
    m1r[2] = m1[2]; 
    m1r[3] = m1[3]; 
    m1r[4] = m1[4]; 
    m1r[5] = m1[5]; 
    m2r[0] = m2[0]; 
    m2r[1] = m2[1]; 
    m2r[2] = m2[2]; 
    m2r[3] = m2[3]; 
    m2r[4] = m2[4]; 
    m2r[5] = m2[5]; 
  } 
 
  // Declare Eigen matrix and vectors for weak division. 
  Eigen::MatrixXd BigAEM = Eigen::MatrixXd::Zero(12,12); 
  Eigen::VectorXd bEV = Eigen::VectorXd::Zero(12);  
  Eigen::VectorXd xEV = Eigen::VectorXd::Zero(12);  
 
  // ....... Block from weak multiply of uX and m0  .......... // 
  BigAEM(0,0) = 0.5*m0r[0]; 
  BigAEM(0,1) = 0.5*m0r[1]; 
  BigAEM(0,2) = 0.5*m0r[2]; 
  BigAEM(0,3) = 0.5*m0r[3]; 
  BigAEM(0,4) = 0.5*m0r[4]; 
  BigAEM(0,5) = 0.5*m0r[5]; 
  BigAEM(1,0) = 0.5*m0r[1]; 
  BigAEM(1,1) = 0.4472135954999579*m0r[4]+0.5*m0r[0]; 
  BigAEM(1,2) = 0.5*m0r[3]; 
  BigAEM(1,3) = 0.5*m0r[2]; 
  BigAEM(1,4) = 0.4472135954999579*m0r[1]; 
  BigAEM(2,0) = 0.5*m0r[2]; 
  BigAEM(2,1) = 0.5*m0r[3]; 
  BigAEM(2,2) = 0.4472135954999579*m0r[5]+0.5*m0r[0]; 
  BigAEM(2,3) = 0.5*m0r[1]; 
  BigAEM(2,5) = 0.4472135954999579*m0r[2]; 
  BigAEM(3,0) = 0.5*m0r[3]; 
  BigAEM(3,1) = 0.5*m0r[2]; 
  BigAEM(3,2) = 0.5*m0r[1]; 
  BigAEM(3,3) = 0.4472135954999579*m0r[5]+0.4472135954999579*m0r[4]+0.5*m0r[0]; 
  BigAEM(3,4) = 0.4472135954999579*m0r[3]; 
  BigAEM(3,5) = 0.4472135954999579*m0r[3]; 
  BigAEM(4,0) = 0.5*m0r[4]; 
  BigAEM(4,1) = 0.4472135954999579*m0r[1]; 
  BigAEM(4,3) = 0.4472135954999579*m0r[3]; 
  BigAEM(4,4) = 0.31943828249997*m0r[4]+0.5*m0r[0]; 
  BigAEM(5,0) = 0.5*m0r[5]; 
  BigAEM(5,2) = 0.4472135954999579*m0r[2]; 
  BigAEM(5,3) = 0.4472135954999579*m0r[3]; 
  BigAEM(5,5) = 0.31943828249997*m0r[5]+0.5*m0r[0]; 
 
  // ....... Block from correction to uX .......... // 
  BigAEM(0,6) = -0.5*cM[0]; 
  BigAEM(0,7) = -0.5*cM[1]; 
  BigAEM(0,8) = -0.5*cM[2]; 
  BigAEM(0,9) = -0.5*cM[3]; 
  BigAEM(0,10) = -0.5*cM[4]; 
  BigAEM(0,11) = -0.5*cM[5]; 
  BigAEM(1,6) = -0.5*cM[1]; 
  BigAEM(1,7) = (-0.4472135954999579*cM[4])-0.5*cM[0]; 
  BigAEM(1,8) = -0.5*cM[3]; 
  BigAEM(1,9) = -0.5*cM[2]; 
  BigAEM(1,10) = -0.4472135954999579*cM[1]; 
  BigAEM(2,6) = -0.5*cM[2]; 
  BigAEM(2,7) = -0.5*cM[3]; 
  BigAEM(2,8) = (-0.4472135954999579*cM[5])-0.5*cM[0]; 
  BigAEM(2,9) = -0.5*cM[1]; 
  BigAEM(2,11) = -0.4472135954999579*cM[2]; 
  BigAEM(3,6) = -0.5*cM[3]; 
  BigAEM(3,7) = -0.5*cM[2]; 
  BigAEM(3,8) = -0.5*cM[1]; 
  BigAEM(3,9) = (-0.4472135954999579*cM[5])-0.4472135954999579*cM[4]-0.5*cM[0]; 
  BigAEM(3,10) = -0.4472135954999579*cM[3]; 
  BigAEM(3,11) = -0.4472135954999579*cM[3]; 
  BigAEM(4,6) = -0.5*cM[4]; 
  BigAEM(4,7) = -0.4472135954999579*cM[1]; 
  BigAEM(4,9) = -0.4472135954999579*cM[3]; 
  BigAEM(4,10) = (-0.31943828249997*cM[4])-0.5*cM[0]; 
  BigAEM(5,6) = -0.5*cM[5]; 
  BigAEM(5,8) = -0.4472135954999579*cM[2]; 
  BigAEM(5,9) = -0.4472135954999579*cM[3]; 
  BigAEM(5,11) = (-0.31943828249997*cM[5])-0.5*cM[0]; 
 
  // ....... Block from weak multiply of uX and m1X  .......... // 
  BigAEM(6,0) = 0.5*m1r[0]; 
  BigAEM(6,1) = 0.5*m1r[1]; 
  BigAEM(6,2) = 0.5*m1r[2]; 
  BigAEM(6,3) = 0.5*m1r[3]; 
  BigAEM(6,4) = 0.5*m1r[4]; 
  BigAEM(6,5) = 0.5*m1r[5]; 
  BigAEM(7,0) = 0.5*m1r[1]; 
  BigAEM(7,1) = 0.4472135954999579*m1r[4]+0.5*m1r[0]; 
  BigAEM(7,2) = 0.5*m1r[3]; 
  BigAEM(7,3) = 0.5*m1r[2]; 
  BigAEM(7,4) = 0.4472135954999579*m1r[1]; 
  BigAEM(8,0) = 0.5*m1r[2]; 
  BigAEM(8,1) = 0.5*m1r[3]; 
  BigAEM(8,2) = 0.4472135954999579*m1r[5]+0.5*m1r[0]; 
  BigAEM(8,3) = 0.5*m1r[1]; 
  BigAEM(8,5) = 0.4472135954999579*m1r[2]; 
  BigAEM(9,0) = 0.5*m1r[3]; 
  BigAEM(9,1) = 0.5*m1r[2]; 
  BigAEM(9,2) = 0.5*m1r[1]; 
  BigAEM(9,3) = 0.4472135954999579*m1r[5]+0.4472135954999579*m1r[4]+0.5*m1r[0]; 
  BigAEM(9,4) = 0.4472135954999579*m1r[3]; 
  BigAEM(9,5) = 0.4472135954999579*m1r[3]; 
  BigAEM(10,0) = 0.5*m1r[4]; 
  BigAEM(10,1) = 0.4472135954999579*m1r[1]; 
  BigAEM(10,3) = 0.4472135954999579*m1r[3]; 
  BigAEM(10,4) = 0.31943828249997*m1r[4]+0.5*m1r[0]; 
  BigAEM(11,0) = 0.5*m1r[5]; 
  BigAEM(11,2) = 0.4472135954999579*m1r[2]; 
  BigAEM(11,3) = 0.4472135954999579*m1r[3]; 
  BigAEM(11,5) = 0.31943828249997*m1r[5]+0.5*m1r[0]; 
 
  // ....... Block from correction to vtSq .......... // 
  BigAEM(6,6) = 1.5*m0r[0]-0.5*cE[0]; 
  BigAEM(6,7) = 1.5*m0r[1]-0.5*cE[1]; 
  BigAEM(6,8) = 1.5*m0r[2]-0.5*cE[2]; 
  BigAEM(6,9) = 1.5*m0r[3]-0.5*cE[3]; 
  BigAEM(6,10) = 1.5*m0r[4]-0.5*cE[4]; 
  BigAEM(6,11) = 1.5*m0r[5]-0.5*cE[5]; 
  BigAEM(7,6) = 1.5*m0r[1]-0.5*cE[1]; 
  BigAEM(7,7) = 1.341640786499874*m0r[4]-0.4472135954999579*cE[4]+1.5*m0r[0]-0.5*cE[0]; 
  BigAEM(7,8) = 1.5*m0r[3]-0.5*cE[3]; 
  BigAEM(7,9) = 1.5*m0r[2]-0.5*cE[2]; 
  BigAEM(7,10) = 1.341640786499874*m0r[1]-0.4472135954999579*cE[1]; 
  BigAEM(8,6) = 1.5*m0r[2]-0.5*cE[2]; 
  BigAEM(8,7) = 1.5*m0r[3]-0.5*cE[3]; 
  BigAEM(8,8) = 1.341640786499874*m0r[5]-0.4472135954999579*cE[5]+1.5*m0r[0]-0.5*cE[0]; 
  BigAEM(8,9) = 1.5*m0r[1]-0.5*cE[1]; 
  BigAEM(8,11) = 1.341640786499874*m0r[2]-0.4472135954999579*cE[2]; 
  BigAEM(9,6) = 1.5*m0r[3]-0.5*cE[3]; 
  BigAEM(9,7) = 1.5*m0r[2]-0.5*cE[2]; 
  BigAEM(9,8) = 1.5*m0r[1]-0.5*cE[1]; 
  BigAEM(9,9) = 1.341640786499874*m0r[5]-0.4472135954999579*cE[5]+1.341640786499874*m0r[4]-0.4472135954999579*cE[4]+1.5*m0r[0]-0.5*cE[0]; 
  BigAEM(9,10) = 1.341640786499874*m0r[3]-0.4472135954999579*cE[3]; 
  BigAEM(9,11) = 1.341640786499874*m0r[3]-0.4472135954999579*cE[3]; 
  BigAEM(10,6) = 1.5*m0r[4]-0.5*cE[4]; 
  BigAEM(10,7) = 1.341640786499874*m0r[1]-0.4472135954999579*cE[1]; 
  BigAEM(10,9) = 1.341640786499874*m0r[3]-0.4472135954999579*cE[3]; 
  BigAEM(10,10) = 0.9583148474999099*m0r[4]-0.31943828249997*cE[4]+1.5*m0r[0]-0.5*cE[0]; 
  BigAEM(11,6) = 1.5*m0r[5]-0.5*cE[5]; 
  BigAEM(11,8) = 1.341640786499874*m0r[2]-0.4472135954999579*cE[2]; 
  BigAEM(11,9) = 1.341640786499874*m0r[3]-0.4472135954999579*cE[3]; 
  BigAEM(11,11) = 0.9583148474999099*m0r[5]-0.31943828249997*cE[5]+1.5*m0r[0]-0.5*cE[0]; 
 
  // ....... RHS vector is composed of m1 and m2 .......... // 
  bEV << m1r[0],m1r[1],m1r[2],m1r[3],m1r[4],m1r[5],m2r[0],m2r[1],m2r[2],m2r[3],m2r[4],m2r[5]; 
 
  xEV = BigAEM.colPivHouseholderQr().solve(bEV); 
 
  Eigen::Map<VectorXd>(u,6,1) = xEV.segment<6>(0); 
 
  Eigen::Map<VectorXd>(vtSq,6,1) = xEV.segment<6>(6); 
 
} 
 