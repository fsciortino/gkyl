#include <GyrokineticGenGeoModDecl.h> 
double GyrokineticGenGeoSurf2x2vSer_X_P1_Bvars_0(const double q_, const double m_, const double cflL, const double cflR, const double *w, const double *dxv, const double amax_in, const double *Bmag, const double *jacobTotInv, const double *Gradpar, const double *geoX, const double *geoY, const double *geoZ, const double *Phi, const double *fl, const double *fr, double *outl, double *outr) 
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
  double hamil[16]; 
  hamil[0] = (0.6666666666666666*(3.0*dfac_v2*(m_*wv2+Bmag[0]*wm+Phi[0]*q_)+m_))/dfac_v2; 
  hamil[1] = 2.0*Phi[1]*q_; 
  hamil[2] = 2.0*Phi[2]*q_; 
  hamil[3] = (2.309401076758503*m_*wv)/dfac_v; 
  hamil[4] = (1.154700538379252*Bmag[0])/dfac_m; 
  hamil[5] = 2.0*Phi[3]*q_; 
  double BstarX_by_Bmag[16]; 

  // surface-averaged phase velocity in this direction 
  double alpha0 = (0.03125*geoZ[0]*jacobTotInv[0]*(3.0*hamil[5]-1.732050807568877*hamil[2])*dfac_y)/q_; 

  double alpha[8]; 
  alpha[0] = (0.1767766952966368*geoZ[0]*jacobTotInv[0]*(3.0*hamil[5]-1.732050807568877*hamil[2])*dfac_y)/q_; 
#if upwindType == SURFAVG 
  if (alpha0>0) { 
  incr[0] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[1]+fl[0])*dfac_x; 
  incr[1] = -0.1767766952966368*alpha[0]*(3.0*fl[1]+1.732050807568877*fl[0])*dfac_x; 
  incr[2] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[5]+fl[2])*dfac_x; 
  incr[3] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[6]+fl[3])*dfac_x; 
  incr[4] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[8]+fl[4])*dfac_x; 
  incr[5] = -0.1767766952966368*alpha[0]*(3.0*fl[5]+1.732050807568877*fl[2])*dfac_x; 
  incr[6] = -0.1767766952966368*alpha[0]*(3.0*fl[6]+1.732050807568877*fl[3])*dfac_x; 
  incr[7] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[11]+fl[7])*dfac_x; 
  incr[8] = -0.1767766952966368*alpha[0]*(3.0*fl[8]+1.732050807568877*fl[4])*dfac_x; 
  incr[9] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[12]+fl[9])*dfac_x; 
  incr[10] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[13]+fl[10])*dfac_x; 
  incr[11] = -0.1767766952966368*alpha[0]*(3.0*fl[11]+1.732050807568877*fl[7])*dfac_x; 
  incr[12] = -0.1767766952966368*alpha[0]*(3.0*fl[12]+1.732050807568877*fl[9])*dfac_x; 
  incr[13] = -0.1767766952966368*alpha[0]*(3.0*fl[13]+1.732050807568877*fl[10])*dfac_x; 
  incr[14] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[15]+fl[14])*dfac_x; 
  incr[15] = -0.1767766952966368*alpha[0]*(3.0*fl[15]+1.732050807568877*fl[14])*dfac_x; 
  } else { 
  incr[0] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[1]-1.0*fr[0])*dfac_x; 
  incr[1] = 0.1767766952966368*alpha[0]*(3.0*fr[1]-1.732050807568877*fr[0])*dfac_x; 
  incr[2] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[5]-1.0*fr[2])*dfac_x; 
  incr[3] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[6]-1.0*fr[3])*dfac_x; 
  incr[4] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[8]-1.0*fr[4])*dfac_x; 
  incr[5] = 0.1767766952966368*alpha[0]*(3.0*fr[5]-1.732050807568877*fr[2])*dfac_x; 
  incr[6] = 0.1767766952966368*alpha[0]*(3.0*fr[6]-1.732050807568877*fr[3])*dfac_x; 
  incr[7] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[11]-1.0*fr[7])*dfac_x; 
  incr[8] = 0.1767766952966368*alpha[0]*(3.0*fr[8]-1.732050807568877*fr[4])*dfac_x; 
  incr[9] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[12]-1.0*fr[9])*dfac_x; 
  incr[10] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[13]-1.0*fr[10])*dfac_x; 
  incr[11] = 0.1767766952966368*alpha[0]*(3.0*fr[11]-1.732050807568877*fr[7])*dfac_x; 
  incr[12] = 0.1767766952966368*alpha[0]*(3.0*fr[12]-1.732050807568877*fr[9])*dfac_x; 
  incr[13] = 0.1767766952966368*alpha[0]*(3.0*fr[13]-1.732050807568877*fr[10])*dfac_x; 
  incr[14] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[15]-1.0*fr[14])*dfac_x; 
  incr[15] = 0.1767766952966368*alpha[0]*(3.0*fr[15]-1.732050807568877*fr[14])*dfac_x; 
  }
#elif upwindType == QUAD 
double fupwind[8];
double fupwindQuad[8];
double alphaQuad;
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[0] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]))+0.25*fr[14]-0.25*fl[14]+0.4330127018922193*(fr[13]+fl[13]+fr[12]+fl[12]+fr[11]+fl[11])-0.25*(fr[10]+fr[9])+0.25*(fl[10]+fl[9])-0.4330127018922193*(fr[8]+fl[8])-0.25*fr[7]+0.25*fl[7]-0.4330127018922193*(fr[6]+fl[6]+fr[5]+fl[5])+0.25*(fr[4]+fr[3]+fr[2])-0.25*(fl[4]+fl[3]+fl[2])+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)+0.4330127018922193*fr[15]-0.4330127018922193*fl[15]-0.25*(fr[14]+fl[14])-0.4330127018922193*(fr[13]+fr[12]+fr[11])+0.4330127018922193*(fl[13]+fl[12]+fl[11])+0.25*(fr[10]+fl[10]+fr[9]+fl[9])+0.4330127018922193*fr[8]-0.4330127018922193*fl[8]+0.25*(fr[7]+fl[7])+0.4330127018922193*(fr[6]+fr[5])-0.4330127018922193*(fl[6]+fl[5])-0.25*(fr[4]+fl[4]+fr[3]+fl[3]+fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[1] = 0.5*((0.4330127018922193*(fr[15]+fl[15])-0.25*fr[14]+0.25*fl[14]+0.4330127018922193*(fr[13]+fl[13])-0.4330127018922193*(fr[12]+fl[12]+fr[11]+fl[11])-0.25*fr[10]+0.25*(fl[10]+fr[9])-0.25*fl[9]-0.4330127018922193*(fr[8]+fl[8])+0.25*fr[7]-0.25*fl[7]-0.4330127018922193*(fr[6]+fl[6])+0.4330127018922193*(fr[5]+fl[5])+0.25*(fr[4]+fr[3])-0.25*(fl[4]+fl[3]+fr[2])+0.25*fl[2]+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)-0.4330127018922193*fr[15]+0.4330127018922193*fl[15]+0.25*(fr[14]+fl[14])-0.4330127018922193*fr[13]+0.4330127018922193*(fl[13]+fr[12]+fr[11])-0.4330127018922193*(fl[12]+fl[11])+0.25*(fr[10]+fl[10])-0.25*(fr[9]+fl[9])+0.4330127018922193*fr[8]-0.4330127018922193*fl[8]-0.25*(fr[7]+fl[7])+0.4330127018922193*fr[6]-0.4330127018922193*(fl[6]+fr[5])+0.4330127018922193*fl[5]-0.25*(fr[4]+fl[4]+fr[3]+fl[3])+0.25*(fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[2] = 0.5*((0.4330127018922193*(fr[15]+fl[15])-0.25*fr[14]+0.25*fl[14]-0.4330127018922193*(fr[13]+fl[13])+0.4330127018922193*(fr[12]+fl[12])-0.4330127018922193*(fr[11]+fl[11])+0.25*fr[10]-0.25*(fl[10]+fr[9])+0.25*fl[9]-0.4330127018922193*(fr[8]+fl[8])+0.25*fr[7]-0.25*fl[7]+0.4330127018922193*(fr[6]+fl[6])-0.4330127018922193*(fr[5]+fl[5])+0.25*fr[4]-0.25*(fl[4]+fr[3])+0.25*(fl[3]+fr[2])-0.25*fl[2]+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)-0.4330127018922193*fr[15]+0.4330127018922193*fl[15]+0.25*(fr[14]+fl[14])+0.4330127018922193*fr[13]-0.4330127018922193*(fl[13]+fr[12])+0.4330127018922193*(fl[12]+fr[11])-0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10])+0.25*(fr[9]+fl[9])+0.4330127018922193*fr[8]-0.4330127018922193*fl[8]-0.25*(fr[7]+fl[7])-0.4330127018922193*fr[6]+0.4330127018922193*(fl[6]+fr[5])-0.4330127018922193*fl[5]-0.25*(fr[4]+fl[4])+0.25*(fr[3]+fl[3])-0.25*(fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[3] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]))+0.25*fr[14]-0.25*fl[14]-0.4330127018922193*(fr[13]+fl[13]+fr[12]+fl[12])+0.4330127018922193*(fr[11]+fl[11])+0.25*(fr[10]+fr[9])-0.25*(fl[10]+fl[9])-0.4330127018922193*(fr[8]+fl[8])-0.25*fr[7]+0.25*fl[7]+0.4330127018922193*(fr[6]+fl[6]+fr[5]+fl[5])+0.25*fr[4]-0.25*(fl[4]+fr[3]+fr[2])+0.25*(fl[3]+fl[2])+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)+0.4330127018922193*fr[15]-0.4330127018922193*fl[15]-0.25*(fr[14]+fl[14])+0.4330127018922193*(fr[13]+fr[12])-0.4330127018922193*(fl[13]+fl[12]+fr[11])+0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10]+fr[9]+fl[9])+0.4330127018922193*fr[8]-0.4330127018922193*fl[8]+0.25*(fr[7]+fl[7])-0.4330127018922193*(fr[6]+fr[5])+0.4330127018922193*(fl[6]+fl[5])-0.25*(fr[4]+fl[4])+0.25*(fr[3]+fl[3]+fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[4] = 0.5*((0.4330127018922193*(fr[15]+fl[15])-0.25*fr[14]+0.25*fl[14]-0.4330127018922193*(fr[13]+fl[13]+fr[12]+fl[12])+0.4330127018922193*(fr[11]+fl[11])+0.25*(fr[10]+fr[9])-0.25*(fl[10]+fl[9])+0.4330127018922193*(fr[8]+fl[8])-0.25*fr[7]+0.25*fl[7]-0.4330127018922193*(fr[6]+fl[6]+fr[5]+fl[5])-0.25*fr[4]+0.25*(fl[4]+fr[3]+fr[2])-0.25*(fl[3]+fl[2])+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)-0.4330127018922193*fr[15]+0.4330127018922193*fl[15]+0.25*(fr[14]+fl[14])+0.4330127018922193*(fr[13]+fr[12])-0.4330127018922193*(fl[13]+fl[12]+fr[11])+0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10]+fr[9]+fl[9])-0.4330127018922193*fr[8]+0.4330127018922193*fl[8]+0.25*(fr[7]+fl[7])+0.4330127018922193*(fr[6]+fr[5])-0.4330127018922193*(fl[6]+fl[5])+0.25*(fr[4]+fl[4])-0.25*(fr[3]+fl[3]+fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[5] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]))+0.25*fr[14]-0.25*fl[14]-0.4330127018922193*(fr[13]+fl[13])+0.4330127018922193*(fr[12]+fl[12])-0.4330127018922193*(fr[11]+fl[11])+0.25*fr[10]-0.25*(fl[10]+fr[9])+0.25*fl[9]+0.4330127018922193*(fr[8]+fl[8])+0.25*fr[7]-0.25*fl[7]-0.4330127018922193*(fr[6]+fl[6])+0.4330127018922193*(fr[5]+fl[5])-0.25*fr[4]+0.25*(fl[4]+fr[3])-0.25*(fl[3]+fr[2])+0.25*fl[2]+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)+0.4330127018922193*fr[15]-0.4330127018922193*fl[15]-0.25*(fr[14]+fl[14])+0.4330127018922193*fr[13]-0.4330127018922193*(fl[13]+fr[12])+0.4330127018922193*(fl[12]+fr[11])-0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10])+0.25*(fr[9]+fl[9])-0.4330127018922193*fr[8]+0.4330127018922193*fl[8]-0.25*(fr[7]+fl[7])+0.4330127018922193*fr[6]-0.4330127018922193*(fl[6]+fr[5])+0.4330127018922193*fl[5]+0.25*(fr[4]+fl[4])-0.25*(fr[3]+fl[3])+0.25*(fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[6] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]))+0.25*fr[14]-0.25*fl[14]+0.4330127018922193*(fr[13]+fl[13])-0.4330127018922193*(fr[12]+fl[12]+fr[11]+fl[11])-0.25*fr[10]+0.25*(fl[10]+fr[9])-0.25*fl[9]+0.4330127018922193*(fr[8]+fl[8])+0.25*fr[7]-0.25*fl[7]+0.4330127018922193*(fr[6]+fl[6])-0.4330127018922193*(fr[5]+fl[5])-0.25*(fr[4]+fr[3])+0.25*(fl[4]+fl[3]+fr[2])-0.25*fl[2]+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)+0.4330127018922193*fr[15]-0.4330127018922193*fl[15]-0.25*(fr[14]+fl[14])-0.4330127018922193*fr[13]+0.4330127018922193*(fl[13]+fr[12]+fr[11])-0.4330127018922193*(fl[12]+fl[11])+0.25*(fr[10]+fl[10])-0.25*(fr[9]+fl[9])-0.4330127018922193*fr[8]+0.4330127018922193*fl[8]-0.25*(fr[7]+fl[7])-0.4330127018922193*fr[6]+0.4330127018922193*(fl[6]+fr[5])-0.4330127018922193*fl[5]+0.25*(fr[4]+fl[4]+fr[3]+fl[3])-0.25*(fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[7] = 0.5*((0.4330127018922193*(fr[15]+fl[15])-0.25*fr[14]+0.25*fl[14]+0.4330127018922193*(fr[13]+fl[13]+fr[12]+fl[12]+fr[11]+fl[11])-0.25*(fr[10]+fr[9])+0.25*(fl[10]+fl[9])+0.4330127018922193*(fr[8]+fl[8])-0.25*fr[7]+0.25*fl[7]+0.4330127018922193*(fr[6]+fl[6]+fr[5]+fl[5])-0.25*(fr[4]+fr[3]+fr[2])+0.25*(fl[4]+fl[3]+fl[2])+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)-0.4330127018922193*fr[15]+0.4330127018922193*fl[15]+0.25*(fr[14]+fl[14])-0.4330127018922193*(fr[13]+fr[12]+fr[11])+0.4330127018922193*(fl[13]+fl[12]+fl[11])+0.25*(fr[10]+fl[10]+fr[9]+fl[9])-0.4330127018922193*fr[8]+0.4330127018922193*fl[8]+0.25*(fr[7]+fl[7])-0.4330127018922193*(fr[6]+fr[5])+0.4330127018922193*(fl[6]+fl[5])+0.25*(fr[4]+fl[4]+fr[3]+fl[3]+fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  fupwind[0] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[1] = 0.3535533905932737*(fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[2] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[3] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[4] = 0.3535533905932737*(fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  fupwind[5] = 0.3535533905932737*(fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[6] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[7] = 0.3535533905932737*(fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  incr[0] = 0.25*alpha[0]*fupwind[0]*dfac_x; 
  incr[1] = -0.4330127018922193*alpha[0]*fupwind[0]*dfac_x; 
  incr[2] = 0.25*alpha[0]*fupwind[1]*dfac_x; 
  incr[3] = 0.25*alpha[0]*fupwind[2]*dfac_x; 
  incr[4] = 0.25*alpha[0]*fupwind[3]*dfac_x; 
  incr[5] = -0.4330127018922193*alpha[0]*fupwind[1]*dfac_x; 
  incr[6] = -0.4330127018922193*alpha[0]*fupwind[2]*dfac_x; 
  incr[7] = 0.25*alpha[0]*fupwind[4]*dfac_x; 
  incr[8] = -0.4330127018922193*alpha[0]*fupwind[3]*dfac_x; 
  incr[9] = 0.25*alpha[0]*fupwind[5]*dfac_x; 
  incr[10] = 0.25*alpha[0]*fupwind[6]*dfac_x; 
  incr[11] = -0.4330127018922193*alpha[0]*fupwind[4]*dfac_x; 
  incr[12] = -0.4330127018922193*alpha[0]*fupwind[5]*dfac_x; 
  incr[13] = -0.4330127018922193*alpha[0]*fupwind[6]*dfac_x; 
  incr[14] = 0.25*alpha[0]*fupwind[7]*dfac_x; 
  incr[15] = -0.4330127018922193*alpha[0]*fupwind[7]*dfac_x; 

#endif 
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
  return std::abs(alpha0); 
} 
double GyrokineticGenGeoSurf2x2vSer_Y_P1_Bvars_0(const double q_, const double m_, const double cflL, const double cflR, const double *w, const double *dxv, const double amax_in, const double *Bmag, const double *jacobTotInv, const double *Gradpar, const double *geoX, const double *geoY, const double *geoZ, const double *Phi, const double *fl, const double *fr, double *outl, double *outr) 
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
  double hamil[16]; 
  hamil[0] = (0.6666666666666666*(3.0*dfac_v2*(m_*wv2+Bmag[0]*wm+Phi[0]*q_)+m_))/dfac_v2; 
  hamil[1] = 2.0*Phi[1]*q_; 
  hamil[2] = 2.0*Phi[2]*q_; 
  hamil[3] = (2.309401076758503*m_*wv)/dfac_v; 
  hamil[4] = (1.154700538379252*Bmag[0])/dfac_m; 
  hamil[5] = 2.0*Phi[3]*q_; 
  double BstarY_by_Bmag[16]; 

  // surface-averaged phase velocity in this direction 
  double alpha0 = -(0.03125*geoZ[0]*jacobTotInv[0]*(3.0*hamil[5]-1.732050807568877*hamil[1])*dfac_x)/q_; 

  double alpha[8]; 
  alpha[0] = -(0.1767766952966368*geoZ[0]*jacobTotInv[0]*(3.0*hamil[5]-1.732050807568877*hamil[1])*dfac_x)/q_; 
#if upwindType == SURFAVG 
  if (alpha0>0) { 
  incr[0] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[2]+fl[0])*dfac_y; 
  incr[1] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[5]+fl[1])*dfac_y; 
  incr[2] = -0.1767766952966368*alpha[0]*(3.0*fl[2]+1.732050807568877*fl[0])*dfac_y; 
  incr[3] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[7]+fl[3])*dfac_y; 
  incr[4] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[9]+fl[4])*dfac_y; 
  incr[5] = -0.1767766952966368*alpha[0]*(3.0*fl[5]+1.732050807568877*fl[1])*dfac_y; 
  incr[6] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[11]+fl[6])*dfac_y; 
  incr[7] = -0.1767766952966368*alpha[0]*(3.0*fl[7]+1.732050807568877*fl[3])*dfac_y; 
  incr[8] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[12]+fl[8])*dfac_y; 
  incr[9] = -0.1767766952966368*alpha[0]*(3.0*fl[9]+1.732050807568877*fl[4])*dfac_y; 
  incr[10] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[14]+fl[10])*dfac_y; 
  incr[11] = -0.1767766952966368*alpha[0]*(3.0*fl[11]+1.732050807568877*fl[6])*dfac_y; 
  incr[12] = -0.1767766952966368*alpha[0]*(3.0*fl[12]+1.732050807568877*fl[8])*dfac_y; 
  incr[13] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[15]+fl[13])*dfac_y; 
  incr[14] = -0.1767766952966368*alpha[0]*(3.0*fl[14]+1.732050807568877*fl[10])*dfac_y; 
  incr[15] = -0.1767766952966368*alpha[0]*(3.0*fl[15]+1.732050807568877*fl[13])*dfac_y; 
  } else { 
  incr[0] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[2]-1.0*fr[0])*dfac_y; 
  incr[1] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[5]-1.0*fr[1])*dfac_y; 
  incr[2] = 0.1767766952966368*alpha[0]*(3.0*fr[2]-1.732050807568877*fr[0])*dfac_y; 
  incr[3] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[7]-1.0*fr[3])*dfac_y; 
  incr[4] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[9]-1.0*fr[4])*dfac_y; 
  incr[5] = 0.1767766952966368*alpha[0]*(3.0*fr[5]-1.732050807568877*fr[1])*dfac_y; 
  incr[6] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[11]-1.0*fr[6])*dfac_y; 
  incr[7] = 0.1767766952966368*alpha[0]*(3.0*fr[7]-1.732050807568877*fr[3])*dfac_y; 
  incr[8] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[12]-1.0*fr[8])*dfac_y; 
  incr[9] = 0.1767766952966368*alpha[0]*(3.0*fr[9]-1.732050807568877*fr[4])*dfac_y; 
  incr[10] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[14]-1.0*fr[10])*dfac_y; 
  incr[11] = 0.1767766952966368*alpha[0]*(3.0*fr[11]-1.732050807568877*fr[6])*dfac_y; 
  incr[12] = 0.1767766952966368*alpha[0]*(3.0*fr[12]-1.732050807568877*fr[8])*dfac_y; 
  incr[13] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[15]-1.0*fr[13])*dfac_y; 
  incr[14] = 0.1767766952966368*alpha[0]*(3.0*fr[14]-1.732050807568877*fr[10])*dfac_y; 
  incr[15] = 0.1767766952966368*alpha[0]*(3.0*fr[15]-1.732050807568877*fr[13])*dfac_y; 
  }
