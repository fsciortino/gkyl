#include <math.h> 
#include <CartFieldBinOpModDecl.h> 
 
using namespace Eigen; 
 
void CartFieldBinOpMultiply2x2vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field in configuration space. 
  // B:       scalar field in phase space. 
  // Ncomp:   number of components of B (should =1 here). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (should=1 here). 
  // out:     output field A*B (same number of components as B). 
 
  double tmp[5]; 
  tmp[0] = 0.5*A[2]*B[2]+0.5*A[1]*B[1]+0.5*A[0]*B[0]; 
  tmp[1] = 0.5*A[0]*B[1]+0.5*B[0]*A[1]; 
  tmp[2] = 0.5*A[0]*B[2]+0.5*B[0]*A[2]; 
  tmp[3] = 0.5*A[0]*B[3]; 
  tmp[4] = 0.5*A[0]*B[4]; 
 
  // This tmp allows for in-place multiplication. 
  for (unsigned short int i=0; i<5; i++) 
  { 
    out[i] = tmp[i]; 
  } 
 
} 
 
void CartFieldBinOpMultiply2x2vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field in configuration space. 
  // B:       scalar field in phase space. 
  // Ncomp:   number of components of B (should =1 here). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (should=1 here). 
  // out:     output field A*B (same number of components as B). 
 
  double tmp[15]; 
  tmp[0] = 0.5*A[5]*B[12]+0.5*A[4]*B[11]+0.5*A[3]*B[5]+0.5*A[2]*B[2]+0.5*A[1]*B[1]+0.5*A[0]*B[0]; 
  tmp[1] = 0.4472135954999579*A[1]*B[11]+0.5*A[2]*B[5]+0.4472135954999579*B[1]*A[4]+0.5*B[2]*A[3]+0.5*A[0]*B[1]+0.5*B[0]*A[1]; 
  tmp[2] = 0.4472135954999579*A[2]*B[12]+0.5*A[1]*B[5]+0.4472135954999579*B[2]*A[5]+0.5*B[1]*A[3]+0.5*A[0]*B[2]+0.5*B[0]*A[2]; 
  tmp[3] = 0.5*A[2]*B[7]+0.5*A[1]*B[6]+0.5*A[0]*B[3]; 
  tmp[4] = 0.5*A[2]*B[9]+0.5*A[1]*B[8]+0.5*A[0]*B[4]; 
  tmp[5] = 0.4472135954999579*A[3]*B[12]+0.4472135954999579*A[3]*B[11]+0.4472135954999579*A[5]*B[5]+0.4472135954999579*A[4]*B[5]+0.5*A[0]*B[5]+0.5*B[0]*A[3]+0.5*A[1]*B[2]+0.5*B[1]*A[2]; 
  tmp[6] = 0.5*A[3]*B[7]+0.4472135954999579*A[4]*B[6]+0.5*A[0]*B[6]+0.5*A[1]*B[3]; 
  tmp[7] = 0.4472135954999579*A[5]*B[7]+0.5*A[0]*B[7]+0.5*A[3]*B[6]+0.5*A[2]*B[3]; 
  tmp[8] = 0.5*A[3]*B[9]+0.4472135954999579*A[4]*B[8]+0.5*A[0]*B[8]+0.5*A[1]*B[4]; 
  tmp[9] = 0.4472135954999579*A[5]*B[9]+0.5*A[0]*B[9]+0.5*A[3]*B[8]+0.5*A[2]*B[4]; 
  tmp[10] = 0.5*A[0]*B[10]; 
  tmp[11] = 0.31943828249997*A[4]*B[11]+0.5*A[0]*B[11]+0.4472135954999579*A[3]*B[5]+0.5*B[0]*A[4]+0.4472135954999579*A[1]*B[1]; 
  tmp[12] = 0.31943828249997*A[5]*B[12]+0.5*A[0]*B[12]+0.4472135954999579*A[3]*B[5]+0.5*B[0]*A[5]+0.4472135954999579*A[2]*B[2]; 
  tmp[13] = 0.5*A[0]*B[13]; 
  tmp[14] = 0.5*A[0]*B[14]; 
 
  // This tmp allows for in-place multiplication. 
  for (unsigned short int i=0; i<15; i++) 
  { 
    out[i] = tmp[i]; 
  } 
 
} 
 
