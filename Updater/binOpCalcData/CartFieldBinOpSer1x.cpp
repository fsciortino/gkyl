#include <math.h> 
#include <CartFieldBinOpModDecl.h> 
 
using namespace Eigen; 
 
void CartFieldBinOpMultiply1xSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field. 
  // B:       scalar/vector field (must be vector if A is vector). 
  // Ncomp:   number of components of B (could be 1D, 2D, 3D, vector). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else. 
  // out:     output field A*B (same number of components as B). 
 
  double tmp[2]; 
 
  for (unsigned short int vd=0; vd<Ncomp; vd++) 
  { 
    unsigned short int b0 = 2*vd; 
    unsigned short int a0 = b0*eqNcomp; 
    // Component-wise (of the vectors) multiplication. 
    tmp[0] = 0.7071067811865475*A[a0+1]*B[b0+1]+0.7071067811865475*A[a0]*B[b0]; 
    tmp[1] = 0.7071067811865475*A[a0]*B[b0+1]+0.7071067811865475*A[a0+1]*B[b0]; 
 
    // This tmp allows for in-place multiplication. 
    for (unsigned short int i=0; i<2; i++) 
    { 
      out[b0+i] = tmp[i]; 
    } 
  } 
 
} 
 
void CartFieldBinOpMultiply1xSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field. 
  // B:       scalar/vector field (must be vector if A is vector). 
  // Ncomp:   number of components of B (could be 1D, 2D, 3D, vector). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else. 
  // out:     output field A*B (same number of components as B). 
 
  double tmp[3]; 
 
  for (unsigned short int vd=0; vd<Ncomp; vd++) 
  { 
    unsigned short int b0 = 3*vd; 
    unsigned short int a0 = b0*eqNcomp; 
    // Component-wise (of the vectors) multiplication. 
    tmp[0] = 0.7071067811865475*A[a0+2]*B[b0+2]+0.7071067811865475*A[a0+1]*B[b0+1]+0.7071067811865475*A[a0]*B[b0]; 
    tmp[1] = 0.6324555320336759*A[a0+1]*B[b0+2]+0.6324555320336759*A[a0+2]*B[b0+1]+0.7071067811865475*A[a0]*B[b0+1]+0.7071067811865475*A[a0+1]*B[b0]; 
    tmp[2] = 0.4517539514526256*A[a0+2]*B[b0+2]+0.7071067811865475*A[a0]*B[b0+2]+0.6324555320336759*A[a0+1]*B[b0+1]+0.7071067811865475*A[a0+2]*B[b0]; 
 
    // This tmp allows for in-place multiplication. 
    for (unsigned short int i=0; i<3; i++) 
    { 
      out[b0+i] = tmp[i]; 
    } 
  } 
 
} 
 
void CartFieldBinOpMultiply1xSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field. 
  // B:       scalar/vector field (must be vector if A is vector). 
  // Ncomp:   number of components of B (could be 1D, 2D, 3D, vector). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else. 
  // out:     output field A*B (same number of components as B). 
 
  double tmp[4]; 
 
  for (unsigned short int vd=0; vd<Ncomp; vd++) 
  { 
    unsigned short int b0 = 4*vd; 
    unsigned short int a0 = b0*eqNcomp; 
    // Component-wise (of the vectors) multiplication. 
    tmp[0] = 0.7071067811865475*A[a0+3]*B[b0+3]+0.7071067811865475*A[a0+2]*B[b0+2]+0.7071067811865475*A[a0+1]*B[b0+1]+0.7071067811865475*A[a0]*B[b0]; 
    tmp[1] = 0.6210590034081186*A[a0+2]*B[b0+3]+0.6210590034081186*A[a0+3]*B[b0+2]+0.6324555320336759*A[a0+1]*B[b0+2]+0.6324555320336759*A[a0+2]*B[b0+1]+0.7071067811865475*A[a0]*B[b0+1]+0.7071067811865475*A[a0+1]*B[b0]; 
    tmp[2] = 0.421637021355784*A[a0+3]*B[b0+3]+0.6210590034081186*A[a0+1]*B[b0+3]+0.4517539514526256*A[a0+2]*B[b0+2]+0.7071067811865475*A[a0]*B[b0+2]+0.6210590034081186*A[a0+3]*B[b0+1]+0.6324555320336759*A[a0+1]*B[b0+1]+0.7071067811865475*A[a0+2]*B[b0]; 
    tmp[3] = 0.421637021355784*A[a0+2]*B[b0+3]+0.7071067811865475*A[a0]*B[b0+3]+0.421637021355784*A[a0+3]*B[b0+2]+0.6210590034081186*A[a0+1]*B[b0+2]+0.6210590034081186*A[a0+2]*B[b0+1]+0.7071067811865475*A[a0+3]*B[b0]; 
 
    // This tmp allows for in-place multiplication. 
    for (unsigned short int i=0; i<4; i++) 
    { 
      out[b0+i] = tmp[i]; 
    } 
  } 
 
} 
 
