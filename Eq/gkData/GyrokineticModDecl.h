#ifndef GYROKINETIC_MOD_DECL_H 
#define GYROKINETIC_MOD_DECL_H 
#include <cmath> 
#include <algorithm> 
#include <Positivity.h> 
#include <CartFieldBinOpModDecl.h> 
#define SURFAVG 1 
#define QUAD 2 
#define cflType QUAD 
#define upwindType QUAD 
template <typename T> int sgn(T val) { 
    return (T(0) < val) - (val < T(0)); 
}
extern "C" { 
double EmGyrokineticStep2Vol1x0vSerP1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out); 
double EmGyrokineticStep2VolPositivity1x0vSerP1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out, double *cflRateByDir); 
double GyrokineticVol1x0vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol1x0vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity1x0vSerP1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity1x0vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf1x0vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x0vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x0vSerStep2_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x0vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x0vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol1x0vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol1x0vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity1x0vSerP1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity1x0vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf1x0vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x0vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x0vSerStep2_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x0vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x0vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 


double calcSheathDeltaPhi1xSer_P1(const double *phi, const double *phiWall, const double zVal);
void calcSheathPartialReflectionWeakEquiv1x0vSer_P1(binOpData_t* data, const double wv, const double dv, 
                                                        const double zVal, const double vcut, 
                                                        const double *f, double *fhat);
void calcSheathPartialReflectionScaled1x0vSer_P1(binOpData_t* data, const double wv, const double dv, 
                                                     const double zVal, const double vcut, 
                                                     const double *f, double *fhat);
double EmGyrokineticStep2Vol1x0vSerP2(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out); 
double EmGyrokineticStep2VolPositivity1x0vSerP2(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out, double *cflRateByDir); 
double GyrokineticVol1x0vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol1x0vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity1x0vSerP2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity1x0vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf1x0vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x0vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x0vSerStep2_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x0vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x0vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol1x0vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol1x0vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity1x0vSerP2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity1x0vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf1x0vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x0vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x0vSerStep2_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x0vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x0vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 


double calcSheathDeltaPhi1xSer_P2(const double *phi, const double *phiWall, const double zVal);
void calcSheathPartialReflectionWeakEquiv1x0vSer_P2(binOpData_t* data, const double wv, const double dv, 
                                                        const double zVal, const double vcut, 
                                                        const double *f, double *fhat);
void calcSheathPartialReflectionScaled1x0vSer_P2(binOpData_t* data, const double wv, const double dv, 
                                                     const double zVal, const double vcut, 
                                                     const double *f, double *fhat);
double EmGyrokineticStep2Vol1x1vSerP1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out); 
double EmGyrokineticStep2VolPositivity1x1vSerP1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out, double *cflRateByDir); 
double GyrokineticVol1x1vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol1x1vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity1x1vSerP1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity1x1vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf1x1vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x1vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x1vSerStep2_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x1vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x1vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf1x1vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x1vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x1vSerStep2_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x1vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x1vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol1x1vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol1x1vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity1x1vSerP1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity1x1vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf1x1vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x1vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x1vSerStep2_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x1vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x1vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf1x1vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x1vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x1vSerStep2_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x1vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x1vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 


double calcSheathDeltaPhi1xSer_P1(const double *phi, const double *phiWall, const double zVal);
void calcSheathPartialReflectionWeakEquiv1x1vSer_P1(binOpData_t* data, const double wv, const double dv, 
                                                        const double zVal, const double vcut, 
                                                        const double *f, double *fhat);
void calcSheathPartialReflectionScaled1x1vSer_P1(binOpData_t* data, const double wv, const double dv, 
                                                     const double zVal, const double vcut, 
                                                     const double *f, double *fhat);
double EmGyrokineticStep2Vol1x1vSerP2(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out); 
double EmGyrokineticStep2VolPositivity1x1vSerP2(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out, double *cflRateByDir); 
double GyrokineticVol1x1vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol1x1vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity1x1vSerP2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity1x1vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf1x1vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x1vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x1vSerStep2_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x1vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x1vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf1x1vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x1vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x1vSerStep2_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x1vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x1vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol1x1vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol1x1vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity1x1vSerP2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity1x1vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf1x1vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x1vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x1vSerStep2_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x1vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x1vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf1x1vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x1vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x1vSerStep2_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x1vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x1vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 


