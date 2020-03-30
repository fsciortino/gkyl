#include <GyrokineticModDecl.h> 
double EmGyrokineticVol3x2vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                        const double *Bmag, const double *BmagInv, const double *Gradpar, 
                        const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                        const double *f, double *out) 
{ 
// w[NDIM]: Cell-center coordinates. dxv[NDIM]: Cell spacing. H/f: Input Hamiltonian/distribution function. out: Incremented output 
  double dfac_x = 2.0/dxv[0]; 
  double dfac_y = 2.0/dxv[1]; 
  double dfac_z = 2.0/dxv[2]; 
  double dfac_v = 2.0/dxv[3]; 
  double dfac_m = 2.0/dxv[4]; 
  double wx = w[0]; 
  double wy = w[1]; 
  double wz = w[2]; 
  double wv = w[3]; 
  double wm = w[4]; 
  double wv2 = wv*wv; 
  double dfac_v2 = dfac_v*dfac_v; 
  double q2 = q_*q_; 
  double m2 = m_*m_; 
  double cflRate = 0.0; 
  double alphaL = 0.0; 
  double alphaR = 0.0; 
  double alphaCtrl;
  double alphax[32]; 
  alphax[0] = dfac_x*((2.0*BdriftX[0]*m_*wv2)/q_+0.7071067811865475*((1.732050807568877*BmagInv[0]*Apar[2]*dfac_y+Apar[0]*BdriftX[0])*wv-1.732050807568877*BmagInv[0]*Phi[2]*dfac_y)); 
  alphax[1] = 0.7071067811865475*dfac_x*((1.732050807568877*BmagInv[0]*Apar[4]*dfac_y+BdriftX[0]*Apar[1])*wv-1.732050807568877*BmagInv[0]*Phi[4]*dfac_y); 
  alphax[2] = 0.7071067811865475*BdriftX[0]*Apar[2]*dfac_x*wv; 
  alphax[3] = 0.7071067811865475*dfac_x*((1.732050807568877*BmagInv[0]*Apar[6]*dfac_y+BdriftX[0]*Apar[3])*wv-1.732050807568877*BmagInv[0]*Phi[6]*dfac_y); 
  alphax[4] = (1.154700538379252*BdriftX[0]*dfac_x*m_*wv)/(dfac_v*q_); 
  alphax[6] = 0.7071067811865475*BdriftX[0]*Apar[4]*dfac_x*wv; 
  alphax[7] = 0.7071067811865475*dfac_x*((1.732050807568877*BmagInv[0]*Apar[7]*dfac_y+BdriftX[0]*Apar[5])*wv-1.732050807568877*BmagInv[0]*Phi[7]*dfac_y); 
  alphax[8] = 0.7071067811865475*BdriftX[0]*Apar[6]*dfac_x*wv; 
  alphax[16] = 0.7071067811865475*BdriftX[0]*Apar[7]*dfac_x*wv; 
#if cflType == SURFAVG 
  // evaluate surface-averaged alpha on left 
  alphaL = -0.0625*(2.449489742783178*alphax[1]-1.414213562373095*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate surface-averaged alpha on right 
  alphaR = 0.0625*(2.449489742783178*alphax[1]+1.414213562373095*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#elif cflType == QUAD 
  // evaluate alpha at left surface quadrature points 
  alphaL = 0.03125*((-0.3061862178478971*alphax[16])+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphax[16]-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]-0.1767766952966368*(alphax[4]+alphax[3])+0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphax[16]-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]-0.1767766952966368*alphax[4]+0.1767766952966368*alphax[3]-0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphax[16])+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*alphax[4]+0.1767766952966368*(alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphax[16])+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*alphax[4]-0.1767766952966368*(alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphax[16]-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]+0.1767766952966368*alphax[4]-0.1767766952966368*alphax[3]+0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphax[16]-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]+0.1767766952966368*(alphax[4]+alphax[3])-0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphax[16])+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphax[16])+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphax[16]-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]-0.1767766952966368*(alphax[4]+alphax[3])+0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphax[16]-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]-0.1767766952966368*alphax[4]+0.1767766952966368*alphax[3]-0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphax[16])+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*alphax[4]+0.1767766952966368*(alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphax[16])+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*alphax[4]-0.1767766952966368*(alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphax[16]-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]+0.1767766952966368*alphax[4]-0.1767766952966368*alphax[3]+0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphax[16]-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]+0.1767766952966368*(alphax[4]+alphax[3])-0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphax[16])+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate alpha at right surface quadrature points 
  alphaR = 0.03125*(0.3061862178478971*alphax[16]+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphax[16])-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]-0.1767766952966368*(alphax[4]+alphax[3])+0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphax[16])-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]-0.1767766952966368*alphax[4]+0.1767766952966368*alphax[3]-0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphax[16]+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*alphax[4]+0.1767766952966368*(alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphax[16]+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*alphax[4]-0.1767766952966368*(alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphax[16])-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]+0.1767766952966368*alphax[4]-0.1767766952966368*alphax[3]+0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphax[16])-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]+0.1767766952966368*(alphax[4]+alphax[3])-0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphax[16]+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphax[16]+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphax[16])-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]-0.1767766952966368*(alphax[4]+alphax[3])+0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphax[16])-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]-0.1767766952966368*alphax[4]+0.1767766952966368*alphax[3]-0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphax[16]+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*alphax[4]+0.1767766952966368*(alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphax[16]+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*alphax[4]-0.1767766952966368*(alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphax[16])-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]+0.1767766952966368*alphax[4]-0.1767766952966368*alphax[3]+0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphax[16])-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]+0.1767766952966368*(alphax[4]+alphax[3])-0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphax[16]+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#endif 

  double alphay[32]; 
  alphay[0] = dfac_y*((2.0*BdriftY[0]*m_*wv2)/q_+0.7071067811865475*((Apar[0]*BdriftY[0]-1.732050807568877*BmagInv[0]*Apar[1]*dfac_x)*wv+1.732050807568877*BmagInv[0]*Phi[1]*dfac_x)); 
  alphay[1] = 0.7071067811865475*BdriftY[0]*Apar[1]*dfac_y*wv; 
  alphay[2] = -0.7071067811865475*dfac_y*(1.732050807568877*BmagInv[0]*Apar[4]*dfac_x*wv-1.0*(BdriftY[0]*Apar[2]*wv+1.732050807568877*BmagInv[0]*Phi[4]*dfac_x)); 
  alphay[3] = -0.7071067811865475*dfac_y*(1.732050807568877*BmagInv[0]*Apar[5]*dfac_x*wv-1.0*(BdriftY[0]*Apar[3]*wv+1.732050807568877*BmagInv[0]*Phi[5]*dfac_x)); 
  alphay[4] = (1.154700538379252*BdriftY[0]*dfac_y*m_*wv)/(dfac_v*q_); 
  alphay[6] = 0.7071067811865475*BdriftY[0]*Apar[4]*dfac_y*wv; 
  alphay[7] = 0.7071067811865475*BdriftY[0]*Apar[5]*dfac_y*wv; 
  alphay[8] = -0.7071067811865475*dfac_y*(1.732050807568877*BmagInv[0]*Apar[7]*dfac_x*wv-1.0*(BdriftY[0]*Apar[6]*wv+1.732050807568877*BmagInv[0]*Phi[7]*dfac_x)); 
  alphay[16] = 0.7071067811865475*BdriftY[0]*Apar[7]*dfac_y*wv; 
#if cflType == SURFAVG 
  // evaluate surface-averaged alpha on left 
  alphaL = -0.0625*(2.449489742783178*alphay[2]-1.414213562373095*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate surface-averaged alpha on right 
  alphaR = 0.0625*(2.449489742783178*alphay[2]+1.414213562373095*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#elif cflType == QUAD 
  // evaluate alpha at left surface quadrature points 
  alphaL = 0.03125*((-0.3061862178478971*alphay[16])+0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[4]+alphay[3])-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*(alphay[16]+alphay[8])-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[4]+alphay[3])-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphay[16]-0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*alphay[4]+0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*(alphay[16]+alphay[8]))+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*alphay[4]+0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphay[16])+0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*alphay[4]-0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*(alphay[16]+alphay[8])-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*alphay[4]-0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphay[16]-0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[4]+alphay[3])-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*(alphay[16]+alphay[8]))+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[4]+alphay[3])-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphay[16])+0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[4]+alphay[3])-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*(alphay[16]+alphay[8])-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[4]+alphay[3])-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphay[16]-0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*alphay[4]+0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*(alphay[16]+alphay[8]))+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*alphay[4]+0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphay[16])+0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*alphay[4]-0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*(alphay[16]+alphay[8])-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*alphay[4]-0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphay[16]-0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[4]+alphay[3])-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*(alphay[16]+alphay[8]))+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[4]+alphay[3])-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate alpha at right surface quadrature points 
  alphaR = 0.03125*(0.3061862178478971*alphay[16]-0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[4]+alphay[3])+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*(alphay[16]+alphay[8]))-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[4]+alphay[3])+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphay[16])+0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*alphay[4]+0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*(alphay[16]+alphay[8])+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*alphay[4]+0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphay[16]-0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*alphay[4]-0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*(alphay[16]+alphay[8]))-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*alphay[4]-0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphay[16])+0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[4]+alphay[3])+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*(alphay[16]+alphay[8])+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[4]+alphay[3])+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphay[16]-0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[4]+alphay[3])+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*(alphay[16]+alphay[8]))-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[4]+alphay[3])+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphay[16])+0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*alphay[4]+0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*(alphay[16]+alphay[8])+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*alphay[4]+0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphay[16]-0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*alphay[4]-0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*(alphay[16]+alphay[8]))-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*alphay[4]-0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphay[16])+0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[4]+alphay[3])+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*(alphay[16]+alphay[8])+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[4]+alphay[3])+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#endif 

  double alphaz[32]; 
  alphaz[0] = 2.0*Gradpar[0]*dfac_z*wv; 
#if cflType == SURFAVG 
  // evaluate surface-averaged alpha on left 
  alphaL = 0.0883883476483184*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate surface-averaged alpha on right 
  alphaR = 0.0883883476483184*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#elif cflType == QUAD 
  // evaluate alpha at left surface quadrature points 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.005524271728019897*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate alpha at right surface quadrature points 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.005524271728019897*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#endif 

  double alphav[32]; 
  alphav[0] = -1.0*dfac_v*(1.224744871391589*(BdriftY[0]*Phi[2]*dfac_y+BdriftX[0]*Phi[1]*dfac_x)*wv+((1.732050807568877*(0.7071067811865475*Gradpar[0]*Phi[3]*dfac_z+0.25*(BdriftY[0]*(Apar[5]*Phi[7]+Apar[3]*Phi[6]+Apar[1]*Phi[4]+Apar[0]*Phi[2])*dfac_y+BdriftX[0]*(Apar[6]*Phi[7]+Apar[3]*Phi[5]+Apar[2]*Phi[4]+Apar[0]*Phi[1])*dfac_x))-1.0*BmagInv[0]*(0.75*Apar[5]*Phi[6]-0.75*Phi[5]*Apar[6]+0.75*Apar[1]*Phi[2]-0.75*Phi[1]*Apar[2])*dfac_x*dfac_y)*q_)/m_); 
  alphav[1] = -1.0*dfac_v*(1.224744871391589*BdriftY[0]*Phi[4]*dfac_y*wv+((1.732050807568877*(0.7071067811865475*Gradpar[0]*Phi[5]*dfac_z+0.25*(BdriftY[0]*(Apar[3]*Phi[7]+Apar[5]*Phi[6]+Apar[0]*Phi[4]+Apar[1]*Phi[2])*dfac_y+BdriftX[0]*(Apar[7]*Phi[7]+Apar[5]*Phi[5]+Apar[4]*Phi[4]+Apar[1]*Phi[1])*dfac_x))-1.0*BmagInv[0]*(0.75*Apar[5]*Phi[7]-0.75*Phi[5]*Apar[7]+0.75*Apar[1]*Phi[4]-0.75*Phi[1]*Apar[4])*dfac_x*dfac_y)*q_)/m_); 
  alphav[2] = -1.0*dfac_v*(1.224744871391589*BdriftX[0]*Phi[4]*dfac_x*wv+((1.732050807568877*(0.7071067811865475*Gradpar[0]*Phi[6]*dfac_z+0.25*(BdriftY[0]*(Apar[7]*Phi[7]+Apar[6]*Phi[6]+Apar[4]*Phi[4]+Apar[2]*Phi[2])*dfac_y+BdriftX[0]*(Apar[3]*Phi[7]+Phi[5]*Apar[6]+Apar[0]*Phi[4]+Phi[1]*Apar[2])*dfac_x))-1.0*BmagInv[0]*((-0.75*Apar[6]*Phi[7])+0.75*Phi[6]*Apar[7]-0.75*Apar[2]*Phi[4]+0.75*Phi[2]*Apar[4])*dfac_x*dfac_y)*q_)/m_); 
  alphav[3] = -1.0*dfac_v*(1.224744871391589*(BdriftY[0]*Phi[6]*dfac_y+BdriftX[0]*Phi[5]*dfac_x)*wv+((0.4330127018922193*(BdriftY[0]*(Apar[1]*Phi[7]+Apar[0]*Phi[6]+Phi[4]*Apar[5]+Phi[2]*Apar[3])*dfac_y+BdriftX[0]*(Apar[2]*Phi[7]+Phi[4]*Apar[6]+Apar[0]*Phi[5]+Phi[1]*Apar[3])*dfac_x)-1.0*BmagInv[0]*(0.75*Apar[1]*Phi[6]-0.75*(Phi[1]*Apar[6]+Apar[2]*Phi[5])+0.75*Phi[2]*Apar[5])*dfac_x*dfac_y)*q_)/m_); 
  alphav[4] = -0.7071067811865475*(BdriftY[0]*Phi[2]*dfac_y+BdriftX[0]*Phi[1]*dfac_x); 
  alphav[6] = -(1.732050807568877*dfac_v*(0.7071067811865475*Gradpar[0]*Phi[7]*dfac_z+0.25*(BdriftY[0]*(Apar[6]*Phi[7]+Phi[6]*Apar[7]+Apar[2]*Phi[4]+Phi[2]*Apar[4])*dfac_y+BdriftX[0]*(Apar[5]*Phi[7]+Phi[5]*Apar[7]+Apar[1]*Phi[4]+Phi[1]*Apar[4])*dfac_x))*q_)/m_; 
  alphav[7] = -1.0*dfac_v*(1.224744871391589*BdriftY[0]*Phi[7]*dfac_y*wv+((0.4330127018922193*(BdriftY[0]*(Apar[0]*Phi[7]+Apar[1]*Phi[6]+Phi[2]*Apar[5]+Apar[3]*Phi[4])*dfac_y+BdriftX[0]*(Apar[4]*Phi[7]+Phi[4]*Apar[7]+Apar[1]*Phi[5]+Phi[1]*Apar[5])*dfac_x)-1.0*BmagInv[0]*(0.75*Apar[1]*Phi[7]-0.75*(Phi[1]*Apar[7]+Apar[4]*Phi[5])+0.75*Phi[4]*Apar[5])*dfac_x*dfac_y)*q_)/m_); 
  alphav[8] = -1.0*dfac_v*(1.224744871391589*BdriftX[0]*Phi[7]*dfac_x*wv+((0.4330127018922193*(BdriftY[0]*(Apar[4]*Phi[7]+Phi[4]*Apar[7]+Apar[2]*Phi[6]+Phi[2]*Apar[6])*dfac_y+BdriftX[0]*(Apar[0]*Phi[7]+Phi[1]*Apar[6]+Apar[2]*Phi[5]+Apar[3]*Phi[4])*dfac_x)-1.0*BmagInv[0]*((-0.75*Apar[2]*Phi[7])+0.75*(Phi[2]*Apar[7]+Apar[4]*Phi[6])-0.75*Phi[4]*Apar[6])*dfac_x*dfac_y)*q_)/m_); 
  alphav[9] = -0.7071067811865475*BdriftY[0]*Phi[4]*dfac_y; 
  alphav[10] = -0.7071067811865475*BdriftX[0]*Phi[4]*dfac_x; 
  alphav[11] = -0.7071067811865475*(BdriftY[0]*Phi[6]*dfac_y+BdriftX[0]*Phi[5]*dfac_x); 
  alphav[16] = -(0.4330127018922193*dfac_v*(BdriftY[0]*(Apar[2]*Phi[7]+Phi[2]*Apar[7]+Apar[4]*Phi[6]+Phi[4]*Apar[6])*dfac_y+BdriftX[0]*(Apar[1]*Phi[7]+Phi[1]*Apar[7]+Apar[4]*Phi[5]+Phi[4]*Apar[5])*dfac_x)*q_)/m_; 
  alphav[18] = -0.7071067811865475*BdriftY[0]*Phi[7]*dfac_y; 
  alphav[19] = -0.7071067811865475*BdriftX[0]*Phi[7]*dfac_x; 