void CartFieldBinOpMultiply1xSer_P4(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field. 
  // B:       scalar/vector field (must be vector if A is vector). 
  // Ncomp:   number of components of B (could be 1D, 2D, 3D, vector). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else. 
  // out:     output field A*B (same number of components as B). 
 
  double tmp[5]; 
 
  for (unsigned short int vd=0; vd<Ncomp; vd++) 
  { 
    unsigned short int b0 = 5*vd; 
    unsigned short int a0 = b0*eqNcomp; 
    // Component-wise (of the vectors) multiplication. 
    tmp[0] = 0.7071067811865475*A[a0+4]*B[b0+4]+0.7071067811865475*A[a0+3]*B[b0+3]+0.7071067811865475*A[a0+2]*B[b0+2]+0.7071067811865475*A[a0+1]*B[b0+1]+0.7071067811865475*A[a0]*B[b0]; 
    tmp[1] = 0.6172133998483679*A[a0+3]*B[b0+4]+0.6172133998483679*A[a0+4]*B[b0+3]+0.6210590034081186*A[a0+2]*B[b0+3]+0.6210590034081186*A[a0+3]*B[b0+2]+0.6324555320336759*A[a0+1]*B[b0+2]+0.6324555320336759*A[a0+2]*B[b0+1]+0.7071067811865475*A[a0]*B[b0+1]+0.7071067811865475*A[a0+1]*B[b0]; 
    tmp[2] = 0.410685410411478*A[a0+4]*B[b0+4]+0.6060915267313265*A[a0+2]*B[b0+4]+0.421637021355784*A[a0+3]*B[b0+3]+0.6210590034081186*A[a0+1]*B[b0+3]+0.6060915267313265*A[a0+4]*B[b0+2]+0.4517539514526256*A[a0+2]*B[b0+2]+0.7071067811865475*A[a0]*B[b0+2]+0.6210590034081186*A[a0+3]*B[b0+1]+0.6324555320336759*A[a0+1]*B[b0+1]+0.7071067811865475*A[a0+2]*B[b0]; 
    tmp[3] = 0.385694607919935*A[a0+3]*B[b0+4]+0.6172133998483679*A[a0+1]*B[b0+4]+0.385694607919935*A[a0+4]*B[b0+3]+0.421637021355784*A[a0+2]*B[b0+3]+0.7071067811865475*A[a0]*B[b0+3]+0.421637021355784*A[a0+3]*B[b0+2]+0.6210590034081186*A[a0+1]*B[b0+2]+0.6172133998483679*A[a0+4]*B[b0+1]+0.6210590034081186*A[a0+2]*B[b0+1]+0.7071067811865475*A[a0+3]*B[b0]; 
    tmp[4] = 0.3433105850715905*A[a0+4]*B[b0+4]+0.410685410411478*A[a0+2]*B[b0+4]+0.7071067811865475*A[a0]*B[b0+4]+0.385694607919935*A[a0+3]*B[b0+3]+0.6172133998483679*A[a0+1]*B[b0+3]+0.410685410411478*A[a0+4]*B[b0+2]+0.6060915267313265*A[a0+2]*B[b0+2]+0.6172133998483679*A[a0+3]*B[b0+1]+0.7071067811865475*A[a0+4]*B[b0]; 
 
    // This tmp allows for in-place multiplication. 
    for (unsigned short int i=0; i<5; i++) 
    { 
      out[b0+i] = tmp[i]; 
    } 
  } 
 
} 
 
