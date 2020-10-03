#ifndef CONSTDIFFUSION_MOD_DECL_H 
#define CONSTDIFFUSION_MOD_DECL_H 
#include <cmath> 

extern "C" { 

double ConstDiffusionVol1xSerP1_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf1xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf1xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity1xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 


double ConstDiffusionVol1xSerP2_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf1xSerP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf1xSerP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 



double ConstDiffusionVol2xSerP1_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf2xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity2xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol2xSerP1_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf2xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity2xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf2xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity2xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol2xSerP1_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf2xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity2xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 


double ConstDiffusionVol2xSerP2_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf2xSerP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xSerP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol2xSerP2_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf2xSerP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xSerP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf2xSerP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xSerP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol2xSerP2_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf2xSerP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xSerP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 



double ConstDiffusionVol3xSerP1_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xSerP1_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xSerP1_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xSerP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xSerP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xSerP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xSerP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xSerP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xSerP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xSerP1_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xSerP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xSerP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xSerP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xSerP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xSerP1_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xSerP1_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xSerP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xSerP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xSerP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xSerP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xSerP1_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xSerP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xSerP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 


double ConstDiffusionVol3xSerP2_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xSerP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xSerP2_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xSerP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xSerP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xSerP2_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xSerP2_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP2_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xSerP2_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP2_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xSerP2_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP2_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xSerP2_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xSerP2_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP2_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xSerP2_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP2_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xSerP2_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xSerP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xSerP2_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xSerP2_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP2_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xSerP2_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP2_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xSerP2_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xSerP2_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xSerP2_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 



double ConstDiffusionVol4xSerP1_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP1_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP1_diffDirs234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP1_diffDirs1234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP1_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP1_diffDirs24(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP1_diffDirs124(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP1_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP1_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP1_diffDirs34(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP1_diffDirs134(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP1_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP1_diffDirs4(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP1_diffDirs14(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP1_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 


double ConstDiffusionVol4xSerP2_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP2_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP2_diffDirs234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP2_diffDirs1234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP2_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP2_diffDirs24(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP2_diffDirs124(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP2_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP2_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP2_diffDirs34(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP2_diffDirs134(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP2_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP2_diffDirs4(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP2_diffDirs14(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xSerP2_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xSerP2_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xSerP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xSerP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 



double ConstDiffusionVol5xSerP1_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs34(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs1345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs12345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs2345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs134(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs1234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs35(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs135(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs1235(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs235(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs4(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs45(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs145(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs1245(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs245(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs14(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs124(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs24(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs5(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs15(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs125(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs25(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP1_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 


double ConstDiffusionVol5xSerP2_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs34(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs1345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs12345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs2345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs134(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs1234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs35(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs135(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs1235(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs235(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs4(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs45(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs145(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs1245(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs245(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs14(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs124(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs24(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs5(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs15(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs125(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs25(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xSerP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xSerP2_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xSerP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xSerP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 



double ConstDiffusionVol6xSerP1_diffDirs4(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs45(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs1456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs1456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs12456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs12456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs123456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs123456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs123456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs123456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs123456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs123456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs123456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs123456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs123456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs123456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs123456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs123456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs123456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs123456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs123456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs123456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs123456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs123456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs123456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs13456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs13456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs13456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs13456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs13456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs13456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs13456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs13456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs13456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs13456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs13456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs13456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs13456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs13456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs13456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs13456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs2456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs2456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs2456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs2456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs2456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs23456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs23456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs23456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs23456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs23456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs23456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs23456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs23456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs23456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs23456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs23456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs23456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs23456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs23456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs23456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs23456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs3456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs3456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs3456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs3456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs3456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs3456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs3456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs3456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs3456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs3456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs3456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs3456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs3456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs145(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs1245(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs12345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs1345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs245(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs2345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs46(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs46_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs46_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs46_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs46_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs46_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs46_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs146(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs146_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs146_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs146_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs146_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs146_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs146_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs146_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs146_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs146_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs1246(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs1246_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1246_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1246_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1246_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1246_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1246_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1246_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1246_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1246_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1246_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1246_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1246_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs12346(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs12346_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12346_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12346_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12346_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12346_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12346_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs1346(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs1346_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1346_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1346_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs246(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs246_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs246_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs246_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs246_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs246_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs246_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs246_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs246_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs246_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs2346(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs2346_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2346_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2346_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs2346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs2346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs2346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs346(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs14(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs124(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs1234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs134(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs24(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs34(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs5(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs56(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs56_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs56_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs56_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs56_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs56_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs56_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs156(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs156_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs156_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs156_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs156_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs156_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs156_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs156_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs156_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs156_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs1256(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs1256_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1256_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1256_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1256_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1256_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1256_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1256_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1256_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1256_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1256_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1256_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1256_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs12356(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs12356_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12356_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12356_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12356_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12356_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12356_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs1356(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs1356_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1356_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1356_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs256(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs256_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs256_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs256_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs256_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs256_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs256_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs256_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs256_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs256_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs2356(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs2356_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2356_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2356_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs2356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs2356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs2356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs356(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs15(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs125(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs1235(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs135(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs25(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs235(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs35(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs6(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs6_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs6_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs6_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs16(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs16_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs16_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs16_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs16_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs16_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs16_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs126(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs126_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs126_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs126_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs126_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs126_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs126_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs126_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs126_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs126_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs1236(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs1236_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1236_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1236_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1236_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1236_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1236_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1236_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1236_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1236_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs1236_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1236_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1236_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs136(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs136_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs136_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs136_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs136_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs136_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs136_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs136_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs136_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs136_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs26(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs26_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs26_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs26_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs26_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs26_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs26_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs236(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs236_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs236_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs236_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs236_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs236_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs236_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs236_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs236_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs236_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs36(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs36_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs36_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs36_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs36_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs36_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs36_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xSerP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xSerP1_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xSerP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xSerP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xSerP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 




double ConstDiffusionVol1xMaxP1_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf1xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf1xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity1xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 


double ConstDiffusionVol1xMaxP2_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf1xMaxP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf1xMaxP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 



double ConstDiffusionVol2xMaxP1_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf2xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity2xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol2xMaxP1_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf2xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity2xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf2xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity2xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol2xMaxP1_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf2xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity2xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 


double ConstDiffusionVol2xMaxP2_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf2xMaxP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xMaxP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol2xMaxP2_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf2xMaxP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xMaxP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf2xMaxP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xMaxP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol2xMaxP2_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf2xMaxP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf2xMaxP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 



double ConstDiffusionVol3xMaxP1_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xMaxP1_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xMaxP1_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xMaxP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xMaxP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xMaxP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xMaxP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xMaxP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xMaxP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xMaxP1_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xMaxP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xMaxP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xMaxP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xMaxP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xMaxP1_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xMaxP1_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xMaxP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xMaxP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xMaxP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xMaxP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xMaxP1_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xMaxP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity3xMaxP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 


double ConstDiffusionVol3xMaxP2_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xMaxP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xMaxP2_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xMaxP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xMaxP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xMaxP2_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xMaxP2_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP2_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xMaxP2_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP2_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xMaxP2_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP2_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xMaxP2_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xMaxP2_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP2_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xMaxP2_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP2_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xMaxP2_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xMaxP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xMaxP2_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xMaxP2_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP2_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf3xMaxP2_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP2_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol3xMaxP2_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf3xMaxP2_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf3xMaxP2_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 



double ConstDiffusionVol4xMaxP1_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP1_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP1_diffDirs234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP1_diffDirs1234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP1_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP1_diffDirs24(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP1_diffDirs124(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP1_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP1_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP1_diffDirs34(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP1_diffDirs134(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP1_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP1_diffDirs4(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP1_diffDirs14(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP1_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity4xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 


double ConstDiffusionVol4xMaxP2_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP2_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP2_diffDirs234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP2_diffDirs1234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP2_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP2_diffDirs24(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP2_diffDirs124(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP2_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP2_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP2_diffDirs34(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP2_diffDirs134(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP2_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP2_diffDirs4(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP2_diffDirs14(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf4xMaxP2_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol4xMaxP2_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf4xMaxP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf4xMaxP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 



double ConstDiffusionVol5xMaxP1_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs34(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs1345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs12345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs2345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs134(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs1234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs35(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs135(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs1235(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs235(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs4(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs45(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs145(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs1245(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs245(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs14(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs124(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs24(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs5(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs15(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs125(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs25(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP1_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity5xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 


double ConstDiffusionVol5xMaxP2_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs34(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs1345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs12345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs2345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs134(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs1234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs35(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs135(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs1235(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs235(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs4(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs45(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs145(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs1245(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs245(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs14(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs124(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs24(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs5(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs15(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs125(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs25(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf5xMaxP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol5xMaxP2_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf5xMaxP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf5xMaxP2_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 



double ConstDiffusionVol6xMaxP1_diffDirs4(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs4_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs45(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs45_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs45_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs1456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs1456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs12456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs12456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs123456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs123456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs123456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs123456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs123456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs123456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs123456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs123456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs123456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs123456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs123456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs123456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs123456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs123456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs123456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs123456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs123456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs123456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs123456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs13456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs13456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs13456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs13456_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs13456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs13456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs13456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs13456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs13456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs13456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs13456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs13456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs13456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs13456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs13456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs13456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs2456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs2456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs2456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs2456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs2456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs23456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs23456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs23456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs23456_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs23456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs23456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs23456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs23456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs23456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs23456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs23456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs23456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs23456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs23456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs23456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs23456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs3456(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs3456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs3456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs3456_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs3456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs3456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs3456_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs3456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs3456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs3456_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs3456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs3456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs3456_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs145(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs145_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs145_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs145_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs1245(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1245_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs12345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs1345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1345_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs245(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs245_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs245_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs245_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs2345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2345_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs345(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs345_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs345_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs345_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs46(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs46_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs46_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs46_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs46_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs46_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs46_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs146(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs146_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs146_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs146_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs146_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs146_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs146_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs146_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs146_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs146_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs1246(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs1246_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1246_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1246_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1246_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1246_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1246_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1246_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1246_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1246_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1246_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1246_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1246_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs12346(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs12346_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12346_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12346_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12346_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12346_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12346_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs1346(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs1346_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1346_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1346_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs246(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs246_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs246_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs246_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs246_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs246_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs246_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs246_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs246_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs246_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs2346(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs2346_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2346_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2346_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs2346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs2346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs2346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs346(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs346_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs346_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs346_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs14(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs14_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs14_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs124(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs124_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs124_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs124_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs1234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1234_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs134(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs134_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs134_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs134_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs24(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs24_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs24_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs234(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs234_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs234_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs234_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs34(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs34_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs34_X4(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs5(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs5_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs56(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs56_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs56_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs56_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs56_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs56_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs56_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs156(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs156_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs156_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs156_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs156_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs156_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs156_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs156_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs156_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs156_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs1256(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs1256_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1256_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1256_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1256_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1256_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1256_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1256_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1256_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1256_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1256_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1256_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1256_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs12356(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs12356_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12356_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12356_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12356_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12356_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12356_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs1356(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs1356_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1356_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1356_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs256(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs256_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs256_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs256_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs256_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs256_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs256_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs256_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs256_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs256_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs2356(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs2356_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2356_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2356_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs2356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs2356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs2356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs356(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs356_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs356_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs356_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs15(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs15_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs15_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs125(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs125_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs125_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs125_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs1235(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1235_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs135(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs135_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs135_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs135_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs25(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs25_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs25_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs235(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs235_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs235_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs235_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs35(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs35_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs35_X5(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs6(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs6_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs6_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs6_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs16(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs16_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs16_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs16_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs16_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs16_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs16_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs126(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs126_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs126_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs126_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs126_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs126_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs126_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs126_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs126_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs126_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs1236(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs1236_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1236_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1236_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1236_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1236_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1236_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1236_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1236_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1236_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs1236_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1236_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1236_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs136(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs136_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs136_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs136_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs136_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs136_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs136_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs136_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs136_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs136_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs26(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs26_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs26_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs26_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs26_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs26_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs26_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs236(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs236_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs236_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs236_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs236_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs236_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs236_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs236_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs236_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs236_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs36(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs36_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs36_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs36_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs36_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs36_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs36_X6(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs1(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs1_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs12(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs12_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs123(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs123_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs123_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs123_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs13(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs13_X1(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs13_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs2(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs2_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs23(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs23_X2(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurf6xMaxP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs23_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 

double ConstDiffusionVol6xMaxP1_diffDirs3(const double *w, const double *dx, const double *nu, const double *f, double *out); 
void ConstDiffusionSurf6xMaxP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionBoundarySurf6xMaxP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const int *idxl, const int *idxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 
void ConstDiffusionSurfPositivity6xMaxP1_diffDirs3_X3(const double *wl, const double *wr, const double *dxl, const double *dxr, const double *nu, const double *fl, const double *fr, double *outl, double *outr); 





} 
#endif 

