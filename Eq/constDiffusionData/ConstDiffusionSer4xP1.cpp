#include <ConstDiffusionModDecl.h> 
double ConstDiffusionVol4xSerP1_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[1]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[1]*dx[1]); 


  return (rdxSq4nu[0])*0.6666666666666666;

} 
double ConstDiffusionVol4xSerP1_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[2]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[1]*dx[1]); 
  rdxSq4nu[1] = 4.0*nu[1]/(dx[2]*dx[2]); 


  return (rdxSq4nu[0]+rdxSq4nu[1])*0.6666666666666666;

} 
double ConstDiffusionVol4xSerP1_diffDirs234(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[3]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[1]*dx[1]); 
  rdxSq4nu[1] = 4.0*nu[1]/(dx[2]*dx[2]); 
  rdxSq4nu[2] = 4.0*nu[2]/(dx[3]*dx[3]); 


  return (rdxSq4nu[0]+rdxSq4nu[1]+rdxSq4nu[2])*0.6666666666666666;

} 
double ConstDiffusionVol4xSerP1_diffDirs1234(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[4]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[0]*dx[0]); 
  rdxSq4nu[1] = 4.0*nu[1]/(dx[1]*dx[1]); 
  rdxSq4nu[2] = 4.0*nu[2]/(dx[2]*dx[2]); 
  rdxSq4nu[3] = 4.0*nu[3]/(dx[3]*dx[3]); 


  return (rdxSq4nu[0]+rdxSq4nu[1]+rdxSq4nu[2]+rdxSq4nu[3])*0.6666666666666666;

} 
double ConstDiffusionVol4xSerP1_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[3]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[0]*dx[0]); 
  rdxSq4nu[1] = 4.0*nu[1]/(dx[1]*dx[1]); 
  rdxSq4nu[2] = 4.0*nu[2]/(dx[2]*dx[2]); 


  return (rdxSq4nu[0]+rdxSq4nu[1]+rdxSq4nu[2])*0.6666666666666666;

} 
double ConstDiffusionVol4xSerP1_diffDirs24(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[2]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[1]*dx[1]); 
  rdxSq4nu[1] = 4.0*nu[1]/(dx[3]*dx[3]); 


  return (rdxSq4nu[0]+rdxSq4nu[1])*0.6666666666666666;

} 
double ConstDiffusionVol4xSerP1_diffDirs124(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[3]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[0]*dx[0]); 
  rdxSq4nu[1] = 4.0*nu[1]/(dx[1]*dx[1]); 
  rdxSq4nu[2] = 4.0*nu[2]/(dx[3]*dx[3]); 


  return (rdxSq4nu[0]+rdxSq4nu[1]+rdxSq4nu[2])*0.6666666666666666;

} 
double ConstDiffusionVol4xSerP1_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[2]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[0]*dx[0]); 
  rdxSq4nu[1] = 4.0*nu[1]/(dx[1]*dx[1]); 


  return (rdxSq4nu[0]+rdxSq4nu[1])*0.6666666666666666;

} 
double ConstDiffusionVol4xSerP1_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[1]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[2]*dx[2]); 


  return (rdxSq4nu[0])*0.6666666666666666;

} 
double ConstDiffusionVol4xSerP1_diffDirs34(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[2]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[2]*dx[2]); 
  rdxSq4nu[1] = 4.0*nu[1]/(dx[3]*dx[3]); 


  return (rdxSq4nu[0]+rdxSq4nu[1])*0.6666666666666666;

} 
double ConstDiffusionVol4xSerP1_diffDirs134(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[3]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[0]*dx[0]); 
  rdxSq4nu[1] = 4.0*nu[1]/(dx[2]*dx[2]); 
  rdxSq4nu[2] = 4.0*nu[2]/(dx[3]*dx[3]); 


  return (rdxSq4nu[0]+rdxSq4nu[1]+rdxSq4nu[2])*0.6666666666666666;

} 
double ConstDiffusionVol4xSerP1_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[2]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[0]*dx[0]); 
  rdxSq4nu[1] = 4.0*nu[1]/(dx[2]*dx[2]); 


  return (rdxSq4nu[0]+rdxSq4nu[1])*0.6666666666666666;

} 
double ConstDiffusionVol4xSerP1_diffDirs4(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[1]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[3]*dx[3]); 


  return (rdxSq4nu[0])*0.6666666666666666;

} 
double ConstDiffusionVol4xSerP1_diffDirs14(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[2]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[0]*dx[0]); 
  rdxSq4nu[1] = 4.0*nu[1]/(dx[3]*dx[3]); 


  return (rdxSq4nu[0]+rdxSq4nu[1])*0.6666666666666666;

} 
double ConstDiffusionVol4xSerP1_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out) 
{ 
  // w[4]:   Cell-center coordinates.
  // dx[4]:  Cell spacing.
  // nu[4]:  diffusion coefficient (collisionality).
  // f:      Input distribution function.
  // out:    Incremented output 
  double rdxSq4nu[1]; 
  rdxSq4nu[0] = 4.0*nu[0]/(dx[0]*dx[0]); 


  return (rdxSq4nu[0])*0.6666666666666666;

} 
