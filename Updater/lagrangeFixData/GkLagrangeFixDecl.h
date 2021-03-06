#ifndef GK_LAGRANGE_FIX_H 
#define GK_LAGRANGE_FIX_H 

#include <../../Lib/gkyl_ipow.h>

extern "C" { 

void GkLagrangeFixSer1x1v1p(double *dm0, double *dm1, double *dm2, double *B, double mass, double *L, double *Nv, double *vc, double *f);

void GkLagrangeFixSer1x2v1p(double *dm0, double *dm1, double *dm2, double *B, double mass, double *L, double *Nv, double *vc, double *f);

void GkLagrangeFixSer2x2v1p(double *dm0, double *dm1, double *dm2, double *B, double mass, double *L, double *Nv, double *vc, double *f);

} 
#endif