void CartFieldBinOpDivide1xSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       denominator field (must be a scalar field). 
  // B:       numerator field (can be scalar or vector). 
  // Ncomp:   number of components of B (could be 1D, 2D, 3D, vector). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else. 
  // out:     output field (same number of components as B). 
 
  // Declare Eigen Matrix with triple basis tensor dotted with B vector. 
  Eigen::MatrixXd AEM(2,2); 
  // Declare Eigen Vector with coefficients of B. 
  Eigen::VectorXd BEV(2); 
  // Declare vector with solution to system of equations. 
  Eigen::VectorXd u(2); 
 
  // Fill AEM matrix. 
  AEM(0,0) = 0.7071067811865475*A[0]; 
  AEM(0,1) = 0.7071067811865475*A[1]; 
  AEM(1,0) = 0.7071067811865475*A[1]; 
  AEM(1,1) = 0.7071067811865475*A[0]; 
 
  for(unsigned short int vd=0; vd<Ncomp; vd++) 
  { 
    unsigned short int b0 = 2*vd; 
    // Fill BEV. 
    BEV << B[b0],B[b0+1]; 
 
    // Solve the system of equations. 
    u = AEM.colPivHouseholderQr().solve(BEV); 
 
    // Copy data from Eigen vector. 
    Eigen::Map<VectorXd>(out+vd*2,2,1) = u; 
  } 
} 
 
void CartFieldBinOpDivide1xSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       denominator field (must be a scalar field). 
  // B:       numerator field (can be scalar or vector). 
  // Ncomp:   number of components of B (could be 1D, 2D, 3D, vector). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else. 
  // out:     output field (same number of components as B). 
 
  // Declare Eigen Matrix with triple basis tensor dotted with B vector. 
  Eigen::MatrixXd AEM(3,3); 
  // Declare Eigen Vector with coefficients of B. 
  Eigen::VectorXd BEV(3); 
  // Declare vector with solution to system of equations. 
  Eigen::VectorXd u(3); 
 
  // Fill AEM matrix. 
  AEM(0,0) = 0.7071067811865475*A[0]; 
  AEM(0,1) = 0.7071067811865475*A[1]; 
  AEM(0,2) = 0.7071067811865475*A[2]; 
  AEM(1,0) = 0.7071067811865475*A[1]; 
  AEM(1,1) = 0.6324555320336759*A[2]+0.7071067811865475*A[0]; 
  AEM(1,2) = 0.6324555320336759*A[1]; 
  AEM(2,0) = 0.7071067811865475*A[2]; 
  AEM(2,1) = 0.6324555320336759*A[1]; 
  AEM(2,2) = 0.4517539514526256*A[2]+0.7071067811865475*A[0]; 
 
  for(unsigned short int vd=0; vd<Ncomp; vd++) 
  { 
    unsigned short int b0 = 3*vd; 
    // Fill BEV. 
    BEV << B[b0],B[b0+1],B[b0+2]; 
 
    // Solve the system of equations. 
    u = AEM.colPivHouseholderQr().solve(BEV); 
 
    // Copy data from Eigen vector. 
    Eigen::Map<VectorXd>(out+vd*3,3,1) = u; 
  } 
} 
 