#if cflType == SURFAVG 
  // evaluate surface-averaged alpha on left 
  alphaL = -0.0625*(2.449489742783178*alphav[4]-1.414213562373095*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate surface-averaged alpha on right 
  alphaR = 0.0625*(2.449489742783178*alphav[4]+1.414213562373095*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#elif cflType == QUAD 
  // evaluate alpha at left surface quadrature points 
  alphaL = 0.03125*((-0.3061862178478971*(alphav[19]+alphav[18]))-0.1767766952966368*alphav[16]+0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6])-0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphav[19])+0.3061862178478971*alphav[18]+0.1767766952966368*alphav[16]+0.3061862178478971*(alphav[11]+alphav[10])-0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6])-0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2])+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphav[19]-0.3061862178478971*alphav[18]+0.1767766952966368*alphav[16]+0.3061862178478971*alphav[11]-0.3061862178478971*alphav[10]+0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*alphav[6]-0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*alphav[2]-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*(alphav[19]+alphav[18])-0.1767766952966368*alphav[16]+0.3061862178478971*alphav[11]-0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*alphav[6]-0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*(alphav[2]+alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*(alphav[19]+alphav[18])+0.1767766952966368*alphav[16]-0.3061862178478971*alphav[11]+0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*alphav[6]-0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*(alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphav[19]-0.3061862178478971*alphav[18]-0.1767766952966368*alphav[16]-0.3061862178478971*alphav[11]+0.3061862178478971*alphav[10]-0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*alphav[6]-0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*alphav[2]+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphav[19])+0.3061862178478971*alphav[18]-0.1767766952966368*alphav[16]-0.3061862178478971*(alphav[11]+alphav[10])+0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6])-0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2])-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*(alphav[19]+alphav[18]))+0.1767766952966368*alphav[16]-0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6])-0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2]+alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*(alphav[19]+alphav[18]))-0.1767766952966368*alphav[16]+0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6])-0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphav[19])+0.3061862178478971*alphav[18]+0.1767766952966368*alphav[16]+0.3061862178478971*(alphav[11]+alphav[10])-0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6])-0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2])+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphav[19]-0.3061862178478971*alphav[18]+0.1767766952966368*alphav[16]+0.3061862178478971*alphav[11]-0.3061862178478971*alphav[10]+0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*alphav[6]-0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*alphav[2]-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*(alphav[19]+alphav[18])-0.1767766952966368*alphav[16]+0.3061862178478971*alphav[11]-0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*alphav[6]-0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*(alphav[2]+alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*(alphav[19]+alphav[18])+0.1767766952966368*alphav[16]-0.3061862178478971*alphav[11]+0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*alphav[6]-0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*(alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphav[19]-0.3061862178478971*alphav[18]-0.1767766952966368*alphav[16]-0.3061862178478971*alphav[11]+0.3061862178478971*alphav[10]-0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*alphav[6]-0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*alphav[2]+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphav[19])+0.3061862178478971*alphav[18]-0.1767766952966368*alphav[16]-0.3061862178478971*(alphav[11]+alphav[10])+0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6])-0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2])-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*(alphav[19]+alphav[18]))+0.1767766952966368*alphav[16]-0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6])-0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2]+alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate alpha at right surface quadrature points 
  alphaR = 0.03125*(0.3061862178478971*(alphav[19]+alphav[18])-0.1767766952966368*alphav[16]-0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6])+0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphav[19]-0.3061862178478971*alphav[18]+0.1767766952966368*alphav[16]-0.3061862178478971*(alphav[11]+alphav[10])+0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6])+0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2])+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphav[19])+0.3061862178478971*alphav[18]+0.1767766952966368*alphav[16]-0.3061862178478971*alphav[11]+0.3061862178478971*alphav[10]-0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*alphav[6]+0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*alphav[2]-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*(alphav[19]+alphav[18]))-0.1767766952966368*alphav[16]-0.3061862178478971*alphav[11]+0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*alphav[6]+0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*(alphav[2]+alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*(alphav[19]+alphav[18]))+0.1767766952966368*alphav[16]+0.3061862178478971*alphav[11]-0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*alphav[6]+0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*(alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphav[19])+0.3061862178478971*alphav[18]-0.1767766952966368*alphav[16]+0.3061862178478971*alphav[11]-0.3061862178478971*alphav[10]+0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*alphav[6]+0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*alphav[2]+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphav[19]-0.3061862178478971*alphav[18]-0.1767766952966368*alphav[16]+0.3061862178478971*(alphav[11]+alphav[10])-0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6])+0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2])-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*(alphav[19]+alphav[18])+0.1767766952966368*alphav[16]+0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6])+0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2]+alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*(alphav[19]+alphav[18])-0.1767766952966368*alphav[16]-0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6])+0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphav[19]-0.3061862178478971*alphav[18]+0.1767766952966368*alphav[16]-0.3061862178478971*(alphav[11]+alphav[10])+0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6])+0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2])+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphav[19])+0.3061862178478971*alphav[18]+0.1767766952966368*alphav[16]-0.3061862178478971*alphav[11]+0.3061862178478971*alphav[10]-0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*alphav[6]+0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*alphav[2]-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*(alphav[19]+alphav[18]))-0.1767766952966368*alphav[16]-0.3061862178478971*alphav[11]+0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*alphav[6]+0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*(alphav[2]+alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*(alphav[19]+alphav[18]))+0.1767766952966368*alphav[16]+0.3061862178478971*alphav[11]-0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*alphav[6]+0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*(alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphav[19])+0.3061862178478971*alphav[18]-0.1767766952966368*alphav[16]+0.3061862178478971*alphav[11]-0.3061862178478971*alphav[10]+0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*alphav[6]+0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*alphav[2]+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphav[19]-0.3061862178478971*alphav[18]-0.1767766952966368*alphav[16]+0.3061862178478971*(alphav[11]+alphav[10])-0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6])+0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2])-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*(alphav[19]+alphav[18])+0.1767766952966368*alphav[16]+0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6])+0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2]+alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#endif 

  out[1] += 0.3061862178478971*(alphax[16]*f[16]+alphax[8]*f[8]+alphax[7]*f[7]+alphax[6]*f[6]+alphax[4]*f[4]+alphax[3]*f[3]+alphax[2]*f[2]+alphax[1]*f[1]+alphax[0]*f[0]); 
  out[2] += 0.3061862178478971*(alphay[16]*f[16]+alphay[8]*f[8]+alphay[7]*f[7]+alphay[6]*f[6]+alphay[4]*f[4]+alphay[3]*f[3]+alphay[2]*f[2]+alphay[1]*f[1]+alphay[0]*f[0]); 
  out[3] += 0.3061862178478971*alphaz[0]*f[0]; 
  out[4] += 0.3061862178478971*(alphav[19]*f[19]+alphav[18]*f[18]+alphav[16]*f[16]+alphav[11]*f[11]+alphav[10]*f[10]+alphav[9]*f[9]+alphav[8]*f[8]+alphav[7]*f[7]+alphav[6]*f[6]+alphav[4]*f[4]+alphav[3]*f[3]+alphav[2]*f[2]+alphav[1]*f[1]+alphav[0]*f[0]); 
  out[6] += 0.3061862178478971*((alphay[8]+alphax[7])*f[16]+f[8]*alphay[16]+f[7]*alphax[16]+alphax[4]*f[10]+alphay[4]*f[9]+alphax[3]*f[8]+f[3]*alphax[8]+alphay[3]*f[7]+f[3]*alphay[7]+(alphay[2]+alphax[1])*f[6]+f[2]*alphay[6]+f[1]*alphax[6]+alphax[0]*f[2]+f[0]*alphax[2]+alphay[0]*f[1]+f[0]*alphay[1]); 
  out[7] += 0.3061862178478971*(alphax[6]*f[16]+f[6]*alphax[16]+alphax[4]*f[11]+alphax[2]*f[8]+f[2]*alphax[8]+alphax[1]*f[7]+f[1]*alphax[7]+alphax[0]*f[3]+f[0]*alphax[3]+alphaz[0]*f[1]); 
  out[8] += 0.3061862178478971*(alphay[6]*f[16]+f[6]*alphay[16]+alphay[4]*f[11]+alphay[2]*f[8]+f[2]*alphay[8]+alphay[1]*f[7]+f[1]*alphay[7]+alphay[0]*f[3]+f[0]*alphay[3]+alphaz[0]*f[2]); 
  out[9] += 0.3061862178478971*((alphav[19]+alphax[16])*f[26]+alphax[8]*f[19]+(alphav[11]+alphax[7])*f[18]+f[11]*alphav[18]+(alphav[10]+alphax[6])*f[17]+alphav[8]*f[16]+f[8]*alphav[16]+alphax[3]*f[11]+alphax[2]*f[10]+(alphav[4]+alphax[1])*f[9]+f[4]*alphav[9]+alphav[3]*f[7]+f[3]*alphav[7]+alphav[2]*f[6]+f[2]*alphav[6]+alphax[0]*f[4]+f[0]*alphax[4]+alphav[0]*f[1]+f[0]*alphav[1]); 
  out[10] += 0.3061862178478971*((alphav[18]+alphay[16])*f[26]+(alphav[11]+alphay[8])*f[19]+f[11]*alphav[19]+alphay[7]*f[18]+(alphav[9]+alphay[6])*f[17]+alphav[7]*f[16]+f[7]*alphav[16]+alphay[3]*f[11]+(alphav[4]+alphay[2])*f[10]+f[4]*alphav[10]+alphay[1]*f[9]+alphav[3]*f[8]+f[3]*alphav[8]+alphav[1]*f[6]+f[1]*alphav[6]+alphay[0]*f[4]+f[0]*alphay[4]+alphav[0]*f[2]+f[0]*alphav[2]); 
  out[11] += 0.3061862178478971*(alphav[10]*f[19]+f[10]*alphav[19]+alphav[9]*f[18]+f[9]*alphav[18]+alphav[6]*f[16]+f[6]*alphav[16]+alphav[4]*f[11]+f[4]*alphav[11]+alphav[2]*f[8]+f[2]*alphav[8]+alphav[1]*f[7]+f[1]*alphav[7]+alphaz[0]*f[4]+alphav[0]*f[3]+f[0]*alphav[3]); 
  out[12] += 0.3061862178478971*(alphax[16]*f[27]+alphax[8]*f[22]+alphax[7]*f[21]+alphax[6]*f[20]+alphax[4]*f[15]+alphax[3]*f[14]+alphax[2]*f[13]+alphax[1]*f[12]+alphax[0]*f[5]); 
  out[13] += 0.3061862178478971*(alphay[16]*f[27]+alphay[8]*f[22]+alphay[7]*f[21]+alphay[6]*f[20]+alphay[4]*f[15]+alphay[3]*f[14]+alphay[2]*f[13]+alphay[1]*f[12]+alphay[0]*f[5]); 
  out[14] += 0.3061862178478971*alphaz[0]*f[5]; 
  out[15] += 0.3061862178478971*(alphav[19]*f[30]+alphav[18]*f[29]+alphav[16]*f[27]+alphav[11]*f[25]+alphav[10]*f[24]+alphav[9]*f[23]+alphav[8]*f[22]+alphav[7]*f[21]+alphav[6]*f[20]+alphav[4]*f[15]+alphav[3]*f[14]+alphav[2]*f[13]+alphav[1]*f[12]+alphav[0]*f[5]); 
  out[16] += 0.3061862178478971*(alphax[4]*f[19]+alphay[4]*f[18]+(alphay[2]+alphax[1])*f[16]+f[2]*alphay[16]+f[1]*alphax[16]+(alphay[6]+alphax[0])*f[8]+f[6]*alphay[8]+f[0]*alphax[8]+(alphax[6]+alphay[0])*f[7]+f[0]*alphay[7]+f[6]*(alphax[7]+alphaz[0])+(alphax[2]+alphay[1])*f[3]+f[1]*alphay[3]+f[2]*alphax[3]); 
  out[17] += 0.3061862178478971*((alphav[11]+alphay[8]+alphax[7])*f[26]+(alphav[18]+alphay[16]+alphax[3])*f[19]+f[18]*(alphav[19]+alphax[16]+alphay[3])+(alphav[4]+alphay[2]+alphax[1])*f[17]+alphav[3]*f[16]+f[3]*alphav[16]+(alphax[8]+alphay[7])*f[11]+(alphav[9]+alphay[6]+alphax[0])*f[10]+f[9]*(alphav[10]+alphax[6]+alphay[0])+alphav[7]*f[8]+f[7]*alphav[8]+alphav[0]*f[6]+f[0]*alphav[6]+(alphax[2]+alphay[1])*f[4]+f[1]*alphay[4]+f[2]*(alphax[4]+alphav[1])+f[1]*alphav[2]); 
  out[18] += 0.3061862178478971*((alphav[10]+alphax[6])*f[26]+alphax[2]*f[19]+f[17]*alphav[19]+(alphav[4]+alphax[1])*f[18]+f[4]*alphav[18]+alphax[16]*f[17]+alphav[2]*f[16]+f[2]*alphav[16]+(alphav[9]+alphax[0])*f[11]+f[9]*alphav[11]+alphax[8]*f[10]+(alphax[7]+alphaz[0])*f[9]+alphav[6]*f[8]+f[6]*alphav[8]+alphav[0]*f[7]+f[0]*alphav[7]+alphax[3]*f[4]+f[3]*(alphax[4]+alphav[1])+f[1]*alphav[3]); 
  out[19] += 0.3061862178478971*((alphav[9]+alphay[6])*f[26]+(alphav[4]+alphay[2])*f[19]+f[4]*alphav[19]+alphay[1]*f[18]+f[17]*(alphav[18]+alphay[16])+alphav[1]*f[16]+f[1]*alphav[16]+(alphav[10]+alphay[0])*f[11]+f[10]*(alphav[11]+alphay[8]+alphaz[0])+alphay[7]*f[9]+alphav[0]*f[8]+f[0]*alphav[8]+alphav[6]*f[7]+f[6]*alphav[7]+alphay[3]*f[4]+f[3]*(alphay[4]+alphav[2])+f[2]*alphav[3]); 
  out[20] += 0.3061862178478971*((alphay[8]+alphax[7])*f[27]+alphax[4]*f[24]+alphay[4]*f[23]+(alphay[16]+alphax[3])*f[22]+(alphax[16]+alphay[3])*f[21]+(alphay[2]+alphax[1])*f[20]+(alphax[8]+alphay[7])*f[14]+(alphay[6]+alphax[0])*f[13]+(alphax[6]+alphay[0])*f[12]+(alphax[2]+alphay[1])*f[5]); 
  out[21] += 0.3061862178478971*(alphax[6]*f[27]+alphax[4]*f[25]+alphax[2]*f[22]+alphax[1]*f[21]+alphax[16]*f[20]+alphax[0]*f[14]+alphax[8]*f[13]+(alphax[7]+alphaz[0])*f[12]+alphax[3]*f[5]); 
  out[22] += 0.3061862178478971*(alphay[6]*f[27]+alphay[4]*f[25]+alphay[2]*f[22]+alphay[1]*f[21]+alphay[16]*f[20]+alphay[0]*f[14]+(alphay[8]+alphaz[0])*f[13]+alphay[7]*f[12]+alphay[3]*f[5]); 
  out[23] += 0.3061862178478971*((alphav[19]+alphax[16])*f[31]+alphax[8]*f[30]+(alphav[11]+alphax[7])*f[29]+(alphav[10]+alphax[6])*f[28]+alphav[8]*f[27]+(alphav[18]+alphax[3])*f[25]+alphax[2]*f[24]+(alphav[4]+alphax[1])*f[23]+alphav[16]*f[22]+alphav[3]*f[21]+alphav[2]*f[20]+(alphav[9]+alphax[0])*f[15]+alphav[7]*f[14]+alphav[6]*f[13]+alphav[0]*f[12]+(alphax[4]+alphav[1])*f[5]); 
  out[24] += 0.3061862178478971*((alphav[18]+alphay[16])*f[31]+(alphav[11]+alphay[8])*f[30]+alphay[7]*f[29]+(alphav[9]+alphay[6])*f[28]+alphav[7]*f[27]+(alphav[19]+alphay[3])*f[25]+(alphav[4]+alphay[2])*f[24]+alphay[1]*f[23]+alphav[3]*f[22]+alphav[16]*f[21]+alphav[1]*f[20]+(alphav[10]+alphay[0])*f[15]+alphav[8]*f[14]+alphav[0]*f[13]+alphav[6]*f[12]+(alphay[4]+alphav[2])*f[5]); 
  out[25] += 0.3061862178478971*(alphav[10]*f[30]+alphav[9]*f[29]+alphav[6]*f[27]+alphav[4]*f[25]+alphav[19]*f[24]+alphav[18]*f[23]+alphav[2]*f[22]+alphav[1]*f[21]+alphav[16]*f[20]+(alphav[11]+alphaz[0])*f[15]+alphav[0]*f[14]+alphav[8]*f[13]+alphav[7]*f[12]+alphav[3]*f[5]); 
  out[26] += 0.3061862178478971*((alphav[4]+alphay[2]+alphax[1])*f[26]+(alphav[9]+alphay[6]+alphax[0])*f[19]+f[9]*alphav[19]+(alphav[10]+alphax[6]+alphay[0])*f[18]+f[10]*alphav[18]+(alphav[11]+alphay[8]+alphax[7]+alphaz[0])*f[17]+alphav[0]*f[16]+f[10]*alphay[16]+f[9]*alphax[16]+f[0]*alphav[16]+(alphax[2]+alphay[1])*f[11]+alphax[3]*f[10]+alphay[3]*f[9]+(alphax[4]+alphav[1])*f[8]+f[4]*alphax[8]+f[1]*alphav[8]+(alphay[4]+alphav[2])*f[7]+f[4]*alphay[7]+f[2]*alphav[7]+alphav[3]*f[6]+f[3]*alphav[6]); 
  out[27] += 0.3061862178478971*(alphax[4]*f[30]+alphay[4]*f[29]+(alphay[2]+alphax[1])*f[27]+(alphay[6]+alphax[0])*f[22]+(alphax[6]+alphay[0])*f[21]+(alphay[8]+alphax[7]+alphaz[0])*f[20]+f[13]*alphay[16]+f[12]*alphax[16]+(alphax[2]+alphay[1])*f[14]+alphax[3]*f[13]+alphay[3]*f[12]+f[5]*(alphax[8]+alphay[7])); 
  out[28] += 0.3061862178478971*((alphav[11]+alphay[8]+alphax[7])*f[31]+(alphav[18]+alphay[16]+alphax[3])*f[30]+(alphav[19]+alphax[16]+alphay[3])*f[29]+(alphav[4]+alphay[2]+alphax[1])*f[28]+alphav[3]*f[27]+(alphax[8]+alphay[7])*f[25]+(alphav[9]+alphay[6]+alphax[0])*f[24]+(alphav[10]+alphax[6]+alphay[0])*f[23]+alphav[7]*f[22]+alphav[8]*f[21]+alphav[0]*f[20]+f[14]*alphav[16]+(alphax[2]+alphay[1])*f[15]+(alphax[4]+alphav[1])*f[13]+(alphay[4]+alphav[2])*f[12]+f[5]*alphav[6]); 
  out[29] += 0.3061862178478971*((alphav[10]+alphax[6])*f[31]+alphax[2]*f[30]+(alphav[4]+alphax[1])*f[29]+(alphav[19]+alphax[16])*f[28]+alphav[2]*f[27]+(alphav[9]+alphax[0])*f[25]+alphax[8]*f[24]+(alphav[11]+alphax[7]+alphaz[0])*f[23]+alphav[6]*f[22]+alphav[0]*f[21]+alphav[8]*f[20]+f[15]*alphav[18]+f[13]*alphav[16]+alphax[3]*f[15]+(alphax[4]+alphav[1])*f[14]+alphav[3]*f[12]+f[5]*alphav[7]); 
  out[30] += 0.3061862178478971*((alphav[9]+alphay[6])*f[31]+(alphav[4]+alphay[2])*f[30]+alphay[1]*f[29]+(alphav[18]+alphay[16])*f[28]+alphav[1]*f[27]+(alphav[10]+alphay[0])*f[25]+(alphav[11]+alphay[8]+alphaz[0])*f[24]+alphay[7]*f[23]+alphav[0]*f[22]+alphav[6]*f[21]+alphav[7]*f[20]+f[15]*alphav[19]+f[12]*alphav[16]+alphay[3]*f[15]+(alphay[4]+alphav[2])*f[14]+alphav[3]*f[13]+f[5]*alphav[8]); 
  out[31] += 0.3061862178478971*((alphav[4]+alphay[2]+alphax[1])*f[31]+(alphav[9]+alphay[6]+alphax[0])*f[30]+(alphav[10]+alphax[6]+alphay[0])*f[29]+(alphav[11]+alphay[8]+alphax[7]+alphaz[0])*f[28]+alphav[0]*f[27]+(alphax[2]+alphay[1])*f[25]+(alphav[18]+alphay[16]+alphax[3])*f[24]+(alphav[19]+alphax[16]+alphay[3])*f[23]+(alphax[4]+alphav[1])*f[22]+(alphay[4]+alphav[2])*f[21]+alphav[3]*f[20]+f[5]*alphav[16]+(alphax[8]+alphay[7])*f[15]+alphav[6]*f[14]+alphav[7]*f[13]+alphav[8]*f[12]); 
  return cflRate; 
} 
double EmGyrokineticStep2Vol3x2vSerP1(const double q_, const double m_, const double *w, const double *dxv, 
                           const double *dApardt, 
                           const double *f, double *out) 
{ 
  double dvInv = 1.0/dxv[3]; 
  double dfac_v = 2.0/dxv[3]; 
  out[4] += -(0.6123724356957944*(dApardt[7]*f[16]+dApardt[6]*f[8]+dApardt[5]*f[7]+dApardt[4]*f[6]+dApardt[3]*f[3]+dApardt[2]*f[2]+dApardt[1]*f[1]+dApardt[0]*f[0])*dfac_v*q_)/m_; 
  out[9] += -(0.6123724356957944*(dApardt[6]*f[16]+dApardt[7]*f[8]+dApardt[3]*f[7]+dApardt[2]*f[6]+f[3]*dApardt[5]+f[2]*dApardt[4]+dApardt[0]*f[1]+f[0]*dApardt[1])*dfac_v*q_)/m_; 
  out[10] += -(0.6123724356957944*(dApardt[5]*f[16]+dApardt[3]*f[8]+dApardt[7]*f[7]+dApardt[1]*f[6]+f[3]*dApardt[6]+f[1]*dApardt[4]+dApardt[0]*f[2]+f[0]*dApardt[2])*dfac_v*q_)/m_; 
  out[11] += -(0.6123724356957944*(dApardt[4]*f[16]+dApardt[2]*f[8]+dApardt[1]*f[7]+f[6]*dApardt[7]+f[2]*dApardt[6]+f[1]*dApardt[5]+dApardt[0]*f[3]+f[0]*dApardt[3])*dfac_v*q_)/m_; 
  out[15] += -(0.6123724356957944*(dApardt[7]*f[27]+dApardt[6]*f[22]+dApardt[5]*f[21]+dApardt[4]*f[20]+dApardt[3]*f[14]+dApardt[2]*f[13]+dApardt[1]*f[12]+dApardt[0]*f[5])*dfac_v*q_)/m_; 
  out[17] += -(0.6123724356957944*(dApardt[3]*f[16]+dApardt[5]*f[8]+dApardt[6]*f[7]+f[3]*dApardt[7]+dApardt[0]*f[6]+f[0]*dApardt[4]+dApardt[1]*f[2]+f[1]*dApardt[2])*dfac_v*q_)/m_; 
  out[18] += -(0.6123724356957944*(dApardt[2]*f[16]+dApardt[4]*f[8]+dApardt[0]*f[7]+f[2]*dApardt[7]+dApardt[6]*f[6]+f[0]*dApardt[5]+dApardt[1]*f[3]+f[1]*dApardt[3])*dfac_v*q_)/m_; 
  out[19] += -(0.6123724356957944*(dApardt[1]*f[16]+dApardt[0]*f[8]+dApardt[4]*f[7]+f[1]*dApardt[7]+dApardt[5]*f[6]+f[0]*dApardt[6]+dApardt[2]*f[3]+f[2]*dApardt[3])*dfac_v*q_)/m_; 
  out[23] += -(0.6123724356957944*(dApardt[6]*f[27]+dApardt[7]*f[22]+dApardt[3]*f[21]+dApardt[2]*f[20]+dApardt[5]*f[14]+dApardt[4]*f[13]+dApardt[0]*f[12]+dApardt[1]*f[5])*dfac_v*q_)/m_; 
  out[24] += -(0.6123724356957944*(dApardt[5]*f[27]+dApardt[3]*f[22]+dApardt[7]*f[21]+dApardt[1]*f[20]+dApardt[6]*f[14]+dApardt[0]*f[13]+dApardt[4]*f[12]+dApardt[2]*f[5])*dfac_v*q_)/m_; 
  out[25] += -(0.6123724356957944*(dApardt[4]*f[27]+dApardt[2]*f[22]+dApardt[1]*f[21]+dApardt[7]*f[20]+dApardt[0]*f[14]+dApardt[6]*f[13]+dApardt[5]*f[12]+dApardt[3]*f[5])*dfac_v*q_)/m_; 
  out[26] += -(0.6123724356957944*(dApardt[0]*f[16]+dApardt[1]*f[8]+dApardt[2]*f[7]+f[0]*dApardt[7]+dApardt[3]*f[6]+f[1]*dApardt[6]+f[2]*dApardt[5]+f[3]*dApardt[4])*dfac_v*q_)/m_; 
  out[28] += -(0.6123724356957944*(dApardt[3]*f[27]+dApardt[5]*f[22]+dApardt[6]*f[21]+dApardt[0]*f[20]+dApardt[7]*f[14]+dApardt[1]*f[13]+dApardt[2]*f[12]+dApardt[4]*f[5])*dfac_v*q_)/m_; 
  out[29] += -(0.6123724356957944*(dApardt[2]*f[27]+dApardt[4]*f[22]+dApardt[0]*f[21]+dApardt[6]*f[20]+dApardt[1]*f[14]+dApardt[7]*f[13]+dApardt[3]*f[12]+dApardt[5]*f[5])*dfac_v*q_)/m_; 
  out[30] += -(0.6123724356957944*(dApardt[1]*f[27]+dApardt[0]*f[22]+dApardt[4]*f[21]+dApardt[5]*f[20]+dApardt[2]*f[14]+dApardt[3]*f[13]+dApardt[7]*f[12]+f[5]*dApardt[6])*dfac_v*q_)/m_; 
  out[31] += -(0.6123724356957944*(dApardt[0]*f[27]+dApardt[1]*f[22]+dApardt[2]*f[21]+dApardt[3]*f[20]+dApardt[4]*f[14]+dApardt[5]*f[13]+dApardt[6]*f[12]+f[5]*dApardt[7])*dfac_v*q_)/m_; 
  double cflRate = 0.0; 
  double alphaL = 0.0; 
  double alphaR = 0.0; 
#if cflType == SURFAVG 
  // evaluate surface-averaged alpha on left 
  alphaL = -(0.1767766952966368*dApardt[0]*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate surface-averaged alpha on right 
  alphaR = -(0.1767766952966368*dApardt[0]*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#elif cflType == QUAD 
  // evaluate alpha at left surface quadrature points 
  alphaL = -(0.03125*((-0.3535533905932737*dApardt[7])+0.3535533905932737*(dApardt[6]+dApardt[5]+dApardt[4])-0.3535533905932737*(dApardt[3]+dApardt[2]+dApardt[1])+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.03125*(0.3535533905932737*(dApardt[7]+dApardt[6])-0.3535533905932737*(dApardt[5]+dApardt[4]+dApardt[3]+dApardt[2])+0.3535533905932737*(dApardt[1]+dApardt[0]))*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.03125*(0.3535533905932737*dApardt[7]-0.3535533905932737*dApardt[6]+0.3535533905932737*dApardt[5]-0.3535533905932737*(dApardt[4]+dApardt[3])+0.3535533905932737*dApardt[2]-0.3535533905932737*dApardt[1]+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.03125*((-0.3535533905932737*(dApardt[7]+dApardt[6]+dApardt[5]))+0.3535533905932737*dApardt[4]-0.3535533905932737*dApardt[3]+0.3535533905932737*(dApardt[2]+dApardt[1]+dApardt[0]))*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.03125*(0.3535533905932737*dApardt[7]-0.3535533905932737*(dApardt[6]+dApardt[5])+0.3535533905932737*(dApardt[4]+dApardt[3])-0.3535533905932737*(dApardt[2]+dApardt[1])+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.03125*((-0.3535533905932737*(dApardt[7]+dApardt[6]))+0.3535533905932737*dApardt[5]-0.3535533905932737*dApardt[4]+0.3535533905932737*dApardt[3]-0.3535533905932737*dApardt[2]+0.3535533905932737*(dApardt[1]+dApardt[0]))*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.03125*((-0.3535533905932737*dApardt[7])+0.3535533905932737*dApardt[6]-0.3535533905932737*(dApardt[5]+dApardt[4])+0.3535533905932737*(dApardt[3]+dApardt[2])-0.3535533905932737*dApardt[1]+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.0110485434560398*(dApardt[7]+dApardt[6]+dApardt[5]+dApardt[4]+dApardt[3]+dApardt[2]+dApardt[1]+dApardt[0])*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.03125*((-0.3535533905932737*dApardt[7])+0.3535533905932737*(dApardt[6]+dApardt[5]+dApardt[4])-0.3535533905932737*(dApardt[3]+dApardt[2]+dApardt[1])+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.03125*(0.3535533905932737*(dApardt[7]+dApardt[6])-0.3535533905932737*(dApardt[5]+dApardt[4]+dApardt[3]+dApardt[2])+0.3535533905932737*(dApardt[1]+dApardt[0]))*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.03125*(0.3535533905932737*dApardt[7]-0.3535533905932737*dApardt[6]+0.3535533905932737*dApardt[5]-0.3535533905932737*(dApardt[4]+dApardt[3])+0.3535533905932737*dApardt[2]-0.3535533905932737*dApardt[1]+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.03125*((-0.3535533905932737*(dApardt[7]+dApardt[6]+dApardt[5]))+0.3535533905932737*dApardt[4]-0.3535533905932737*dApardt[3]+0.3535533905932737*(dApardt[2]+dApardt[1]+dApardt[0]))*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.03125*(0.3535533905932737*dApardt[7]-0.3535533905932737*(dApardt[6]+dApardt[5])+0.3535533905932737*(dApardt[4]+dApardt[3])-0.3535533905932737*(dApardt[2]+dApardt[1])+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.03125*((-0.3535533905932737*(dApardt[7]+dApardt[6]))+0.3535533905932737*dApardt[5]-0.3535533905932737*dApardt[4]+0.3535533905932737*dApardt[3]-0.3535533905932737*dApardt[2]+0.3535533905932737*(dApardt[1]+dApardt[0]))*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.03125*((-0.3535533905932737*dApardt[7])+0.3535533905932737*dApardt[6]-0.3535533905932737*(dApardt[5]+dApardt[4])+0.3535533905932737*(dApardt[3]+dApardt[2])-0.3535533905932737*dApardt[1]+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = -(0.0110485434560398*(dApardt[7]+dApardt[6]+dApardt[5]+dApardt[4]+dApardt[3]+dApardt[2]+dApardt[1]+dApardt[0])*dfac_v*q_)/m_; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate alpha at right surface quadrature points 
  alphaR = -(0.03125*((-0.3535533905932737*dApardt[7])+0.3535533905932737*(dApardt[6]+dApardt[5]+dApardt[4])-0.3535533905932737*(dApardt[3]+dApardt[2]+dApardt[1])+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.03125*(0.3535533905932737*(dApardt[7]+dApardt[6])-0.3535533905932737*(dApardt[5]+dApardt[4]+dApardt[3]+dApardt[2])+0.3535533905932737*(dApardt[1]+dApardt[0]))*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.03125*(0.3535533905932737*dApardt[7]-0.3535533905932737*dApardt[6]+0.3535533905932737*dApardt[5]-0.3535533905932737*(dApardt[4]+dApardt[3])+0.3535533905932737*dApardt[2]-0.3535533905932737*dApardt[1]+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.03125*((-0.3535533905932737*(dApardt[7]+dApardt[6]+dApardt[5]))+0.3535533905932737*dApardt[4]-0.3535533905932737*dApardt[3]+0.3535533905932737*(dApardt[2]+dApardt[1]+dApardt[0]))*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.03125*(0.3535533905932737*dApardt[7]-0.3535533905932737*(dApardt[6]+dApardt[5])+0.3535533905932737*(dApardt[4]+dApardt[3])-0.3535533905932737*(dApardt[2]+dApardt[1])+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.03125*((-0.3535533905932737*(dApardt[7]+dApardt[6]))+0.3535533905932737*dApardt[5]-0.3535533905932737*dApardt[4]+0.3535533905932737*dApardt[3]-0.3535533905932737*dApardt[2]+0.3535533905932737*(dApardt[1]+dApardt[0]))*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.03125*((-0.3535533905932737*dApardt[7])+0.3535533905932737*dApardt[6]-0.3535533905932737*(dApardt[5]+dApardt[4])+0.3535533905932737*(dApardt[3]+dApardt[2])-0.3535533905932737*dApardt[1]+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.0110485434560398*(dApardt[7]+dApardt[6]+dApardt[5]+dApardt[4]+dApardt[3]+dApardt[2]+dApardt[1]+dApardt[0])*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.03125*((-0.3535533905932737*dApardt[7])+0.3535533905932737*(dApardt[6]+dApardt[5]+dApardt[4])-0.3535533905932737*(dApardt[3]+dApardt[2]+dApardt[1])+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.03125*(0.3535533905932737*(dApardt[7]+dApardt[6])-0.3535533905932737*(dApardt[5]+dApardt[4]+dApardt[3]+dApardt[2])+0.3535533905932737*(dApardt[1]+dApardt[0]))*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.03125*(0.3535533905932737*dApardt[7]-0.3535533905932737*dApardt[6]+0.3535533905932737*dApardt[5]-0.3535533905932737*(dApardt[4]+dApardt[3])+0.3535533905932737*dApardt[2]-0.3535533905932737*dApardt[1]+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.03125*((-0.3535533905932737*(dApardt[7]+dApardt[6]+dApardt[5]))+0.3535533905932737*dApardt[4]-0.3535533905932737*dApardt[3]+0.3535533905932737*(dApardt[2]+dApardt[1]+dApardt[0]))*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.03125*(0.3535533905932737*dApardt[7]-0.3535533905932737*(dApardt[6]+dApardt[5])+0.3535533905932737*(dApardt[4]+dApardt[3])-0.3535533905932737*(dApardt[2]+dApardt[1])+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.03125*((-0.3535533905932737*(dApardt[7]+dApardt[6]))+0.3535533905932737*dApardt[5]-0.3535533905932737*dApardt[4]+0.3535533905932737*dApardt[3]-0.3535533905932737*dApardt[2]+0.3535533905932737*(dApardt[1]+dApardt[0]))*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.03125*((-0.3535533905932737*dApardt[7])+0.3535533905932737*dApardt[6]-0.3535533905932737*(dApardt[5]+dApardt[4])+0.3535533905932737*(dApardt[3]+dApardt[2])-0.3535533905932737*dApardt[1]+0.3535533905932737*dApardt[0])*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = -(0.0110485434560398*(dApardt[7]+dApardt[6]+dApardt[5]+dApardt[4]+dApardt[3]+dApardt[2]+dApardt[1]+dApardt[0])*dfac_v*q_)/m_; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#endif 
return cflRate; 
} 
double EmGyrokineticVol3x2vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                        const double *Bmag, const double *BmagInv, const double *Gradpar, 
                        const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                        const double *f, double *out) 
{ 
// w[NDIM]: Cell-center coordinates. dxv[NDIM]: Cell spacing. H/f: Input Hamiltonian/distribution function. out: Incremented output 
  double dfac_x = 2.0/dxv[0]; 
  double dfac_y = 2.0/dxv[1]; 
  double dfac_z = 2.0/dxv[2]; 
  double dfac_v = 2.0/dxv[3]; 
  double dfac_m = 2.0/dxv[4]; 
  double wx = w[0]; 
  double wy = w[1]; 
  double wz = w[2]; 
  double wv = w[3]; 
  double wm = w[4]; 
  double wv2 = wv*wv; 
  double dfac_v2 = dfac_v*dfac_v; 
  double q2 = q_*q_; 
  double m2 = m_*m_; 
  double cflRate = 0.0; 
  double alphaL = 0.0; 
  double alphaR = 0.0; 
  double alphaCtrl;
  double alphax[32]; 
  alphax[0] = dfac_x*((2.0*BdriftX[0]*m_*wv2)/q_+0.7071067811865475*(1.732050807568877*dfac_y*(BmagInv[1]*Apar[4]*wv-1.0*(BmagInv[1]*Phi[4]+BmagInv[0]*Phi[2]))+(1.732050807568877*BmagInv[0]*Apar[2]*dfac_y+Apar[1]*BdriftX[1]+Apar[0]*BdriftX[0])*wv)); 
  alphax[1] = dfac_x*((2.0*BdriftX[1]*m_*wv2)/q_+0.7071067811865475*(1.732050807568877*dfac_y*(BmagInv[0]*Apar[4]*wv-1.0*(BmagInv[0]*Phi[4]+BmagInv[1]*Phi[2]))+(1.732050807568877*BmagInv[1]*Apar[2]*dfac_y+Apar[0]*BdriftX[1]+BdriftX[0]*Apar[1])*wv)); 
  alphax[2] = 0.7071067811865475*(BdriftX[1]*Apar[4]+BdriftX[0]*Apar[2])*dfac_x*wv; 
  alphax[3] = 0.7071067811865475*dfac_x*((1.732050807568877*(BmagInv[1]*Apar[7]+BmagInv[0]*Apar[6])*dfac_y+BdriftX[1]*Apar[5]+BdriftX[0]*Apar[3])*wv-1.732050807568877*(BmagInv[1]*Phi[7]+BmagInv[0]*Phi[6])*dfac_y); 
  alphax[4] = (1.154700538379252*BdriftX[0]*dfac_x*m_*wv)/(dfac_v*q_); 
  alphax[6] = 0.7071067811865475*(BdriftX[0]*Apar[4]+BdriftX[1]*Apar[2])*dfac_x*wv; 
  alphax[7] = 0.7071067811865475*dfac_x*((1.732050807568877*(BmagInv[0]*Apar[7]+BmagInv[1]*Apar[6])*dfac_y+BdriftX[0]*Apar[5]+BdriftX[1]*Apar[3])*wv-1.732050807568877*(BmagInv[0]*Phi[7]+BmagInv[1]*Phi[6])*dfac_y); 
  alphax[8] = 0.7071067811865475*(BdriftX[1]*Apar[7]+BdriftX[0]*Apar[6])*dfac_x*wv; 
  alphax[9] = (1.154700538379252*BdriftX[1]*dfac_x*m_*wv)/(dfac_v*q_); 
  alphax[16] = 0.7071067811865475*(BdriftX[0]*Apar[7]+BdriftX[1]*Apar[6])*dfac_x*wv; 
#if cflType == SURFAVG 
  // evaluate surface-averaged alpha on left 
  alphaL = -0.0625*(2.449489742783178*alphax[1]-1.414213562373095*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate surface-averaged alpha on right 
  alphaR = 0.0625*(2.449489742783178*alphax[1]+1.414213562373095*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#elif cflType == QUAD 
  // evaluate alpha at left surface quadrature points 
  alphaL = 0.03125*((-0.3061862178478971*alphax[16])+0.3061862178478971*alphax[9]+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*(alphax[16]+alphax[9])-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]-0.1767766952966368*(alphax[4]+alphax[3])+0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*(alphax[16]+alphax[9])-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]-0.1767766952966368*alphax[4]+0.1767766952966368*alphax[3]-0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphax[16])+0.3061862178478971*alphax[9]+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*alphax[4]+0.1767766952966368*(alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*(alphax[16]+alphax[9]))+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*alphax[4]-0.1767766952966368*(alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphax[16]-0.3061862178478971*alphax[9]-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]+0.1767766952966368*alphax[4]-0.1767766952966368*alphax[3]+0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphax[16]-0.3061862178478971*alphax[9]-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]+0.1767766952966368*(alphax[4]+alphax[3])-0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*(alphax[16]+alphax[9]))+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphax[16])+0.3061862178478971*alphax[9]+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*(alphax[16]+alphax[9])-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]-0.1767766952966368*(alphax[4]+alphax[3])+0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*(alphax[16]+alphax[9])-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]-0.1767766952966368*alphax[4]+0.1767766952966368*alphax[3]-0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphax[16])+0.3061862178478971*alphax[9]+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*alphax[4]+0.1767766952966368*(alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*(alphax[16]+alphax[9]))+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*alphax[4]-0.1767766952966368*(alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphax[16]-0.3061862178478971*alphax[9]-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]+0.1767766952966368*alphax[4]-0.1767766952966368*alphax[3]+0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphax[16]-0.3061862178478971*alphax[9]-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]+0.1767766952966368*(alphax[4]+alphax[3])-0.1767766952966368*alphax[2]-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*(alphax[16]+alphax[9]))+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])-0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate alpha at right surface quadrature points 
  alphaR = 0.03125*(0.3061862178478971*alphax[16]-0.3061862178478971*alphax[9]+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*(alphax[16]+alphax[9]))-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]-0.1767766952966368*(alphax[4]+alphax[3])+0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*(alphax[16]+alphax[9]))-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]-0.1767766952966368*alphax[4]+0.1767766952966368*alphax[3]-0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphax[16]-0.3061862178478971*alphax[9]+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*alphax[4]+0.1767766952966368*(alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*(alphax[16]+alphax[9])+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*alphax[4]-0.1767766952966368*(alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphax[16])+0.3061862178478971*alphax[9]-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]+0.1767766952966368*alphax[4]-0.1767766952966368*alphax[3]+0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphax[16])+0.3061862178478971*alphax[9]-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]+0.1767766952966368*(alphax[4]+alphax[3])-0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*(alphax[16]+alphax[9])+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphax[16]-0.3061862178478971*alphax[9]+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*(alphax[16]+alphax[9]))-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]-0.1767766952966368*(alphax[4]+alphax[3])+0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*(alphax[16]+alphax[9]))-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]-0.1767766952966368*alphax[4]+0.1767766952966368*alphax[3]-0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphax[16]-0.3061862178478971*alphax[9]+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])-0.1767766952966368*alphax[4]+0.1767766952966368*(alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*(alphax[16]+alphax[9])+0.1767766952966368*alphax[8]-0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*alphax[4]-0.1767766952966368*(alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphax[16])+0.3061862178478971*alphax[9]-0.1767766952966368*alphax[8]-0.3061862178478971*alphax[7]+0.3061862178478971*alphax[6]+0.1767766952966368*alphax[4]-0.1767766952966368*alphax[3]+0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphax[16])+0.3061862178478971*alphax[9]-0.1767766952966368*alphax[8]+0.3061862178478971*alphax[7]-0.3061862178478971*alphax[6]+0.1767766952966368*(alphax[4]+alphax[3])-0.1767766952966368*alphax[2]+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*(alphax[16]+alphax[9])+0.1767766952966368*alphax[8]+0.3061862178478971*(alphax[7]+alphax[6])+0.1767766952966368*(alphax[4]+alphax[3]+alphax[2])+0.3061862178478971*alphax[1]+0.1767766952966368*alphax[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#endif 

  double alphay[32]; 
  alphay[0] = dfac_y*((2.0*BdriftY[0]*m_*wv2)/q_+0.7071067811865475*((Apar[1]*(BdriftY[1]-1.732050807568877*BmagInv[0]*dfac_x)+Apar[0]*BdriftY[0])*wv+1.732050807568877*BmagInv[0]*dfac_x*((Bmag[1]*wm)/q_+Phi[1]))); 
  alphay[1] = dfac_y*((2.0*BdriftY[1]*m_*wv2)/q_+0.7071067811865475*(((-1.732050807568877*Apar[1]*BmagInv[1]*dfac_x)+Apar[0]*BdriftY[1]+BdriftY[0]*Apar[1])*wv+1.732050807568877*BmagInv[1]*dfac_x*((Bmag[1]*wm)/q_+Phi[1]))); 
  alphay[2] = -0.7071067811865475*dfac_y*(1.732050807568877*BmagInv[0]*Apar[4]*dfac_x*wv-1.0*((BdriftY[1]*Apar[4]+BdriftY[0]*Apar[2])*wv+1.732050807568877*BmagInv[0]*Phi[4]*dfac_x)); 
  alphay[3] = -0.7071067811865475*dfac_y*(1.732050807568877*BmagInv[0]*Apar[5]*dfac_x*wv-1.0*((BdriftY[1]*Apar[5]+BdriftY[0]*Apar[3])*wv+1.732050807568877*BmagInv[0]*Phi[5]*dfac_x)); 
  alphay[4] = (1.154700538379252*BdriftY[0]*dfac_y*m_*wv)/(dfac_v*q_); 
  alphay[5] = (0.7071067811865475*BmagInv[0]*Bmag[1]*dfac_x*dfac_y)/(dfac_m*q_); 
  alphay[6] = -0.7071067811865475*dfac_y*(1.732050807568877*BmagInv[1]*Apar[4]*dfac_x*wv-1.0*((BdriftY[0]*Apar[4]+BdriftY[1]*Apar[2])*wv+1.732050807568877*BmagInv[1]*Phi[4]*dfac_x)); 
  alphay[7] = -0.7071067811865475*dfac_y*(1.732050807568877*BmagInv[1]*Apar[5]*dfac_x*wv-1.0*((BdriftY[0]*Apar[5]+BdriftY[1]*Apar[3])*wv+1.732050807568877*BmagInv[1]*Phi[5]*dfac_x)); 
  alphay[8] = -0.7071067811865475*dfac_y*(1.732050807568877*BmagInv[0]*Apar[7]*dfac_x*wv-1.0*((BdriftY[1]*Apar[7]+BdriftY[0]*Apar[6])*wv+1.732050807568877*BmagInv[0]*Phi[7]*dfac_x)); 
  alphay[9] = (1.154700538379252*BdriftY[1]*dfac_y*m_*wv)/(dfac_v*q_); 
  alphay[12] = (0.7071067811865475*Bmag[1]*BmagInv[1]*dfac_x*dfac_y)/(dfac_m*q_); 
  alphay[16] = -0.7071067811865475*dfac_y*(1.732050807568877*BmagInv[1]*Apar[7]*dfac_x*wv-1.0*((BdriftY[0]*Apar[7]+BdriftY[1]*Apar[6])*wv+1.732050807568877*BmagInv[1]*Phi[7]*dfac_x)); 
#if cflType == SURFAVG 
  // evaluate surface-averaged alpha on left 
  alphaL = -0.0625*(2.449489742783178*alphay[2]-1.414213562373095*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate surface-averaged alpha on right 
  alphaR = 0.0625*(2.449489742783178*alphay[2]+1.414213562373095*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#elif cflType == QUAD 
  // evaluate alpha at left surface quadrature points 
  alphaL = 0.03125*((-0.3061862178478971*alphay[16])+0.1767766952966368*(alphay[12]+alphay[9])+0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[5]+alphay[4]+alphay[3])-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphay[16]-0.1767766952966368*(alphay[12]+alphay[9])+0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[5]+alphay[4]+alphay[3])-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphay[16]+0.1767766952966368*(alphay[12]+alphay[9])-0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[5]+alphay[4])+0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphay[16])-0.1767766952966368*(alphay[12]+alphay[9])-0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[5]+alphay[4])+0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphay[16])+0.1767766952966368*alphay[12]-0.1767766952966368*alphay[9]+0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*alphay[5]+0.1767766952966368*alphay[4]-0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphay[16]-0.1767766952966368*alphay[12]+0.1767766952966368*alphay[9]+0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*alphay[5]+0.1767766952966368*alphay[4]-0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphay[16]+0.1767766952966368*alphay[12]-0.1767766952966368*alphay[9]-0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*alphay[5]+0.1767766952966368*(alphay[4]+alphay[3])-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphay[16])-0.1767766952966368*alphay[12]+0.1767766952966368*alphay[9]-0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*alphay[5]+0.1767766952966368*(alphay[4]+alphay[3])-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphay[16])-0.1767766952966368*alphay[12]+0.1767766952966368*alphay[9]+0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*alphay[5]-0.1767766952966368*(alphay[4]+alphay[3])-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphay[16]+0.1767766952966368*alphay[12]-0.1767766952966368*alphay[9]+0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*alphay[5]-0.1767766952966368*(alphay[4]+alphay[3])-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphay[16]-0.1767766952966368*alphay[12]+0.1767766952966368*alphay[9]-0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*alphay[5]-0.1767766952966368*alphay[4]+0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphay[16])+0.1767766952966368*alphay[12]-0.1767766952966368*alphay[9]-0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*alphay[5]-0.1767766952966368*alphay[4]+0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphay[16])-0.1767766952966368*(alphay[12]+alphay[9])+0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[5]+alphay[4])-0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphay[16]+0.1767766952966368*(alphay[12]+alphay[9])+0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[5]+alphay[4])-0.1767766952966368*alphay[3]-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.3061862178478971*alphay[16]-0.1767766952966368*(alphay[12]+alphay[9])-0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[5]+alphay[4]+alphay[3])-0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.3061862178478971*alphay[16])+0.1767766952966368*(alphay[12]+alphay[9])-0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[5]+alphay[4]+alphay[3])-0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate alpha at right surface quadrature points 
  alphaR = 0.03125*(0.3061862178478971*alphay[16]+0.1767766952966368*(alphay[12]+alphay[9])-0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[5]+alphay[4]+alphay[3])+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphay[16])-0.1767766952966368*(alphay[12]+alphay[9])-0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[5]+alphay[4]+alphay[3])+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphay[16])+0.1767766952966368*(alphay[12]+alphay[9])+0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[5]+alphay[4])+0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphay[16]-0.1767766952966368*(alphay[12]+alphay[9])+0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*(alphay[5]+alphay[4])+0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphay[16]+0.1767766952966368*alphay[12]-0.1767766952966368*alphay[9]-0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*alphay[5]+0.1767766952966368*alphay[4]-0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphay[16])-0.1767766952966368*alphay[12]+0.1767766952966368*alphay[9]-0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*alphay[5]+0.1767766952966368*alphay[4]-0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphay[16])+0.1767766952966368*alphay[12]-0.1767766952966368*alphay[9]+0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]-0.1767766952966368*alphay[5]+0.1767766952966368*(alphay[4]+alphay[3])+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphay[16]-0.1767766952966368*alphay[12]+0.1767766952966368*alphay[9]+0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]-0.1767766952966368*alphay[5]+0.1767766952966368*(alphay[4]+alphay[3])+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphay[16]-0.1767766952966368*alphay[12]+0.1767766952966368*alphay[9]-0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*alphay[5]-0.1767766952966368*(alphay[4]+alphay[3])+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphay[16])+0.1767766952966368*alphay[12]-0.1767766952966368*alphay[9]-0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*alphay[5]-0.1767766952966368*(alphay[4]+alphay[3])+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphay[16])-0.1767766952966368*alphay[12]+0.1767766952966368*alphay[9]+0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*alphay[5]-0.1767766952966368*alphay[4]+0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphay[16]+0.1767766952966368*alphay[12]-0.1767766952966368*alphay[9]+0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*alphay[5]-0.1767766952966368*alphay[4]+0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphay[16]-0.1767766952966368*(alphay[12]+alphay[9])-0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[5]+alphay[4])-0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphay[16])+0.1767766952966368*(alphay[12]+alphay[9])-0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[5]+alphay[4])-0.1767766952966368*alphay[3]+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.3061862178478971*alphay[16])-0.1767766952966368*(alphay[12]+alphay[9])+0.3061862178478971*alphay[8]-0.1767766952966368*alphay[7]-0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[5]+alphay[4]+alphay[3])+0.3061862178478971*alphay[2]-0.1767766952966368*alphay[1]+0.1767766952966368*alphay[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.3061862178478971*alphay[16]+0.1767766952966368*(alphay[12]+alphay[9])+0.3061862178478971*alphay[8]+0.1767766952966368*alphay[7]+0.3061862178478971*alphay[6]+0.1767766952966368*(alphay[5]+alphay[4]+alphay[3])+0.3061862178478971*alphay[2]+0.1767766952966368*(alphay[1]+alphay[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#endif 

  double alphaz[32]; 
  alphaz[0] = 2.0*Gradpar[0]*dfac_z*wv; 
  alphaz[1] = 2.0*Gradpar[1]*dfac_z*wv; 
#if cflType == SURFAVG 
  // evaluate surface-averaged alpha on left 
  alphaL = 0.0883883476483184*alphaz[0]; 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate surface-averaged alpha on right 
  alphaR = 0.0883883476483184*alphaz[0]; 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#elif cflType == QUAD 
  // evaluate alpha at left surface quadrature points 
  alphaL = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate alpha at right surface quadrature points 
  alphaR = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.1767766952966368*alphaz[0]-0.1767766952966368*alphaz[1]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.0055242717280199*(alphaz[1]+alphaz[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#endif 

  double alphav[32]; 
  alphav[0] = -1.0*dfac_v*(1.224744871391589*((BdriftX[0]*Bmag[1]*dfac_x*wm)/q_+(BdriftY[1]*Phi[4]+BdriftY[0]*Phi[2])*dfac_y+BdriftX[0]*Phi[1]*dfac_x)*wv+(Bmag[1]*dfac_x*(0.75*(BmagInv[1]*Apar[4]+BmagInv[0]*Apar[2])*dfac_y+0.4330127018922193*(Apar[1]*BdriftX[1]+Apar[0]*BdriftX[0]))*wm+((1.732050807568877*(0.7071067811865475*(Gradpar[1]*Phi[5]+Gradpar[0]*Phi[3])*dfac_z+0.25*(((BdriftY[0]*Apar[5]+BdriftY[1]*Apar[3])*Phi[7]+(BdriftY[1]*Apar[5]+BdriftY[0]*Apar[3])*Phi[6]+(Apar[0]*BdriftY[1]+BdriftY[0]*Apar[1])*Phi[4]+(Apar[1]*BdriftY[1]+Apar[0]*BdriftY[0])*Phi[2])*dfac_y+((BdriftX[1]*Apar[7]+BdriftX[0]*Apar[6])*Phi[7]+(BdriftX[1]*Apar[5]+BdriftX[0]*Apar[3])*Phi[5]+(BdriftX[1]*Apar[4]+BdriftX[0]*Apar[2])*Phi[4]+(Apar[1]*BdriftX[1]+Apar[0]*BdriftX[0])*Phi[1])*dfac_x))-1.0*(BmagInv[1]*(0.75*Apar[5]*Phi[7]-0.75*Phi[5]*Apar[7])+BmagInv[0]*(0.75*Apar[5]*Phi[6]-0.75*Phi[5]*Apar[6])+BmagInv[1]*(0.75*Apar[1]*Phi[4]-0.75*Phi[1]*Apar[4])+BmagInv[0]*(0.75*Apar[1]*Phi[2]-0.75*Phi[1]*Apar[2]))*dfac_x*dfac_y)*q2)/q_)/m_); 
  alphav[1] = -1.0*dfac_v*(1.224744871391589*((BdriftX[1]*Bmag[1]*dfac_x*wm)/q_+(BdriftY[0]*Phi[4]+BdriftY[1]*Phi[2])*dfac_y+BdriftX[1]*Phi[1]*dfac_x)*wv+(Bmag[1]*dfac_x*(0.75*(BmagInv[0]*Apar[4]+BmagInv[1]*Apar[2])*dfac_y+0.4330127018922193*(Apar[0]*BdriftX[1]+BdriftX[0]*Apar[1]))*wm+((1.732050807568877*(0.7071067811865475*(Gradpar[0]*Phi[5]+Gradpar[1]*Phi[3])*dfac_z-1.0*(((-0.45*BdriftY[1]*Apar[5])-0.25*BdriftY[0]*Apar[3])*Phi[7]-0.25*(BdriftY[0]*Apar[5]+BdriftY[1]*Apar[3])*Phi[6]+((-0.45*Apar[1]*BdriftY[1])-0.25*Apar[0]*BdriftY[0])*Phi[4]-0.25*(Apar[0]*BdriftY[1]+BdriftY[0]*Apar[1])*Phi[2])*dfac_y+0.25*((BdriftX[0]*Apar[7]+BdriftX[1]*Apar[6])*Phi[7]+(BdriftX[0]*Apar[5]+BdriftX[1]*Apar[3])*Phi[5]+(BdriftX[0]*Apar[4]+BdriftX[1]*Apar[2])*Phi[4]+(Apar[0]*BdriftX[1]+BdriftX[0]*Apar[1])*Phi[1])*dfac_x)-1.0*(BmagInv[0]*(0.75*Apar[5]*Phi[7]-0.75*Phi[5]*Apar[7])+BmagInv[1]*(0.75*Apar[5]*Phi[6]-0.75*Phi[5]*Apar[6])+BmagInv[0]*(0.75*Apar[1]*Phi[4]-0.75*Phi[1]*Apar[4])+BmagInv[1]*(0.75*Apar[1]*Phi[2]-0.75*Phi[1]*Apar[2]))*dfac_x*dfac_y)*q2)/q_)/m_); 
  alphav[2] = -1.0*dfac_v*(1.224744871391589*BdriftX[0]*Phi[4]*dfac_x*wv+(0.4330127018922193*Bmag[1]*(BdriftX[1]*Apar[4]+BdriftX[0]*Apar[2])*dfac_x*wm+(1.732050807568877*(0.7071067811865475*(Gradpar[1]*Phi[7]+Gradpar[0]*Phi[6])*dfac_z+0.25*(((BdriftY[0]*Apar[7]+BdriftY[1]*Apar[6])*Phi[7]+Phi[6]*(BdriftY[1]*Apar[7]+BdriftY[0]*Apar[6])+(BdriftY[0]*Apar[4]+BdriftY[1]*Apar[2])*Phi[4]+Phi[2]*(BdriftY[1]*Apar[4]+BdriftY[0]*Apar[2]))*dfac_y+((BdriftX[1]*Apar[5]+BdriftX[0]*Apar[3])*Phi[7]+Phi[5]*(BdriftX[1]*Apar[7]+BdriftX[0]*Apar[6])+(Apar[1]*BdriftX[1]+Apar[0]*BdriftX[0])*Phi[4]+Phi[1]*(BdriftX[1]*Apar[4]+BdriftX[0]*Apar[2]))*dfac_x))-1.0*BmagInv[0]*((-0.75*Apar[6]*Phi[7])+0.75*Phi[6]*Apar[7]-0.75*Apar[2]*Phi[4]+0.75*Phi[2]*Apar[4])*dfac_x*dfac_y)*q_)/m_); 
  alphav[3] = -1.0*dfac_v*(1.224744871391589*((BdriftY[1]*Phi[7]+BdriftY[0]*Phi[6])*dfac_y+BdriftX[0]*Phi[5]*dfac_x)*wv+(Bmag[1]*dfac_x*(0.75*(BmagInv[1]*Apar[7]+BmagInv[0]*Apar[6])*dfac_y+0.4330127018922193*(BdriftX[1]*Apar[5]+BdriftX[0]*Apar[3]))*wm+(0.4330127018922193*(((Apar[0]*BdriftY[1]+BdriftY[0]*Apar[1])*Phi[7]+(Apar[1]*BdriftY[1]+Apar[0]*BdriftY[0])*Phi[6]+(BdriftY[0]*Phi[4]+BdriftY[1]*Phi[2])*Apar[5]+Apar[3]*(BdriftY[1]*Phi[4]+BdriftY[0]*Phi[2]))*dfac_y+((BdriftX[1]*Apar[4]+BdriftX[0]*Apar[2])*Phi[7]+Phi[4]*(BdriftX[1]*Apar[7]+BdriftX[0]*Apar[6])+(Apar[1]*BdriftX[1]+Apar[0]*BdriftX[0])*Phi[5]+Phi[1]*(BdriftX[1]*Apar[5]+BdriftX[0]*Apar[3]))*dfac_x)+((-1.0*(0.75*Apar[1]*BmagInv[1]*Phi[7]-1.0*(0.75*BmagInv[1]*Phi[1]*Apar[7]-0.75*BmagInv[0]*Apar[1]*Phi[6])))-0.75*((BmagInv[1]*Phi[4]+BmagInv[0]*Phi[2])*Apar[5]-1.0*(BmagInv[0]*Phi[1]*Apar[6]+(BmagInv[1]*Apar[4]+BmagInv[0]*Apar[2])*Phi[5])))*dfac_x*dfac_y)*q_)/m_); 
  alphav[4] = -0.7071067811865475*((BdriftX[0]*Bmag[1]*dfac_x*wm)/q_+(BdriftY[1]*Phi[4]+BdriftY[0]*Phi[2])*dfac_y+BdriftX[0]*Phi[1]*dfac_x); 
  alphav[5] = -(1.0*Bmag[1]*dfac_v*dfac_x*((0.7071067811865475*BdriftX[0]*wv)/q_+(0.4330127018922193*(BmagInv[1]*Apar[4]+BmagInv[0]*Apar[2])*dfac_y+0.25*(Apar[1]*BdriftX[1]+Apar[0]*BdriftX[0]))/m_))/dfac_m; 
  alphav[6] = -1.0*dfac_v*(1.224744871391589*BdriftX[1]*Phi[4]*dfac_x*wv+(0.4330127018922193*Bmag[1]*(BdriftX[0]*Apar[4]+BdriftX[1]*Apar[2])*dfac_x*wm+(1.732050807568877*(0.7071067811865475*(Gradpar[0]*Phi[7]+Gradpar[1]*Phi[6])*dfac_z-1.0*(((-0.45*BdriftY[1]*Apar[7])-0.25*BdriftY[0]*Apar[6])*Phi[7]-0.25*Phi[6]*(BdriftY[0]*Apar[7]+BdriftY[1]*Apar[6])+((-0.45*BdriftY[1]*Apar[4])-0.25*BdriftY[0]*Apar[2])*Phi[4]-0.25*Phi[2]*(BdriftY[0]*Apar[4]+BdriftY[1]*Apar[2]))*dfac_y+0.25*((BdriftX[0]*Apar[5]+BdriftX[1]*Apar[3])*Phi[7]+Phi[5]*(BdriftX[0]*Apar[7]+BdriftX[1]*Apar[6])+(Apar[0]*BdriftX[1]+BdriftX[0]*Apar[1])*Phi[4]+Phi[1]*(BdriftX[0]*Apar[4]+BdriftX[1]*Apar[2]))*dfac_x)-1.0*BmagInv[1]*((-0.75*Apar[6]*Phi[7])+0.75*Phi[6]*Apar[7]-0.75*Apar[2]*Phi[4]+0.75*Phi[2]*Apar[4])*dfac_x*dfac_y)*q_)/m_); 
  alphav[7] = -1.0*dfac_v*(1.224744871391589*((BdriftY[0]*Phi[7]+BdriftY[1]*Phi[6])*dfac_y+BdriftX[1]*Phi[5]*dfac_x)*wv+(Bmag[1]*dfac_x*(0.75*(BmagInv[0]*Apar[7]+BmagInv[1]*Apar[6])*dfac_y+0.4330127018922193*(BdriftX[0]*Apar[5]+BdriftX[1]*Apar[3]))*wm+(1.732050807568877*(0.25*((BdriftX[0]*Apar[4]+BdriftX[1]*Apar[2])*Phi[7]+Phi[4]*(BdriftX[0]*Apar[7]+BdriftX[1]*Apar[6])+(Apar[0]*BdriftX[1]+BdriftX[0]*Apar[1])*Phi[5]+Phi[1]*(BdriftX[0]*Apar[5]+BdriftX[1]*Apar[3]))*dfac_x-1.0*(((-0.45*Apar[1]*BdriftY[1])-0.25*Apar[0]*BdriftY[0])*Phi[7]-0.25*(Apar[0]*BdriftY[1]+BdriftY[0]*Apar[1])*Phi[6]+((-0.45*BdriftY[1]*Phi[4])-0.25*BdriftY[0]*Phi[2])*Apar[5]-0.25*Apar[3]*(BdriftY[0]*Phi[4]+BdriftY[1]*Phi[2]))*dfac_y)+((-1.0*(0.75*BmagInv[0]*Apar[1]*Phi[7]-1.0*(0.75*BmagInv[0]*Phi[1]*Apar[7]-0.75*Apar[1]*BmagInv[1]*Phi[6])))-0.75*((BmagInv[0]*Phi[4]+BmagInv[1]*Phi[2])*Apar[5]-1.0*(BmagInv[1]*Phi[1]*Apar[6]+(BmagInv[0]*Apar[4]+BmagInv[1]*Apar[2])*Phi[5])))*dfac_x*dfac_y)*q_)/m_); 
  alphav[8] = -1.0*dfac_v*(1.224744871391589*BdriftX[0]*Phi[7]*dfac_x*wv+(0.4330127018922193*Bmag[1]*(BdriftX[1]*Apar[7]+BdriftX[0]*Apar[6])*dfac_x*wm+(0.4330127018922193*(((BdriftY[0]*Apar[4]+BdriftY[1]*Apar[2])*Phi[7]+(BdriftY[0]*Phi[4]+BdriftY[1]*Phi[2])*Apar[7]+(BdriftY[1]*Apar[4]+BdriftY[0]*Apar[2])*Phi[6]+(BdriftY[1]*Phi[4]+BdriftY[0]*Phi[2])*Apar[6])*dfac_y+((Apar[1]*BdriftX[1]+Apar[0]*BdriftX[0])*Phi[7]+Phi[1]*(BdriftX[1]*Apar[7]+BdriftX[0]*Apar[6])+(BdriftX[1]*Apar[4]+BdriftX[0]*Apar[2])*Phi[5]+Phi[4]*(BdriftX[1]*Apar[5]+BdriftX[0]*Apar[3]))*dfac_x)-1.0*BmagInv[0]*((-0.75*Apar[2]*Phi[7])+0.75*(Phi[2]*Apar[7]+Apar[4]*Phi[6])-0.75*Phi[4]*Apar[6])*dfac_x*dfac_y)*q_)/m_); 
  alphav[9] = -0.7071067811865475*((BdriftX[1]*Bmag[1]*dfac_x*wm)/q_+(BdriftY[0]*Phi[4]+BdriftY[1]*Phi[2])*dfac_y+BdriftX[1]*Phi[1]*dfac_x); 
  alphav[10] = -0.7071067811865475*BdriftX[0]*Phi[4]*dfac_x; 
  alphav[11] = -0.7071067811865475*((BdriftY[1]*Phi[7]+BdriftY[0]*Phi[6])*dfac_y+BdriftX[0]*Phi[5]*dfac_x); 
  alphav[12] = -(1.0*Bmag[1]*dfac_v*dfac_x*((0.7071067811865475*BdriftX[1]*wv)/q_+(0.4330127018922193*(BmagInv[0]*Apar[4]+BmagInv[1]*Apar[2])*dfac_y+0.25*(Apar[0]*BdriftX[1]+BdriftX[0]*Apar[1]))/m_))/dfac_m; 
  alphav[13] = -(0.25*Bmag[1]*(BdriftX[1]*Apar[4]+BdriftX[0]*Apar[2])*dfac_v*dfac_x)/(dfac_m*m_); 
  alphav[14] = -(0.25*Bmag[1]*dfac_v*dfac_x*(1.732050807568877*(BmagInv[1]*Apar[7]+BmagInv[0]*Apar[6])*dfac_y+BdriftX[1]*Apar[5]+BdriftX[0]*Apar[3]))/(dfac_m*m_); 
  alphav[15] = -(0.408248290463863*BdriftX[0]*Bmag[1]*dfac_x)/(dfac_m*q_); 
  alphav[16] = -1.0*dfac_v*(1.224744871391589*BdriftX[1]*Phi[7]*dfac_x*wv+(0.4330127018922193*Bmag[1]*(BdriftX[0]*Apar[7]+BdriftX[1]*Apar[6])*dfac_x*wm+(1.732050807568877*((0.25*((BdriftY[0]*Apar[4]+BdriftY[1]*Apar[2])*Phi[6]+(BdriftY[0]*Phi[4]+BdriftY[1]*Phi[2])*Apar[6])-1.0*(((-0.45*BdriftY[1]*Apar[4])-0.25*BdriftY[0]*Apar[2])*Phi[7]+((-0.45*BdriftY[1]*Phi[4])-0.25*BdriftY[0]*Phi[2])*Apar[7]))*dfac_y+0.25*((Apar[0]*BdriftX[1]+BdriftX[0]*Apar[1])*Phi[7]+Phi[1]*(BdriftX[0]*Apar[7]+BdriftX[1]*Apar[6])+(BdriftX[0]*Apar[4]+BdriftX[1]*Apar[2])*Phi[5]+Phi[4]*(BdriftX[0]*Apar[5]+BdriftX[1]*Apar[3]))*dfac_x)-1.0*BmagInv[1]*((-0.75*Apar[2]*Phi[7])+0.75*(Phi[2]*Apar[7]+Apar[4]*Phi[6])-0.75*Phi[4]*Apar[6])*dfac_x*dfac_y)*q_)/m_); 
  alphav[17] = -0.7071067811865475*BdriftX[1]*Phi[4]*dfac_x; 
  alphav[18] = -0.7071067811865475*((BdriftY[0]*Phi[7]+BdriftY[1]*Phi[6])*dfac_y+BdriftX[1]*Phi[5]*dfac_x); 
  alphav[19] = -0.7071067811865475*BdriftX[0]*Phi[7]*dfac_x; 
  alphav[20] = -(0.25*Bmag[1]*(BdriftX[0]*Apar[4]+BdriftX[1]*Apar[2])*dfac_v*dfac_x)/(dfac_m*m_); 
  alphav[21] = -(0.25*Bmag[1]*dfac_v*dfac_x*(1.732050807568877*(BmagInv[0]*Apar[7]+BmagInv[1]*Apar[6])*dfac_y+BdriftX[0]*Apar[5]+BdriftX[1]*Apar[3]))/(dfac_m*m_); 
  alphav[22] = -(0.25*Bmag[1]*(BdriftX[1]*Apar[7]+BdriftX[0]*Apar[6])*dfac_v*dfac_x)/(dfac_m*m_); 
  alphav[23] = -(0.408248290463863*BdriftX[1]*Bmag[1]*dfac_x)/(dfac_m*q_); 
  alphav[26] = -0.7071067811865475*BdriftX[1]*Phi[7]*dfac_x; 
  alphav[27] = -(0.25*Bmag[1]*(BdriftX[0]*Apar[7]+BdriftX[1]*Apar[6])*dfac_v*dfac_x)/(dfac_m*m_); 
#if cflType == SURFAVG 
  // evaluate surface-averaged alpha on left 
  alphaL = -0.0625*(2.449489742783178*alphav[4]-1.414213562373095*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate surface-averaged alpha on right 
  alphaR = 0.0625*(2.449489742783178*alphav[4]+1.414213562373095*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#elif cflType == QUAD 
  // evaluate alpha at left surface quadrature points 
  alphaL = 0.03125*(0.1767766952966368*alphav[27]+0.3061862178478971*alphav[26]-0.3061862178478971*alphav[23]-0.1767766952966368*(alphav[22]+alphav[21]+alphav[20])-0.3061862178478971*(alphav[19]+alphav[18]+alphav[17])-0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]+0.1767766952966368*(alphav[14]+alphav[13]+alphav[12])+0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6])-0.1767766952966368*alphav[5]-0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.1767766952966368*alphav[27])-0.3061862178478971*alphav[26]+0.3061862178478971*alphav[23]-0.1767766952966368*alphav[22]+0.1767766952966368*(alphav[21]+alphav[20])-0.3061862178478971*alphav[19]+0.3061862178478971*(alphav[18]+alphav[17])+0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]+0.1767766952966368*(alphav[14]+alphav[13])-0.1767766952966368*alphav[12]+0.3061862178478971*(alphav[11]+alphav[10])-0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6]+alphav[5])-0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2])+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.1767766952966368*alphav[27])-0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*alphav[22]-0.1767766952966368*alphav[21]+0.1767766952966368*alphav[20]+0.3061862178478971*alphav[19]-0.3061862178478971*alphav[18]+0.3061862178478971*alphav[17]+0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]+0.1767766952966368*alphav[14]-0.1767766952966368*alphav[13]+0.1767766952966368*alphav[12]+0.3061862178478971*alphav[11]-0.3061862178478971*alphav[10]+0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*(alphav[6]+alphav[5])-0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*alphav[2]-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.1767766952966368*alphav[27]+0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*(alphav[22]+alphav[21])-0.1767766952966368*alphav[20]+0.3061862178478971*(alphav[19]+alphav[18])-0.3061862178478971*alphav[17]-0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]+0.1767766952966368*alphav[14]-0.1767766952966368*(alphav[13]+alphav[12])+0.3061862178478971*alphav[11]-0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*alphav[6]-0.1767766952966368*alphav[5]-0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*(alphav[2]+alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.1767766952966368*alphav[27])-0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*(alphav[22]+alphav[21])-0.1767766952966368*alphav[20]+0.3061862178478971*(alphav[19]+alphav[18])-0.3061862178478971*alphav[17]+0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]-0.1767766952966368*alphav[14]+0.1767766952966368*(alphav[13]+alphav[12])-0.3061862178478971*alphav[11]+0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*alphav[6]-0.1767766952966368*alphav[5]-0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*(alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.1767766952966368*alphav[27]+0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*alphav[22]-0.1767766952966368*alphav[21]+0.1767766952966368*alphav[20]+0.3061862178478971*alphav[19]-0.3061862178478971*alphav[18]+0.3061862178478971*alphav[17]-0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]-0.1767766952966368*alphav[14]+0.1767766952966368*alphav[13]-0.1767766952966368*alphav[12]-0.3061862178478971*alphav[11]+0.3061862178478971*alphav[10]-0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*(alphav[6]+alphav[5])-0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*alphav[2]+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.1767766952966368*alphav[27]+0.3061862178478971*alphav[26]-0.3061862178478971*alphav[23]-0.1767766952966368*alphav[22]+0.1767766952966368*(alphav[21]+alphav[20])-0.3061862178478971*alphav[19]+0.3061862178478971*(alphav[18]+alphav[17])-0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]-0.1767766952966368*(alphav[14]+alphav[13])+0.1767766952966368*alphav[12]-0.3061862178478971*(alphav[11]+alphav[10])+0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6]+alphav[5])-0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2])-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.1767766952966368*alphav[27])-0.3061862178478971*alphav[26]+0.3061862178478971*alphav[23]-0.1767766952966368*(alphav[22]+alphav[21]+alphav[20])-0.3061862178478971*(alphav[19]+alphav[18]+alphav[17])+0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]-0.1767766952966368*(alphav[14]+alphav[13]+alphav[12])-0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6])-0.1767766952966368*alphav[5]-0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2]+alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.1767766952966368*alphav[27])+0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*(alphav[22]+alphav[21]+alphav[20])-0.3061862178478971*(alphav[19]+alphav[18]+alphav[17])-0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]-0.1767766952966368*(alphav[14]+alphav[13]+alphav[12])+0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6]+alphav[5])-0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.1767766952966368*alphav[27]-0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*alphav[22]-0.1767766952966368*(alphav[21]+alphav[20])-0.3061862178478971*alphav[19]+0.3061862178478971*(alphav[18]+alphav[17])+0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]-0.1767766952966368*(alphav[14]+alphav[13])+0.1767766952966368*alphav[12]+0.3061862178478971*(alphav[11]+alphav[10])-0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6])+0.1767766952966368*alphav[5]-0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2])+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.1767766952966368*alphav[27]-0.3061862178478971*alphav[26]+0.3061862178478971*alphav[23]-0.1767766952966368*alphav[22]+0.1767766952966368*alphav[21]-0.1767766952966368*alphav[20]+0.3061862178478971*alphav[19]-0.3061862178478971*alphav[18]+0.3061862178478971*alphav[17]+0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]-0.1767766952966368*alphav[14]+0.1767766952966368*alphav[13]-0.1767766952966368*alphav[12]+0.3061862178478971*alphav[11]-0.3061862178478971*alphav[10]+0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*alphav[6]+0.1767766952966368*alphav[5]-0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*alphav[2]-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.1767766952966368*alphav[27])+0.3061862178478971*alphav[26]-0.3061862178478971*alphav[23]-0.1767766952966368*(alphav[22]+alphav[21])+0.1767766952966368*alphav[20]+0.3061862178478971*(alphav[19]+alphav[18])-0.3061862178478971*alphav[17]-0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]-0.1767766952966368*alphav[14]+0.1767766952966368*(alphav[13]+alphav[12])+0.3061862178478971*alphav[11]-0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*(alphav[6]+alphav[5])-0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*(alphav[2]+alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.1767766952966368*alphav[27]-0.3061862178478971*alphav[26]+0.3061862178478971*alphav[23]-0.1767766952966368*(alphav[22]+alphav[21])+0.1767766952966368*alphav[20]+0.3061862178478971*(alphav[19]+alphav[18])-0.3061862178478971*alphav[17]+0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]+0.1767766952966368*alphav[14]-0.1767766952966368*(alphav[13]+alphav[12])-0.3061862178478971*alphav[11]+0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*(alphav[6]+alphav[5])-0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*(alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.1767766952966368*alphav[27])+0.3061862178478971*alphav[26]-0.3061862178478971*alphav[23]-0.1767766952966368*alphav[22]+0.1767766952966368*alphav[21]-0.1767766952966368*alphav[20]+0.3061862178478971*alphav[19]-0.3061862178478971*alphav[18]+0.3061862178478971*alphav[17]-0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]+0.1767766952966368*alphav[14]-0.1767766952966368*alphav[13]+0.1767766952966368*alphav[12]-0.3061862178478971*alphav[11]+0.3061862178478971*alphav[10]-0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*alphav[6]+0.1767766952966368*alphav[5]-0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*alphav[2]+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*((-0.1767766952966368*alphav[27])+0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*alphav[22]-0.1767766952966368*(alphav[21]+alphav[20])-0.3061862178478971*alphav[19]+0.3061862178478971*(alphav[18]+alphav[17])-0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]+0.1767766952966368*(alphav[14]+alphav[13])-0.1767766952966368*alphav[12]-0.3061862178478971*(alphav[11]+alphav[10])+0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6])+0.1767766952966368*alphav[5]-0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2])-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  alphaL = 0.03125*(0.1767766952966368*alphav[27]-0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*(alphav[22]+alphav[21]+alphav[20])-0.3061862178478971*(alphav[19]+alphav[18]+alphav[17])+0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]+0.1767766952966368*(alphav[14]+alphav[13]+alphav[12])-0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6]+alphav[5])-0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2]+alphav[1]+alphav[0])); 
  cflRate += -0.5*(alphaL-std::abs(alphaL)); 
  // evaluate alpha at right surface quadrature points 
  alphaR = 0.03125*(0.1767766952966368*alphav[27]-0.3061862178478971*alphav[26]+0.3061862178478971*alphav[23]-0.1767766952966368*(alphav[22]+alphav[21]+alphav[20])+0.3061862178478971*(alphav[19]+alphav[18]+alphav[17])-0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]+0.1767766952966368*(alphav[14]+alphav[13]+alphav[12])-0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6])-0.1767766952966368*alphav[5]+0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.1767766952966368*alphav[27])+0.3061862178478971*alphav[26]-0.3061862178478971*alphav[23]-0.1767766952966368*alphav[22]+0.1767766952966368*(alphav[21]+alphav[20])+0.3061862178478971*alphav[19]-0.3061862178478971*(alphav[18]+alphav[17])+0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]+0.1767766952966368*(alphav[14]+alphav[13])-0.1767766952966368*alphav[12]-0.3061862178478971*(alphav[11]+alphav[10])+0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6]+alphav[5])+0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2])+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.1767766952966368*alphav[27])+0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*alphav[22]-0.1767766952966368*alphav[21]+0.1767766952966368*alphav[20]-0.3061862178478971*alphav[19]+0.3061862178478971*alphav[18]-0.3061862178478971*alphav[17]+0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]+0.1767766952966368*alphav[14]-0.1767766952966368*alphav[13]+0.1767766952966368*alphav[12]-0.3061862178478971*alphav[11]+0.3061862178478971*alphav[10]-0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*(alphav[6]+alphav[5])+0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*alphav[2]-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.1767766952966368*alphav[27]-0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*(alphav[22]+alphav[21])-0.1767766952966368*alphav[20]-0.3061862178478971*(alphav[19]+alphav[18])+0.3061862178478971*alphav[17]-0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]+0.1767766952966368*alphav[14]-0.1767766952966368*(alphav[13]+alphav[12])-0.3061862178478971*alphav[11]+0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*alphav[6]-0.1767766952966368*alphav[5]+0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*(alphav[2]+alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.1767766952966368*alphav[27])+0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*(alphav[22]+alphav[21])-0.1767766952966368*alphav[20]-0.3061862178478971*(alphav[19]+alphav[18])+0.3061862178478971*alphav[17]+0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]-0.1767766952966368*alphav[14]+0.1767766952966368*(alphav[13]+alphav[12])+0.3061862178478971*alphav[11]-0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*alphav[6]-0.1767766952966368*alphav[5]+0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*(alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.1767766952966368*alphav[27]-0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*alphav[22]-0.1767766952966368*alphav[21]+0.1767766952966368*alphav[20]-0.3061862178478971*alphav[19]+0.3061862178478971*alphav[18]-0.3061862178478971*alphav[17]-0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]-0.1767766952966368*alphav[14]+0.1767766952966368*alphav[13]-0.1767766952966368*alphav[12]+0.3061862178478971*alphav[11]-0.3061862178478971*alphav[10]+0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*(alphav[6]+alphav[5])+0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*alphav[2]+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.1767766952966368*alphav[27]-0.3061862178478971*alphav[26]+0.3061862178478971*alphav[23]-0.1767766952966368*alphav[22]+0.1767766952966368*(alphav[21]+alphav[20])+0.3061862178478971*alphav[19]-0.3061862178478971*(alphav[18]+alphav[17])-0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]-0.1767766952966368*(alphav[14]+alphav[13])+0.1767766952966368*alphav[12]+0.3061862178478971*(alphav[11]+alphav[10])-0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6]+alphav[5])+0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2])-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.1767766952966368*alphav[27])+0.3061862178478971*alphav[26]-0.3061862178478971*alphav[23]-0.1767766952966368*(alphav[22]+alphav[21]+alphav[20])+0.3061862178478971*(alphav[19]+alphav[18]+alphav[17])+0.1767766952966368*alphav[16]-0.3061862178478971*alphav[15]-0.1767766952966368*(alphav[14]+alphav[13]+alphav[12])+0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6])-0.1767766952966368*alphav[5]+0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2]+alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.1767766952966368*alphav[27])-0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*(alphav[22]+alphav[21]+alphav[20])+0.3061862178478971*(alphav[19]+alphav[18]+alphav[17])-0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]-0.1767766952966368*(alphav[14]+alphav[13]+alphav[12])-0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6]+alphav[5])+0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.1767766952966368*alphav[27]+0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*alphav[22]-0.1767766952966368*(alphav[21]+alphav[20])+0.3061862178478971*alphav[19]-0.3061862178478971*(alphav[18]+alphav[17])+0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]-0.1767766952966368*(alphav[14]+alphav[13])+0.1767766952966368*alphav[12]-0.3061862178478971*(alphav[11]+alphav[10])+0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6])+0.1767766952966368*alphav[5]+0.3061862178478971*alphav[4]-0.1767766952966368*(alphav[3]+alphav[2])+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.1767766952966368*alphav[27]+0.3061862178478971*alphav[26]-0.3061862178478971*alphav[23]-0.1767766952966368*alphav[22]+0.1767766952966368*alphav[21]-0.1767766952966368*alphav[20]-0.3061862178478971*alphav[19]+0.3061862178478971*alphav[18]-0.3061862178478971*alphav[17]+0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]-0.1767766952966368*alphav[14]+0.1767766952966368*alphav[13]-0.1767766952966368*alphav[12]-0.3061862178478971*alphav[11]+0.3061862178478971*alphav[10]-0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*alphav[6]+0.1767766952966368*alphav[5]+0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*alphav[2]-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.1767766952966368*alphav[27])-0.3061862178478971*alphav[26]+0.3061862178478971*alphav[23]-0.1767766952966368*(alphav[22]+alphav[21])+0.1767766952966368*alphav[20]-0.3061862178478971*(alphav[19]+alphav[18])+0.3061862178478971*alphav[17]-0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]-0.1767766952966368*alphav[14]+0.1767766952966368*(alphav[13]+alphav[12])-0.3061862178478971*alphav[11]+0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*(alphav[6]+alphav[5])+0.3061862178478971*alphav[4]-0.1767766952966368*alphav[3]+0.1767766952966368*(alphav[2]+alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.1767766952966368*alphav[27]+0.3061862178478971*alphav[26]-0.3061862178478971*alphav[23]-0.1767766952966368*(alphav[22]+alphav[21])+0.1767766952966368*alphav[20]-0.3061862178478971*(alphav[19]+alphav[18])+0.3061862178478971*alphav[17]+0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]+0.1767766952966368*alphav[14]-0.1767766952966368*(alphav[13]+alphav[12])+0.3061862178478971*alphav[11]-0.3061862178478971*(alphav[10]+alphav[9])-0.1767766952966368*(alphav[8]+alphav[7])+0.1767766952966368*(alphav[6]+alphav[5])+0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*(alphav[2]+alphav[1])+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.1767766952966368*alphav[27])-0.3061862178478971*alphav[26]+0.3061862178478971*alphav[23]-0.1767766952966368*alphav[22]+0.1767766952966368*alphav[21]-0.1767766952966368*alphav[20]-0.3061862178478971*alphav[19]+0.3061862178478971*alphav[18]-0.3061862178478971*alphav[17]-0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]+0.1767766952966368*alphav[14]-0.1767766952966368*alphav[13]+0.1767766952966368*alphav[12]+0.3061862178478971*alphav[11]-0.3061862178478971*alphav[10]+0.3061862178478971*alphav[9]-0.1767766952966368*alphav[8]+0.1767766952966368*alphav[7]-0.1767766952966368*alphav[6]+0.1767766952966368*alphav[5]+0.3061862178478971*alphav[4]+0.1767766952966368*alphav[3]-0.1767766952966368*alphav[2]+0.1767766952966368*(alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*((-0.1767766952966368*alphav[27])-0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*alphav[22]-0.1767766952966368*(alphav[21]+alphav[20])+0.3061862178478971*alphav[19]-0.3061862178478971*(alphav[18]+alphav[17])-0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]+0.1767766952966368*(alphav[14]+alphav[13])-0.1767766952966368*alphav[12]+0.3061862178478971*(alphav[11]+alphav[10])-0.3061862178478971*alphav[9]+0.1767766952966368*alphav[8]-0.1767766952966368*(alphav[7]+alphav[6])+0.1767766952966368*alphav[5]+0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2])-0.1767766952966368*alphav[1]+0.1767766952966368*alphav[0]); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
  alphaR = 0.03125*(0.1767766952966368*alphav[27]+0.3061862178478971*(alphav[26]+alphav[23])+0.1767766952966368*(alphav[22]+alphav[21]+alphav[20])+0.3061862178478971*(alphav[19]+alphav[18]+alphav[17])+0.1767766952966368*alphav[16]+0.3061862178478971*alphav[15]+0.1767766952966368*(alphav[14]+alphav[13]+alphav[12])+0.3061862178478971*(alphav[11]+alphav[10]+alphav[9])+0.1767766952966368*(alphav[8]+alphav[7]+alphav[6]+alphav[5])+0.3061862178478971*alphav[4]+0.1767766952966368*(alphav[3]+alphav[2]+alphav[1]+alphav[0])); 
  cflRate += 0.5*(alphaR+std::abs(alphaR)); 