void CartFieldBinOpMultiply2x2vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field in configuration space. 
  // B:       scalar field in phase space. 
  // Ncomp:   number of components of B (should =1 here). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (should=1 here). 
  // out:     output field A*B (same number of components as B). 
 
  double tmp[35]; 
  tmp[0] = 0.5*A[9]*B[32]+0.5*A[8]*B[31]+0.5*A[7]*B[20]+0.5*A[6]*B[19]+0.5*A[5]*B[12]+0.5*A[4]*B[11]+0.5*A[3]*B[5]+0.5*A[2]*B[2]+0.5*A[1]*B[1]+0.5*A[0]*B[0]; 
  tmp[1] = 0.4391550328268398*A[4]*B[31]+0.5000000000000001*A[5]*B[20]+0.447213595499958*A[3]*B[19]+0.5000000000000001*A[7]*B[12]+0.4391550328268398*A[8]*B[11]+0.4472135954999579*A[1]*B[11]+0.447213595499958*B[5]*A[6]+0.5*A[2]*B[5]+0.4472135954999579*B[1]*A[4]+0.5*B[2]*A[3]+0.5*A[0]*B[1]+0.5*B[0]*A[1]; 
  tmp[2] = 0.4391550328268398*A[5]*B[32]+0.447213595499958*A[3]*B[20]+0.5000000000000001*A[4]*B[19]+0.4391550328268398*A[9]*B[12]+0.4472135954999579*A[2]*B[12]+0.5000000000000001*A[6]*B[11]+0.447213595499958*B[5]*A[7]+0.5*A[1]*B[5]+0.4472135954999579*B[2]*A[5]+0.5*B[1]*A[3]+0.5*A[0]*B[2]+0.5*B[0]*A[2]; 
  tmp[3] = 0.5000000000000001*A[5]*B[22]+0.5000000000000001*A[4]*B[21]+0.5*A[3]*B[15]+0.5*A[2]*B[7]+0.5*A[1]*B[6]+0.5*A[0]*B[3]; 
  tmp[4] = 0.5000000000000001*A[5]*B[26]+0.5000000000000001*A[4]*B[25]+0.5*A[3]*B[16]+0.5*A[2]*B[9]+0.5*A[1]*B[8]+0.5*A[0]*B[4]; 
  tmp[5] = 0.4391550328268399*A[7]*B[32]+0.4391550328268399*A[6]*B[31]+0.4391550328268399*A[9]*B[20]+0.4*A[6]*B[20]+0.447213595499958*A[2]*B[20]+0.4391550328268399*A[8]*B[19]+0.4*A[7]*B[19]+0.447213595499958*A[1]*B[19]+0.4472135954999579*A[3]*B[12]+0.4472135954999579*A[3]*B[11]+0.447213595499958*B[2]*A[7]+0.447213595499958*B[1]*A[6]+0.4472135954999579*A[5]*B[5]+0.4472135954999579*A[4]*B[5]+0.5*A[0]*B[5]+0.5*B[0]*A[3]+0.5*A[1]*B[2]+0.5*B[1]*A[2]; 
  tmp[6] = 0.5*A[7]*B[22]+0.4391550328268399*A[8]*B[21]+0.447213595499958*A[1]*B[21]+0.447213595499958*A[6]*B[15]+0.5*A[2]*B[15]+0.5*A[3]*B[7]+0.4472135954999579*A[4]*B[6]+0.5*A[0]*B[6]+0.5*A[1]*B[3]; 
  tmp[7] = 0.4391550328268399*A[9]*B[22]+0.447213595499958*A[2]*B[22]+0.5*A[6]*B[21]+0.447213595499958*A[7]*B[15]+0.5*A[1]*B[15]+0.4472135954999579*A[5]*B[7]+0.5*A[0]*B[7]+0.5*A[3]*B[6]+0.5*A[2]*B[3]; 
  tmp[8] = 0.5*A[7]*B[26]+0.4391550328268399*A[8]*B[25]+0.447213595499958*A[1]*B[25]+0.447213595499958*A[6]*B[16]+0.5*A[2]*B[16]+0.5*A[3]*B[9]+0.4472135954999579*A[4]*B[8]+0.5*A[0]*B[8]+0.5*A[1]*B[4]; 
  tmp[9] = 0.4391550328268399*A[9]*B[26]+0.447213595499958*A[2]*B[26]+0.5*A[6]*B[25]+0.447213595499958*A[7]*B[16]+0.5*A[1]*B[16]+0.4472135954999579*A[5]*B[9]+0.5*A[0]*B[9]+0.5*A[3]*B[8]+0.5*A[2]*B[4]; 
  tmp[10] = 0.5*A[2]*B[18]+0.5*A[1]*B[17]+0.5*A[0]*B[10]; 
  tmp[11] = 0.2981423969999719*A[8]*B[31]+0.4391550328268398*A[1]*B[31]+0.4472135954999579*A[7]*B[20]+0.31943828249997*A[6]*B[19]+0.5000000000000001*A[2]*B[19]+0.31943828249997*A[4]*B[11]+0.5*A[0]*B[11]+0.4391550328268398*B[1]*A[8]+0.5000000000000001*B[2]*A[6]+0.4472135954999579*A[3]*B[5]+0.5*B[0]*A[4]+0.4472135954999579*A[1]*B[1]; 
  tmp[12] = 0.2981423969999719*A[9]*B[32]+0.4391550328268398*A[2]*B[32]+0.31943828249997*A[7]*B[20]+0.5000000000000001*A[1]*B[20]+0.4472135954999579*A[6]*B[19]+0.31943828249997*A[5]*B[12]+0.5*A[0]*B[12]+0.4391550328268398*B[2]*A[9]+0.5000000000000001*B[1]*A[7]+0.4472135954999579*A[3]*B[5]+0.5*B[0]*A[5]+0.4472135954999579*A[2]*B[2]; 
  tmp[13] = 0.5000000000000001*A[2]*B[24]+0.5000000000000001*A[1]*B[23]+0.5*A[0]*B[13]; 
  tmp[14] = 0.5000000000000001*A[2]*B[29]+0.5000000000000001*A[1]*B[28]+0.5*A[0]*B[14]; 
  tmp[15] = 0.447213595499958*A[3]*B[22]+0.447213595499958*A[3]*B[21]+0.4472135954999579*A[5]*B[15]+0.4472135954999579*A[4]*B[15]+0.5*A[0]*B[15]+0.447213595499958*A[7]*B[7]+0.5*A[1]*B[7]+0.447213595499958*A[6]*B[6]+0.5*A[2]*B[6]+0.5*A[3]*B[3]; 
  tmp[16] = 0.447213595499958*A[3]*B[26]+0.447213595499958*A[3]*B[25]+0.4472135954999579*A[5]*B[16]+0.4472135954999579*A[4]*B[16]+0.5*A[0]*B[16]+0.447213595499958*A[7]*B[9]+0.5*A[1]*B[9]+0.447213595499958*A[6]*B[8]+0.5*A[2]*B[8]+0.5*A[3]*B[4]; 
  tmp[17] = 0.5*A[3]*B[18]+0.4472135954999579*A[4]*B[17]+0.5*A[0]*B[17]+0.5*A[1]*B[10]; 
  tmp[18] = 0.4472135954999579*A[5]*B[18]+0.5*A[0]*B[18]+0.5*A[3]*B[17]+0.5*A[2]*B[10]; 
  tmp[19] = 0.4391550328268399*A[3]*B[31]+0.4*A[3]*B[20]+0.4472135954999579*A[5]*B[19]+0.31943828249997*A[4]*B[19]+0.5*A[0]*B[19]+0.4472135954999579*A[6]*B[12]+0.31943828249997*A[6]*B[11]+0.5000000000000001*A[2]*B[11]+0.4391550328268399*B[5]*A[8]+0.4*B[5]*A[7]+0.5*B[0]*A[6]+0.447213595499958*A[1]*B[5]+0.5000000000000001*B[2]*A[4]+0.447213595499958*B[1]*A[3]; 
  tmp[20] = 0.4391550328268399*A[3]*B[32]+0.31943828249997*A[5]*B[20]+0.4472135954999579*A[4]*B[20]+0.5*A[0]*B[20]+0.4*A[3]*B[19]+0.31943828249997*A[7]*B[12]+0.5000000000000001*A[1]*B[12]+0.4472135954999579*A[7]*B[11]+0.4391550328268399*B[5]*A[9]+0.5*B[0]*A[7]+0.4*B[5]*A[6]+0.447213595499958*A[2]*B[5]+0.5000000000000001*B[1]*A[5]+0.447213595499958*B[2]*A[3]; 
  tmp[21] = 0.31943828249997*A[4]*B[21]+0.5*A[0]*B[21]+0.447213595499958*A[3]*B[15]+0.4391550328268399*B[6]*A[8]+0.5*A[6]*B[7]+0.447213595499958*A[1]*B[6]+0.5000000000000001*B[3]*A[4]; 
  tmp[22] = 0.31943828249997*A[5]*B[22]+0.5*A[0]*B[22]+0.447213595499958*A[3]*B[15]+0.4391550328268399*B[7]*A[9]+0.447213595499958*A[2]*B[7]+0.5*B[6]*A[7]+0.5000000000000001*B[3]*A[5]; 
  tmp[23] = 0.5*A[3]*B[24]+0.4472135954999579*A[4]*B[23]+0.5*A[0]*B[23]+0.5000000000000001*A[1]*B[13]; 
  tmp[24] = 0.4472135954999579*A[5]*B[24]+0.5*A[0]*B[24]+0.5*A[3]*B[23]+0.5000000000000001*A[2]*B[13]; 
  tmp[25] = 0.31943828249997*A[4]*B[25]+0.5*A[0]*B[25]+0.447213595499958*A[3]*B[16]+0.5*A[6]*B[9]+0.4391550328268399*A[8]*B[8]+0.447213595499958*A[1]*B[8]+0.5000000000000001*A[4]*B[4]; 
  tmp[26] = 0.31943828249997*A[5]*B[26]+0.5*A[0]*B[26]+0.447213595499958*A[3]*B[16]+0.4391550328268399*A[9]*B[9]+0.447213595499958*A[2]*B[9]+0.5*A[7]*B[8]+0.5000000000000001*B[4]*A[5]; 
  tmp[27] = 0.5*A[0]*B[27]; 
  tmp[28] = 0.5*A[3]*B[29]+0.4472135954999579*A[4]*B[28]+0.5*A[0]*B[28]+0.5000000000000001*A[1]*B[14]; 
  tmp[29] = 0.4472135954999579*A[5]*B[29]+0.5*A[0]*B[29]+0.5*A[3]*B[28]+0.5000000000000001*A[2]*B[14]; 
  tmp[30] = 0.5*A[0]*B[30]; 
  tmp[31] = 0.2981423969999719*A[4]*B[31]+0.5*A[0]*B[31]+0.4391550328268399*A[3]*B[19]+0.2981423969999719*A[8]*B[11]+0.4391550328268398*A[1]*B[11]+0.5*B[0]*A[8]+0.4391550328268399*B[5]*A[6]+0.4391550328268398*B[1]*A[4]; 
  tmp[32] = 0.2981423969999719*A[5]*B[32]+0.5*A[0]*B[32]+0.4391550328268399*A[3]*B[20]+0.2981423969999719*A[9]*B[12]+0.4391550328268398*A[2]*B[12]+0.5*B[0]*A[9]+0.4391550328268399*B[5]*A[7]+0.4391550328268398*B[2]*A[5]; 
  tmp[33] = 0.5*A[0]*B[33]; 
  tmp[34] = 0.5*A[0]*B[34]; 
 
  // This tmp allows for in-place multiplication. 
  for (unsigned short int i=0; i<35; i++) 
  { 
    out[i] = tmp[i]; 
  } 
 
} 
 
