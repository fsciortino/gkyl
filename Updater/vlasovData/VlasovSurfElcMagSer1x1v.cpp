#include <VlasovModDecl.h> 
void VlasovSurfElcMag1x1vSer_VX_P1(const double *w, const double *dxv, const double *EM, const double *fl, const double *fr, double *outl, double *outr) 
{ 
// w: Cell-center coordinates. dxv[NDIM]: Cell spacing. E: EM field, fl/fr: Distribution function in left/right cells 
// outl/outr: output distribution function in left/right cells 
  double dv10 = 2/dxv[1]; 
  const double *E0 = &EM[0]; 

  const double dv1 = dxv[1], wv1 = w[1]; 

  const double *B0 = &EM[6]; 
  const double *B1 = &EM[8]; 
  const double *B2 = &EM[10]; 

  double incr[4]; 

  const double amid = 0.7071067811865475*E0[0]; 
  if (amid>0) { 
  incr[0] = 0.6123724356957944*E0[1]*fl[3]*dv10+0.6123724356957944*E0[0]*fl[2]*dv10+0.3535533905932737*fl[1]*E0[1]*dv10+0.3535533905932737*fl[0]*E0[0]*dv10; 
  incr[1] = 0.6123724356957944*E0[0]*fl[3]*dv10+0.6123724356957944*E0[1]*fl[2]*dv10+0.3535533905932737*fl[0]*E0[1]*dv10+0.3535533905932737*E0[0]*fl[1]*dv10; 
  incr[2] = (-1.060660171779821*E0[1]*fl[3]*dv10)-1.060660171779821*E0[0]*fl[2]*dv10-0.6123724356957944*fl[1]*E0[1]*dv10-0.6123724356957944*fl[0]*E0[0]*dv10; 
  incr[3] = (-1.060660171779821*E0[0]*fl[3]*dv10)-1.060660171779821*E0[1]*fl[2]*dv10-0.6123724356957944*fl[0]*E0[1]*dv10-0.6123724356957944*E0[0]*fl[1]*dv10; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += incr[2]; 
  outl[3] += incr[3]; 
  } else { 
  incr[0] = (-0.6123724356957944*E0[1]*fr[3]*dv10)-0.6123724356957944*E0[0]*fr[2]*dv10+0.3535533905932737*fr[1]*E0[1]*dv10+0.3535533905932737*fr[0]*E0[0]*dv10; 
  incr[1] = (-0.6123724356957944*E0[0]*fr[3]*dv10)-0.6123724356957944*E0[1]*fr[2]*dv10+0.3535533905932737*fr[0]*E0[1]*dv10+0.3535533905932737*E0[0]*fr[1]*dv10; 
  incr[2] = 1.060660171779821*E0[1]*fr[3]*dv10+1.060660171779821*E0[0]*fr[2]*dv10-0.6123724356957944*fr[1]*E0[1]*dv10-0.6123724356957944*fr[0]*E0[0]*dv10; 
  incr[3] = 1.060660171779821*E0[0]*fr[3]*dv10+1.060660171779821*E0[1]*fr[2]*dv10-0.6123724356957944*fr[0]*E0[1]*dv10-0.6123724356957944*E0[0]*fr[1]*dv10; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += incr[2]; 
  outl[3] += incr[3]; 
  } 
} 
void VlasovSurfElcMag1x1vSer_VX_P2(const double *w, const double *dxv, const double *EM, const double *fl, const double *fr, double *outl, double *outr) 
{ 
// w: Cell-center coordinates. dxv[NDIM]: Cell spacing. E: EM field, fl/fr: Distribution function in left/right cells 
// outl/outr: output distribution function in left/right cells 
  double dv10 = 2/dxv[1]; 
  const double *E0 = &EM[0]; 

  const double dv1 = dxv[1], wv1 = w[1]; 

  const double *B0 = &EM[9]; 
  const double *B1 = &EM[12]; 
  const double *B2 = &EM[15]; 

  double incr[8]; 

  const double amid = 0.7071067811865475*E0[0]-0.7905694150420947*E0[2]; 
  if (amid>0) { 
  incr[0] = 0.7905694150420948*E0[1]*fl[7]*dv10+0.6123724356957944*E0[2]*fl[6]*dv10+0.7905694150420947*E0[0]*fl[5]*dv10+0.3535533905932737*E0[2]*fl[4]*dv10+0.6123724356957944*E0[1]*fl[3]*dv10+0.6123724356957944*E0[0]*fl[2]*dv10+0.3535533905932737*fl[1]*E0[1]*dv10+0.3535533905932737*fl[0]*E0[0]*dv10; 
  incr[1] = 0.7071067811865475*E0[2]*fl[7]*dv10+0.7905694150420948*E0[0]*fl[7]*dv10+0.5477225575051661*E0[1]*fl[6]*dv10+0.7905694150420947*E0[1]*fl[5]*dv10+0.3162277660168379*E0[1]*fl[4]*dv10+0.5477225575051661*E0[2]*fl[3]*dv10+0.6123724356957944*E0[0]*fl[3]*dv10+0.3162277660168379*fl[1]*E0[2]*dv10+0.6123724356957944*E0[1]*fl[2]*dv10+0.3535533905932737*fl[0]*E0[1]*dv10+0.3535533905932737*E0[0]*fl[1]*dv10; 
  incr[2] = (-1.369306393762915*E0[1]*fl[7]*dv10)-1.060660171779821*E0[2]*fl[6]*dv10-1.369306393762915*E0[0]*fl[5]*dv10-0.6123724356957944*E0[2]*fl[4]*dv10-1.060660171779821*E0[1]*fl[3]*dv10-1.060660171779821*E0[0]*fl[2]*dv10-0.6123724356957944*fl[1]*E0[1]*dv10-0.6123724356957944*fl[0]*E0[0]*dv10; 
  incr[3] = (-1.224744871391589*E0[2]*fl[7]*dv10)-1.369306393762915*E0[0]*fl[7]*dv10-0.9486832980505138*E0[1]*fl[6]*dv10-1.369306393762915*E0[1]*fl[5]*dv10-0.5477225575051661*E0[1]*fl[4]*dv10-0.9486832980505137*E0[2]*fl[3]*dv10-1.060660171779821*E0[0]*fl[3]*dv10-0.5477225575051661*fl[1]*E0[2]*dv10-1.060660171779821*E0[1]*fl[2]*dv10-0.6123724356957944*fl[0]*E0[1]*dv10-0.6123724356957944*E0[0]*fl[1]*dv10; 
  incr[4] = 0.7071067811865475*E0[1]*fl[7]*dv10+0.3912303982179757*E0[2]*fl[6]*dv10+0.6123724356957944*E0[0]*fl[6]*dv10+0.7905694150420947*E0[2]*fl[5]*dv10+0.2258769757263128*E0[2]*fl[4]*dv10+0.3535533905932737*E0[0]*fl[4]*dv10+0.5477225575051661*E0[1]*fl[3]*dv10+0.6123724356957944*fl[2]*E0[2]*dv10+0.3535533905932737*fl[0]*E0[2]*dv10+0.3162277660168379*fl[1]*E0[1]*dv10; 
  incr[5] = 1.767766952966369*E0[1]*fl[7]*dv10+1.369306393762915*E0[2]*fl[6]*dv10+1.767766952966368*E0[0]*fl[5]*dv10+0.7905694150420947*E0[2]*fl[4]*dv10+1.369306393762915*E0[1]*fl[3]*dv10+1.369306393762915*E0[0]*fl[2]*dv10+0.7905694150420947*fl[1]*E0[1]*dv10+0.7905694150420947*fl[0]*E0[0]*dv10; 
  incr[6] = (-1.224744871391589*E0[1]*fl[7]*dv10)-0.6776309271789384*E0[2]*fl[6]*dv10-1.060660171779821*E0[0]*fl[6]*dv10-1.369306393762915*E0[2]*fl[5]*dv10-0.3912303982179757*E0[2]*fl[4]*dv10-0.6123724356957944*E0[0]*fl[4]*dv10-0.9486832980505138*E0[1]*fl[3]*dv10-1.060660171779821*fl[2]*E0[2]*dv10-0.6123724356957944*fl[0]*E0[2]*dv10-0.5477225575051661*fl[1]*E0[1]*dv10; 
  incr[7] = 1.58113883008419*E0[2]*fl[7]*dv10+1.767766952966368*E0[0]*fl[7]*dv10+1.224744871391589*E0[1]*fl[6]*dv10+1.767766952966369*E0[1]*fl[5]*dv10+0.7071067811865475*E0[1]*fl[4]*dv10+1.224744871391589*E0[2]*fl[3]*dv10+1.369306393762915*E0[0]*fl[3]*dv10+0.7071067811865475*fl[1]*E0[2]*dv10+1.369306393762915*E0[1]*fl[2]*dv10+0.7905694150420948*fl[0]*E0[1]*dv10+0.7905694150420948*E0[0]*fl[1]*dv10; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += incr[2]; 
  outl[3] += incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += -1.0*incr[5]; 
  outl[6] += incr[6]; 
  outl[7] += -1.0*incr[7]; 
  } else { 
  incr[0] = 0.7905694150420948*E0[1]*fr[7]*dv10-0.6123724356957944*E0[2]*fr[6]*dv10+0.7905694150420947*E0[0]*fr[5]*dv10+0.3535533905932737*E0[2]*fr[4]*dv10-0.6123724356957944*E0[1]*fr[3]*dv10-0.6123724356957944*E0[0]*fr[2]*dv10+0.3535533905932737*fr[1]*E0[1]*dv10+0.3535533905932737*fr[0]*E0[0]*dv10; 
  incr[1] = 0.7071067811865475*E0[2]*fr[7]*dv10+0.7905694150420948*E0[0]*fr[7]*dv10-0.5477225575051661*E0[1]*fr[6]*dv10+0.7905694150420947*E0[1]*fr[5]*dv10+0.3162277660168379*E0[1]*fr[4]*dv10-0.5477225575051661*E0[2]*fr[3]*dv10-0.6123724356957944*E0[0]*fr[3]*dv10+0.3162277660168379*fr[1]*E0[2]*dv10-0.6123724356957944*E0[1]*fr[2]*dv10+0.3535533905932737*fr[0]*E0[1]*dv10+0.3535533905932737*E0[0]*fr[1]*dv10; 
  incr[2] = (-1.369306393762915*E0[1]*fr[7]*dv10)+1.060660171779821*E0[2]*fr[6]*dv10-1.369306393762915*E0[0]*fr[5]*dv10-0.6123724356957944*E0[2]*fr[4]*dv10+1.060660171779821*E0[1]*fr[3]*dv10+1.060660171779821*E0[0]*fr[2]*dv10-0.6123724356957944*fr[1]*E0[1]*dv10-0.6123724356957944*fr[0]*E0[0]*dv10; 
  incr[3] = (-1.224744871391589*E0[2]*fr[7]*dv10)-1.369306393762915*E0[0]*fr[7]*dv10+0.9486832980505138*E0[1]*fr[6]*dv10-1.369306393762915*E0[1]*fr[5]*dv10-0.5477225575051661*E0[1]*fr[4]*dv10+0.9486832980505137*E0[2]*fr[3]*dv10+1.060660171779821*E0[0]*fr[3]*dv10-0.5477225575051661*fr[1]*E0[2]*dv10+1.060660171779821*E0[1]*fr[2]*dv10-0.6123724356957944*fr[0]*E0[1]*dv10-0.6123724356957944*E0[0]*fr[1]*dv10; 
  incr[4] = 0.7071067811865475*E0[1]*fr[7]*dv10-0.3912303982179757*E0[2]*fr[6]*dv10-0.6123724356957944*E0[0]*fr[6]*dv10+0.7905694150420947*E0[2]*fr[5]*dv10+0.2258769757263128*E0[2]*fr[4]*dv10+0.3535533905932737*E0[0]*fr[4]*dv10-0.5477225575051661*E0[1]*fr[3]*dv10-0.6123724356957944*fr[2]*E0[2]*dv10+0.3535533905932737*fr[0]*E0[2]*dv10+0.3162277660168379*fr[1]*E0[1]*dv10; 
  incr[5] = 1.767766952966369*E0[1]*fr[7]*dv10-1.369306393762915*E0[2]*fr[6]*dv10+1.767766952966368*E0[0]*fr[5]*dv10+0.7905694150420947*E0[2]*fr[4]*dv10-1.369306393762915*E0[1]*fr[3]*dv10-1.369306393762915*E0[0]*fr[2]*dv10+0.7905694150420947*fr[1]*E0[1]*dv10+0.7905694150420947*fr[0]*E0[0]*dv10; 
  incr[6] = (-1.224744871391589*E0[1]*fr[7]*dv10)+0.6776309271789384*E0[2]*fr[6]*dv10+1.060660171779821*E0[0]*fr[6]*dv10-1.369306393762915*E0[2]*fr[5]*dv10-0.3912303982179757*E0[2]*fr[4]*dv10-0.6123724356957944*E0[0]*fr[4]*dv10+0.9486832980505138*E0[1]*fr[3]*dv10+1.060660171779821*fr[2]*E0[2]*dv10-0.6123724356957944*fr[0]*E0[2]*dv10-0.5477225575051661*fr[1]*E0[1]*dv10; 
  incr[7] = 1.58113883008419*E0[2]*fr[7]*dv10+1.767766952966368*E0[0]*fr[7]*dv10-1.224744871391589*E0[1]*fr[6]*dv10+1.767766952966369*E0[1]*fr[5]*dv10+0.7071067811865475*E0[1]*fr[4]*dv10-1.224744871391589*E0[2]*fr[3]*dv10-1.369306393762915*E0[0]*fr[3]*dv10+0.7071067811865475*fr[1]*E0[2]*dv10-1.369306393762915*E0[1]*fr[2]*dv10+0.7905694150420948*fr[0]*E0[1]*dv10+0.7905694150420948*E0[0]*fr[1]*dv10; 

  outr[0] += incr[0]; 
  outr[1] += incr[1]; 
  outr[2] += incr[2]; 
  outr[3] += incr[3]; 
  outr[4] += incr[4]; 
  outr[5] += incr[5]; 
  outr[6] += incr[6]; 
  outr[7] += incr[7]; 

  outl[0] += -1.0*incr[0]; 
  outl[1] += -1.0*incr[1]; 
  outl[2] += incr[2]; 
  outl[3] += incr[3]; 
  outl[4] += -1.0*incr[4]; 
  outl[5] += -1.0*incr[5]; 
  outl[6] += incr[6]; 
  outl[7] += -1.0*incr[7]; 
  } 
} 