#endif 

  out[1] += 0.3061862178478971*(alphax[16]*f[16]+alphax[9]*f[9]+alphax[8]*f[8]+alphax[7]*f[7]+alphax[6]*f[6]+alphax[4]*f[4]+alphax[3]*f[3]+alphax[2]*f[2]+alphax[1]*f[1]+alphax[0]*f[0]); 
  out[2] += 0.3061862178478971*(alphay[16]*f[16]+alphay[12]*f[12]+alphay[9]*f[9]+alphay[8]*f[8]+alphay[7]*f[7]+alphay[6]*f[6]+alphay[5]*f[5]+alphay[4]*f[4]+alphay[3]*f[3]+alphay[2]*f[2]+alphay[1]*f[1]+alphay[0]*f[0]); 
  out[3] += 0.3061862178478971*(alphaz[1]*f[1]+alphaz[0]*f[0]); 
  out[4] += 0.3061862178478971*(alphav[27]*f[27]+alphav[26]*f[26]+alphav[23]*f[23]+alphav[22]*f[22]+alphav[21]*f[21]+alphav[20]*f[20]+alphav[19]*f[19]+alphav[18]*f[18]+alphav[17]*f[17]+alphav[16]*f[16]+alphav[15]*f[15]+alphav[14]*f[14]+alphav[13]*f[13]+alphav[12]*f[12]+alphav[11]*f[11]+alphav[10]*f[10]+alphav[9]*f[9]+alphav[8]*f[8]+alphav[7]*f[7]+alphav[6]*f[6]+alphav[5]*f[5]+alphav[4]*f[4]+alphav[3]*f[3]+alphav[2]*f[2]+alphav[1]*f[1]+alphav[0]*f[0]); 
  out[6] += 0.3061862178478971*(alphax[9]*f[17]+(alphay[8]+alphax[7])*f[16]+f[8]*alphay[16]+f[7]*alphax[16]+alphay[5]*f[12]+f[5]*alphay[12]+alphax[4]*f[10]+alphay[4]*f[9]+f[4]*alphay[9]+alphax[3]*f[8]+f[3]*alphax[8]+alphay[3]*f[7]+f[3]*alphay[7]+(alphay[2]+alphax[1])*f[6]+f[2]*alphay[6]+f[1]*alphax[6]+alphax[0]*f[2]+f[0]*alphax[2]+alphay[0]*f[1]+f[0]*alphay[1]); 
  out[7] += 0.3061862178478971*(alphax[9]*f[18]+alphax[6]*f[16]+f[6]*alphax[16]+alphax[4]*f[11]+alphax[2]*f[8]+f[2]*alphax[8]+alphax[1]*f[7]+f[1]*alphax[7]+alphax[0]*f[3]+f[0]*alphax[3]+alphaz[0]*f[1]+f[0]*alphaz[1]); 
  out[8] += 0.3061862178478971*(alphay[12]*f[21]+alphay[9]*f[18]+alphay[6]*f[16]+f[6]*alphay[16]+alphay[5]*f[14]+alphay[4]*f[11]+alphay[2]*f[8]+f[2]*alphay[8]+alphay[1]*f[7]+f[1]*alphay[7]+alphaz[1]*f[6]+alphay[0]*f[3]+f[0]*alphay[3]+alphaz[0]*f[2]); 
  out[9] += 0.3061862178478971*(alphav[22]*f[27]+f[22]*alphav[27]+(alphav[19]+alphax[16])*f[26]+f[19]*alphav[26]+alphav[15]*f[23]+f[15]*alphav[23]+alphav[14]*f[21]+f[14]*alphav[21]+alphav[13]*f[20]+f[13]*alphav[20]+alphax[8]*f[19]+(alphav[11]+alphax[7])*f[18]+f[11]*alphav[18]+(alphav[10]+alphax[6])*f[17]+f[10]*alphav[17]+alphav[8]*f[16]+f[8]*alphav[16]+alphav[5]*f[12]+f[5]*alphav[12]+alphax[3]*f[11]+alphax[2]*f[10]+(alphav[4]+alphax[1])*f[9]+f[1]*alphax[9]+f[4]*alphav[9]+alphav[3]*f[7]+f[3]*alphav[7]+alphav[2]*f[6]+f[2]*alphav[6]+alphax[0]*f[4]+f[0]*alphax[4]+alphav[0]*f[1]+f[0]*alphav[1]); 
  out[10] += 0.3061862178478971*(alphav[23]*f[28]+alphav[21]*f[27]+f[21]*alphav[27]+(alphav[18]+alphay[16])*f[26]+f[18]*alphav[26]+alphav[15]*f[24]+alphay[12]*f[23]+alphav[14]*f[22]+f[14]*alphav[22]+alphav[12]*f[20]+f[12]*alphav[20]+(alphav[11]+alphay[8])*f[19]+f[11]*alphav[19]+alphay[7]*f[18]+(alphav[9]+alphay[6])*f[17]+f[9]*alphav[17]+alphav[7]*f[16]+f[7]*alphav[16]+alphay[5]*f[15]+alphav[5]*f[13]+f[5]*alphav[13]+alphay[3]*f[11]+(alphav[4]+alphay[2])*f[10]+f[4]*alphav[10]+alphay[1]*f[9]+f[1]*alphay[9]+alphav[3]*f[8]+f[3]*alphav[8]+alphav[1]*f[6]+f[1]*alphav[6]+alphay[0]*f[4]+f[0]*alphay[4]+alphav[0]*f[2]+f[0]*alphav[2]); 
  out[11] += 0.3061862178478971*(alphav[23]*f[29]+alphav[20]*f[27]+f[20]*alphav[27]+alphav[17]*f[26]+f[17]*alphav[26]+alphav[15]*f[25]+alphav[13]*f[22]+f[13]*alphav[22]+alphav[12]*f[21]+f[12]*alphav[21]+alphav[10]*f[19]+f[10]*alphav[19]+alphav[9]*f[18]+f[9]*alphav[18]+alphav[6]*f[16]+f[6]*alphav[16]+alphav[5]*f[14]+f[5]*alphav[14]+alphav[4]*f[11]+f[4]*alphav[11]+alphaz[1]*f[9]+alphav[2]*f[8]+f[2]*alphav[8]+alphav[1]*f[7]+f[1]*alphav[7]+alphaz[0]*f[4]+alphav[0]*f[3]+f[0]*alphav[3]); 
  out[12] += 0.3061862178478971*(alphax[16]*f[27]+alphax[9]*f[23]+alphax[8]*f[22]+alphax[7]*f[21]+alphax[6]*f[20]+alphax[4]*f[15]+alphax[3]*f[14]+alphax[2]*f[13]+alphax[1]*f[12]+alphax[0]*f[5]); 
  out[13] += 0.3061862178478971*(alphay[16]*f[27]+alphay[9]*f[23]+alphay[8]*f[22]+alphay[7]*f[21]+alphay[6]*f[20]+alphay[4]*f[15]+alphay[3]*f[14]+alphay[2]*f[13]+alphay[1]*f[12]+f[1]*alphay[12]+alphay[0]*f[5]+f[0]*alphay[5]); 
  out[14] += 0.3061862178478971*(alphaz[1]*f[12]+alphaz[0]*f[5]); 
  out[15] += 0.3061862178478971*(alphav[26]*f[31]+alphav[19]*f[30]+alphav[18]*f[29]+alphav[17]*f[28]+alphav[16]*f[27]+f[16]*alphav[27]+alphav[11]*f[25]+alphav[10]*f[24]+alphav[9]*f[23]+f[9]*alphav[23]+alphav[8]*f[22]+f[8]*alphav[22]+alphav[7]*f[21]+f[7]*alphav[21]+alphav[6]*f[20]+f[6]*alphav[20]+alphav[4]*f[15]+f[4]*alphav[15]+alphav[3]*f[14]+f[3]*alphav[14]+alphav[2]*f[13]+f[2]*alphav[13]+alphav[1]*f[12]+f[1]*alphav[12]+alphav[0]*f[5]+f[0]*alphav[5]); 
  out[16] += 0.3061862178478971*(alphax[9]*f[26]+alphay[5]*f[21]+alphax[4]*f[19]+alphay[4]*f[18]+(alphay[2]+alphax[1])*f[16]+f[2]*alphay[16]+f[1]*alphax[16]+alphay[12]*f[14]+alphay[9]*f[11]+(alphay[6]+alphax[0])*f[8]+f[6]*alphay[8]+f[0]*alphax[8]+(alphax[6]+alphay[0])*f[7]+f[0]*alphay[7]+f[6]*(alphax[7]+alphaz[0])+(alphax[2]+alphay[1])*f[3]+f[1]*alphay[3]+f[2]*(alphax[3]+alphaz[1])); 
  out[17] += 0.3061862178478971*(alphav[15]*f[28]+alphav[14]*f[27]+f[14]*alphav[27]+(alphav[11]+alphay[8]+alphax[7])*f[26]+f[11]*alphav[26]+alphav[23]*f[24]+alphay[5]*f[23]+alphav[21]*f[22]+f[21]*alphav[22]+alphav[5]*f[20]+f[5]*alphav[20]+(alphav[18]+alphay[16]+alphax[3])*f[19]+f[18]*(alphav[19]+alphax[16]+alphay[3])+(alphav[4]+alphay[2]+alphax[1])*f[17]+f[4]*alphav[17]+alphav[3]*f[16]+f[3]*alphav[16]+alphay[12]*f[15]+alphav[12]*f[13]+f[12]*alphav[13]+(alphax[8]+alphay[7])*f[11]+(alphav[9]+alphay[6]+alphax[0])*f[10]+f[9]*(alphav[10]+alphax[6]+alphay[0])+f[0]*alphay[9]+f[6]*alphax[9]+alphav[7]*f[8]+f[7]*alphav[8]+alphav[0]*f[6]+f[0]*alphav[6]+(alphax[2]+alphay[1])*f[4]+f[1]*alphay[4]+f[2]*(alphax[4]+alphav[1])+f[1]*alphav[2]); 
  out[18] += 0.3061862178478971*(alphav[15]*f[29]+alphav[13]*f[27]+f[13]*alphav[27]+(alphav[10]+alphax[6])*f[26]+f[10]*alphav[26]+alphav[23]*f[25]+alphav[20]*f[22]+f[20]*alphav[22]+alphav[5]*f[21]+f[5]*alphav[21]+(alphav[17]+alphax[2])*f[19]+f[17]*alphav[19]+(alphav[4]+alphax[1])*f[18]+f[4]*alphav[18]+alphax[16]*f[17]+alphav[2]*f[16]+f[2]*alphav[16]+alphav[12]*f[14]+f[12]*alphav[14]+(alphav[9]+alphax[0])*f[11]+f[9]*alphav[11]+alphax[8]*f[10]+(alphax[7]+alphaz[0])*f[9]+f[7]*alphax[9]+alphav[6]*f[8]+f[6]*alphav[8]+alphav[0]*f[7]+f[0]*alphav[7]+(alphax[3]+alphaz[1])*f[4]+f[3]*(alphax[4]+alphav[1])+f[1]*alphav[3]); 
  out[19] += 0.3061862178478971*(alphav[23]*f[31]+alphav[15]*f[30]+alphay[12]*f[29]+alphav[12]*f[27]+f[12]*alphav[27]+(alphav[9]+alphay[6])*f[26]+f[9]*alphav[26]+alphay[5]*f[25]+alphav[5]*f[22]+f[5]*alphav[22]+alphav[20]*f[21]+f[20]*alphav[21]+(alphav[4]+alphay[2])*f[19]+f[4]*alphav[19]+(alphav[17]+alphay[1])*f[18]+f[17]*(alphav[18]+alphay[16]+alphaz[1])+alphav[1]*f[16]+f[1]*alphav[16]+alphav[13]*f[14]+f[13]*alphav[14]+(alphav[10]+alphay[0])*f[11]+f[10]*(alphav[11]+alphay[8]+alphaz[0])+alphay[7]*f[9]+f[7]*alphay[9]+alphav[0]*f[8]+f[0]*alphav[8]+alphav[6]*f[7]+f[6]*alphav[7]+alphay[3]*f[4]+f[3]*(alphay[4]+alphav[2])+f[2]*alphav[3]); 
  out[20] += 0.3061862178478971*(alphax[9]*f[28]+(alphay[8]+alphax[7])*f[27]+alphax[4]*f[24]+alphay[4]*f[23]+(alphay[16]+alphax[3])*f[22]+(alphax[16]+alphay[3])*f[21]+(alphay[2]+alphax[1])*f[20]+alphay[9]*f[15]+(alphax[8]+alphay[7])*f[14]+(alphay[6]+alphax[0])*f[13]+(alphax[6]+alphay[0])*f[12]+f[0]*alphay[12]+(alphax[2]+alphay[1])*f[5]+f[1]*alphay[5]); 
  out[21] += 0.3061862178478971*(alphax[9]*f[29]+alphax[6]*f[27]+alphax[4]*f[25]+alphax[2]*f[22]+alphax[1]*f[21]+alphax[16]*f[20]+alphax[0]*f[14]+alphax[8]*f[13]+(alphax[7]+alphaz[0])*f[12]+(alphax[3]+alphaz[1])*f[5]); 
  out[22] += 0.3061862178478971*(alphay[9]*f[29]+alphay[6]*f[27]+alphay[4]*f[25]+alphay[2]*f[22]+alphay[1]*f[21]+(alphay[16]+alphaz[1])*f[20]+alphay[0]*f[14]+(alphay[8]+alphaz[0])*f[13]+alphay[7]*f[12]+f[7]*alphay[12]+alphay[3]*f[5]+f[3]*alphay[5]); 
  out[23] += 0.3061862178478971*((alphav[19]+alphax[16])*f[31]+(alphav[26]+alphax[8])*f[30]+(alphav[11]+alphax[7])*f[29]+(alphav[10]+alphax[6])*f[28]+alphav[8]*f[27]+f[8]*alphav[27]+(alphav[18]+alphax[3])*f[25]+(alphav[17]+alphax[2])*f[24]+(alphav[4]+alphax[1])*f[23]+f[4]*alphav[23]+alphav[16]*f[22]+f[16]*alphav[22]+alphav[3]*f[21]+f[3]*alphav[21]+alphav[2]*f[20]+f[2]*alphav[20]+(alphav[9]+alphax[0])*f[15]+f[9]*alphav[15]+alphav[7]*f[14]+f[7]*alphav[14]+alphav[6]*f[13]+f[6]*alphav[13]+(alphax[9]+alphav[0])*f[12]+f[0]*alphav[12]+(alphax[4]+alphav[1])*f[5]+f[1]*alphav[5]); 
  out[24] += 0.3061862178478971*((alphav[18]+alphay[16])*f[31]+(alphav[11]+alphay[8])*f[30]+(alphav[26]+alphay[7])*f[29]+(alphav[9]+alphay[6])*f[28]+alphav[7]*f[27]+f[7]*alphav[27]+(alphav[19]+alphay[3])*f[25]+(alphav[4]+alphay[2])*f[24]+(alphav[17]+alphay[1])*f[23]+f[17]*alphav[23]+alphav[3]*f[22]+f[3]*alphav[22]+alphav[16]*f[21]+f[16]*alphav[21]+alphav[1]*f[20]+f[1]*alphav[20]+(alphav[10]+alphay[0])*f[15]+f[10]*alphav[15]+alphav[8]*f[14]+f[8]*alphav[14]+alphav[0]*f[13]+f[0]*alphav[13]+(alphay[9]+alphav[6])*f[12]+f[9]*alphay[12]+f[6]*alphav[12]+(alphay[4]+alphav[2])*f[5]+f[4]*alphay[5]+f[2]*alphav[5]); 
  out[25] += 0.3061862178478971*(alphav[17]*f[31]+alphav[10]*f[30]+alphav[9]*f[29]+alphav[26]*f[28]+alphav[6]*f[27]+f[6]*alphav[27]+alphav[4]*f[25]+alphav[19]*f[24]+(alphav[18]+alphaz[1])*f[23]+f[18]*alphav[23]+alphav[2]*f[22]+f[2]*alphav[22]+alphav[1]*f[21]+f[1]*alphav[21]+alphav[16]*f[20]+f[16]*alphav[20]+(alphav[11]+alphaz[0])*f[15]+f[11]*alphav[15]+alphav[0]*f[14]+f[0]*alphav[14]+alphav[8]*f[13]+f[8]*alphav[13]+alphav[7]*f[12]+f[7]*alphav[12]+alphav[3]*f[5]+f[3]*alphav[5]); 
  out[26] += 0.3061862178478971*(alphav[15]*f[31]+alphav[23]*f[30]+alphay[5]*f[29]+alphav[5]*f[27]+f[5]*alphav[27]+(alphav[4]+alphay[2]+alphax[1])*f[26]+f[4]*alphav[26]+alphay[12]*f[25]+alphav[12]*f[22]+f[12]*alphav[22]+alphav[13]*f[21]+f[13]*alphav[21]+alphav[14]*f[20]+f[14]*alphav[20]+(alphav[9]+alphay[6]+alphax[0])*f[19]+f[9]*alphav[19]+(alphav[10]+alphax[6]+alphay[0])*f[18]+f[10]*alphav[18]+(alphav[11]+alphay[8]+alphax[7]+alphaz[0])*f[17]+f[11]*alphav[17]+(alphax[9]+alphav[0])*f[16]+f[10]*alphay[16]+f[9]*alphax[16]+f[0]*alphav[16]+(alphax[2]+alphay[1])*f[11]+(alphax[3]+alphaz[1])*f[10]+alphay[3]*f[9]+f[3]*alphay[9]+(alphax[4]+alphav[1])*f[8]+f[4]*alphax[8]+f[1]*alphav[8]+(alphay[4]+alphav[2])*f[7]+f[4]*alphay[7]+f[2]*alphav[7]+alphav[3]*f[6]+f[3]*alphav[6]); 
  out[27] += 0.3061862178478971*(alphax[9]*f[31]+alphax[4]*f[30]+alphay[4]*f[29]+(alphay[2]+alphax[1])*f[27]+alphay[9]*f[25]+(alphay[6]+alphax[0])*f[22]+(alphax[6]+alphay[0])*f[21]+(alphay[8]+alphax[7]+alphaz[0])*f[20]+f[13]*alphay[16]+f[12]*alphax[16]+(alphax[2]+alphay[1])*f[14]+(alphax[3]+alphaz[1])*f[13]+alphay[3]*f[12]+f[3]*alphay[12]+f[5]*alphax[8]+alphay[5]*f[7]+f[5]*alphay[7]); 
  out[28] += 0.3061862178478971*((alphav[11]+alphay[8]+alphax[7])*f[31]+(alphav[18]+alphay[16]+alphax[3])*f[30]+(alphav[19]+alphax[16]+alphay[3])*f[29]+(alphav[4]+alphay[2]+alphax[1])*f[28]+alphav[3]*f[27]+f[3]*alphav[27]+f[25]*(alphav[26]+alphax[8]+alphay[7])+(alphav[9]+alphay[6]+alphax[0])*f[24]+(alphav[10]+alphax[6]+alphay[0])*f[23]+f[10]*alphav[23]+alphav[7]*f[22]+f[7]*alphav[22]+alphav[8]*f[21]+f[8]*alphav[21]+(alphax[9]+alphav[0])*f[20]+f[0]*alphav[20]+alphav[15]*f[17]+f[15]*alphav[17]+alphav[14]*f[16]+f[14]*alphav[16]+(alphax[2]+alphay[1])*f[15]+(alphax[4]+alphav[1])*f[13]+f[1]*alphav[13]+(alphay[4]+alphav[2])*f[12]+f[4]*alphay[12]+f[2]*alphav[12]+alphay[5]*f[9]+f[5]*alphay[9]+alphav[5]*f[6]+f[5]*alphav[6]); 
  out[29] += 0.3061862178478971*((alphav[10]+alphax[6])*f[31]+(alphav[17]+alphax[2])*f[30]+(alphav[4]+alphax[1])*f[29]+(alphav[19]+alphax[16])*f[28]+alphav[2]*f[27]+f[2]*alphav[27]+f[24]*alphav[26]+(alphav[9]+alphax[0])*f[25]+alphax[8]*f[24]+(alphav[11]+alphax[7]+alphaz[0])*f[23]+f[11]*alphav[23]+alphav[6]*f[22]+f[6]*alphav[22]+(alphax[9]+alphav[0])*f[21]+f[0]*alphav[21]+alphav[8]*f[20]+f[8]*alphav[20]+alphav[15]*f[18]+f[15]*alphav[18]+alphav[13]*f[16]+f[13]*alphav[16]+(alphax[3]+alphaz[1])*f[15]+(alphax[4]+alphav[1])*f[14]+f[1]*alphav[14]+alphav[3]*f[12]+f[3]*alphav[12]+alphav[5]*f[7]+f[5]*alphav[7]); 
  out[30] += 0.3061862178478971*((alphav[9]+alphay[6])*f[31]+(alphav[4]+alphay[2])*f[30]+(alphav[17]+alphay[1])*f[29]+(alphav[18]+alphay[16]+alphaz[1])*f[28]+alphav[1]*f[27]+f[1]*alphav[27]+alphav[23]*f[26]+f[23]*alphav[26]+(alphav[10]+alphay[0])*f[25]+(alphav[11]+alphay[8]+alphaz[0])*f[24]+alphay[7]*f[23]+alphav[0]*f[22]+f[0]*alphav[22]+(alphay[9]+alphav[6])*f[21]+f[6]*alphav[21]+alphav[7]*f[20]+f[7]*alphav[20]+alphav[15]*f[19]+f[15]*alphav[19]+alphay[12]*f[18]+alphav[12]*f[16]+f[12]*alphav[16]+alphay[3]*f[15]+(alphay[4]+alphav[2])*f[14]+f[2]*alphav[14]+alphav[3]*f[13]+f[3]*alphav[13]+alphay[5]*f[11]+alphav[5]*f[8]+f[5]*alphav[8]); 
  out[31] += 0.3061862178478971*((alphav[4]+alphay[2]+alphax[1])*f[31]+(alphav[9]+alphay[6]+alphax[0])*f[30]+(alphav[10]+alphax[6]+alphay[0])*f[29]+(alphav[11]+alphay[8]+alphax[7]+alphaz[0])*f[28]+(alphax[9]+alphav[0])*f[27]+f[0]*alphav[27]+alphav[15]*f[26]+f[15]*alphav[26]+(alphav[17]+alphax[2]+alphay[1])*f[25]+(alphav[18]+alphay[16]+alphax[3]+alphaz[1])*f[24]+(alphav[19]+alphax[16]+alphay[3])*f[23]+f[19]*alphav[23]+(alphax[4]+alphav[1])*f[22]+f[1]*alphav[22]+(alphay[4]+alphav[2])*f[21]+f[2]*alphav[21]+alphav[3]*f[20]+f[3]*alphav[20]+alphay[5]*f[18]+alphav[5]*f[16]+f[5]*alphav[16]+(alphax[8]+alphay[7])*f[15]+(alphay[9]+alphav[6])*f[14]+f[6]*alphav[14]+alphav[7]*f[13]+f[7]*alphav[13]+alphav[8]*f[12]+f[11]*alphay[12]+f[8]*alphav[12]); 
  return cflRate; 
} 
