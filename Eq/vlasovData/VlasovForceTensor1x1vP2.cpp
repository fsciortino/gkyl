#include <VlasovModDecl.h> 
__host__ __device__ double VlasovVolForce1x1vTensorP2(const double *w, const double *dxv, const double *E, const double *f, double *out) 
{ 
  // w[NDIM]: Cell-center coordinates. dxv[NDIM]: Cell spacing. E/f: Input force/distribution function. out: Incremented output 
  double dv10 = 2/dxv[1]; 
  const double *E0 = &E[0]; 
  out[2] += (1.224744871391589*E0[2]*f[4]+1.224744871391589*E0[1]*f[1]+1.224744871391589*E0[0]*f[0])*dv10; 
  out[3] += (1.095445115010332*E0[1]*f[4]+1.095445115010332*f[1]*E0[2]+1.224744871391589*E0[0]*f[1]+1.224744871391589*f[0]*E0[1])*dv10; 
  out[5] += (2.738612787525831*E0[2]*f[6]+2.738612787525831*E0[1]*f[3]+2.738612787525831*E0[0]*f[2])*dv10; 
  out[6] += (0.7824607964359517*E0[2]*f[4]+1.224744871391589*E0[0]*f[4]+1.224744871391589*f[0]*E0[2]+1.095445115010332*E0[1]*f[1])*dv10; 
  out[7] += (2.449489742783178*E0[1]*f[6]+2.449489742783178*E0[2]*f[3]+2.738612787525831*E0[0]*f[3]+2.738612787525831*E0[1]*f[2])*dv10; 
  out[8] += (1.749635530559413*E0[2]*f[6]+2.738612787525831*E0[0]*f[6]+2.449489742783178*E0[1]*f[3]+2.738612787525831*E0[2]*f[2])*dv10; 

  return std::abs(E0[0])*dv10*0.5; 
} 
