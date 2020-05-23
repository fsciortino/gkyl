#include <VlasovModDecl.h> 
double VlasovVolStream2x2vMaxP2(const double *w, const double *dxv, const double *f, double *out) 
{ 
// w[NDIM]: Cell-center coordinates. dxv[NDIM]: Cell spacing. f: Input distribution function. out: Incremented output 
  double dv0dx0 = dxv[2]/dxv[0]; 
  double w0dx0 = w[2]/dxv[0]; 
  double dv1dx1 = dxv[3]/dxv[1]; 
  double w1dx1 = w[3]/dxv[1]; 

  out[1] += 3.464101615137754*f[0]*w0dx0+f[3]*dv0dx0; 
  out[2] += 3.464101615137754*f[0]*w1dx1+f[4]*dv1dx1; 
  out[5] += 3.464101615137754*f[1]*w1dx1+3.464101615137754*f[2]*w0dx0+f[8]*dv1dx1+f[7]*dv0dx0; 
  out[6] += 3.464101615137754*f[3]*w0dx0+(0.8944271909999159*f[13]+f[0])*dv0dx0; 
  out[7] += 3.464101615137754*f[3]*w1dx1+f[10]*dv1dx1; 
  out[8] += 3.464101615137754*f[4]*w0dx0+f[10]*dv0dx0; 
  out[9] += 3.464101615137754*f[4]*w1dx1+(0.8944271909999159*f[14]+f[0])*dv1dx1; 
  out[11] += 7.745966692414834*f[1]*w0dx0+2.23606797749979*f[6]*dv0dx0; 
  out[12] += 7.745966692414834*f[2]*w1dx1+2.23606797749979*f[9]*dv1dx1; 
  return std::abs(w0dx0)+std::abs(w1dx1)+dv0dx0/2+dv1dx1/2; 
} 