void CartFieldBinOpDivide1xSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       denominator field (must be a scalar field). 
  // B:       numerator field (can be scalar or vector). 
  // Ncomp:   number of components of B (could be 1D, 2D, 3D, vector). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else. 
  // out:     output field (same number of components as B). 
 
  // Declare Eigen Matrix with triple basis tensor dotted with B vector. 
  Eigen::MatrixXd AEM(4,4); 
  // Declare Eigen Vector with coefficients of B. 
  Eigen::VectorXd BEV(4); 
  // Declare vector with solution to system of equations. 
  Eigen::VectorXd u(4); 
 
  // Fill AEM matrix. 
  AEM(0,0) = 0.7071067811865475*A[0]; 
  AEM(0,1) = 0.7071067811865475*A[1]; 
  AEM(0,2) = 0.7071067811865475*A[2]; 
  AEM(0,3) = 0.7071067811865475*A[3]; 
  AEM(1,0) = 0.7071067811865475*A[1]; 
  AEM(1,1) = 0.6324555320336759*A[2]+0.7071067811865475*A[0]; 
  AEM(1,2) = 0.6210590034081186*A[3]+0.6324555320336759*A[1]; 
  AEM(1,3) = 0.6210590034081186*A[2]; 
  AEM(2,0) = 0.7071067811865475*A[2]; 
  AEM(2,1) = 0.6210590034081186*A[3]+0.6324555320336759*A[1]; 
  AEM(2,2) = 0.4517539514526256*A[2]+0.7071067811865475*A[0]; 
  AEM(2,3) = 0.421637021355784*A[3]+0.6210590034081186*A[1]; 
  AEM(3,0) = 0.7071067811865475*A[3]; 
  AEM(3,1) = 0.6210590034081186*A[2]; 
  AEM(3,2) = 0.421637021355784*A[3]+0.6210590034081186*A[1]; 
  AEM(3,3) = 0.421637021355784*A[2]+0.7071067811865475*A[0]; 
 
  for(unsigned short int vd=0; vd<Ncomp; vd++) 
  { 
    unsigned short int b0 = 4*vd; 
    // Fill BEV. 
    BEV << B[b0],B[b0+1],B[b0+2],B[b0+3]; 
 
    // Solve the system of equations. 
    u = AEM.colPivHouseholderQr().solve(BEV); 
 
    // Copy data from Eigen vector. 
    Eigen::Map<VectorXd>(out+vd*4,4,1) = u; 
  } 
} 
 
void CartFieldBinOpDivide1xSer_P4(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       denominator field (must be a scalar field). 
  // B:       numerator field (can be scalar or vector). 
  // Ncomp:   number of components of B (could be 1D, 2D, 3D, vector). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else. 
  // out:     output field (same number of components as B). 
 
  // Declare Eigen Matrix with triple basis tensor dotted with B vector. 
  Eigen::MatrixXd AEM(5,5); 
  // Declare Eigen Vector with coefficients of B. 
  Eigen::VectorXd BEV(5); 
  // Declare vector with solution to system of equations. 
  Eigen::VectorXd u(5); 
 
  // Fill AEM matrix. 
  AEM(0,0) = 0.7071067811865475*A[0]; 
  AEM(0,1) = 0.7071067811865475*A[1]; 
  AEM(0,2) = 0.7071067811865475*A[2]; 
  AEM(0,3) = 0.7071067811865475*A[3]; 
  AEM(0,4) = 0.7071067811865475*A[4]; 
  AEM(1,0) = 0.7071067811865475*A[1]; 
  AEM(1,1) = 0.6324555320336759*A[2]+0.7071067811865475*A[0]; 
  AEM(1,2) = 0.6210590034081186*A[3]+0.6324555320336759*A[1]; 
  AEM(1,3) = 0.6172133998483679*A[4]+0.6210590034081186*A[2]; 
  AEM(1,4) = 0.6172133998483679*A[3]; 
  AEM(2,0) = 0.7071067811865475*A[2]; 
  AEM(2,1) = 0.6210590034081186*A[3]+0.6324555320336759*A[1]; 
  AEM(2,2) = 0.6060915267313265*A[4]+0.4517539514526256*A[2]+0.7071067811865475*A[0]; 
  AEM(2,3) = 0.421637021355784*A[3]+0.6210590034081186*A[1]; 
  AEM(2,4) = 0.410685410411478*A[4]+0.6060915267313265*A[2]; 
  AEM(3,0) = 0.7071067811865475*A[3]; 
  AEM(3,1) = 0.6172133998483679*A[4]+0.6210590034081186*A[2]; 
  AEM(3,2) = 0.421637021355784*A[3]+0.6210590034081186*A[1]; 
  AEM(3,3) = 0.385694607919935*A[4]+0.421637021355784*A[2]+0.7071067811865475*A[0]; 
  AEM(3,4) = 0.385694607919935*A[3]+0.6172133998483679*A[1]; 
  AEM(4,0) = 0.7071067811865475*A[4]; 
  AEM(4,1) = 0.6172133998483679*A[3]; 
  AEM(4,2) = 0.410685410411478*A[4]+0.6060915267313265*A[2]; 
  AEM(4,3) = 0.385694607919935*A[3]+0.6172133998483679*A[1]; 
  AEM(4,4) = 0.3433105850715905*A[4]+0.410685410411478*A[2]+0.7071067811865475*A[0]; 
 
  for(unsigned short int vd=0; vd<Ncomp; vd++) 
  { 
    unsigned short int b0 = 5*vd; 
    // Fill BEV. 
    BEV << B[b0],B[b0+1],B[b0+2],B[b0+3],B[b0+4]; 
 
    // Solve the system of equations. 
    u = AEM.colPivHouseholderQr().solve(BEV); 
 
    // Copy data from Eigen vector. 
    Eigen::Map<VectorXd>(out+vd*5,5,1) = u; 
  } 
} 
 