void CartFieldBinOpDivide2x2vMax_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       configuration space denominator field (must be a scalar field). 
  // B:       phase space numerator field (must be a scalar field). 
  // Ncomp:   number of components of B (=1 here). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (=1 here). 
  // out:     output field (same number of components as B). 
 
  // Declare Eigen Matrix with triple basis tensor dotted with B vector. 
  Eigen::MatrixXd AEM(5,5); 
  // Declare Eigen Vector with coefficients of B. 
  Eigen::VectorXd BEV(5); 
  // Declare vector with solution to system of equations. 
  Eigen::VectorXd u(5); 
 
  // Fill AEM matrix. 
  AEM(0,0) = 0.5*A[0]; 
  AEM(0,1) = 0.5*A[1]; 
  AEM(0,2) = 0.5*A[2]; 
  AEM(1,0) = 0.5*A[1]; 
  AEM(1,1) = 0.5*A[0]; 
  AEM(2,0) = 0.5*A[2]; 
  AEM(2,2) = 0.5*A[0]; 
  AEM(3,3) = 0.5*A[0]; 
  AEM(4,4) = 0.5*A[0]; 
 
  // Fill BEV. 
  BEV << B[0],B[1],B[2],B[3],B[4]; 
 
  // Solve the system of equations. 
  u = AEM.colPivHouseholderQr().solve(BEV); 
 
  // Copy data from Eigen vector. 
  Eigen::Map<VectorXd>(out,5,1) = u; 
 
} 
 