#elif upwindType == QUAD 
double fupwind[8];
double fupwindQuad[8];
double alphaQuad;
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[0] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]))+0.4330127018922193*(fr[14]+fl[14])+0.25*fr[13]-0.25*fl[13]+0.4330127018922193*(fr[12]+fl[12]+fr[11]+fl[11])-0.25*fr[10]+0.25*fl[10]-0.4330127018922193*(fr[9]+fl[9])-0.25*fr[8]+0.25*fl[8]-0.4330127018922193*(fr[7]+fl[7])-0.25*fr[6]+0.25*fl[6]-0.4330127018922193*(fr[5]+fl[5])+0.25*(fr[4]+fr[3])-0.25*(fl[4]+fl[3])+0.4330127018922193*(fr[2]+fl[2])+0.25*fr[1]-0.25*(fl[1]+fr[0])+0.25*fl[0])*sgn(alphaQuad)+0.4330127018922193*fr[15]-0.4330127018922193*(fl[15]+fr[14])+0.4330127018922193*fl[14]-0.25*(fr[13]+fl[13])-0.4330127018922193*(fr[12]+fr[11])+0.4330127018922193*(fl[12]+fl[11])+0.25*(fr[10]+fl[10])+0.4330127018922193*fr[9]-0.4330127018922193*fl[9]+0.25*(fr[8]+fl[8])+0.4330127018922193*fr[7]-0.4330127018922193*fl[7]+0.25*(fr[6]+fl[6])+0.4330127018922193*fr[5]-0.4330127018922193*fl[5]-0.25*(fr[4]+fl[4]+fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]-0.25*(fr[1]+fl[1])+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[1] = 0.5*((0.4330127018922193*(fr[15]+fl[15]+fr[14]+fl[14])-0.25*fr[13]+0.25*fl[13]-0.4330127018922193*(fr[12]+fl[12]+fr[11]+fl[11])-0.25*fr[10]+0.25*fl[10]-0.4330127018922193*(fr[9]+fl[9])+0.25*fr[8]-0.25*fl[8]-0.4330127018922193*(fr[7]+fl[7])+0.25*fr[6]-0.25*fl[6]+0.4330127018922193*(fr[5]+fl[5])+0.25*(fr[4]+fr[3])-0.25*(fl[4]+fl[3])+0.4330127018922193*(fr[2]+fl[2])-0.25*(fr[1]+fr[0])+0.25*(fl[1]+fl[0]))*sgn(alphaQuad)-0.4330127018922193*(fr[15]+fr[14])+0.4330127018922193*(fl[15]+fl[14])+0.25*(fr[13]+fl[13])+0.4330127018922193*(fr[12]+fr[11])-0.4330127018922193*(fl[12]+fl[11])+0.25*(fr[10]+fl[10])+0.4330127018922193*fr[9]-0.4330127018922193*fl[9]-0.25*(fr[8]+fl[8])+0.4330127018922193*fr[7]-0.4330127018922193*fl[7]-0.25*(fr[6]+fl[6])-0.4330127018922193*fr[5]+0.4330127018922193*fl[5]-0.25*(fr[4]+fl[4]+fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]+0.25*(fr[1]+fl[1]+fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[2] = 0.5*((0.4330127018922193*(fr[15]+fl[15])-0.4330127018922193*(fr[14]+fl[14])-0.25*fr[13]+0.25*fl[13]+0.4330127018922193*(fr[12]+fl[12])-0.4330127018922193*(fr[11]+fl[11])+0.25*fr[10]-0.25*fl[10]-0.4330127018922193*(fr[9]+fl[9])-0.25*fr[8]+0.25*fl[8]+0.4330127018922193*(fr[7]+fl[7])+0.25*fr[6]-0.25*fl[6]-0.4330127018922193*(fr[5]+fl[5])+0.25*fr[4]-0.25*(fl[4]+fr[3])+0.25*fl[3]+0.4330127018922193*(fr[2]+fl[2])+0.25*fr[1]-0.25*(fl[1]+fr[0])+0.25*fl[0])*sgn(alphaQuad)-0.4330127018922193*fr[15]+0.4330127018922193*(fl[15]+fr[14])-0.4330127018922193*fl[14]+0.25*(fr[13]+fl[13])-0.4330127018922193*fr[12]+0.4330127018922193*(fl[12]+fr[11])-0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10])+0.4330127018922193*fr[9]-0.4330127018922193*fl[9]+0.25*(fr[8]+fl[8])-0.4330127018922193*fr[7]+0.4330127018922193*fl[7]-0.25*(fr[6]+fl[6])+0.4330127018922193*fr[5]-0.4330127018922193*fl[5]-0.25*(fr[4]+fl[4])+0.25*(fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]-0.25*(fr[1]+fl[1])+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[3] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]+fr[14]+fl[14]))+0.25*fr[13]-0.25*fl[13]-0.4330127018922193*(fr[12]+fl[12])+0.4330127018922193*(fr[11]+fl[11])+0.25*fr[10]-0.25*fl[10]-0.4330127018922193*(fr[9]+fl[9])+0.25*fr[8]-0.25*fl[8]+0.4330127018922193*(fr[7]+fl[7])-0.25*fr[6]+0.25*fl[6]+0.4330127018922193*(fr[5]+fl[5])+0.25*fr[4]-0.25*(fl[4]+fr[3])+0.25*fl[3]+0.4330127018922193*(fr[2]+fl[2])-0.25*(fr[1]+fr[0])+0.25*(fl[1]+fl[0]))*sgn(alphaQuad)+0.4330127018922193*(fr[15]+fr[14])-0.4330127018922193*(fl[15]+fl[14])-0.25*(fr[13]+fl[13])+0.4330127018922193*fr[12]-0.4330127018922193*(fl[12]+fr[11])+0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10])+0.4330127018922193*fr[9]-0.4330127018922193*fl[9]-0.25*(fr[8]+fl[8])-0.4330127018922193*fr[7]+0.4330127018922193*fl[7]+0.25*(fr[6]+fl[6])-0.4330127018922193*fr[5]+0.4330127018922193*fl[5]-0.25*(fr[4]+fl[4])+0.25*(fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]+0.25*(fr[1]+fl[1]+fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[4] = 0.5*((0.4330127018922193*(fr[15]+fl[15])-0.4330127018922193*(fr[14]+fl[14])-0.25*fr[13]+0.25*fl[13]-0.4330127018922193*(fr[12]+fl[12])+0.4330127018922193*(fr[11]+fl[11])+0.25*fr[10]-0.25*fl[10]+0.4330127018922193*(fr[9]+fl[9])+0.25*fr[8]-0.25*fl[8]-0.4330127018922193*(fr[7]+fl[7])-0.25*fr[6]+0.25*fl[6]-0.4330127018922193*(fr[5]+fl[5])-0.25*fr[4]+0.25*(fl[4]+fr[3])-0.25*fl[3]+0.4330127018922193*(fr[2]+fl[2])+0.25*fr[1]-0.25*(fl[1]+fr[0])+0.25*fl[0])*sgn(alphaQuad)-0.4330127018922193*fr[15]+0.4330127018922193*(fl[15]+fr[14])-0.4330127018922193*fl[14]+0.25*(fr[13]+fl[13])+0.4330127018922193*fr[12]-0.4330127018922193*(fl[12]+fr[11])+0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10])-0.4330127018922193*fr[9]+0.4330127018922193*fl[9]-0.25*(fr[8]+fl[8])+0.4330127018922193*fr[7]-0.4330127018922193*fl[7]+0.25*(fr[6]+fl[6])+0.4330127018922193*fr[5]-0.4330127018922193*fl[5]+0.25*(fr[4]+fl[4])-0.25*(fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]-0.25*(fr[1]+fl[1])+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[5] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]+fr[14]+fl[14]))+0.25*fr[13]-0.25*fl[13]+0.4330127018922193*(fr[12]+fl[12])-0.4330127018922193*(fr[11]+fl[11])+0.25*fr[10]-0.25*fl[10]+0.4330127018922193*(fr[9]+fl[9])-0.25*fr[8]+0.25*fl[8]-0.4330127018922193*(fr[7]+fl[7])+0.25*fr[6]-0.25*fl[6]+0.4330127018922193*(fr[5]+fl[5])-0.25*fr[4]+0.25*(fl[4]+fr[3])-0.25*fl[3]+0.4330127018922193*(fr[2]+fl[2])-0.25*(fr[1]+fr[0])+0.25*(fl[1]+fl[0]))*sgn(alphaQuad)+0.4330127018922193*(fr[15]+fr[14])-0.4330127018922193*(fl[15]+fl[14])-0.25*(fr[13]+fl[13])-0.4330127018922193*fr[12]+0.4330127018922193*(fl[12]+fr[11])-0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10])-0.4330127018922193*fr[9]+0.4330127018922193*fl[9]+0.25*(fr[8]+fl[8])+0.4330127018922193*fr[7]-0.4330127018922193*fl[7]-0.25*(fr[6]+fl[6])-0.4330127018922193*fr[5]+0.4330127018922193*fl[5]+0.25*(fr[4]+fl[4])-0.25*(fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]+0.25*(fr[1]+fl[1]+fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[6] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]))+0.4330127018922193*(fr[14]+fl[14])+0.25*fr[13]-0.25*fl[13]-0.4330127018922193*(fr[12]+fl[12]+fr[11]+fl[11])-0.25*fr[10]+0.25*fl[10]+0.4330127018922193*(fr[9]+fl[9])+0.25*fr[8]-0.25*fl[8]+0.4330127018922193*(fr[7]+fl[7])+0.25*fr[6]-0.25*fl[6]-0.4330127018922193*(fr[5]+fl[5])-0.25*(fr[4]+fr[3])+0.25*(fl[4]+fl[3])+0.4330127018922193*(fr[2]+fl[2])+0.25*fr[1]-0.25*(fl[1]+fr[0])+0.25*fl[0])*sgn(alphaQuad)+0.4330127018922193*fr[15]-0.4330127018922193*(fl[15]+fr[14])+0.4330127018922193*fl[14]-0.25*(fr[13]+fl[13])+0.4330127018922193*(fr[12]+fr[11])-0.4330127018922193*(fl[12]+fl[11])+0.25*(fr[10]+fl[10])-0.4330127018922193*fr[9]+0.4330127018922193*fl[9]-0.25*(fr[8]+fl[8])-0.4330127018922193*fr[7]+0.4330127018922193*fl[7]-0.25*(fr[6]+fl[6])+0.4330127018922193*fr[5]-0.4330127018922193*fl[5]+0.25*(fr[4]+fl[4]+fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]-0.25*(fr[1]+fl[1])+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[7] = 0.5*((0.4330127018922193*(fr[15]+fl[15]+fr[14]+fl[14])-0.25*fr[13]+0.25*fl[13]+0.4330127018922193*(fr[12]+fl[12]+fr[11]+fl[11])-0.25*fr[10]+0.25*fl[10]+0.4330127018922193*(fr[9]+fl[9])-0.25*fr[8]+0.25*fl[8]+0.4330127018922193*(fr[7]+fl[7])-0.25*fr[6]+0.25*fl[6]+0.4330127018922193*(fr[5]+fl[5])-0.25*(fr[4]+fr[3])+0.25*(fl[4]+fl[3])+0.4330127018922193*(fr[2]+fl[2])-0.25*(fr[1]+fr[0])+0.25*(fl[1]+fl[0]))*sgn(alphaQuad)-0.4330127018922193*(fr[15]+fr[14])+0.4330127018922193*(fl[15]+fl[14])+0.25*(fr[13]+fl[13])-0.4330127018922193*(fr[12]+fr[11])+0.4330127018922193*(fl[12]+fl[11])+0.25*(fr[10]+fl[10])-0.4330127018922193*fr[9]+0.4330127018922193*fl[9]+0.25*(fr[8]+fl[8])-0.4330127018922193*fr[7]+0.4330127018922193*fl[7]+0.25*(fr[6]+fl[6])-0.4330127018922193*fr[5]+0.4330127018922193*fl[5]+0.25*(fr[4]+fl[4]+fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]+0.25*(fr[1]+fl[1]+fr[0]+fl[0])); 
  fupwind[0] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[1] = 0.3535533905932737*(fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[2] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[3] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[4] = 0.3535533905932737*(fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  fupwind[5] = 0.3535533905932737*(fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[6] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[7] = 0.3535533905932737*(fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  incr[0] = 0.25*alpha[0]*fupwind[0]*dfac_y; 
  incr[1] = 0.25*alpha[0]*fupwind[1]*dfac_y; 
  incr[2] = -0.4330127018922193*alpha[0]*fupwind[0]*dfac_y; 
  incr[3] = 0.25*alpha[0]*fupwind[2]*dfac_y; 
  incr[4] = 0.25*alpha[0]*fupwind[3]*dfac_y; 
  incr[5] = -0.4330127018922193*alpha[0]*fupwind[1]*dfac_y; 
  incr[6] = 0.25*alpha[0]*fupwind[4]*dfac_y; 
  incr[7] = -0.4330127018922193*alpha[0]*fupwind[2]*dfac_y; 
  incr[8] = 0.25*alpha[0]*fupwind[5]*dfac_y; 
  incr[9] = -0.4330127018922193*alpha[0]*fupwind[3]*dfac_y; 
  incr[10] = 0.25*alpha[0]*fupwind[6]*dfac_y; 
  incr[11] = -0.4330127018922193*alpha[0]*fupwind[4]*dfac_y; 
  incr[12] = -0.4330127018922193*alpha[0]*fupwind[5]*dfac_y; 
  incr[13] = 0.25*alpha[0]*fupwind[7]*dfac_y; 
  incr[14] = -0.4330127018922193*alpha[0]*fupwind[6]*dfac_y; 
  incr[15] = -0.4330127018922193*alpha[0]*fupwind[7]*dfac_y; 

#endif 
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
  return std::abs(alpha0); 
} 
double GyrokineticGenGeoSurf2x2vSer_Vpar_P1_Bvars_0(const double q_, const double m_, const double cflL, const double cflR, const double *w, const double *dxv, const double amax_in, const double *Bmag, const double *jacobTotInv, const double *Gradpar, const double *geoX, const double *geoY, const double *geoZ, const double *Phi, const double *fl, const double *fr, double *outl, double *outr) 
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
  double hamil[16]; 
  hamil[0] = (0.6666666666666666*(3.0*dfac_v2*(m_*wv2+Bmag[0]*wm+Phi[0]*q_)+m_))/dfac_v2; 
  hamil[1] = 2.0*Phi[1]*q_; 
  hamil[2] = 2.0*Phi[2]*q_; 
  hamil[3] = (2.309401076758503*m_*wv)/dfac_v; 
  hamil[4] = (1.154700538379252*Bmag[0])/dfac_m; 
  hamil[5] = 2.0*Phi[3]*q_; 
  double BstarX_by_Bmag[16]; 

  double BstarY_by_Bmag[16]; 

  // surface-averaged phase velocity in this direction 
  double alpha0 = 0.0; 

  double alpha[8]; 
  // alpha == 0, so nothing to do 
  return std::abs(alpha0); 
} 
double GyrokineticGenGeoSurf2x2vSer_X_P1_Bvars_1(const double q_, const double m_, const double cflL, const double cflR, const double *w, const double *dxv, const double amax_in, const double *Bmag, const double *jacobTotInv, const double *Gradpar, const double *geoX, const double *geoY, const double *geoZ, const double *Phi, const double *fl, const double *fr, double *outl, double *outr) 
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
  double hamil[16]; 
  hamil[0] = (0.6666666666666666*(3.0*dfac_v2*(m_*wv2+Bmag[0]*wm+Phi[0]*q_)+m_))/dfac_v2; 
  hamil[1] = 2.0*(Bmag[1]*wm+Phi[1]*q_); 
  hamil[2] = 2.0*Phi[2]*q_; 
  hamil[3] = (2.309401076758503*m_*wv)/dfac_v; 
  hamil[4] = (1.154700538379252*Bmag[0])/dfac_m; 
  hamil[5] = 2.0*Phi[3]*q_; 
  hamil[8] = (1.154700538379252*Bmag[1])/dfac_m; 
  double BstarX_by_Bmag[16]; 

  // surface-averaged phase velocity in this direction 
  double alpha0 = (0.03125*(((9.0*geoZ[1]-5.196152422706631*geoZ[0])*jacobTotInv[1]+jacobTotInv[0]*(3.0*geoZ[0]-5.196152422706631*geoZ[1]))*hamil[5]+((3.0*geoZ[0]-5.196152422706631*geoZ[1])*jacobTotInv[1]+jacobTotInv[0]*(3.0*geoZ[1]-1.732050807568877*geoZ[0]))*hamil[2])*dfac_y)/q_; 

  double alpha[8]; 
  alpha[0] = (0.1767766952966368*(((9.0*geoZ[1]-5.196152422706631*geoZ[0])*jacobTotInv[1]+jacobTotInv[0]*(3.0*geoZ[0]-5.196152422706631*geoZ[1]))*hamil[5]+((3.0*geoZ[0]-5.196152422706631*geoZ[1])*jacobTotInv[1]+jacobTotInv[0]*(3.0*geoZ[1]-1.732050807568877*geoZ[0]))*hamil[2])*dfac_y)/q_; 
#if upwindType == SURFAVG 
  if (alpha0>0) { 
  incr[0] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[1]+fl[0])*dfac_x; 
  incr[1] = -0.1767766952966368*alpha[0]*(3.0*fl[1]+1.732050807568877*fl[0])*dfac_x; 
  incr[2] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[5]+fl[2])*dfac_x; 
  incr[3] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[6]+fl[3])*dfac_x; 
  incr[4] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[8]+fl[4])*dfac_x; 
  incr[5] = -0.1767766952966368*alpha[0]*(3.0*fl[5]+1.732050807568877*fl[2])*dfac_x; 
  incr[6] = -0.1767766952966368*alpha[0]*(3.0*fl[6]+1.732050807568877*fl[3])*dfac_x; 
  incr[7] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[11]+fl[7])*dfac_x; 
  incr[8] = -0.1767766952966368*alpha[0]*(3.0*fl[8]+1.732050807568877*fl[4])*dfac_x; 
  incr[9] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[12]+fl[9])*dfac_x; 
  incr[10] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[13]+fl[10])*dfac_x; 
  incr[11] = -0.1767766952966368*alpha[0]*(3.0*fl[11]+1.732050807568877*fl[7])*dfac_x; 
  incr[12] = -0.1767766952966368*alpha[0]*(3.0*fl[12]+1.732050807568877*fl[9])*dfac_x; 
  incr[13] = -0.1767766952966368*alpha[0]*(3.0*fl[13]+1.732050807568877*fl[10])*dfac_x; 
  incr[14] = 0.1767766952966368*alpha[0]*(1.732050807568877*fl[15]+fl[14])*dfac_x; 
  incr[15] = -0.1767766952966368*alpha[0]*(3.0*fl[15]+1.732050807568877*fl[14])*dfac_x; 
  } else { 
  incr[0] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[1]-1.0*fr[0])*dfac_x; 
  incr[1] = 0.1767766952966368*alpha[0]*(3.0*fr[1]-1.732050807568877*fr[0])*dfac_x; 
  incr[2] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[5]-1.0*fr[2])*dfac_x; 
  incr[3] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[6]-1.0*fr[3])*dfac_x; 
  incr[4] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[8]-1.0*fr[4])*dfac_x; 
  incr[5] = 0.1767766952966368*alpha[0]*(3.0*fr[5]-1.732050807568877*fr[2])*dfac_x; 
  incr[6] = 0.1767766952966368*alpha[0]*(3.0*fr[6]-1.732050807568877*fr[3])*dfac_x; 
  incr[7] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[11]-1.0*fr[7])*dfac_x; 
  incr[8] = 0.1767766952966368*alpha[0]*(3.0*fr[8]-1.732050807568877*fr[4])*dfac_x; 
  incr[9] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[12]-1.0*fr[9])*dfac_x; 
  incr[10] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[13]-1.0*fr[10])*dfac_x; 
  incr[11] = 0.1767766952966368*alpha[0]*(3.0*fr[11]-1.732050807568877*fr[7])*dfac_x; 
  incr[12] = 0.1767766952966368*alpha[0]*(3.0*fr[12]-1.732050807568877*fr[9])*dfac_x; 
  incr[13] = 0.1767766952966368*alpha[0]*(3.0*fr[13]-1.732050807568877*fr[10])*dfac_x; 
  incr[14] = -0.1767766952966368*alpha[0]*(1.732050807568877*fr[15]-1.0*fr[14])*dfac_x; 
  incr[15] = 0.1767766952966368*alpha[0]*(3.0*fr[15]-1.732050807568877*fr[14])*dfac_x; 
  }