double calcSheathDeltaPhi1xSer_P2(const double *phi, const double *phiWall, const double zVal);
void calcSheathPartialReflectionWeakEquiv1x1vSer_P2(binOpData_t* data, const double wv, const double dv, 
                                                        const double zVal, const double vcut, 
                                                        const double *f, double *fhat);
void calcSheathPartialReflectionScaled1x1vSer_P2(binOpData_t* data, const double wv, const double dv, 
                                                     const double zVal, const double vcut, 
                                                     const double *f, double *fhat);
double EmGyrokineticStep2Vol1x2vSerP1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out); 
double EmGyrokineticStep2VolPositivity1x2vSerP1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out, double *cflRateByDir); 
double GyrokineticVol1x2vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol1x2vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity1x2vSerP1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity1x2vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf1x2vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x2vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x2vSerStep2_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x2vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x2vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf1x2vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x2vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x2vSerStep2_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x2vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x2vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol1x2vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol1x2vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity1x2vSerP1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity1x2vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf1x2vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x2vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x2vSerStep2_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x2vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x2vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf1x2vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x2vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x2vSerStep2_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x2vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x2vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 


double calcSheathDeltaPhi1xSer_P1(const double *phi, const double *phiWall, const double zVal);
void calcSheathPartialReflectionWeakEquiv1x2vSer_P1(binOpData_t* data, const double wv, const double dv, 
                                                        const double zVal, const double vcut, 
                                                        const double *f, double *fhat);
void calcSheathPartialReflectionScaled1x2vSer_P1(binOpData_t* data, const double wv, const double dv, 
                                                     const double zVal, const double vcut, 
                                                     const double *f, double *fhat);
double EmGyrokineticStep2Vol1x2vSerP2(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out); 
double EmGyrokineticStep2VolPositivity1x2vSerP2(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out, double *cflRateByDir); 
double GyrokineticVol1x2vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol1x2vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity1x2vSerP2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity1x2vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf1x2vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x2vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x2vSerStep2_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x2vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x2vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf1x2vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x2vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x2vSerStep2_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x2vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x2vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol1x2vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol1x2vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity1x2vSerP2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity1x2vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf1x2vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x2vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x2vSerStep2_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x2vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x2vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf1x2vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf1x2vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf1x2vSerStep2_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity1x2vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity1x2vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 


double calcSheathDeltaPhi1xSer_P2(const double *phi, const double *phiWall, const double zVal);
void calcSheathPartialReflectionWeakEquiv1x2vSer_P2(binOpData_t* data, const double wv, const double dv, 
                                                        const double zVal, const double vcut, 
                                                        const double *f, double *fhat);
void calcSheathPartialReflectionScaled1x2vSer_P2(binOpData_t* data, const double wv, const double dv, 
                                                     const double zVal, const double vcut, 
                                                     const double *f, double *fhat);
double EmGyrokineticStep2Vol2x0vSerP1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out); 
double EmGyrokineticStep2VolPositivity2x0vSerP1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out, double *cflRateByDir); 
double GyrokineticVol2x0vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol2x0vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity2x0vSerP1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity2x0vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf2x0vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x0vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x0vSerStep2_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x0vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x0vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf2x0vSer_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x0vSer_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x0vSerStep2_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x0vSer_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x0vSer_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol2x0vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol2x0vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity2x0vSerP1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity2x0vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf2x0vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x0vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x0vSerStep2_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x0vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x0vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf2x0vSer_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x0vSer_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x0vSerStep2_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x0vSer_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x0vSer_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 


double calcSheathDeltaPhi2xSer_P1(const double *phi, const double *phiWall, const double zVal);
void calcSheathPartialReflectionWeakEquiv2x0vSer_P1(binOpData_t* data, const double wv, const double dv, 
                                                        const double zVal, const double vcut, 
                                                        const double *f, double *fhat);
void calcSheathPartialReflectionScaled2x0vSer_P1(binOpData_t* data, const double wv, const double dv, 
                                                     const double zVal, const double vcut, 
                                                     const double *f, double *fhat);
double EmGyrokineticStep2Vol2x0vSerP2(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out); 
double EmGyrokineticStep2VolPositivity2x0vSerP2(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out, double *cflRateByDir); 
double GyrokineticVol2x0vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol2x0vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity2x0vSerP2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity2x0vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf2x0vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x0vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x0vSerStep2_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x0vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x0vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf2x0vSer_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x0vSer_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x0vSerStep2_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x0vSer_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x0vSer_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol2x0vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol2x0vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity2x0vSerP2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity2x0vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf2x0vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x0vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x0vSerStep2_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x0vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x0vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf2x0vSer_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x0vSer_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x0vSerStep2_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x0vSer_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x0vSer_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 