void CartFieldBinOpDivide2x2vMax_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       configuration space denominator field (must be a scalar field). 
  // B:       phase space numerator field (must be a scalar field). 
  // Ncomp:   number of components of B (=1 here). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (=1 here). 
  // out:     output field (same number of components as B). 
 
  // Declare Eigen Matrix with triple basis tensor dotted with B vector. 
  Eigen::MatrixXd AEM(15,15); 
  // Declare Eigen Vector with coefficients of B. 
  Eigen::VectorXd BEV(15); 
  // Declare vector with solution to system of equations. 
  Eigen::VectorXd u(15); 
 
  // Fill AEM matrix. 
  AEM(0,0) = 0.5*A[0]; 
  AEM(0,1) = 0.5*A[1]; 
  AEM(0,2) = 0.5*A[2]; 
  AEM(0,5) = 0.5*A[3]; 
  AEM(0,11) = 0.5*A[4]; 
  AEM(0,12) = 0.5*A[5]; 
  AEM(1,0) = 0.5*A[1]; 
  AEM(1,1) = 0.4472135954999579*A[4]+0.5*A[0]; 
  AEM(1,2) = 0.5*A[3]; 
  AEM(1,5) = 0.5*A[2]; 
  AEM(1,11) = 0.4472135954999579*A[1]; 
  AEM(2,0) = 0.5*A[2]; 
  AEM(2,1) = 0.5*A[3]; 
  AEM(2,2) = 0.4472135954999579*A[5]+0.5*A[0]; 
  AEM(2,5) = 0.5*A[1]; 
  AEM(2,12) = 0.4472135954999579*A[2]; 
  AEM(3,3) = 0.5*A[0]; 
  AEM(3,6) = 0.5*A[1]; 
  AEM(3,7) = 0.5*A[2]; 
  AEM(4,4) = 0.5*A[0]; 
  AEM(4,8) = 0.5*A[1]; 
  AEM(4,9) = 0.5*A[2]; 
  AEM(5,0) = 0.5*A[3]; 
  AEM(5,1) = 0.5*A[2]; 
  AEM(5,2) = 0.5*A[1]; 
  AEM(5,5) = 0.4472135954999579*A[5]+0.4472135954999579*A[4]+0.5*A[0]; 
  AEM(5,11) = 0.4472135954999579*A[3]; 
  AEM(5,12) = 0.4472135954999579*A[3]; 
  AEM(6,3) = 0.5*A[1]; 
  AEM(6,6) = 0.4472135954999579*A[4]+0.5*A[0]; 
  AEM(6,7) = 0.5*A[3]; 
  AEM(7,3) = 0.5*A[2]; 
  AEM(7,6) = 0.5*A[3]; 
  AEM(7,7) = 0.4472135954999579*A[5]+0.5*A[0]; 
  AEM(8,4) = 0.5*A[1]; 
  AEM(8,8) = 0.4472135954999579*A[4]+0.5*A[0]; 
  AEM(8,9) = 0.5*A[3]; 
  AEM(9,4) = 0.5*A[2]; 
  AEM(9,8) = 0.5*A[3]; 
  AEM(9,9) = 0.4472135954999579*A[5]+0.5*A[0]; 
  AEM(10,10) = 0.5*A[0]; 
  AEM(11,0) = 0.5*A[4]; 
  AEM(11,1) = 0.4472135954999579*A[1]; 
  AEM(11,5) = 0.4472135954999579*A[3]; 
  AEM(11,11) = 0.31943828249997*A[4]+0.5*A[0]; 
  AEM(12,0) = 0.5*A[5]; 
  AEM(12,2) = 0.4472135954999579*A[2]; 
  AEM(12,5) = 0.4472135954999579*A[3]; 
  AEM(12,12) = 0.31943828249997*A[5]+0.5*A[0]; 
  AEM(13,13) = 0.5*A[0]; 
  AEM(14,14) = 0.5*A[0]; 
 
  // Fill BEV. 
  BEV << B[0],B[1],B[2],B[3],B[4],B[5],B[6],B[7],B[8],B[9],B[10],B[11],B[12],B[13],B[14]; 
 
  // Solve the system of equations. 
  u = AEM.colPivHouseholderQr().solve(BEV); 
 
  // Copy data from Eigen vector. 
  Eigen::Map<VectorXd>(out,15,1) = u; 
 
} 
 
