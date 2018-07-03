#ifndef CART_FIELD_BINOP_MOD_DECL_H 
#define CART_FIELD_BINOP_MOD_DECL_H 
 
// Eigen include statements. 
#include <Eigen/Dense> 
 
extern "C" { 
void CartFieldBinOpMultiply1xSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1xSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1xSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpMultiply2xSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply2xSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply2xSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpMultiply3xSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply3xSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply3xSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDivide1xSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1xSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1xSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDivide2xSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide2xSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide2xSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDivide3xSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide3xSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide3xSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDotProduct1xSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDotProduct1xSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDotProduct1xSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDotProduct2xSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDotProduct2xSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDotProduct2xSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDotProduct3xSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDotProduct3xSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDotProduct3xSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpMultiply1x1vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x1vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x1vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x2vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x2vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x2vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x3vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x3vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x3vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpMultiply2x2vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply2x2vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply2x2vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply2x3vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply2x3vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply2x3vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpMultiply3x3vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply3x3vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply3x3vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDivide1x1vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x1vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x1vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x2vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x2vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x2vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x3vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x3vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x3vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDivide2x2vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide2x2vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide2x2vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide2x3vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide2x3vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide2x3vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDivide3x3vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide3x3vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide3x3vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpMultiply3x2vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply3x2vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply3x2vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide3x2vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide3x2vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide3x2vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1xMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1xMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1xMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpMultiply2xMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply2xMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply2xMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpMultiply3xMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply3xMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply3xMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDivide1xMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1xMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1xMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDivide2xMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide2xMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide2xMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDivide3xMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide3xMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide3xMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDotProduct1xMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDotProduct1xMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDotProduct1xMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDotProduct2xMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDotProduct2xMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDotProduct2xMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDotProduct3xMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDotProduct3xMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDotProduct3xMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpMultiply1x1vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x1vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x1vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x2vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x2vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x2vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x3vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x3vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply1x3vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpMultiply2x2vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply2x2vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply2x2vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply2x3vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply2x3vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply2x3vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpMultiply3x3vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply3x3vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply3x3vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDivide1x1vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x1vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x1vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x2vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x2vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x2vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x3vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x3vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide1x3vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDivide2x2vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide2x2vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide2x2vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide2x3vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide2x3vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide2x3vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpDivide3x3vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide3x3vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide3x3vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 


void CartFieldBinOpMultiply3x2vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply3x2vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpMultiply3x2vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide3x2vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide3x2vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

void CartFieldBinOpDivide3x2vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out); 

} 
#endif 