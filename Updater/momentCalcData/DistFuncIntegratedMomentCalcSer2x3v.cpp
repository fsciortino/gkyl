#include <DistFuncMomentCalcModDecl.h> 
void IntMomentCalc2x3vSer_P1(const double *w, const double *dxv, const double *f, double *out) 
{ 
  const double volFact = dxv[0]*dxv[1]*dxv[2]*dxv[3]*dxv[4]/32; 
  out[0] += 5.656854249492382*f[0]*volFact; 
} 
void IntMomentCalc2x3vSer_P2(const double *w, const double *dxv, const double *f, double *out) 
{ 
  const double volFact = dxv[0]*dxv[1]*dxv[2]*dxv[3]*dxv[4]/32; 
  out[0] += 5.656854249492382*f[0]*volFact; 
} 