void CartFieldBinOpDivide2x2vMax_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       configuration space denominator field (must be a scalar field). 
  // B:       phase space numerator field (must be a scalar field). 
  // Ncomp:   number of components of B (=1 here). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (=1 here). 
  // out:     output field (same number of components as B). 
 
  // Declare Eigen Matrix with triple basis tensor dotted with B vector. 
  Eigen::MatrixXd AEM(35,35); 
  // Declare Eigen Vector with coefficients of B. 
  Eigen::VectorXd BEV(35); 
  // Declare vector with solution to system of equations. 
  Eigen::VectorXd u(35); 
 
  // Fill AEM matrix. 
  AEM(0,0) = 0.5*A[0]; 
  AEM(0,1) = 0.5*A[1]; 
  AEM(0,2) = 0.5*A[2]; 
  AEM(0,5) = 0.5*A[3]; 
  AEM(0,11) = 0.5*A[4]; 
  AEM(0,12) = 0.5*A[5]; 
  AEM(0,19) = 0.5*A[6]; 
  AEM(0,20) = 0.5*A[7]; 
  AEM(0,31) = 0.5*A[8]; 
  AEM(0,32) = 0.5*A[9]; 
  AEM(1,0) = 0.5*A[1]; 
  AEM(1,1) = 0.4472135954999579*A[4]+0.5*A[0]; 
  AEM(1,2) = 0.5*A[3]; 
  AEM(1,5) = 0.447213595499958*A[6]+0.5*A[2]; 
  AEM(1,11) = 0.4391550328268398*A[8]+0.4472135954999579*A[1]; 
  AEM(1,12) = 0.5000000000000001*A[7]; 
  AEM(1,19) = 0.447213595499958*A[3]; 
  AEM(1,20) = 0.5000000000000001*A[5]; 
  AEM(1,31) = 0.4391550328268398*A[4]; 
  AEM(2,0) = 0.5*A[2]; 
  AEM(2,1) = 0.5*A[3]; 
  AEM(2,2) = 0.4472135954999579*A[5]+0.5*A[0]; 
  AEM(2,5) = 0.447213595499958*A[7]+0.5*A[1]; 
  AEM(2,11) = 0.5000000000000001*A[6]; 
  AEM(2,12) = 0.4391550328268398*A[9]+0.4472135954999579*A[2]; 
  AEM(2,19) = 0.5000000000000001*A[4]; 
  AEM(2,20) = 0.447213595499958*A[3]; 
  AEM(2,32) = 0.4391550328268398*A[5]; 
  AEM(3,3) = 0.5*A[0]; 
  AEM(3,6) = 0.5*A[1]; 
  AEM(3,7) = 0.5*A[2]; 
  AEM(3,15) = 0.5*A[3]; 
  AEM(3,21) = 0.5000000000000001*A[4]; 
  AEM(3,22) = 0.5000000000000001*A[5]; 
  AEM(4,4) = 0.5*A[0]; 
  AEM(4,8) = 0.5*A[1]; 
  AEM(4,9) = 0.5*A[2]; 
  AEM(4,16) = 0.5*A[3]; 
  AEM(4,25) = 0.5000000000000001*A[4]; 
  AEM(4,26) = 0.5000000000000001*A[5]; 
  AEM(5,0) = 0.5*A[3]; 
  AEM(5,1) = 0.447213595499958*A[6]+0.5*A[2]; 
  AEM(5,2) = 0.447213595499958*A[7]+0.5*A[1]; 
  AEM(5,5) = 0.4472135954999579*A[5]+0.4472135954999579*A[4]+0.5*A[0]; 
  AEM(5,11) = 0.4472135954999579*A[3]; 
  AEM(5,12) = 0.4472135954999579*A[3]; 
  AEM(5,19) = 0.4391550328268399*A[8]+0.4*A[7]+0.447213595499958*A[1]; 
  AEM(5,20) = 0.4391550328268399*A[9]+0.4*A[6]+0.447213595499958*A[2]; 
  AEM(5,31) = 0.4391550328268399*A[6]; 
  AEM(5,32) = 0.4391550328268399*A[7]; 
  AEM(6,3) = 0.5*A[1]; 
  AEM(6,6) = 0.4472135954999579*A[4]+0.5*A[0]; 
  AEM(6,7) = 0.5*A[3]; 
  AEM(6,15) = 0.447213595499958*A[6]+0.5*A[2]; 
  AEM(6,21) = 0.4391550328268399*A[8]+0.447213595499958*A[1]; 
  AEM(6,22) = 0.5*A[7]; 
  AEM(7,3) = 0.5*A[2]; 
  AEM(7,6) = 0.5*A[3]; 
  AEM(7,7) = 0.4472135954999579*A[5]+0.5*A[0]; 
  AEM(7,15) = 0.447213595499958*A[7]+0.5*A[1]; 
  AEM(7,21) = 0.5*A[6]; 
  AEM(7,22) = 0.4391550328268399*A[9]+0.447213595499958*A[2]; 
  AEM(8,4) = 0.5*A[1]; 
  AEM(8,8) = 0.4472135954999579*A[4]+0.5*A[0]; 
  AEM(8,9) = 0.5*A[3]; 
  AEM(8,16) = 0.447213595499958*A[6]+0.5*A[2]; 
  AEM(8,25) = 0.4391550328268399*A[8]+0.447213595499958*A[1]; 
  AEM(8,26) = 0.5*A[7]; 
  AEM(9,4) = 0.5*A[2]; 
  AEM(9,8) = 0.5*A[3]; 
  AEM(9,9) = 0.4472135954999579*A[5]+0.5*A[0]; 
  AEM(9,16) = 0.447213595499958*A[7]+0.5*A[1]; 
  AEM(9,25) = 0.5*A[6]; 
  AEM(9,26) = 0.4391550328268399*A[9]+0.447213595499958*A[2]; 
  AEM(10,10) = 0.5*A[0]; 
  AEM(10,17) = 0.5*A[1]; 
  AEM(10,18) = 0.5*A[2]; 
  AEM(11,0) = 0.5*A[4]; 
  AEM(11,1) = 0.4391550328268398*A[8]+0.4472135954999579*A[1]; 
  AEM(11,2) = 0.5000000000000001*A[6]; 
  AEM(11,5) = 0.4472135954999579*A[3]; 
  AEM(11,11) = 0.31943828249997*A[4]+0.5*A[0]; 
  AEM(11,19) = 0.31943828249997*A[6]+0.5000000000000001*A[2]; 
  AEM(11,20) = 0.4472135954999579*A[7]; 
  AEM(11,31) = 0.2981423969999719*A[8]+0.4391550328268398*A[1]; 
  AEM(12,0) = 0.5*A[5]; 
  AEM(12,1) = 0.5000000000000001*A[7]; 
  AEM(12,2) = 0.4391550328268398*A[9]+0.4472135954999579*A[2]; 
  AEM(12,5) = 0.4472135954999579*A[3]; 
  AEM(12,12) = 0.31943828249997*A[5]+0.5*A[0]; 
  AEM(12,19) = 0.4472135954999579*A[6]; 
  AEM(12,20) = 0.31943828249997*A[7]+0.5000000000000001*A[1]; 
  AEM(12,32) = 0.2981423969999719*A[9]+0.4391550328268398*A[2]; 
  AEM(13,13) = 0.5*A[0]; 
  AEM(13,23) = 0.5000000000000001*A[1]; 
  AEM(13,24) = 0.5000000000000001*A[2]; 
  AEM(14,14) = 0.5*A[0]; 
  AEM(14,28) = 0.5000000000000001*A[1]; 
  AEM(14,29) = 0.5000000000000001*A[2]; 
  AEM(15,3) = 0.5*A[3]; 
  AEM(15,6) = 0.447213595499958*A[6]+0.5*A[2]; 
  AEM(15,7) = 0.447213595499958*A[7]+0.5*A[1]; 
  AEM(15,15) = 0.4472135954999579*A[5]+0.4472135954999579*A[4]+0.5*A[0]; 
  AEM(15,21) = 0.447213595499958*A[3]; 
  AEM(15,22) = 0.447213595499958*A[3]; 
  AEM(16,4) = 0.5*A[3]; 
  AEM(16,8) = 0.447213595499958*A[6]+0.5*A[2]; 
  AEM(16,9) = 0.447213595499958*A[7]+0.5*A[1]; 
  AEM(16,16) = 0.4472135954999579*A[5]+0.4472135954999579*A[4]+0.5*A[0]; 
  AEM(16,25) = 0.447213595499958*A[3]; 
  AEM(16,26) = 0.447213595499958*A[3]; 
  AEM(17,10) = 0.5*A[1]; 
  AEM(17,17) = 0.4472135954999579*A[4]+0.5*A[0]; 
  AEM(17,18) = 0.5*A[3]; 
  AEM(18,10) = 0.5*A[2]; 
  AEM(18,17) = 0.5*A[3]; 
  AEM(18,18) = 0.4472135954999579*A[5]+0.5*A[0]; 
  AEM(19,0) = 0.5*A[6]; 
  AEM(19,1) = 0.447213595499958*A[3]; 
  AEM(19,2) = 0.5000000000000001*A[4]; 
  AEM(19,5) = 0.4391550328268399*A[8]+0.4*A[7]+0.447213595499958*A[1]; 
  AEM(19,11) = 0.31943828249997*A[6]+0.5000000000000001*A[2]; 
  AEM(19,12) = 0.4472135954999579*A[6]; 
  AEM(19,19) = 0.4472135954999579*A[5]+0.31943828249997*A[4]+0.5*A[0]; 
  AEM(19,20) = 0.4*A[3]; 
  AEM(19,31) = 0.4391550328268399*A[3]; 
  AEM(20,0) = 0.5*A[7]; 
  AEM(20,1) = 0.5000000000000001*A[5]; 
  AEM(20,2) = 0.447213595499958*A[3]; 
  AEM(20,5) = 0.4391550328268399*A[9]+0.4*A[6]+0.447213595499958*A[2]; 
  AEM(20,11) = 0.4472135954999579*A[7]; 
  AEM(20,12) = 0.31943828249997*A[7]+0.5000000000000001*A[1]; 
  AEM(20,19) = 0.4*A[3]; 
  AEM(20,20) = 0.31943828249997*A[5]+0.4472135954999579*A[4]+0.5*A[0]; 
  AEM(20,32) = 0.4391550328268399*A[3]; 
  AEM(21,3) = 0.5000000000000001*A[4]; 
  AEM(21,6) = 0.4391550328268399*A[8]+0.447213595499958*A[1]; 
  AEM(21,7) = 0.5*A[6]; 
  AEM(21,15) = 0.447213595499958*A[3]; 
  AEM(21,21) = 0.31943828249997*A[4]+0.5*A[0]; 
  AEM(22,3) = 0.5000000000000001*A[5]; 
  AEM(22,6) = 0.5*A[7]; 
  AEM(22,7) = 0.4391550328268399*A[9]+0.447213595499958*A[2]; 
  AEM(22,15) = 0.447213595499958*A[3]; 
  AEM(22,22) = 0.31943828249997*A[5]+0.5*A[0]; 
  AEM(23,13) = 0.5000000000000001*A[1]; 
  AEM(23,23) = 0.4472135954999579*A[4]+0.5*A[0]; 
  AEM(23,24) = 0.5*A[3]; 
  AEM(24,13) = 0.5000000000000001*A[2]; 
  AEM(24,23) = 0.5*A[3]; 
  AEM(24,24) = 0.4472135954999579*A[5]+0.5*A[0]; 
  AEM(25,4) = 0.5000000000000001*A[4]; 
  AEM(25,8) = 0.4391550328268399*A[8]+0.447213595499958*A[1]; 
  AEM(25,9) = 0.5*A[6]; 
  AEM(25,16) = 0.447213595499958*A[3]; 
  AEM(25,25) = 0.31943828249997*A[4]+0.5*A[0]; 
  AEM(26,4) = 0.5000000000000001*A[5]; 
  AEM(26,8) = 0.5*A[7]; 
  AEM(26,9) = 0.4391550328268399*A[9]+0.447213595499958*A[2]; 
  AEM(26,16) = 0.447213595499958*A[3]; 
  AEM(26,26) = 0.31943828249997*A[5]+0.5*A[0]; 
  AEM(27,27) = 0.5*A[0]; 
  AEM(28,14) = 0.5000000000000001*A[1]; 
  AEM(28,28) = 0.4472135954999579*A[4]+0.5*A[0]; 
  AEM(28,29) = 0.5*A[3]; 
  AEM(29,14) = 0.5000000000000001*A[2]; 
  AEM(29,28) = 0.5*A[3]; 
  AEM(29,29) = 0.4472135954999579*A[5]+0.5*A[0]; 
  AEM(30,30) = 0.5*A[0]; 
  AEM(31,0) = 0.5*A[8]; 
  AEM(31,1) = 0.4391550328268398*A[4]; 
  AEM(31,5) = 0.4391550328268399*A[6]; 
  AEM(31,11) = 0.2981423969999719*A[8]+0.4391550328268398*A[1]; 
  AEM(31,19) = 0.4391550328268399*A[3]; 
  AEM(31,31) = 0.2981423969999719*A[4]+0.5*A[0]; 
  AEM(32,0) = 0.5*A[9]; 
  AEM(32,2) = 0.4391550328268398*A[5]; 
  AEM(32,5) = 0.4391550328268399*A[7]; 
  AEM(32,12) = 0.2981423969999719*A[9]+0.4391550328268398*A[2]; 
  AEM(32,20) = 0.4391550328268399*A[3]; 
  AEM(32,32) = 0.2981423969999719*A[5]+0.5*A[0]; 
  AEM(33,33) = 0.5*A[0]; 
  AEM(34,34) = 0.5*A[0]; 
 
  // Fill BEV. 
  BEV << B[0],B[1],B[2],B[3],B[4],B[5],B[6],B[7],B[8],B[9],B[10],B[11],B[12],B[13],B[14],B[15],B[16],B[17],B[18],B[19],B[20],B[21],B[22],B[23],B[24],B[25],B[26],B[27],B[28],B[29],B[30],B[31],B[32],B[33],B[34]; 
 
  // Solve the system of equations. 
  u = AEM.colPivHouseholderQr().solve(BEV); 
 
  // Copy data from Eigen vector. 
  Eigen::Map<VectorXd>(out,35,1) = u; 
 
} 
 