#elif upwindType == QUAD 
double fupwind[8];
double fupwindQuad[8];
double alphaQuad;
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[0] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]))+0.25*fr[14]-0.25*fl[14]+0.4330127018922193*(fr[13]+fl[13]+fr[12]+fl[12]+fr[11]+fl[11])-0.25*(fr[10]+fr[9])+0.25*(fl[10]+fl[9])-0.4330127018922193*(fr[8]+fl[8])-0.25*fr[7]+0.25*fl[7]-0.4330127018922193*(fr[6]+fl[6]+fr[5]+fl[5])+0.25*(fr[4]+fr[3]+fr[2])-0.25*(fl[4]+fl[3]+fl[2])+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)+0.4330127018922193*fr[15]-0.4330127018922193*fl[15]-0.25*(fr[14]+fl[14])-0.4330127018922193*(fr[13]+fr[12]+fr[11])+0.4330127018922193*(fl[13]+fl[12]+fl[11])+0.25*(fr[10]+fl[10]+fr[9]+fl[9])+0.4330127018922193*fr[8]-0.4330127018922193*fl[8]+0.25*(fr[7]+fl[7])+0.4330127018922193*(fr[6]+fr[5])-0.4330127018922193*(fl[6]+fl[5])-0.25*(fr[4]+fl[4]+fr[3]+fl[3]+fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[1] = 0.5*((0.4330127018922193*(fr[15]+fl[15])-0.25*fr[14]+0.25*fl[14]+0.4330127018922193*(fr[13]+fl[13])-0.4330127018922193*(fr[12]+fl[12]+fr[11]+fl[11])-0.25*fr[10]+0.25*(fl[10]+fr[9])-0.25*fl[9]-0.4330127018922193*(fr[8]+fl[8])+0.25*fr[7]-0.25*fl[7]-0.4330127018922193*(fr[6]+fl[6])+0.4330127018922193*(fr[5]+fl[5])+0.25*(fr[4]+fr[3])-0.25*(fl[4]+fl[3]+fr[2])+0.25*fl[2]+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)-0.4330127018922193*fr[15]+0.4330127018922193*fl[15]+0.25*(fr[14]+fl[14])-0.4330127018922193*fr[13]+0.4330127018922193*(fl[13]+fr[12]+fr[11])-0.4330127018922193*(fl[12]+fl[11])+0.25*(fr[10]+fl[10])-0.25*(fr[9]+fl[9])+0.4330127018922193*fr[8]-0.4330127018922193*fl[8]-0.25*(fr[7]+fl[7])+0.4330127018922193*fr[6]-0.4330127018922193*(fl[6]+fr[5])+0.4330127018922193*fl[5]-0.25*(fr[4]+fl[4]+fr[3]+fl[3])+0.25*(fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[2] = 0.5*((0.4330127018922193*(fr[15]+fl[15])-0.25*fr[14]+0.25*fl[14]-0.4330127018922193*(fr[13]+fl[13])+0.4330127018922193*(fr[12]+fl[12])-0.4330127018922193*(fr[11]+fl[11])+0.25*fr[10]-0.25*(fl[10]+fr[9])+0.25*fl[9]-0.4330127018922193*(fr[8]+fl[8])+0.25*fr[7]-0.25*fl[7]+0.4330127018922193*(fr[6]+fl[6])-0.4330127018922193*(fr[5]+fl[5])+0.25*fr[4]-0.25*(fl[4]+fr[3])+0.25*(fl[3]+fr[2])-0.25*fl[2]+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)-0.4330127018922193*fr[15]+0.4330127018922193*fl[15]+0.25*(fr[14]+fl[14])+0.4330127018922193*fr[13]-0.4330127018922193*(fl[13]+fr[12])+0.4330127018922193*(fl[12]+fr[11])-0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10])+0.25*(fr[9]+fl[9])+0.4330127018922193*fr[8]-0.4330127018922193*fl[8]-0.25*(fr[7]+fl[7])-0.4330127018922193*fr[6]+0.4330127018922193*(fl[6]+fr[5])-0.4330127018922193*fl[5]-0.25*(fr[4]+fl[4])+0.25*(fr[3]+fl[3])-0.25*(fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[3] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]))+0.25*fr[14]-0.25*fl[14]-0.4330127018922193*(fr[13]+fl[13]+fr[12]+fl[12])+0.4330127018922193*(fr[11]+fl[11])+0.25*(fr[10]+fr[9])-0.25*(fl[10]+fl[9])-0.4330127018922193*(fr[8]+fl[8])-0.25*fr[7]+0.25*fl[7]+0.4330127018922193*(fr[6]+fl[6]+fr[5]+fl[5])+0.25*fr[4]-0.25*(fl[4]+fr[3]+fr[2])+0.25*(fl[3]+fl[2])+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)+0.4330127018922193*fr[15]-0.4330127018922193*fl[15]-0.25*(fr[14]+fl[14])+0.4330127018922193*(fr[13]+fr[12])-0.4330127018922193*(fl[13]+fl[12]+fr[11])+0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10]+fr[9]+fl[9])+0.4330127018922193*fr[8]-0.4330127018922193*fl[8]+0.25*(fr[7]+fl[7])-0.4330127018922193*(fr[6]+fr[5])+0.4330127018922193*(fl[6]+fl[5])-0.25*(fr[4]+fl[4])+0.25*(fr[3]+fl[3]+fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[4] = 0.5*((0.4330127018922193*(fr[15]+fl[15])-0.25*fr[14]+0.25*fl[14]-0.4330127018922193*(fr[13]+fl[13]+fr[12]+fl[12])+0.4330127018922193*(fr[11]+fl[11])+0.25*(fr[10]+fr[9])-0.25*(fl[10]+fl[9])+0.4330127018922193*(fr[8]+fl[8])-0.25*fr[7]+0.25*fl[7]-0.4330127018922193*(fr[6]+fl[6]+fr[5]+fl[5])-0.25*fr[4]+0.25*(fl[4]+fr[3]+fr[2])-0.25*(fl[3]+fl[2])+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)-0.4330127018922193*fr[15]+0.4330127018922193*fl[15]+0.25*(fr[14]+fl[14])+0.4330127018922193*(fr[13]+fr[12])-0.4330127018922193*(fl[13]+fl[12]+fr[11])+0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10]+fr[9]+fl[9])-0.4330127018922193*fr[8]+0.4330127018922193*fl[8]+0.25*(fr[7]+fl[7])+0.4330127018922193*(fr[6]+fr[5])-0.4330127018922193*(fl[6]+fl[5])+0.25*(fr[4]+fl[4])-0.25*(fr[3]+fl[3]+fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[5] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]))+0.25*fr[14]-0.25*fl[14]-0.4330127018922193*(fr[13]+fl[13])+0.4330127018922193*(fr[12]+fl[12])-0.4330127018922193*(fr[11]+fl[11])+0.25*fr[10]-0.25*(fl[10]+fr[9])+0.25*fl[9]+0.4330127018922193*(fr[8]+fl[8])+0.25*fr[7]-0.25*fl[7]-0.4330127018922193*(fr[6]+fl[6])+0.4330127018922193*(fr[5]+fl[5])-0.25*fr[4]+0.25*(fl[4]+fr[3])-0.25*(fl[3]+fr[2])+0.25*fl[2]+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)+0.4330127018922193*fr[15]-0.4330127018922193*fl[15]-0.25*(fr[14]+fl[14])+0.4330127018922193*fr[13]-0.4330127018922193*(fl[13]+fr[12])+0.4330127018922193*(fl[12]+fr[11])-0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10])+0.25*(fr[9]+fl[9])-0.4330127018922193*fr[8]+0.4330127018922193*fl[8]-0.25*(fr[7]+fl[7])+0.4330127018922193*fr[6]-0.4330127018922193*(fl[6]+fr[5])+0.4330127018922193*fl[5]+0.25*(fr[4]+fl[4])-0.25*(fr[3]+fl[3])+0.25*(fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[6] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]))+0.25*fr[14]-0.25*fl[14]+0.4330127018922193*(fr[13]+fl[13])-0.4330127018922193*(fr[12]+fl[12]+fr[11]+fl[11])-0.25*fr[10]+0.25*(fl[10]+fr[9])-0.25*fl[9]+0.4330127018922193*(fr[8]+fl[8])+0.25*fr[7]-0.25*fl[7]+0.4330127018922193*(fr[6]+fl[6])-0.4330127018922193*(fr[5]+fl[5])-0.25*(fr[4]+fr[3])+0.25*(fl[4]+fl[3]+fr[2])-0.25*fl[2]+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)+0.4330127018922193*fr[15]-0.4330127018922193*fl[15]-0.25*(fr[14]+fl[14])-0.4330127018922193*fr[13]+0.4330127018922193*(fl[13]+fr[12]+fr[11])-0.4330127018922193*(fl[12]+fl[11])+0.25*(fr[10]+fl[10])-0.25*(fr[9]+fl[9])-0.4330127018922193*fr[8]+0.4330127018922193*fl[8]-0.25*(fr[7]+fl[7])-0.4330127018922193*fr[6]+0.4330127018922193*(fl[6]+fr[5])-0.4330127018922193*fl[5]+0.25*(fr[4]+fl[4]+fr[3]+fl[3])-0.25*(fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]; 
  fupwindQuad[7] = 0.5*((0.4330127018922193*(fr[15]+fl[15])-0.25*fr[14]+0.25*fl[14]+0.4330127018922193*(fr[13]+fl[13]+fr[12]+fl[12]+fr[11]+fl[11])-0.25*(fr[10]+fr[9])+0.25*(fl[10]+fl[9])+0.4330127018922193*(fr[8]+fl[8])-0.25*fr[7]+0.25*fl[7]+0.4330127018922193*(fr[6]+fl[6]+fr[5]+fl[5])-0.25*(fr[4]+fr[3]+fr[2])+0.25*(fl[4]+fl[3]+fl[2])+0.4330127018922193*(fr[1]+fl[1])-0.25*fr[0]+0.25*fl[0])*sgn(alphaQuad)-0.4330127018922193*fr[15]+0.4330127018922193*fl[15]+0.25*(fr[14]+fl[14])-0.4330127018922193*(fr[13]+fr[12]+fr[11])+0.4330127018922193*(fl[13]+fl[12]+fl[11])+0.25*(fr[10]+fl[10]+fr[9]+fl[9])-0.4330127018922193*fr[8]+0.4330127018922193*fl[8]+0.25*(fr[7]+fl[7])-0.4330127018922193*(fr[6]+fr[5])+0.4330127018922193*(fl[6]+fl[5])+0.25*(fr[4]+fl[4]+fr[3]+fl[3]+fr[2]+fl[2])-0.4330127018922193*fr[1]+0.4330127018922193*fl[1]+0.25*(fr[0]+fl[0])); 
  fupwind[0] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[1] = 0.3535533905932737*(fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[2] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[3] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[4] = 0.3535533905932737*(fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  fupwind[5] = 0.3535533905932737*(fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[6] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[7] = 0.3535533905932737*(fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  incr[0] = 0.25*alpha[0]*fupwind[0]*dfac_x; 
  incr[1] = -0.4330127018922193*alpha[0]*fupwind[0]*dfac_x; 
  incr[2] = 0.25*alpha[0]*fupwind[1]*dfac_x; 
  incr[3] = 0.25*alpha[0]*fupwind[2]*dfac_x; 
  incr[4] = 0.25*alpha[0]*fupwind[3]*dfac_x; 
  incr[5] = -0.4330127018922193*alpha[0]*fupwind[1]*dfac_x; 
  incr[6] = -0.4330127018922193*alpha[0]*fupwind[2]*dfac_x; 
  incr[7] = 0.25*alpha[0]*fupwind[4]*dfac_x; 
  incr[8] = -0.4330127018922193*alpha[0]*fupwind[3]*dfac_x; 
  incr[9] = 0.25*alpha[0]*fupwind[5]*dfac_x; 
  incr[10] = 0.25*alpha[0]*fupwind[6]*dfac_x; 
  incr[11] = -0.4330127018922193*alpha[0]*fupwind[4]*dfac_x; 
  incr[12] = -0.4330127018922193*alpha[0]*fupwind[5]*dfac_x; 
  incr[13] = -0.4330127018922193*alpha[0]*fupwind[6]*dfac_x; 
  incr[14] = 0.25*alpha[0]*fupwind[7]*dfac_x; 
  incr[15] = -0.4330127018922193*alpha[0]*fupwind[7]*dfac_x; 

#endif 
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
  return std::abs(alpha0); 
} 
double GyrokineticGenGeoSurf2x2vSer_Y_P1_Bvars_1(const double q_, const double m_, const double cflL, const double cflR, const double *w, const double *dxv, const double amax_in, const double *Bmag, const double *jacobTotInv, const double *Gradpar, const double *geoX, const double *geoY, const double *geoZ, const double *Phi, const double *fl, const double *fr, double *outl, double *outr) 
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
  double hamil[16]; 
  hamil[0] = (0.6666666666666666*(3.0*dfac_v2*(m_*wv2+Bmag[0]*wm+Phi[0]*q_)+m_))/dfac_v2; 
  hamil[1] = 2.0*(Bmag[1]*wm+Phi[1]*q_); 
  hamil[2] = 2.0*Phi[2]*q_; 
  hamil[3] = (2.309401076758503*m_*wv)/dfac_v; 
  hamil[4] = (1.154700538379252*Bmag[0])/dfac_m; 
  hamil[5] = 2.0*Phi[3]*q_; 
  hamil[8] = (1.154700538379252*Bmag[1])/dfac_m; 
  double BstarY_by_Bmag[16]; 
  BstarY_by_Bmag[0] = -(1.732050807568877*jacobTotInv[0]*geoZ[1]*dfac_x*m_*wv)/q_; 
  BstarY_by_Bmag[1] = -(1.732050807568877*geoZ[1]*jacobTotInv[1]*dfac_x*m_*wv)/q_; 
  BstarY_by_Bmag[3] = -(1.0*jacobTotInv[0]*geoZ[1]*dfac_x*m_)/(dfac_v*q_); 
  BstarY_by_Bmag[6] = -(1.0*geoZ[1]*jacobTotInv[1]*dfac_x*m_)/(dfac_v*q_); 

  // surface-averaged phase velocity in this direction 
  double alpha0 = (0.03125*(1.732050807568877*BstarY_by_Bmag[0]*hamil[3]*dfac_v*q_-1.0*(geoZ[1]*jacobTotInv[1]+geoZ[0]*jacobTotInv[0])*(3.0*hamil[5]-1.732050807568877*hamil[1])*dfac_x*m_))/(m_*q_); 

  double alpha[8]; 
  alpha[0] = (0.1767766952966368*(1.732050807568877*BstarY_by_Bmag[0]*hamil[3]*dfac_v*q_+(geoZ[1]*jacobTotInv[1]+geoZ[0]*jacobTotInv[0])*(1.732050807568877*hamil[1]-3.0*hamil[5])*dfac_x*m_))/(m_*q_); 
  alpha[1] = (0.1767766952966368*(1.732050807568877*BstarY_by_Bmag[1]*hamil[3]*dfac_v*q_+(geoZ[0]*jacobTotInv[1]+jacobTotInv[0]*geoZ[1])*(1.732050807568877*hamil[1]-3.0*hamil[5])*dfac_x*m_))/(m_*q_); 
  alpha[2] = (0.3061862178478971*BstarY_by_Bmag[3]*hamil[3]*dfac_v)/m_; 
  alpha[3] = (0.3061862178478971*(geoZ[1]*jacobTotInv[1]+geoZ[0]*jacobTotInv[0])*hamil[8]*dfac_x)/q_; 
  alpha[4] = (0.3061862178478971*hamil[3]*BstarY_by_Bmag[6]*dfac_v)/m_; 
  alpha[5] = (0.3061862178478971*(geoZ[0]*jacobTotInv[1]+jacobTotInv[0]*geoZ[1])*hamil[8]*dfac_x)/q_; 
#if upwindType == SURFAVG 
  if (alpha0>0) { 
  incr[0] = 0.1767766952966368*(1.732050807568877*(alpha[5]*fl[12]+alpha[4]*fl[11]+alpha[3]*fl[9])+alpha[5]*fl[8]+1.732050807568877*alpha[2]*fl[7]+alpha[4]*fl[6]+1.732050807568877*alpha[1]*fl[5]+alpha[3]*fl[4]+alpha[2]*fl[3]+1.732050807568877*alpha[0]*fl[2]+alpha[1]*fl[1]+alpha[0]*fl[0])*dfac_y; 
  incr[1] = 0.1767766952966368*(1.732050807568877*(alpha[3]*fl[12]+alpha[2]*fl[11]+alpha[5]*fl[9])+alpha[3]*fl[8]+1.732050807568877*alpha[4]*fl[7]+alpha[2]*fl[6]+1.732050807568877*alpha[0]*fl[5]+fl[4]*alpha[5]+fl[3]*alpha[4]+1.732050807568877*alpha[1]*fl[2]+alpha[0]*fl[1]+fl[0]*alpha[1])*dfac_y; 
  incr[2] = -0.1767766952966368*(3.0*(alpha[5]*fl[12]+alpha[4]*fl[11]+alpha[3]*fl[9])+1.732050807568877*alpha[5]*fl[8]+3.0*alpha[2]*fl[7]+1.732050807568877*alpha[4]*fl[6]+3.0*alpha[1]*fl[5]+1.732050807568877*(alpha[3]*fl[4]+alpha[2]*fl[3])+3.0*alpha[0]*fl[2]+1.732050807568877*(alpha[1]*fl[1]+alpha[0]*fl[0]))*dfac_y; 
  incr[3] = 0.1767766952966368*(1.732050807568877*(alpha[5]*fl[15]+alpha[3]*fl[14])+alpha[5]*fl[13]+1.732050807568877*alpha[1]*fl[11]+alpha[3]*fl[10]+1.732050807568877*alpha[0]*fl[7]+alpha[1]*fl[6]+alpha[4]*(1.732050807568877*fl[5]+fl[1])+alpha[0]*fl[3]+alpha[2]*(1.732050807568877*fl[2]+fl[0]))*dfac_y; 
  incr[4] = 0.1767766952966368*(1.732050807568877*(alpha[4]*fl[15]+alpha[2]*fl[14])+alpha[4]*fl[13]+1.732050807568877*alpha[1]*fl[12]+alpha[2]*fl[10]+1.732050807568877*alpha[0]*fl[9]+alpha[1]*fl[8]+alpha[5]*(1.732050807568877*fl[5]+fl[1])+alpha[0]*fl[4]+(1.732050807568877*fl[2]+fl[0])*alpha[3])*dfac_y; 
  incr[5] = -0.1767766952966368*(3.0*(alpha[3]*fl[12]+alpha[2]*fl[11]+alpha[5]*fl[9])+1.732050807568877*alpha[3]*fl[8]+3.0*alpha[4]*fl[7]+1.732050807568877*alpha[2]*fl[6]+3.0*alpha[0]*fl[5]+1.732050807568877*(fl[4]*alpha[5]+fl[3]*alpha[4])+3.0*alpha[1]*fl[2]+1.732050807568877*(alpha[0]*fl[1]+fl[0]*alpha[1]))*dfac_y; 
  incr[6] = 0.1767766952966368*(1.732050807568877*(alpha[3]*fl[15]+alpha[5]*fl[14])+alpha[3]*fl[13]+1.732050807568877*alpha[0]*fl[11]+alpha[5]*fl[10]+1.732050807568877*alpha[1]*fl[7]+alpha[0]*fl[6]+1.732050807568877*alpha[2]*fl[5]+(1.732050807568877*fl[2]+fl[0])*alpha[4]+alpha[1]*fl[3]+fl[1]*alpha[2])*dfac_y; 
  incr[7] = -0.1767766952966368*(3.0*(alpha[5]*fl[15]+alpha[3]*fl[14])+1.732050807568877*alpha[5]*fl[13]+3.0*alpha[1]*fl[11]+1.732050807568877*alpha[3]*fl[10]+3.0*alpha[0]*fl[7]+1.732050807568877*alpha[1]*fl[6]+3.0*alpha[4]*fl[5]+1.732050807568877*(fl[1]*alpha[4]+alpha[0]*fl[3])+alpha[2]*(3.0*fl[2]+1.732050807568877*fl[0]))*dfac_y; 
  incr[8] = 0.1767766952966368*(1.732050807568877*(alpha[2]*fl[15]+alpha[4]*fl[14])+alpha[2]*fl[13]+1.732050807568877*alpha[0]*fl[12]+alpha[4]*fl[10]+1.732050807568877*alpha[1]*fl[9]+alpha[0]*fl[8]+1.732050807568877*alpha[3]*fl[5]+(1.732050807568877*fl[2]+fl[0])*alpha[5]+alpha[1]*fl[4]+fl[1]*alpha[3])*dfac_y; 
  incr[9] = -0.1767766952966368*(3.0*(alpha[4]*fl[15]+alpha[2]*fl[14])+1.732050807568877*alpha[4]*fl[13]+3.0*alpha[1]*fl[12]+1.732050807568877*alpha[2]*fl[10]+3.0*alpha[0]*fl[9]+1.732050807568877*alpha[1]*fl[8]+3.0*alpha[5]*fl[5]+1.732050807568877*(fl[1]*alpha[5]+alpha[0]*fl[4])+(3.0*fl[2]+1.732050807568877*fl[0])*alpha[3])*dfac_y; 
  incr[10] = 0.1767766952966368*(1.732050807568877*(alpha[1]*fl[15]+alpha[0]*fl[14])+alpha[1]*fl[13]+1.732050807568877*(alpha[4]*fl[12]+alpha[5]*fl[11])+alpha[0]*fl[10]+1.732050807568877*alpha[2]*fl[9]+alpha[4]*fl[8]+1.732050807568877*alpha[3]*fl[7]+alpha[5]*fl[6]+alpha[2]*fl[4]+alpha[3]*fl[3])*dfac_y; 
  incr[11] = -0.1767766952966368*(3.0*(alpha[3]*fl[15]+alpha[5]*fl[14])+1.732050807568877*alpha[3]*fl[13]+3.0*alpha[0]*fl[11]+1.732050807568877*alpha[5]*fl[10]+3.0*alpha[1]*fl[7]+1.732050807568877*alpha[0]*fl[6]+3.0*(alpha[2]*fl[5]+fl[2]*alpha[4])+1.732050807568877*(fl[0]*alpha[4]+alpha[1]*fl[3]+fl[1]*alpha[2]))*dfac_y; 
  incr[12] = -0.1767766952966368*(3.0*(alpha[2]*fl[15]+alpha[4]*fl[14])+1.732050807568877*alpha[2]*fl[13]+3.0*alpha[0]*fl[12]+1.732050807568877*alpha[4]*fl[10]+3.0*alpha[1]*fl[9]+1.732050807568877*alpha[0]*fl[8]+3.0*(alpha[3]*fl[5]+fl[2]*alpha[5])+1.732050807568877*(fl[0]*alpha[5]+alpha[1]*fl[4]+fl[1]*alpha[3]))*dfac_y; 
  incr[13] = 0.1767766952966368*(1.732050807568877*(alpha[0]*fl[15]+alpha[1]*fl[14])+alpha[0]*fl[13]+1.732050807568877*(alpha[2]*fl[12]+alpha[3]*fl[11])+alpha[1]*fl[10]+1.732050807568877*alpha[4]*fl[9]+alpha[2]*fl[8]+1.732050807568877*alpha[5]*fl[7]+alpha[3]*fl[6]+fl[3]*alpha[5]+alpha[4]*fl[4])*dfac_y; 
  incr[14] = -0.1767766952966368*(3.0*(alpha[1]*fl[15]+alpha[0]*fl[14])+1.732050807568877*alpha[1]*fl[13]+3.0*(alpha[4]*fl[12]+alpha[5]*fl[11])+1.732050807568877*alpha[0]*fl[10]+3.0*alpha[2]*fl[9]+1.732050807568877*alpha[4]*fl[8]+3.0*alpha[3]*fl[7]+1.732050807568877*(alpha[5]*fl[6]+alpha[2]*fl[4]+alpha[3]*fl[3]))*dfac_y; 
  incr[15] = -0.1767766952966368*(3.0*(alpha[0]*fl[15]+alpha[1]*fl[14])+1.732050807568877*alpha[0]*fl[13]+3.0*(alpha[2]*fl[12]+alpha[3]*fl[11])+1.732050807568877*alpha[1]*fl[10]+3.0*alpha[4]*fl[9]+1.732050807568877*alpha[2]*fl[8]+3.0*alpha[5]*fl[7]+1.732050807568877*(alpha[3]*fl[6]+fl[3]*alpha[5]+alpha[4]*fl[4]))*dfac_y; 
  } else { 
  incr[0] = -0.1767766952966368*(1.732050807568877*(alpha[5]*fr[12]+alpha[4]*fr[11]+alpha[3]*fr[9])-1.0*alpha[5]*fr[8]+1.732050807568877*alpha[2]*fr[7]-1.0*alpha[4]*fr[6]+1.732050807568877*alpha[1]*fr[5]-1.0*(alpha[3]*fr[4]+alpha[2]*fr[3])+1.732050807568877*alpha[0]*fr[2]-1.0*(alpha[1]*fr[1]+alpha[0]*fr[0]))*dfac_y; 
  incr[1] = -0.1767766952966368*(1.732050807568877*(alpha[3]*fr[12]+alpha[2]*fr[11]+alpha[5]*fr[9])-1.0*alpha[3]*fr[8]+1.732050807568877*alpha[4]*fr[7]-1.0*alpha[2]*fr[6]+1.732050807568877*alpha[0]*fr[5]-1.0*(fr[4]*alpha[5]+fr[3]*alpha[4])+1.732050807568877*alpha[1]*fr[2]-1.0*(alpha[0]*fr[1]+fr[0]*alpha[1]))*dfac_y; 
  incr[2] = 0.1767766952966368*(3.0*(alpha[5]*fr[12]+alpha[4]*fr[11]+alpha[3]*fr[9])-1.732050807568877*alpha[5]*fr[8]+3.0*alpha[2]*fr[7]-1.732050807568877*alpha[4]*fr[6]+3.0*alpha[1]*fr[5]-1.732050807568877*(alpha[3]*fr[4]+alpha[2]*fr[3])+3.0*alpha[0]*fr[2]-1.732050807568877*(alpha[1]*fr[1]+alpha[0]*fr[0]))*dfac_y; 
  incr[3] = -0.1767766952966368*(1.732050807568877*(alpha[5]*fr[15]+alpha[3]*fr[14])-1.0*alpha[5]*fr[13]+1.732050807568877*alpha[1]*fr[11]-1.0*alpha[3]*fr[10]+1.732050807568877*alpha[0]*fr[7]-1.0*alpha[1]*fr[6]+1.732050807568877*alpha[4]*fr[5]-1.0*(fr[1]*alpha[4]+alpha[0]*fr[3])+alpha[2]*(1.732050807568877*fr[2]-1.0*fr[0]))*dfac_y; 
  incr[4] = -0.1767766952966368*(1.732050807568877*(alpha[4]*fr[15]+alpha[2]*fr[14])-1.0*alpha[4]*fr[13]+1.732050807568877*alpha[1]*fr[12]-1.0*alpha[2]*fr[10]+1.732050807568877*alpha[0]*fr[9]-1.0*alpha[1]*fr[8]+1.732050807568877*alpha[5]*fr[5]-1.0*(fr[1]*alpha[5]+alpha[0]*fr[4])+(1.732050807568877*fr[2]-1.0*fr[0])*alpha[3])*dfac_y; 
  incr[5] = 0.1767766952966368*(3.0*(alpha[3]*fr[12]+alpha[2]*fr[11]+alpha[5]*fr[9])-1.732050807568877*alpha[3]*fr[8]+3.0*alpha[4]*fr[7]-1.732050807568877*alpha[2]*fr[6]+3.0*alpha[0]*fr[5]-1.732050807568877*(fr[4]*alpha[5]+fr[3]*alpha[4])+3.0*alpha[1]*fr[2]-1.732050807568877*(alpha[0]*fr[1]+fr[0]*alpha[1]))*dfac_y; 
  incr[6] = -0.1767766952966368*(1.732050807568877*(alpha[3]*fr[15]+alpha[5]*fr[14])-1.0*alpha[3]*fr[13]+1.732050807568877*alpha[0]*fr[11]-1.0*alpha[5]*fr[10]+1.732050807568877*alpha[1]*fr[7]-1.0*alpha[0]*fr[6]+1.732050807568877*(alpha[2]*fr[5]+fr[2]*alpha[4])-1.0*(fr[0]*alpha[4]+alpha[1]*fr[3]+fr[1]*alpha[2]))*dfac_y; 
  incr[7] = 0.1767766952966368*(3.0*(alpha[5]*fr[15]+alpha[3]*fr[14])-1.732050807568877*alpha[5]*fr[13]+3.0*alpha[1]*fr[11]-1.732050807568877*alpha[3]*fr[10]+3.0*alpha[0]*fr[7]-1.732050807568877*alpha[1]*fr[6]+3.0*alpha[4]*fr[5]-1.732050807568877*(fr[1]*alpha[4]+alpha[0]*fr[3])+alpha[2]*(3.0*fr[2]-1.732050807568877*fr[0]))*dfac_y; 
  incr[8] = -0.1767766952966368*(1.732050807568877*(alpha[2]*fr[15]+alpha[4]*fr[14])-1.0*alpha[2]*fr[13]+1.732050807568877*alpha[0]*fr[12]-1.0*alpha[4]*fr[10]+1.732050807568877*alpha[1]*fr[9]-1.0*alpha[0]*fr[8]+1.732050807568877*(alpha[3]*fr[5]+fr[2]*alpha[5])-1.0*(fr[0]*alpha[5]+alpha[1]*fr[4]+fr[1]*alpha[3]))*dfac_y; 
  incr[9] = 0.1767766952966368*(3.0*(alpha[4]*fr[15]+alpha[2]*fr[14])-1.732050807568877*alpha[4]*fr[13]+3.0*alpha[1]*fr[12]-1.732050807568877*alpha[2]*fr[10]+3.0*alpha[0]*fr[9]-1.732050807568877*alpha[1]*fr[8]+3.0*alpha[5]*fr[5]-1.732050807568877*(fr[1]*alpha[5]+alpha[0]*fr[4])+(3.0*fr[2]-1.732050807568877*fr[0])*alpha[3])*dfac_y; 
  incr[10] = -0.1767766952966368*(1.732050807568877*(alpha[1]*fr[15]+alpha[0]*fr[14])-1.0*alpha[1]*fr[13]+1.732050807568877*(alpha[4]*fr[12]+alpha[5]*fr[11])-1.0*alpha[0]*fr[10]+1.732050807568877*alpha[2]*fr[9]-1.0*alpha[4]*fr[8]+1.732050807568877*alpha[3]*fr[7]-1.0*(alpha[5]*fr[6]+alpha[2]*fr[4]+alpha[3]*fr[3]))*dfac_y; 
  incr[11] = 0.1767766952966368*(3.0*(alpha[3]*fr[15]+alpha[5]*fr[14])-1.732050807568877*alpha[3]*fr[13]+3.0*alpha[0]*fr[11]-1.732050807568877*alpha[5]*fr[10]+3.0*alpha[1]*fr[7]-1.732050807568877*alpha[0]*fr[6]+3.0*(alpha[2]*fr[5]+fr[2]*alpha[4])-1.732050807568877*(fr[0]*alpha[4]+alpha[1]*fr[3]+fr[1]*alpha[2]))*dfac_y; 
  incr[12] = 0.1767766952966368*(3.0*(alpha[2]*fr[15]+alpha[4]*fr[14])-1.732050807568877*alpha[2]*fr[13]+3.0*alpha[0]*fr[12]-1.732050807568877*alpha[4]*fr[10]+3.0*alpha[1]*fr[9]-1.732050807568877*alpha[0]*fr[8]+3.0*(alpha[3]*fr[5]+fr[2]*alpha[5])-1.732050807568877*(fr[0]*alpha[5]+alpha[1]*fr[4]+fr[1]*alpha[3]))*dfac_y; 
  incr[13] = -0.1767766952966368*(1.732050807568877*(alpha[0]*fr[15]+alpha[1]*fr[14])-1.0*alpha[0]*fr[13]+1.732050807568877*(alpha[2]*fr[12]+alpha[3]*fr[11])-1.0*alpha[1]*fr[10]+1.732050807568877*alpha[4]*fr[9]-1.0*alpha[2]*fr[8]+1.732050807568877*alpha[5]*fr[7]-1.0*(alpha[3]*fr[6]+fr[3]*alpha[5]+alpha[4]*fr[4]))*dfac_y; 
  incr[14] = 0.1767766952966368*(3.0*(alpha[1]*fr[15]+alpha[0]*fr[14])-1.732050807568877*alpha[1]*fr[13]+3.0*(alpha[4]*fr[12]+alpha[5]*fr[11])-1.732050807568877*alpha[0]*fr[10]+3.0*alpha[2]*fr[9]-1.732050807568877*alpha[4]*fr[8]+3.0*alpha[3]*fr[7]-1.732050807568877*(alpha[5]*fr[6]+alpha[2]*fr[4]+alpha[3]*fr[3]))*dfac_y; 
  incr[15] = 0.1767766952966368*(3.0*(alpha[0]*fr[15]+alpha[1]*fr[14])-1.732050807568877*alpha[0]*fr[13]+3.0*(alpha[2]*fr[12]+alpha[3]*fr[11])-1.732050807568877*alpha[1]*fr[10]+3.0*alpha[4]*fr[9]-1.732050807568877*alpha[2]*fr[8]+3.0*alpha[5]*fr[7]-1.732050807568877*(alpha[3]*fr[6]+fr[3]*alpha[5]+alpha[4]*fr[4]))*dfac_y; 
  }
#elif upwindType == QUAD 
double fupwind[8];
double fupwindQuad[8];
double alphaQuad;
  alphaQuad = 0.3535533905932737*(alpha[5]+alpha[4])-0.3535533905932737*(alpha[3]+alpha[2]+alpha[1])+0.3535533905932737*alpha[0]; 
  fupwindQuad[0] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]))+0.4330127018922193*(fr[14]+fl[14])+0.25*fr[13]-0.25*fl[13]+0.4330127018922193*(fr[12]+fl[12]+fr[11]+fl[11])-0.25*fr[10]+0.25*fl[10]-0.4330127018922193*(fr[9]+fl[9])-0.25*fr[8]+0.25*fl[8]-0.4330127018922193*(fr[7]+fl[7])-0.25*fr[6]+0.25*fl[6]-0.4330127018922193*(fr[5]+fl[5])+0.25*(fr[4]+fr[3])-0.25*(fl[4]+fl[3])+0.4330127018922193*(fr[2]+fl[2])+0.25*fr[1]-0.25*(fl[1]+fr[0])+0.25*fl[0])*sgn(alphaQuad)+0.4330127018922193*fr[15]-0.4330127018922193*(fl[15]+fr[14])+0.4330127018922193*fl[14]-0.25*(fr[13]+fl[13])-0.4330127018922193*(fr[12]+fr[11])+0.4330127018922193*(fl[12]+fl[11])+0.25*(fr[10]+fl[10])+0.4330127018922193*fr[9]-0.4330127018922193*fl[9]+0.25*(fr[8]+fl[8])+0.4330127018922193*fr[7]-0.4330127018922193*fl[7]+0.25*(fr[6]+fl[6])+0.4330127018922193*fr[5]-0.4330127018922193*fl[5]-0.25*(fr[4]+fl[4]+fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]-0.25*(fr[1]+fl[1])+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*(alpha[1]+alpha[0])-0.3535533905932737*(alpha[5]+alpha[4]+alpha[3]+alpha[2]); 
  fupwindQuad[1] = 0.5*((0.4330127018922193*(fr[15]+fl[15]+fr[14]+fl[14])-0.25*fr[13]+0.25*fl[13]-0.4330127018922193*(fr[12]+fl[12]+fr[11]+fl[11])-0.25*fr[10]+0.25*fl[10]-0.4330127018922193*(fr[9]+fl[9])+0.25*fr[8]-0.25*fl[8]-0.4330127018922193*(fr[7]+fl[7])+0.25*fr[6]-0.25*fl[6]+0.4330127018922193*(fr[5]+fl[5])+0.25*(fr[4]+fr[3])-0.25*(fl[4]+fl[3])+0.4330127018922193*(fr[2]+fl[2])-0.25*(fr[1]+fr[0])+0.25*(fl[1]+fl[0]))*sgn(alphaQuad)-0.4330127018922193*(fr[15]+fr[14])+0.4330127018922193*(fl[15]+fl[14])+0.25*(fr[13]+fl[13])+0.4330127018922193*(fr[12]+fr[11])-0.4330127018922193*(fl[12]+fl[11])+0.25*(fr[10]+fl[10])+0.4330127018922193*fr[9]-0.4330127018922193*fl[9]-0.25*(fr[8]+fl[8])+0.4330127018922193*fr[7]-0.4330127018922193*fl[7]-0.25*(fr[6]+fl[6])-0.4330127018922193*fr[5]+0.4330127018922193*fl[5]-0.25*(fr[4]+fl[4]+fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]+0.25*(fr[1]+fl[1]+fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[5]-0.3535533905932737*(alpha[4]+alpha[3])+0.3535533905932737*alpha[2]-0.3535533905932737*alpha[1]+0.3535533905932737*alpha[0]; 
  fupwindQuad[2] = 0.5*((0.4330127018922193*(fr[15]+fl[15])-0.4330127018922193*(fr[14]+fl[14])-0.25*fr[13]+0.25*fl[13]+0.4330127018922193*(fr[12]+fl[12])-0.4330127018922193*(fr[11]+fl[11])+0.25*fr[10]-0.25*fl[10]-0.4330127018922193*(fr[9]+fl[9])-0.25*fr[8]+0.25*fl[8]+0.4330127018922193*(fr[7]+fl[7])+0.25*fr[6]-0.25*fl[6]-0.4330127018922193*(fr[5]+fl[5])+0.25*fr[4]-0.25*(fl[4]+fr[3])+0.25*fl[3]+0.4330127018922193*(fr[2]+fl[2])+0.25*fr[1]-0.25*(fl[1]+fr[0])+0.25*fl[0])*sgn(alphaQuad)-0.4330127018922193*fr[15]+0.4330127018922193*(fl[15]+fr[14])-0.4330127018922193*fl[14]+0.25*(fr[13]+fl[13])-0.4330127018922193*fr[12]+0.4330127018922193*(fl[12]+fr[11])-0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10])+0.4330127018922193*fr[9]-0.4330127018922193*fl[9]+0.25*(fr[8]+fl[8])-0.4330127018922193*fr[7]+0.4330127018922193*fl[7]-0.25*(fr[6]+fl[6])+0.4330127018922193*fr[5]-0.4330127018922193*fl[5]-0.25*(fr[4]+fl[4])+0.25*(fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]-0.25*(fr[1]+fl[1])+0.25*(fr[0]+fl[0])); 
  alphaQuad = (-0.3535533905932737*alpha[5])+0.3535533905932737*alpha[4]-0.3535533905932737*alpha[3]+0.3535533905932737*(alpha[2]+alpha[1]+alpha[0]); 
  fupwindQuad[3] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]+fr[14]+fl[14]))+0.25*fr[13]-0.25*fl[13]-0.4330127018922193*(fr[12]+fl[12])+0.4330127018922193*(fr[11]+fl[11])+0.25*fr[10]-0.25*fl[10]-0.4330127018922193*(fr[9]+fl[9])+0.25*fr[8]-0.25*fl[8]+0.4330127018922193*(fr[7]+fl[7])-0.25*fr[6]+0.25*fl[6]+0.4330127018922193*(fr[5]+fl[5])+0.25*fr[4]-0.25*(fl[4]+fr[3])+0.25*fl[3]+0.4330127018922193*(fr[2]+fl[2])-0.25*(fr[1]+fr[0])+0.25*(fl[1]+fl[0]))*sgn(alphaQuad)+0.4330127018922193*(fr[15]+fr[14])-0.4330127018922193*(fl[15]+fl[14])-0.25*(fr[13]+fl[13])+0.4330127018922193*fr[12]-0.4330127018922193*(fl[12]+fr[11])+0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10])+0.4330127018922193*fr[9]-0.4330127018922193*fl[9]-0.25*(fr[8]+fl[8])-0.4330127018922193*fr[7]+0.4330127018922193*fl[7]+0.25*(fr[6]+fl[6])-0.4330127018922193*fr[5]+0.4330127018922193*fl[5]-0.25*(fr[4]+fl[4])+0.25*(fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]+0.25*(fr[1]+fl[1]+fr[0]+fl[0])); 
  alphaQuad = (-0.3535533905932737*alpha[5])+0.3535533905932737*(alpha[4]+alpha[3])-0.3535533905932737*(alpha[2]+alpha[1])+0.3535533905932737*alpha[0]; 
  fupwindQuad[4] = 0.5*((0.4330127018922193*(fr[15]+fl[15])-0.4330127018922193*(fr[14]+fl[14])-0.25*fr[13]+0.25*fl[13]-0.4330127018922193*(fr[12]+fl[12])+0.4330127018922193*(fr[11]+fl[11])+0.25*fr[10]-0.25*fl[10]+0.4330127018922193*(fr[9]+fl[9])+0.25*fr[8]-0.25*fl[8]-0.4330127018922193*(fr[7]+fl[7])-0.25*fr[6]+0.25*fl[6]-0.4330127018922193*(fr[5]+fl[5])-0.25*fr[4]+0.25*(fl[4]+fr[3])-0.25*fl[3]+0.4330127018922193*(fr[2]+fl[2])+0.25*fr[1]-0.25*(fl[1]+fr[0])+0.25*fl[0])*sgn(alphaQuad)-0.4330127018922193*fr[15]+0.4330127018922193*(fl[15]+fr[14])-0.4330127018922193*fl[14]+0.25*(fr[13]+fl[13])+0.4330127018922193*fr[12]-0.4330127018922193*(fl[12]+fr[11])+0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10])-0.4330127018922193*fr[9]+0.4330127018922193*fl[9]-0.25*(fr[8]+fl[8])+0.4330127018922193*fr[7]-0.4330127018922193*fl[7]+0.25*(fr[6]+fl[6])+0.4330127018922193*fr[5]-0.4330127018922193*fl[5]+0.25*(fr[4]+fl[4])-0.25*(fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]-0.25*(fr[1]+fl[1])+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[5]-0.3535533905932737*alpha[4]+0.3535533905932737*alpha[3]-0.3535533905932737*alpha[2]+0.3535533905932737*(alpha[1]+alpha[0]); 
  fupwindQuad[5] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]+fr[14]+fl[14]))+0.25*fr[13]-0.25*fl[13]+0.4330127018922193*(fr[12]+fl[12])-0.4330127018922193*(fr[11]+fl[11])+0.25*fr[10]-0.25*fl[10]+0.4330127018922193*(fr[9]+fl[9])-0.25*fr[8]+0.25*fl[8]-0.4330127018922193*(fr[7]+fl[7])+0.25*fr[6]-0.25*fl[6]+0.4330127018922193*(fr[5]+fl[5])-0.25*fr[4]+0.25*(fl[4]+fr[3])-0.25*fl[3]+0.4330127018922193*(fr[2]+fl[2])-0.25*(fr[1]+fr[0])+0.25*(fl[1]+fl[0]))*sgn(alphaQuad)+0.4330127018922193*(fr[15]+fr[14])-0.4330127018922193*(fl[15]+fl[14])-0.25*(fr[13]+fl[13])-0.4330127018922193*fr[12]+0.4330127018922193*(fl[12]+fr[11])-0.4330127018922193*fl[11]-0.25*(fr[10]+fl[10])-0.4330127018922193*fr[9]+0.4330127018922193*fl[9]+0.25*(fr[8]+fl[8])+0.4330127018922193*fr[7]-0.4330127018922193*fl[7]-0.25*(fr[6]+fl[6])-0.4330127018922193*fr[5]+0.4330127018922193*fl[5]+0.25*(fr[4]+fl[4])-0.25*(fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]+0.25*(fr[1]+fl[1]+fr[0]+fl[0])); 
  alphaQuad = (-0.3535533905932737*(alpha[5]+alpha[4]))+0.3535533905932737*(alpha[3]+alpha[2])-0.3535533905932737*alpha[1]+0.3535533905932737*alpha[0]; 
  fupwindQuad[6] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]))+0.4330127018922193*(fr[14]+fl[14])+0.25*fr[13]-0.25*fl[13]-0.4330127018922193*(fr[12]+fl[12]+fr[11]+fl[11])-0.25*fr[10]+0.25*fl[10]+0.4330127018922193*(fr[9]+fl[9])+0.25*fr[8]-0.25*fl[8]+0.4330127018922193*(fr[7]+fl[7])+0.25*fr[6]-0.25*fl[6]-0.4330127018922193*(fr[5]+fl[5])-0.25*(fr[4]+fr[3])+0.25*(fl[4]+fl[3])+0.4330127018922193*(fr[2]+fl[2])+0.25*fr[1]-0.25*(fl[1]+fr[0])+0.25*fl[0])*sgn(alphaQuad)+0.4330127018922193*fr[15]-0.4330127018922193*(fl[15]+fr[14])+0.4330127018922193*fl[14]-0.25*(fr[13]+fl[13])+0.4330127018922193*(fr[12]+fr[11])-0.4330127018922193*(fl[12]+fl[11])+0.25*(fr[10]+fl[10])-0.4330127018922193*fr[9]+0.4330127018922193*fl[9]-0.25*(fr[8]+fl[8])-0.4330127018922193*fr[7]+0.4330127018922193*fl[7]-0.25*(fr[6]+fl[6])+0.4330127018922193*fr[5]-0.4330127018922193*fl[5]+0.25*(fr[4]+fl[4]+fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]-0.25*(fr[1]+fl[1])+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*(alpha[5]+alpha[4]+alpha[3]+alpha[2]+alpha[1]+alpha[0]); 
  fupwindQuad[7] = 0.5*((0.4330127018922193*(fr[15]+fl[15]+fr[14]+fl[14])-0.25*fr[13]+0.25*fl[13]+0.4330127018922193*(fr[12]+fl[12]+fr[11]+fl[11])-0.25*fr[10]+0.25*fl[10]+0.4330127018922193*(fr[9]+fl[9])-0.25*fr[8]+0.25*fl[8]+0.4330127018922193*(fr[7]+fl[7])-0.25*fr[6]+0.25*fl[6]+0.4330127018922193*(fr[5]+fl[5])-0.25*(fr[4]+fr[3])+0.25*(fl[4]+fl[3])+0.4330127018922193*(fr[2]+fl[2])-0.25*(fr[1]+fr[0])+0.25*(fl[1]+fl[0]))*sgn(alphaQuad)-0.4330127018922193*(fr[15]+fr[14])+0.4330127018922193*(fl[15]+fl[14])+0.25*(fr[13]+fl[13])-0.4330127018922193*(fr[12]+fr[11])+0.4330127018922193*(fl[12]+fl[11])+0.25*(fr[10]+fl[10])-0.4330127018922193*fr[9]+0.4330127018922193*fl[9]+0.25*(fr[8]+fl[8])-0.4330127018922193*fr[7]+0.4330127018922193*fl[7]+0.25*(fr[6]+fl[6])-0.4330127018922193*fr[5]+0.4330127018922193*fl[5]+0.25*(fr[4]+fl[4]+fr[3]+fl[3])-0.4330127018922193*fr[2]+0.4330127018922193*fl[2]+0.25*(fr[1]+fl[1]+fr[0]+fl[0])); 
  fupwind[0] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[1] = 0.3535533905932737*(fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[2] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[3] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[4] = 0.3535533905932737*(fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  fupwind[5] = 0.3535533905932737*(fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[6] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[7] = 0.3535533905932737*(fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  incr[0] = 0.25*(alpha[5]*fupwind[5]+alpha[4]*fupwind[4]+alpha[3]*fupwind[3]+alpha[2]*fupwind[2]+alpha[1]*fupwind[1]+alpha[0]*fupwind[0])*dfac_y; 
  incr[1] = 0.25*(alpha[3]*fupwind[5]+fupwind[3]*alpha[5]+alpha[2]*fupwind[4]+fupwind[2]*alpha[4]+alpha[0]*fupwind[1]+fupwind[0]*alpha[1])*dfac_y; 
  incr[2] = -0.4330127018922193*(alpha[5]*fupwind[5]+alpha[4]*fupwind[4]+alpha[3]*fupwind[3]+alpha[2]*fupwind[2]+alpha[1]*fupwind[1]+alpha[0]*fupwind[0])*dfac_y; 
  incr[3] = 0.25*(alpha[5]*fupwind[7]+alpha[3]*fupwind[6]+alpha[1]*fupwind[4]+fupwind[1]*alpha[4]+alpha[0]*fupwind[2]+fupwind[0]*alpha[2])*dfac_y; 
  incr[4] = 0.25*(alpha[4]*fupwind[7]+alpha[2]*fupwind[6]+alpha[1]*fupwind[5]+fupwind[1]*alpha[5]+alpha[0]*fupwind[3]+fupwind[0]*alpha[3])*dfac_y; 
  incr[5] = -0.4330127018922193*(alpha[3]*fupwind[5]+fupwind[3]*alpha[5]+alpha[2]*fupwind[4]+fupwind[2]*alpha[4]+alpha[0]*fupwind[1]+fupwind[0]*alpha[1])*dfac_y; 
  incr[6] = 0.25*(alpha[3]*fupwind[7]+alpha[5]*fupwind[6]+alpha[0]*fupwind[4]+fupwind[0]*alpha[4]+alpha[1]*fupwind[2]+fupwind[1]*alpha[2])*dfac_y; 
  incr[7] = -0.4330127018922193*(alpha[5]*fupwind[7]+alpha[3]*fupwind[6]+alpha[1]*fupwind[4]+fupwind[1]*alpha[4]+alpha[0]*fupwind[2]+fupwind[0]*alpha[2])*dfac_y; 
  incr[8] = 0.25*(alpha[2]*fupwind[7]+alpha[4]*fupwind[6]+alpha[0]*fupwind[5]+fupwind[0]*alpha[5]+alpha[1]*fupwind[3]+fupwind[1]*alpha[3])*dfac_y; 
  incr[9] = -0.4330127018922193*(alpha[4]*fupwind[7]+alpha[2]*fupwind[6]+alpha[1]*fupwind[5]+fupwind[1]*alpha[5]+alpha[0]*fupwind[3]+fupwind[0]*alpha[3])*dfac_y; 
  incr[10] = 0.25*(alpha[1]*fupwind[7]+alpha[0]*fupwind[6]+alpha[4]*fupwind[5]+fupwind[4]*alpha[5]+alpha[2]*fupwind[3]+fupwind[2]*alpha[3])*dfac_y; 
  incr[11] = -0.4330127018922193*(alpha[3]*fupwind[7]+alpha[5]*fupwind[6]+alpha[0]*fupwind[4]+fupwind[0]*alpha[4]+alpha[1]*fupwind[2]+fupwind[1]*alpha[2])*dfac_y; 
  incr[12] = -0.4330127018922193*(alpha[2]*fupwind[7]+alpha[4]*fupwind[6]+alpha[0]*fupwind[5]+fupwind[0]*alpha[5]+alpha[1]*fupwind[3]+fupwind[1]*alpha[3])*dfac_y; 
  incr[13] = 0.25*(alpha[0]*fupwind[7]+alpha[1]*fupwind[6]+alpha[2]*fupwind[5]+fupwind[2]*alpha[5]+alpha[3]*fupwind[4]+fupwind[3]*alpha[4])*dfac_y; 
  incr[14] = -0.4330127018922193*(alpha[1]*fupwind[7]+alpha[0]*fupwind[6]+alpha[4]*fupwind[5]+fupwind[4]*alpha[5]+alpha[2]*fupwind[3]+fupwind[2]*alpha[3])*dfac_y; 
  incr[15] = -0.4330127018922193*(alpha[0]*fupwind[7]+alpha[1]*fupwind[6]+alpha[2]*fupwind[5]+fupwind[2]*alpha[5]+alpha[3]*fupwind[4]+fupwind[3]*alpha[4])*dfac_y; 

#endif 
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
  return std::abs(alpha0); 
} 
double GyrokineticGenGeoSurf2x2vSer_Vpar_P1_Bvars_1(const double q_, const double m_, const double cflL, const double cflR, const double *w, const double *dxv, const double amax_in, const double *Bmag, const double *jacobTotInv, const double *Gradpar, const double *geoX, const double *geoY, const double *geoZ, const double *Phi, const double *fl, const double *fr, double *outl, double *outr) 
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
  double hamil[16]; 
  hamil[0] = (0.6666666666666666*(3.0*dfac_v2*(m_*wv2+Bmag[0]*wm+Phi[0]*q_)+m_))/dfac_v2; 
  hamil[1] = 2.0*(Bmag[1]*wm+Phi[1]*q_); 
  hamil[2] = 2.0*Phi[2]*q_; 
  hamil[3] = (2.309401076758503*m_*wv)/dfac_v; 
  hamil[4] = (1.154700538379252*Bmag[0])/dfac_m; 
  hamil[5] = 2.0*Phi[3]*q_; 
  hamil[8] = (1.154700538379252*Bmag[1])/dfac_m; 
  double BstarX_by_Bmag[16]; 

  double BstarY_by_Bmag[16]; 
  BstarY_by_Bmag[0] = -(1.732050807568877*jacobTotInv[0]*geoZ[1]*dfac_x*m_*wv)/q_; 
  BstarY_by_Bmag[1] = -(1.732050807568877*geoZ[1]*jacobTotInv[1]*dfac_x*m_*wv)/q_; 
  BstarY_by_Bmag[3] = -(1.0*jacobTotInv[0]*geoZ[1]*dfac_x*m_)/(dfac_v*q_); 
  BstarY_by_Bmag[6] = -(1.0*geoZ[1]*jacobTotInv[1]*dfac_x*m_)/(dfac_v*q_); 

  // surface-averaged phase velocity in this direction 
  double alpha0 = (0.03125*(hamil[5]*(3.0*BstarY_by_Bmag[6]-1.732050807568877*BstarY_by_Bmag[1])+hamil[2]*(3.0*BstarY_by_Bmag[3]-1.732050807568877*BstarY_by_Bmag[0]))*dfac_y)/m_; 

  double alpha[8]; 
  alpha[0] = (0.1767766952966368*(hamil[5]*(3.0*BstarY_by_Bmag[6]-1.732050807568877*BstarY_by_Bmag[1])+hamil[2]*(3.0*BstarY_by_Bmag[3]-1.732050807568877*BstarY_by_Bmag[0]))*dfac_y)/m_; 
  alpha[1] = (0.1767766952966368*(3.0*hamil[2]*BstarY_by_Bmag[6]+(3.0*BstarY_by_Bmag[3]-1.732050807568877*BstarY_by_Bmag[0])*hamil[5]-1.732050807568877*BstarY_by_Bmag[1]*hamil[2])*dfac_y)/m_; 
#if upwindType == SURFAVG 
  if (alpha0>0) { 
  incr[0] = 0.1767766952966368*(1.732050807568877*(alpha[1]*fl[6]+alpha[0]*fl[3])+alpha[1]*fl[1]+alpha[0]*fl[0])*dfac_v; 
  incr[1] = 0.1767766952966368*(1.732050807568877*(alpha[0]*fl[6]+alpha[1]*fl[3])+alpha[0]*fl[1]+fl[0]*alpha[1])*dfac_v; 
  incr[2] = 0.1767766952966368*(1.732050807568877*(alpha[1]*fl[11]+alpha[0]*fl[7])+alpha[1]*fl[5]+alpha[0]*fl[2])*dfac_v; 
  incr[3] = -0.1767766952966368*(3.0*(alpha[1]*fl[6]+alpha[0]*fl[3])+1.732050807568877*(alpha[1]*fl[1]+alpha[0]*fl[0]))*dfac_v; 
  incr[4] = 0.1767766952966368*(1.732050807568877*(alpha[1]*fl[13]+alpha[0]*fl[10])+alpha[1]*fl[8]+alpha[0]*fl[4])*dfac_v; 
  incr[5] = 0.1767766952966368*(1.732050807568877*(alpha[0]*fl[11]+alpha[1]*fl[7])+alpha[0]*fl[5]+alpha[1]*fl[2])*dfac_v; 
  incr[6] = -0.1767766952966368*(3.0*(alpha[0]*fl[6]+alpha[1]*fl[3])+1.732050807568877*(alpha[0]*fl[1]+fl[0]*alpha[1]))*dfac_v; 
  incr[7] = -0.1767766952966368*(3.0*(alpha[1]*fl[11]+alpha[0]*fl[7])+1.732050807568877*(alpha[1]*fl[5]+alpha[0]*fl[2]))*dfac_v; 
  incr[8] = 0.1767766952966368*(1.732050807568877*(alpha[0]*fl[13]+alpha[1]*fl[10])+alpha[0]*fl[8]+alpha[1]*fl[4])*dfac_v; 
  incr[9] = 0.1767766952966368*(1.732050807568877*(alpha[1]*fl[15]+alpha[0]*fl[14])+alpha[1]*fl[12]+alpha[0]*fl[9])*dfac_v; 
  incr[10] = -0.1767766952966368*(3.0*(alpha[1]*fl[13]+alpha[0]*fl[10])+1.732050807568877*(alpha[1]*fl[8]+alpha[0]*fl[4]))*dfac_v; 
  incr[11] = -0.1767766952966368*(3.0*(alpha[0]*fl[11]+alpha[1]*fl[7])+1.732050807568877*(alpha[0]*fl[5]+alpha[1]*fl[2]))*dfac_v; 
  incr[12] = 0.1767766952966368*(1.732050807568877*(alpha[0]*fl[15]+alpha[1]*fl[14])+alpha[0]*fl[12]+alpha[1]*fl[9])*dfac_v; 
  incr[13] = -0.1767766952966368*(3.0*(alpha[0]*fl[13]+alpha[1]*fl[10])+1.732050807568877*(alpha[0]*fl[8]+alpha[1]*fl[4]))*dfac_v; 
  incr[14] = -0.1767766952966368*(3.0*(alpha[1]*fl[15]+alpha[0]*fl[14])+1.732050807568877*(alpha[1]*fl[12]+alpha[0]*fl[9]))*dfac_v; 
  incr[15] = -0.1767766952966368*(3.0*(alpha[0]*fl[15]+alpha[1]*fl[14])+1.732050807568877*(alpha[0]*fl[12]+alpha[1]*fl[9]))*dfac_v; 
  } else { 
  incr[0] = -0.1767766952966368*(1.732050807568877*(alpha[1]*fr[6]+alpha[0]*fr[3])-1.0*(alpha[1]*fr[1]+alpha[0]*fr[0]))*dfac_v; 
  incr[1] = -0.1767766952966368*(1.732050807568877*(alpha[0]*fr[6]+alpha[1]*fr[3])-1.0*(alpha[0]*fr[1]+fr[0]*alpha[1]))*dfac_v; 
  incr[2] = -0.1767766952966368*(1.732050807568877*(alpha[1]*fr[11]+alpha[0]*fr[7])-1.0*(alpha[1]*fr[5]+alpha[0]*fr[2]))*dfac_v; 
  incr[3] = 0.1767766952966368*(3.0*(alpha[1]*fr[6]+alpha[0]*fr[3])-1.732050807568877*(alpha[1]*fr[1]+alpha[0]*fr[0]))*dfac_v; 
  incr[4] = -0.1767766952966368*(1.732050807568877*(alpha[1]*fr[13]+alpha[0]*fr[10])-1.0*(alpha[1]*fr[8]+alpha[0]*fr[4]))*dfac_v; 
  incr[5] = -0.1767766952966368*(1.732050807568877*(alpha[0]*fr[11]+alpha[1]*fr[7])-1.0*(alpha[0]*fr[5]+alpha[1]*fr[2]))*dfac_v; 
  incr[6] = 0.1767766952966368*(3.0*(alpha[0]*fr[6]+alpha[1]*fr[3])-1.732050807568877*(alpha[0]*fr[1]+fr[0]*alpha[1]))*dfac_v; 
  incr[7] = 0.1767766952966368*(3.0*(alpha[1]*fr[11]+alpha[0]*fr[7])-1.732050807568877*(alpha[1]*fr[5]+alpha[0]*fr[2]))*dfac_v; 
  incr[8] = -0.1767766952966368*(1.732050807568877*(alpha[0]*fr[13]+alpha[1]*fr[10])-1.0*(alpha[0]*fr[8]+alpha[1]*fr[4]))*dfac_v; 
  incr[9] = -0.1767766952966368*(1.732050807568877*(alpha[1]*fr[15]+alpha[0]*fr[14])-1.0*(alpha[1]*fr[12]+alpha[0]*fr[9]))*dfac_v; 
  incr[10] = 0.1767766952966368*(3.0*(alpha[1]*fr[13]+alpha[0]*fr[10])-1.732050807568877*(alpha[1]*fr[8]+alpha[0]*fr[4]))*dfac_v; 
  incr[11] = 0.1767766952966368*(3.0*(alpha[0]*fr[11]+alpha[1]*fr[7])-1.732050807568877*(alpha[0]*fr[5]+alpha[1]*fr[2]))*dfac_v; 
  incr[12] = -0.1767766952966368*(1.732050807568877*(alpha[0]*fr[15]+alpha[1]*fr[14])-1.0*(alpha[0]*fr[12]+alpha[1]*fr[9]))*dfac_v; 
  incr[13] = 0.1767766952966368*(3.0*(alpha[0]*fr[13]+alpha[1]*fr[10])-1.732050807568877*(alpha[0]*fr[8]+alpha[1]*fr[4]))*dfac_v; 
  incr[14] = 0.1767766952966368*(3.0*(alpha[1]*fr[15]+alpha[0]*fr[14])-1.732050807568877*(alpha[1]*fr[12]+alpha[0]*fr[9]))*dfac_v; 
  incr[15] = 0.1767766952966368*(3.0*(alpha[0]*fr[15]+alpha[1]*fr[14])-1.732050807568877*(alpha[0]*fr[12]+alpha[1]*fr[9]))*dfac_v; 
  }
#elif upwindType == QUAD 
double fupwind[8];
double fupwindQuad[8];
double alphaQuad;
  alphaQuad = 0.3535533905932737*alpha[0]-0.3535533905932737*alpha[1]; 
  fupwindQuad[0] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]))+0.4330127018922193*(fr[14]+fl[14]+fr[13]+fl[13])+0.25*fr[12]-0.25*fl[12]+0.4330127018922193*(fr[11]+fl[11])-0.4330127018922193*(fr[10]+fl[10])-0.25*(fr[9]+fr[8])+0.25*(fl[9]+fl[8])-0.4330127018922193*(fr[7]+fl[7]+fr[6]+fl[6])-0.25*fr[5]+0.25*(fl[5]+fr[4])-0.25*fl[4]+0.4330127018922193*(fr[3]+fl[3])+0.25*(fr[2]+fr[1])-0.25*(fl[2]+fl[1]+fr[0])+0.25*fl[0])*sgn(alphaQuad)+0.4330127018922193*fr[15]-0.4330127018922193*(fl[15]+fr[14]+fr[13])+0.4330127018922193*(fl[14]+fl[13])-0.25*(fr[12]+fl[12])-0.4330127018922193*fr[11]+0.4330127018922193*(fl[11]+fr[10])-0.4330127018922193*fl[10]+0.25*(fr[9]+fl[9]+fr[8]+fl[8])+0.4330127018922193*(fr[7]+fr[6])-0.4330127018922193*(fl[7]+fl[6])+0.25*(fr[5]+fl[5])-0.25*(fr[4]+fl[4])-0.4330127018922193*fr[3]+0.4330127018922193*fl[3]-0.25*(fr[2]+fl[2]+fr[1]+fl[1])+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*(alpha[1]+alpha[0]); 
  fupwindQuad[1] = 0.5*((0.4330127018922193*(fr[15]+fl[15]+fr[14]+fl[14])-0.4330127018922193*(fr[13]+fl[13])-0.25*fr[12]+0.25*fl[12]-0.4330127018922193*(fr[11]+fl[11]+fr[10]+fl[10])-0.25*fr[9]+0.25*(fl[9]+fr[8])-0.25*fl[8]-0.4330127018922193*(fr[7]+fl[7])+0.4330127018922193*(fr[6]+fl[6])+0.25*(fr[5]+fr[4])-0.25*(fl[5]+fl[4])+0.4330127018922193*(fr[3]+fl[3])+0.25*fr[2]-0.25*(fl[2]+fr[1]+fr[0])+0.25*(fl[1]+fl[0]))*sgn(alphaQuad)-0.4330127018922193*(fr[15]+fr[14])+0.4330127018922193*(fl[15]+fl[14]+fr[13])-0.4330127018922193*fl[13]+0.25*(fr[12]+fl[12])+0.4330127018922193*(fr[11]+fr[10])-0.4330127018922193*(fl[11]+fl[10])+0.25*(fr[9]+fl[9])-0.25*(fr[8]+fl[8])+0.4330127018922193*fr[7]-0.4330127018922193*(fl[7]+fr[6])+0.4330127018922193*fl[6]-0.25*(fr[5]+fl[5]+fr[4]+fl[4])-0.4330127018922193*fr[3]+0.4330127018922193*fl[3]-0.25*(fr[2]+fl[2])+0.25*(fr[1]+fl[1]+fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]-0.3535533905932737*alpha[1]; 
  fupwindQuad[2] = 0.5*((0.4330127018922193*(fr[15]+fl[15])-0.4330127018922193*(fr[14]+fl[14])+0.4330127018922193*(fr[13]+fl[13])-0.25*fr[12]+0.25*fl[12]-0.4330127018922193*(fr[11]+fl[11]+fr[10]+fl[10])+0.25*fr[9]-0.25*(fl[9]+fr[8])+0.25*fl[8]+0.4330127018922193*(fr[7]+fl[7])-0.4330127018922193*(fr[6]+fl[6])+0.25*(fr[5]+fr[4])-0.25*(fl[5]+fl[4])+0.4330127018922193*(fr[3]+fl[3])-0.25*fr[2]+0.25*(fl[2]+fr[1])-0.25*(fl[1]+fr[0])+0.25*fl[0])*sgn(alphaQuad)-0.4330127018922193*fr[15]+0.4330127018922193*(fl[15]+fr[14])-0.4330127018922193*(fl[14]+fr[13])+0.4330127018922193*fl[13]+0.25*(fr[12]+fl[12])+0.4330127018922193*(fr[11]+fr[10])-0.4330127018922193*(fl[11]+fl[10])-0.25*(fr[9]+fl[9])+0.25*(fr[8]+fl[8])-0.4330127018922193*fr[7]+0.4330127018922193*(fl[7]+fr[6])-0.4330127018922193*fl[6]-0.25*(fr[5]+fl[5]+fr[4]+fl[4])-0.4330127018922193*fr[3]+0.4330127018922193*fl[3]+0.25*(fr[2]+fl[2])-0.25*(fr[1]+fl[1])+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*(alpha[1]+alpha[0]); 
  fupwindQuad[3] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]+fr[14]+fl[14]+fr[13]+fl[13]))+0.25*fr[12]-0.25*fl[12]+0.4330127018922193*(fr[11]+fl[11])-0.4330127018922193*(fr[10]+fl[10])+0.25*(fr[9]+fr[8])-0.25*(fl[9]+fl[8])+0.4330127018922193*(fr[7]+fl[7]+fr[6]+fl[6])-0.25*fr[5]+0.25*(fl[5]+fr[4])-0.25*fl[4]+0.4330127018922193*(fr[3]+fl[3])-0.25*(fr[2]+fr[1]+fr[0])+0.25*(fl[2]+fl[1]+fl[0]))*sgn(alphaQuad)+0.4330127018922193*(fr[15]+fr[14]+fr[13])-0.4330127018922193*(fl[15]+fl[14]+fl[13])-0.25*(fr[12]+fl[12])-0.4330127018922193*fr[11]+0.4330127018922193*(fl[11]+fr[10])-0.4330127018922193*fl[10]-0.25*(fr[9]+fl[9]+fr[8]+fl[8])-0.4330127018922193*(fr[7]+fr[6])+0.4330127018922193*(fl[7]+fl[6])+0.25*(fr[5]+fl[5])-0.25*(fr[4]+fl[4])-0.4330127018922193*fr[3]+0.4330127018922193*fl[3]+0.25*(fr[2]+fl[2]+fr[1]+fl[1]+fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]-0.3535533905932737*alpha[1]; 
  fupwindQuad[4] = 0.5*((0.4330127018922193*(fr[15]+fl[15])-0.4330127018922193*(fr[14]+fl[14]+fr[13]+fl[13])-0.25*fr[12]+0.25*fl[12]+0.4330127018922193*(fr[11]+fl[11]+fr[10]+fl[10])+0.25*(fr[9]+fr[8])-0.25*(fl[9]+fl[8])-0.4330127018922193*(fr[7]+fl[7]+fr[6]+fl[6])-0.25*(fr[5]+fr[4])+0.25*(fl[5]+fl[4])+0.4330127018922193*(fr[3]+fl[3])+0.25*(fr[2]+fr[1])-0.25*(fl[2]+fl[1]+fr[0])+0.25*fl[0])*sgn(alphaQuad)-0.4330127018922193*fr[15]+0.4330127018922193*(fl[15]+fr[14]+fr[13])-0.4330127018922193*(fl[14]+fl[13])+0.25*(fr[12]+fl[12])-0.4330127018922193*(fr[11]+fr[10])+0.4330127018922193*(fl[11]+fl[10])-0.25*(fr[9]+fl[9]+fr[8]+fl[8])+0.4330127018922193*(fr[7]+fr[6])-0.4330127018922193*(fl[7]+fl[6])+0.25*(fr[5]+fl[5]+fr[4]+fl[4])-0.4330127018922193*fr[3]+0.4330127018922193*fl[3]-0.25*(fr[2]+fl[2]+fr[1]+fl[1])+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*(alpha[1]+alpha[0]); 
  fupwindQuad[5] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]+fr[14]+fl[14]))+0.4330127018922193*(fr[13]+fl[13])+0.25*fr[12]-0.25*fl[12]-0.4330127018922193*(fr[11]+fl[11])+0.4330127018922193*(fr[10]+fl[10])+0.25*fr[9]-0.25*(fl[9]+fr[8])+0.25*fl[8]-0.4330127018922193*(fr[7]+fl[7])+0.4330127018922193*(fr[6]+fl[6])+0.25*fr[5]-0.25*(fl[5]+fr[4])+0.25*fl[4]+0.4330127018922193*(fr[3]+fl[3])+0.25*fr[2]-0.25*(fl[2]+fr[1]+fr[0])+0.25*(fl[1]+fl[0]))*sgn(alphaQuad)+0.4330127018922193*(fr[15]+fr[14])-0.4330127018922193*(fl[15]+fl[14]+fr[13])+0.4330127018922193*fl[13]-0.25*(fr[12]+fl[12])+0.4330127018922193*fr[11]-0.4330127018922193*(fl[11]+fr[10])+0.4330127018922193*fl[10]-0.25*(fr[9]+fl[9])+0.25*(fr[8]+fl[8])+0.4330127018922193*fr[7]-0.4330127018922193*(fl[7]+fr[6])+0.4330127018922193*fl[6]-0.25*(fr[5]+fl[5])+0.25*(fr[4]+fl[4])-0.4330127018922193*fr[3]+0.4330127018922193*fl[3]-0.25*(fr[2]+fl[2])+0.25*(fr[1]+fl[1]+fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*alpha[0]-0.3535533905932737*alpha[1]; 
  fupwindQuad[6] = 0.5*(((-0.4330127018922193*(fr[15]+fl[15]))+0.4330127018922193*(fr[14]+fl[14])-0.4330127018922193*(fr[13]+fl[13])+0.25*fr[12]-0.25*fl[12]-0.4330127018922193*(fr[11]+fl[11])+0.4330127018922193*(fr[10]+fl[10])-0.25*fr[9]+0.25*(fl[9]+fr[8])-0.25*fl[8]+0.4330127018922193*(fr[7]+fl[7])-0.4330127018922193*(fr[6]+fl[6])+0.25*fr[5]-0.25*(fl[5]+fr[4])+0.25*fl[4]+0.4330127018922193*(fr[3]+fl[3])-0.25*fr[2]+0.25*(fl[2]+fr[1])-0.25*(fl[1]+fr[0])+0.25*fl[0])*sgn(alphaQuad)+0.4330127018922193*fr[15]-0.4330127018922193*(fl[15]+fr[14])+0.4330127018922193*(fl[14]+fr[13])-0.4330127018922193*fl[13]-0.25*(fr[12]+fl[12])+0.4330127018922193*fr[11]-0.4330127018922193*(fl[11]+fr[10])+0.4330127018922193*fl[10]+0.25*(fr[9]+fl[9])-0.25*(fr[8]+fl[8])-0.4330127018922193*fr[7]+0.4330127018922193*(fl[7]+fr[6])-0.4330127018922193*fl[6]-0.25*(fr[5]+fl[5])+0.25*(fr[4]+fl[4])-0.4330127018922193*fr[3]+0.4330127018922193*fl[3]+0.25*(fr[2]+fl[2])-0.25*(fr[1]+fl[1])+0.25*(fr[0]+fl[0])); 
  alphaQuad = 0.3535533905932737*(alpha[1]+alpha[0]); 
  fupwindQuad[7] = 0.5*((0.4330127018922193*(fr[15]+fl[15]+fr[14]+fl[14]+fr[13]+fl[13])-0.25*fr[12]+0.25*fl[12]+0.4330127018922193*(fr[11]+fl[11]+fr[10]+fl[10])-0.25*(fr[9]+fr[8])+0.25*(fl[9]+fl[8])+0.4330127018922193*(fr[7]+fl[7]+fr[6]+fl[6])-0.25*(fr[5]+fr[4])+0.25*(fl[5]+fl[4])+0.4330127018922193*(fr[3]+fl[3])-0.25*(fr[2]+fr[1]+fr[0])+0.25*(fl[2]+fl[1]+fl[0]))*sgn(alphaQuad)-0.4330127018922193*(fr[15]+fr[14]+fr[13])+0.4330127018922193*(fl[15]+fl[14]+fl[13])+0.25*(fr[12]+fl[12])-0.4330127018922193*(fr[11]+fr[10])+0.4330127018922193*(fl[11]+fl[10])+0.25*(fr[9]+fl[9]+fr[8]+fl[8])-0.4330127018922193*(fr[7]+fr[6])+0.4330127018922193*(fl[7]+fl[6])+0.25*(fr[5]+fl[5]+fr[4]+fl[4])-0.4330127018922193*fr[3]+0.4330127018922193*fl[3]+0.25*(fr[2]+fl[2]+fr[1]+fl[1]+fr[0]+fl[0])); 
  fupwind[0] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[1] = 0.3535533905932737*(fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*fupwindQuad[4]+fupwindQuad[3]-1.0*fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  fupwind[2] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4])+fupwindQuad[3]+fupwindQuad[2]-1.0*(fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[3] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]+fupwindQuad[5]+fupwindQuad[4]-1.0*(fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]+fupwindQuad[0])); 
  fupwind[4] = 0.3535533905932737*(fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]+fupwindQuad[3]-1.0*(fupwindQuad[2]+fupwindQuad[1])+fupwindQuad[0]); 
  fupwind[5] = 0.3535533905932737*(fupwindQuad[7]-1.0*fupwindQuad[6]+fupwindQuad[5]-1.0*(fupwindQuad[4]+fupwindQuad[3])+fupwindQuad[2]-1.0*fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[6] = 0.3535533905932737*(fupwindQuad[7]+fupwindQuad[6]-1.0*(fupwindQuad[5]+fupwindQuad[4]+fupwindQuad[3]+fupwindQuad[2])+fupwindQuad[1]+fupwindQuad[0]); 
  fupwind[7] = 0.3535533905932737*(fupwindQuad[7]-1.0*(fupwindQuad[6]+fupwindQuad[5])+fupwindQuad[4]-1.0*fupwindQuad[3]+fupwindQuad[2]+fupwindQuad[1]-1.0*fupwindQuad[0]); 
  incr[0] = 0.25*(alpha[1]*fupwind[1]+alpha[0]*fupwind[0])*dfac_v; 
  incr[1] = 0.25*(alpha[0]*fupwind[1]+fupwind[0]*alpha[1])*dfac_v; 
  incr[2] = 0.25*(alpha[1]*fupwind[4]+alpha[0]*fupwind[2])*dfac_v; 
  incr[3] = -0.4330127018922193*(alpha[1]*fupwind[1]+alpha[0]*fupwind[0])*dfac_v; 
  incr[4] = 0.25*(alpha[1]*fupwind[5]+alpha[0]*fupwind[3])*dfac_v; 
  incr[5] = 0.25*(alpha[0]*fupwind[4]+alpha[1]*fupwind[2])*dfac_v; 
  incr[6] = -0.4330127018922193*(alpha[0]*fupwind[1]+fupwind[0]*alpha[1])*dfac_v; 
  incr[7] = -0.4330127018922193*(alpha[1]*fupwind[4]+alpha[0]*fupwind[2])*dfac_v; 
  incr[8] = 0.25*(alpha[0]*fupwind[5]+alpha[1]*fupwind[3])*dfac_v; 
  incr[9] = 0.25*(alpha[1]*fupwind[7]+alpha[0]*fupwind[6])*dfac_v; 
  incr[10] = -0.4330127018922193*(alpha[1]*fupwind[5]+alpha[0]*fupwind[3])*dfac_v; 
  incr[11] = -0.4330127018922193*(alpha[0]*fupwind[4]+alpha[1]*fupwind[2])*dfac_v; 
  incr[12] = 0.25*(alpha[0]*fupwind[7]+alpha[1]*fupwind[6])*dfac_v; 
  incr[13] = -0.4330127018922193*(alpha[0]*fupwind[5]+alpha[1]*fupwind[3])*dfac_v; 
  incr[14] = -0.4330127018922193*(alpha[1]*fupwind[7]+alpha[0]*fupwind[6])*dfac_v; 
  incr[15] = -0.4330127018922193*(alpha[0]*fupwind[7]+alpha[1]*fupwind[6])*dfac_v; 

#endif 
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
  return std::abs(alpha0); 
} 