void CartFieldBinOpDotProduct1xSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field. 
  // B:       scalar/vector field (must be vector if A is vector). 
  // Ncomp:   number of components of B (could be 1D, 2D, 3D, vector). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (should be 1 here). 
  // out:     output field A.B (out only has one component). 
 
  // zero out. This is ok in this operator because there is no in-place dot-product. 
  for (unsigned short int vd=0; vd<2; vd++) 
  { 
    out[vd] = 0.0; 
  } 
 
  for (unsigned short int vd=0; vd<Ncomp; vd++) 
  { 
    unsigned short int a0 = 2*vd; 
    // Contribution to dot-product from weak multiplication of vd component. 
    out[0] += 0.7071067811865475*A[a0+1]*B[a0+1]+0.7071067811865475*A[a0]*B[a0]; 
    out[1] += 0.7071067811865475*A[a0]*B[a0+1]+0.7071067811865475*B[a0]*A[a0+1]; 
  } 
 
} 
 
void CartFieldBinOpDotProduct1xSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field. 
  // B:       scalar/vector field (must be vector if A is vector). 
  // Ncomp:   number of components of B (could be 1D, 2D, 3D, vector). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (should be 1 here). 
  // out:     output field A.B (out only has one component). 
 
  // zero out. This is ok in this operator because there is no in-place dot-product. 
  for (unsigned short int vd=0; vd<3; vd++) 
  { 
    out[vd] = 0.0; 
  } 
 
  for (unsigned short int vd=0; vd<Ncomp; vd++) 
  { 
    unsigned short int a0 = 3*vd; 
    // Contribution to dot-product from weak multiplication of vd component. 
    out[0] += 0.7071067811865475*A[a0+2]*B[a0+2]+0.7071067811865475*A[a0+1]*B[a0+1]+0.7071067811865475*A[a0]*B[a0]; 
    out[1] += 0.6324555320336759*A[a0+1]*B[a0+2]+0.6324555320336759*B[a0+1]*A[a0+2]+0.7071067811865475*A[a0]*B[a0+1]+0.7071067811865475*B[a0]*A[a0+1]; 
    out[2] += 0.4517539514526256*A[a0+2]*B[a0+2]+0.7071067811865475*A[a0]*B[a0+2]+0.7071067811865475*B[a0]*A[a0+2]+0.6324555320336759*A[a0+1]*B[a0+1]; 
  } 
 
} 
 
void CartFieldBinOpDotProduct1xSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field. 
  // B:       scalar/vector field (must be vector if A is vector). 
  // Ncomp:   number of components of B (could be 1D, 2D, 3D, vector). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (should be 1 here). 
  // out:     output field A.B (out only has one component). 
 
  // zero out. This is ok in this operator because there is no in-place dot-product. 
  for (unsigned short int vd=0; vd<4; vd++) 
  { 
    out[vd] = 0.0; 
  } 
 
  for (unsigned short int vd=0; vd<Ncomp; vd++) 
  { 
    unsigned short int a0 = 4*vd; 
    // Contribution to dot-product from weak multiplication of vd component. 
    out[0] += 0.7071067811865475*A[a0+3]*B[a0+3]+0.7071067811865475*A[a0+2]*B[a0+2]+0.7071067811865475*A[a0+1]*B[a0+1]+0.7071067811865475*A[a0]*B[a0]; 
    out[1] += 0.6210590034081186*A[a0+2]*B[a0+3]+0.6210590034081186*B[a0+2]*A[a0+3]+0.6324555320336759*A[a0+1]*B[a0+2]+0.6324555320336759*B[a0+1]*A[a0+2]+0.7071067811865475*A[a0]*B[a0+1]+0.7071067811865475*B[a0]*A[a0+1]; 
    out[2] += 0.421637021355784*A[a0+3]*B[a0+3]+0.6210590034081186*A[a0+1]*B[a0+3]+0.6210590034081186*B[a0+1]*A[a0+3]+0.4517539514526256*A[a0+2]*B[a0+2]+0.7071067811865475*A[a0]*B[a0+2]+0.7071067811865475*B[a0]*A[a0+2]+0.6324555320336759*A[a0+1]*B[a0+1]; 
    out[3] += 0.421637021355784*A[a0+2]*B[a0+3]+0.7071067811865475*A[a0]*B[a0+3]+0.421637021355784*B[a0+2]*A[a0+3]+0.7071067811865475*B[a0]*A[a0+3]+0.6210590034081186*A[a0+1]*B[a0+2]+0.6210590034081186*B[a0+1]*A[a0+2]; 
  } 
 
} 
 