double calcSheathDeltaPhi2xSer_P2(const double *phi, const double *phiWall, const double zVal);
void calcSheathPartialReflectionWeakEquiv2x0vSer_P2(binOpData_t* data, const double wv, const double dv, 
                                                        const double zVal, const double vcut, 
                                                        const double *f, double *fhat);
void calcSheathPartialReflectionScaled2x0vSer_P2(binOpData_t* data, const double wv, const double dv, 
                                                     const double zVal, const double vcut, 
                                                     const double *f, double *fhat);
double EmGyrokineticStep2Vol2x2vSerP1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out); 
double EmGyrokineticStep2VolPositivity2x2vSerP1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out, double *cflRateByDir); 
double GyrokineticVol2x2vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol2x2vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity2x2vSerP1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity2x2vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf2x2vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x2vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x2vSerStep2_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x2vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x2vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf2x2vSer_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x2vSer_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x2vSerStep2_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x2vSer_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x2vSer_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf2x2vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x2vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x2vSerStep2_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x2vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x2vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol2x2vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol2x2vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity2x2vSerP1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity2x2vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf2x2vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x2vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x2vSerStep2_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x2vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x2vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf2x2vSer_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x2vSer_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x2vSerStep2_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x2vSer_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x2vSer_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf2x2vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x2vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x2vSerStep2_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x2vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x2vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 


double calcSheathDeltaPhi2xSer_P1(const double *phi, const double *phiWall, const double zVal);
void calcSheathPartialReflectionWeakEquiv2x2vSer_P1(binOpData_t* data, const double wv, const double dv, 
                                                        const double zVal, const double vcut, 
                                                        const double *f, double *fhat);
void calcSheathPartialReflectionScaled2x2vSer_P1(binOpData_t* data, const double wv, const double dv, 
                                                     const double zVal, const double vcut, 
                                                     const double *f, double *fhat);
double EmGyrokineticStep2Vol2x2vSerP2(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out); 
double EmGyrokineticStep2VolPositivity2x2vSerP2(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out, double *cflRateByDir); 
double GyrokineticVol2x2vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol2x2vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity2x2vSerP2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity2x2vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf2x2vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x2vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x2vSerStep2_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x2vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x2vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf2x2vSer_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x2vSer_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x2vSerStep2_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x2vSer_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x2vSer_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf2x2vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x2vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x2vSerStep2_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x2vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x2vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol2x2vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol2x2vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity2x2vSerP2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity2x2vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf2x2vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x2vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x2vSerStep2_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x2vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x2vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf2x2vSer_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x2vSer_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x2vSerStep2_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x2vSer_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x2vSer_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf2x2vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf2x2vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf2x2vSerStep2_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity2x2vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity2x2vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 


double calcSheathDeltaPhi2xSer_P2(const double *phi, const double *phiWall, const double zVal);
void calcSheathPartialReflectionWeakEquiv2x2vSer_P2(binOpData_t* data, const double wv, const double dv, 
                                                        const double zVal, const double vcut, 
                                                        const double *f, double *fhat);
void calcSheathPartialReflectionScaled2x2vSer_P2(binOpData_t* data, const double wv, const double dv, 
                                                     const double zVal, const double vcut, 
                                                     const double *f, double *fhat);