void CartFieldBinOpDotProduct1xSer_P4(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field. 
  // B:       scalar/vector field (must be vector if A is vector). 
  // Ncomp:   number of components of B (could be 1D, 2D, 3D, vector). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (should be 1 here). 
  // out:     output field A.B (out only has one component). 
 
  // zero out. This is ok in this operator because there is no in-place dot-product. 
  for (unsigned short int vd=0; vd<5; vd++) 
  { 
    out[vd] = 0.0; 
  } 
 
  for (unsigned short int vd=0; vd<Ncomp; vd++) 
  { 
    unsigned short int a0 = 5*vd; 
    // Contribution to dot-product from weak multiplication of vd component. 
    out[0] += 0.7071067811865475*A[a0+4]*B[a0+4]+0.7071067811865475*A[a0+3]*B[a0+3]+0.7071067811865475*A[a0+2]*B[a0+2]+0.7071067811865475*A[a0+1]*B[a0+1]+0.7071067811865475*A[a0]*B[a0]; 
    out[1] += 0.6172133998483679*A[a0+3]*B[a0+4]+0.6172133998483679*B[a0+3]*A[a0+4]+0.6210590034081186*A[a0+2]*B[a0+3]+0.6210590034081186*B[a0+2]*A[a0+3]+0.6324555320336759*A[a0+1]*B[a0+2]+0.6324555320336759*B[a0+1]*A[a0+2]+0.7071067811865475*A[a0]*B[a0+1]+0.7071067811865475*B[a0]*A[a0+1]; 
    out[2] += 0.410685410411478*A[a0+4]*B[a0+4]+0.6060915267313265*A[a0+2]*B[a0+4]+0.6060915267313265*B[a0+2]*A[a0+4]+0.421637021355784*A[a0+3]*B[a0+3]+0.6210590034081186*A[a0+1]*B[a0+3]+0.6210590034081186*B[a0+1]*A[a0+3]+0.4517539514526256*A[a0+2]*B[a0+2]+0.7071067811865475*A[a0]*B[a0+2]+0.7071067811865475*B[a0]*A[a0+2]+0.6324555320336759*A[a0+1]*B[a0+1]; 
    out[3] += 0.385694607919935*A[a0+3]*B[a0+4]+0.6172133998483679*A[a0+1]*B[a0+4]+0.385694607919935*B[a0+3]*A[a0+4]+0.6172133998483679*B[a0+1]*A[a0+4]+0.421637021355784*A[a0+2]*B[a0+3]+0.7071067811865475*A[a0]*B[a0+3]+0.421637021355784*B[a0+2]*A[a0+3]+0.7071067811865475*B[a0]*A[a0+3]+0.6210590034081186*A[a0+1]*B[a0+2]+0.6210590034081186*B[a0+1]*A[a0+2]; 
    out[4] += 0.3433105850715905*A[a0+4]*B[a0+4]+0.410685410411478*A[a0+2]*B[a0+4]+0.7071067811865475*A[a0]*B[a0+4]+0.410685410411478*B[a0+2]*A[a0+4]+0.7071067811865475*B[a0]*A[a0+4]+0.385694607919935*A[a0+3]*B[a0+3]+0.6172133998483679*A[a0+1]*B[a0+3]+0.6172133998483679*B[a0+1]*A[a0+3]+0.6060915267313265*A[a0+2]*B[a0+2]; 
  } 
 
} 
 