double EmGyrokineticStep2Vol3x2vSerP1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out); 
double EmGyrokineticStep2VolPositivity3x2vSerP1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out, double *cflRateByDir); 
double GyrokineticVol3x2vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol3x2vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity3x2vSerP1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity3x2vSerP1_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf3x2vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_X_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Y_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Z_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Z_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Z_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Z_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Z_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Vpar_P1_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol3x2vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol3x2vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity3x2vSerP1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity3x2vSerP1_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf3x2vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_X_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Y_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Z_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Z_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Z_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Z_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Z_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Vpar_P1_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol3x2vSerP1_Bvars_3(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol3x2vSerP1_Bvars_3(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity3x2vSerP1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity3x2vSerP1_Bvars_3(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf3x2vSer_X_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_X_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_X_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_X_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_X_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Y_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Y_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Y_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Y_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Y_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Z_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Z_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Z_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Z_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Z_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Vpar_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Vpar_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Vpar_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Vpar_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Vpar_P1_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol3x2vSerP1_Bvars_1_3(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol3x2vSerP1_Bvars_1_3(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity3x2vSerP1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity3x2vSerP1_Bvars_1_3(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf3x2vSer_X_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_X_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_X_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_X_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_X_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Y_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Y_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Y_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Y_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Y_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Z_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Z_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Z_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Z_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Z_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Vpar_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Vpar_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Vpar_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Vpar_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Vpar_P1_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 


double calcSheathDeltaPhi3xSer_P1(const double *phi, const double *phiWall, const double zVal);
void calcSheathPartialReflectionWeakEquiv3x2vSer_P1(binOpData_t* data, const double wv, const double dv, 
                                                        const double zVal, const double vcut, 
                                                        const double *f, double *fhat);
void calcSheathPartialReflectionScaled3x2vSer_P1(binOpData_t* data, const double wv, const double dv, 
                                                     const double zVal, const double vcut, 
                                                     const double *f, double *fhat);
double EmGyrokineticStep2Vol3x2vSerP2(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out); 
double EmGyrokineticStep2VolPositivity3x2vSerP2(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *dApardt, 
                               const double *f, double *out, double *cflRateByDir); 
double GyrokineticVol3x2vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol3x2vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity3x2vSerP2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity3x2vSerP2_Bvars_0(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf3x2vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_X_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Y_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Z_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Z_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Z_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Z_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Z_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Vpar_P2_Bvars_0(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol3x2vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol3x2vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity3x2vSerP2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity3x2vSerP2_Bvars_1(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf3x2vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_X_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Y_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Z_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Z_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Z_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Z_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Z_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Vpar_P2_Bvars_1(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol3x2vSerP2_Bvars_3(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol3x2vSerP2_Bvars_3(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity3x2vSerP2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity3x2vSerP2_Bvars_3(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf3x2vSer_X_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_X_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_X_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_X_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_X_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Y_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Y_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Y_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Y_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Y_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Z_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Z_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Z_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Z_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Z_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Vpar_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Vpar_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Vpar_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Vpar_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Vpar_P2_Bvars_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 

double GyrokineticVol3x2vSerP2_Bvars_1_3(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out); 
double EmGyrokineticVol3x2vSerP2_Bvars_1_3(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar, 
                               const double *f, double *out); 
double GyrokineticVolPositivity3x2vSerP2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *f, double *out, double *cflRateByDir); 
double EmGyrokineticVolPositivity3x2vSerP2_Bvars_1_3(const double q_, const double m_, const double *w, const double *dxv, 
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, const double *Apar,
                               const double *f, double *outX, double *outV, double *cflRateByDir); 
double GyrokineticSurf3x2vSer_X_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_X_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_X_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_X_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_X_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Y_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Y_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Y_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Y_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Y_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Z_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Z_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Z_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Z_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Z_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurf3x2vSer_Vpar_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurf3x2vSer_Vpar_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtPrev, 
                               const double *fl, const double *fr, double *outl, double *outr, 
                               double *ohmModL, double *ohmModR); 
double EmGyrokineticSurf3x2vSerStep2_Vpar_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt, const double *dApardtProv, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double GyrokineticSurfPositivity3x2vSer_Vpar_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 
double EmGyrokineticSurfPositivity3x2vSer_Vpar_P2_Bvars_1_3(const double q_, const double m_, 
                               const double *w, const double *dxv, const double amax_in,
                               const double *Bmag, const double *BmagInv, const double *Gradpar, 
                               const double *BdriftX, const double *BdriftY, const double *Phi, 
                               const double *Apar, const double *dApardt,
                               const double dtApprox, const double *cflRateByDirL, const double *cflRateByDirR, 
                               const double *fl, const double *fr, double *outl, double *outr); 


double calcSheathDeltaPhi3xSer_P2(const double *phi, const double *phiWall, const double zVal);
void calcSheathPartialReflectionWeakEquiv3x2vSer_P2(binOpData_t* data, const double wv, const double dv, 
                                                        const double zVal, const double vcut, 
                                                        const double *f, double *fhat);
void calcSheathPartialReflectionScaled3x2vSer_P2(binOpData_t* data, const double wv, const double dv, 
                                                     const double zVal, const double vcut, 
                                                     const double *f, double *fhat);
void calcSheathReflection3x2vSer_P1(const double wv, const double dv, const double vlowerSq, const double vupperSq, const double zVal, const double q_, const double m_, const double *phi, const double *phiWall, const double *f, double *fRefl);
} 
#endif 
