#include <math.h> 
#include <CartFieldBinOpModDecl.h> 
 
using namespace Eigen; 
 
void CartFieldBinOpMultiply1x2vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field in configuration space. 
  // B:       scalar field in phase space. 
  // Ncomp:   number of components of B (should =1 here). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (should=1 here). 
  // out:     output field A*B (same number of components as B). 
 
  double tmp[8]; 
  tmp[0] = 0.7071067811865475*A[1]*B[1]+0.7071067811865475*A[0]*B[0]; 
  tmp[1] = 0.7071067811865475*A[0]*B[1]+0.7071067811865475*B[0]*A[1]; 
  tmp[2] = 0.7071067811865475*A[1]*B[4]+0.7071067811865475*A[0]*B[2]; 
  tmp[3] = 0.7071067811865475*A[1]*B[5]+0.7071067811865475*A[0]*B[3]; 
  tmp[4] = 0.7071067811865475*A[0]*B[4]+0.7071067811865475*A[1]*B[2]; 
  tmp[5] = 0.7071067811865475*A[0]*B[5]+0.7071067811865475*A[1]*B[3]; 
  tmp[6] = 0.7071067811865475*A[1]*B[7]+0.7071067811865475*A[0]*B[6]; 
  tmp[7] = 0.7071067811865475*A[0]*B[7]+0.7071067811865475*A[1]*B[6]; 
 
  // This tmp allows for in-place multiplication. 
  for (unsigned short int i=0; i<8; i++) 
  { 
    out[i] = tmp[i]; 
  } 
 
} 
 
void CartFieldBinOpMultiply1x2vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field in configuration space. 
  // B:       scalar field in phase space. 
  // Ncomp:   number of components of B (should =1 here). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (should=1 here). 
  // out:     output field A*B (same number of components as B). 
 
  double tmp[20]; 
  tmp[0] = 0.7071067811865475*A[2]*B[7]+0.7071067811865475*A[1]*B[1]+0.7071067811865475*A[0]*B[0]; 
  tmp[1] = 0.6324555320336759*A[1]*B[7]+0.6324555320336759*B[1]*A[2]+0.7071067811865475*A[0]*B[1]+0.7071067811865475*B[0]*A[1]; 
  tmp[2] = 0.7071067811865475*A[2]*B[11]+0.7071067811865475*A[1]*B[4]+0.7071067811865475*A[0]*B[2]; 
  tmp[3] = 0.7071067811865475*A[2]*B[13]+0.7071067811865475*A[1]*B[5]+0.7071067811865475*A[0]*B[3]; 
  tmp[4] = 0.632455532033676*A[1]*B[11]+0.6324555320336759*A[2]*B[4]+0.7071067811865475*A[0]*B[4]+0.7071067811865475*A[1]*B[2]; 
  tmp[5] = 0.632455532033676*A[1]*B[13]+0.6324555320336759*A[2]*B[5]+0.7071067811865475*A[0]*B[5]+0.7071067811865475*A[1]*B[3]; 
  tmp[6] = 0.7071067811865475*A[2]*B[17]+0.7071067811865475*A[1]*B[10]+0.7071067811865475*A[0]*B[6]; 
  tmp[7] = 0.4517539514526256*A[2]*B[7]+0.7071067811865475*A[0]*B[7]+0.7071067811865475*B[0]*A[2]+0.6324555320336759*A[1]*B[1]; 
  tmp[8] = 0.7071067811865475*A[1]*B[12]+0.7071067811865475*A[0]*B[8]; 
  tmp[9] = 0.7071067811865475*A[1]*B[15]+0.7071067811865475*A[0]*B[9]; 
  tmp[10] = 0.6324555320336759*A[1]*B[17]+0.6324555320336759*A[2]*B[10]+0.7071067811865475*A[0]*B[10]+0.7071067811865475*A[1]*B[6]; 
  tmp[11] = 0.4517539514526256*A[2]*B[11]+0.7071067811865475*A[0]*B[11]+0.632455532033676*A[1]*B[4]+0.7071067811865475*A[2]*B[2]; 
  tmp[12] = 0.6324555320336759*A[2]*B[12]+0.7071067811865475*A[0]*B[12]+0.7071067811865475*A[1]*B[8]; 
  tmp[13] = 0.4517539514526256*A[2]*B[13]+0.7071067811865475*A[0]*B[13]+0.632455532033676*A[1]*B[5]+0.7071067811865475*A[2]*B[3]; 
  tmp[14] = 0.7071067811865475*A[1]*B[18]+0.7071067811865475*A[0]*B[14]; 
  tmp[15] = 0.6324555320336759*A[2]*B[15]+0.7071067811865475*A[0]*B[15]+0.7071067811865475*A[1]*B[9]; 
  tmp[16] = 0.7071067811865475*A[1]*B[19]+0.7071067811865475*A[0]*B[16]; 
  tmp[17] = 0.4517539514526256*A[2]*B[17]+0.7071067811865475*A[0]*B[17]+0.6324555320336759*A[1]*B[10]+0.7071067811865475*A[2]*B[6]; 
  tmp[18] = 0.6324555320336759*A[2]*B[18]+0.7071067811865475*A[0]*B[18]+0.7071067811865475*A[1]*B[14]; 
  tmp[19] = 0.6324555320336759*A[2]*B[19]+0.7071067811865475*A[0]*B[19]+0.7071067811865475*A[1]*B[16]; 
 
  // This tmp allows for in-place multiplication. 
  for (unsigned short int i=0; i<20; i++) 
  { 
    out[i] = tmp[i]; 
  } 
 
} 
 
void CartFieldBinOpMultiply1x2vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field in configuration space. 
  // B:       scalar field in phase space. 
  // Ncomp:   number of components of B (should =1 here). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (should=1 here). 
  // out:     output field A*B (same number of components as B). 
 
  double tmp[32]; 
  tmp[0] = 0.7071067811865475*A[3]*B[17]+0.7071067811865475*A[2]*B[7]+0.7071067811865475*A[1]*B[1]+0.7071067811865475*A[0]*B[0]; 
  tmp[1] = 0.6210590034081186*A[2]*B[17]+0.6210590034081186*A[3]*B[7]+0.6324555320336759*A[1]*B[7]+0.6324555320336759*B[1]*A[2]+0.7071067811865475*A[0]*B[1]+0.7071067811865475*B[0]*A[1]; 
  tmp[2] = 0.7071067811865474*A[3]*B[23]+0.7071067811865475*A[2]*B[11]+0.7071067811865475*A[1]*B[4]+0.7071067811865475*A[0]*B[2]; 
  tmp[3] = 0.7071067811865474*A[3]*B[25]+0.7071067811865475*A[2]*B[13]+0.7071067811865475*A[1]*B[5]+0.7071067811865475*A[0]*B[3]; 
  tmp[4] = 0.6210590034081187*A[2]*B[23]+0.6210590034081187*A[3]*B[11]+0.632455532033676*A[1]*B[11]+0.6324555320336759*A[2]*B[4]+0.7071067811865475*A[0]*B[4]+0.7071067811865475*A[1]*B[2]; 
  tmp[5] = 0.6210590034081187*A[2]*B[25]+0.6210590034081187*A[3]*B[13]+0.632455532033676*A[1]*B[13]+0.6324555320336759*A[2]*B[5]+0.7071067811865475*A[0]*B[5]+0.7071067811865475*A[1]*B[3]; 
  tmp[6] = 0.7071067811865475*A[3]*B[29]+0.7071067811865475*A[2]*B[20]+0.7071067811865475*A[1]*B[10]+0.7071067811865475*A[0]*B[6]; 
  tmp[7] = 0.421637021355784*A[3]*B[17]+0.6210590034081186*A[1]*B[17]+0.4517539514526256*A[2]*B[7]+0.7071067811865475*A[0]*B[7]+0.6210590034081186*B[1]*A[3]+0.7071067811865475*B[0]*A[2]+0.6324555320336759*A[1]*B[1]; 
  tmp[8] = 0.7071067811865475*A[1]*B[12]+0.7071067811865475*A[0]*B[8]; 
  tmp[9] = 0.7071067811865475*A[1]*B[15]+0.7071067811865475*A[0]*B[9]; 
  tmp[10] = 0.6210590034081186*A[2]*B[29]+0.6210590034081186*A[3]*B[20]+0.6324555320336759*A[1]*B[20]+0.6324555320336759*A[2]*B[10]+0.7071067811865475*A[0]*B[10]+0.7071067811865475*A[1]*B[6]; 
  tmp[11] = 0.4216370213557839*A[3]*B[23]+0.6210590034081187*A[1]*B[23]+0.4517539514526256*A[2]*B[11]+0.7071067811865475*A[0]*B[11]+0.6210590034081187*A[3]*B[4]+0.632455532033676*A[1]*B[4]+0.7071067811865475*A[2]*B[2]; 
  tmp[12] = 0.6324555320336759*A[2]*B[12]+0.7071067811865475*A[0]*B[12]+0.7071067811865475*A[1]*B[8]; 
  tmp[13] = 0.4216370213557839*A[3]*B[25]+0.6210590034081187*A[1]*B[25]+0.4517539514526256*A[2]*B[13]+0.7071067811865475*A[0]*B[13]+0.6210590034081187*A[3]*B[5]+0.632455532033676*A[1]*B[5]+0.7071067811865475*A[2]*B[3]; 
  tmp[14] = 0.7071067811865475*A[1]*B[21]+0.7071067811865475*A[0]*B[14]; 
  tmp[15] = 0.6324555320336759*A[2]*B[15]+0.7071067811865475*A[0]*B[15]+0.7071067811865475*A[1]*B[9]; 
  tmp[16] = 0.7071067811865475*A[1]*B[22]+0.7071067811865475*A[0]*B[16]; 
  tmp[17] = 0.421637021355784*A[2]*B[17]+0.7071067811865475*A[0]*B[17]+0.421637021355784*A[3]*B[7]+0.6210590034081186*A[1]*B[7]+0.7071067811865475*B[0]*A[3]+0.6210590034081186*B[1]*A[2]; 
  tmp[18] = 0.7071067811865474*A[1]*B[24]+0.7071067811865475*A[0]*B[18]; 
  tmp[19] = 0.7071067811865474*A[1]*B[27]+0.7071067811865475*A[0]*B[19]; 
  tmp[20] = 0.421637021355784*A[3]*B[29]+0.6210590034081186*A[1]*B[29]+0.4517539514526256*A[2]*B[20]+0.7071067811865475*A[0]*B[20]+0.6210590034081186*A[3]*B[10]+0.6324555320336759*A[1]*B[10]+0.7071067811865475*A[2]*B[6]; 
  tmp[21] = 0.6324555320336759*A[2]*B[21]+0.7071067811865475*A[0]*B[21]+0.7071067811865475*A[1]*B[14]; 
  tmp[22] = 0.6324555320336759*A[2]*B[22]+0.7071067811865475*A[0]*B[22]+0.7071067811865475*A[1]*B[16]; 
  tmp[23] = 0.421637021355784*A[2]*B[23]+0.7071067811865475*A[0]*B[23]+0.4216370213557839*A[3]*B[11]+0.6210590034081187*A[1]*B[11]+0.6210590034081187*A[2]*B[4]+0.7071067811865474*B[2]*A[3]; 
  tmp[24] = 0.6324555320336759*A[2]*B[24]+0.7071067811865475*A[0]*B[24]+0.7071067811865474*A[1]*B[18]; 
  tmp[25] = 0.421637021355784*A[2]*B[25]+0.7071067811865475*A[0]*B[25]+0.4216370213557839*A[3]*B[13]+0.6210590034081187*A[1]*B[13]+0.6210590034081187*A[2]*B[5]+0.7071067811865474*A[3]*B[3]; 
  tmp[26] = 0.7071067811865474*A[1]*B[30]+0.7071067811865475*A[0]*B[26]; 
  tmp[27] = 0.6324555320336759*A[2]*B[27]+0.7071067811865475*A[0]*B[27]+0.7071067811865474*A[1]*B[19]; 
  tmp[28] = 0.7071067811865474*A[1]*B[31]+0.7071067811865475*A[0]*B[28]; 
  tmp[29] = 0.421637021355784*A[2]*B[29]+0.7071067811865475*A[0]*B[29]+0.421637021355784*A[3]*B[20]+0.6210590034081186*A[1]*B[20]+0.6210590034081186*A[2]*B[10]+0.7071067811865475*A[3]*B[6]; 
  tmp[30] = 0.6324555320336759*A[2]*B[30]+0.7071067811865475*A[0]*B[30]+0.7071067811865474*A[1]*B[26]; 
  tmp[31] = 0.6324555320336759*A[2]*B[31]+0.7071067811865475*A[0]*B[31]+0.7071067811865474*A[1]*B[28]; 
 
  // This tmp allows for in-place multiplication. 
  for (unsigned short int i=0; i<32; i++) 
  { 
    out[i] = tmp[i]; 
  } 
 
} 
 
void CartFieldBinOpDivide1x2vSer_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       configuration space denominator field (must be a scalar field). 
  // B:       phase space numerator field (must be a scalar field). 
  // Ncomp:   number of components of B (=1 here). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (=1 here). 
  // out:     output field (same number of components as B). 
 
  // If a corner value is below zero, use cell average A.
  bool avgA = false;
  if (0.7071067811865475*A[0]-1.224744871391589*A[1] < 0) { 
    avgA = true;
  }
  if (1.224744871391589*A[1]+0.7071067811865475*A[0] < 0) { 
    avgA = true;
  }
 
  double As[2]; 
  if (avgA) { 
    As[0] = A[0]; 
    As[1] = 0.0; 
  } else { 
    As[0] = A[0]; 
    As[1] = A[1]; 
  } 
 
  // Declare Eigen Matrix with triple basis tensor dotted with B vector. 
  Eigen::MatrixXd AEM = Eigen::MatrixXd::Zero(8,8); 
  // Declare Eigen Vector with coefficients of B. 
  Eigen::VectorXd BEV = Eigen::VectorXd::Zero(8);  
  // Declare vector with solution to system of equations. 
  Eigen::VectorXd u = Eigen::VectorXd::Zero(8);  
 
  // Fill AEM matrix. 
  AEM(0,0) = 0.7071067811865475*As[0]; 
  AEM(0,1) = 0.7071067811865475*As[1]; 
  AEM(0,2) = 0.7071067811865475*As[1]; 
  AEM(0,3) = 0.7071067811865475*As[0]; 
 
  // Fill BEV. 
  BEV << B[0],B[1],B[2],B[3],B[4],B[5],B[6],B[7]; 
 
  // Solve the system of equations. 
  u = AEM.colPivHouseholderQr().solve(BEV); 
 
  // Copy data from Eigen vector. 
  Eigen::Map<VectorXd>(out,8,1) = u; 
 
} 
 
void CartFieldBinOpDivide1x2vSer_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       configuration space denominator field (must be a scalar field). 
  // B:       phase space numerator field (must be a scalar field). 
  // Ncomp:   number of components of B (=1 here). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (=1 here). 
  // out:     output field (same number of components as B). 
 
  // If a corner value is below zero, use cell average A.
  bool avgA = false;
  if (1.58113883008419*A[2]-1.224744871391589*A[1]+0.7071067811865475*A[0] < 0) { 
    avgA = true;
  }
  if (1.58113883008419*A[2]+1.224744871391589*A[1]+0.7071067811865475*A[0] < 0) { 
    avgA = true;
  }
 
  double As[3]; 
  if (avgA) { 
    As[0] = A[0]; 
    As[1] = 0.0; 
    As[2] = 0.0; 
  } else { 
    As[0] = A[0]; 
    As[1] = A[1]; 
    As[2] = A[2]; 
  } 
 
  // Declare Eigen Matrix with triple basis tensor dotted with B vector. 
  Eigen::MatrixXd AEM = Eigen::MatrixXd::Zero(20,20); 
  // Declare Eigen Vector with coefficients of B. 
  Eigen::VectorXd BEV = Eigen::VectorXd::Zero(20);  
  // Declare vector with solution to system of equations. 
  Eigen::VectorXd u = Eigen::VectorXd::Zero(20);  
 
  // Fill AEM matrix. 
  AEM(0,0) = 0.7071067811865475*As[0]; 
  AEM(0,1) = 0.7071067811865475*As[1]; 
  AEM(0,3) = 0.7071067811865475*As[1]; 
  AEM(0,4) = 0.6324555320336759*As[2]+0.7071067811865475*As[0]; 
  AEM(0,8) = 0.7071067811865475*As[0]; 
  AEM(0,14) = 0.7071067811865475*As[1]; 
  AEM(1,1) = 0.7071067811865475*As[2]; 
  AEM(1,2) = 0.6324555320336759*As[1]; 
  AEM(1,15) = 0.7071067811865475*As[2]; 
 
  // Fill BEV. 
  BEV << B[0],B[1],B[2],B[3],B[4],B[5],B[6],B[7],B[8],B[9],B[10],B[11],B[12],B[13],B[14],B[15],B[16],B[17],B[18],B[19]; 
 
  // Solve the system of equations. 
  u = AEM.colPivHouseholderQr().solve(BEV); 
 
  // Copy data from Eigen vector. 
  Eigen::Map<VectorXd>(out,20,1) = u; 
 
} 
 
void CartFieldBinOpDivide1x2vSer_P3(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       configuration space denominator field (must be a scalar field). 
  // B:       phase space numerator field (must be a scalar field). 
  // Ncomp:   number of components of B (=1 here). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (=1 here). 
  // out:     output field (same number of components as B). 
 
  // If a corner value is below zero, use cell average A.
  bool avgA = false;
  if ((-1.870828693386971*A[3])+1.58113883008419*A[2]-1.224744871391589*A[1]+0.7071067811865475*A[0] < 0) { 
    avgA = true;
  }
  if (1.870828693386971*A[3]+1.58113883008419*A[2]+1.224744871391589*A[1]+0.7071067811865475*A[0] < 0) { 
    avgA = true;
  }
 
  double As[4]; 
  if (avgA) { 
    As[0] = A[0]; 
    As[1] = 0.0; 
    As[2] = 0.0; 
    As[3] = 0.0; 
  } else { 
    As[0] = A[0]; 
    As[1] = A[1]; 
    As[2] = A[2]; 
    As[3] = A[3]; 
  } 
 
  // Declare Eigen Matrix with triple basis tensor dotted with B vector. 
  Eigen::MatrixXd AEM = Eigen::MatrixXd::Zero(32,32); 
  // Declare Eigen Vector with coefficients of B. 
  Eigen::VectorXd BEV = Eigen::VectorXd::Zero(32);  
  // Declare vector with solution to system of equations. 
  Eigen::VectorXd u = Eigen::VectorXd::Zero(32);  
 
  // Fill AEM matrix. 
  AEM(0,0) = 0.7071067811865475*As[0]; 
  AEM(0,1) = 0.7071067811865475*As[1]; 
  AEM(0,4) = 0.7071067811865475*As[1]; 
  AEM(0,5) = 0.6324555320336759*As[2]+0.7071067811865475*As[0]; 
  AEM(0,10) = 0.7071067811865475*As[0]; 
  AEM(0,15) = 0.7071067811865475*As[0]; 
  AEM(0,18) = 0.7071067811865475*As[1]; 
  AEM(0,23) = 0.7071067811865475*As[1]; 
  AEM(0,28) = 0.7071067811865475*As[2]; 
  AEM(0,29) = 0.6210590034081186*As[3]+0.6324555320336759*As[1]; 
  AEM(1,14) = 0.7071067811865475*As[2]; 
  AEM(1,23) = 0.7071067811865475*As[2]; 
  AEM(2,4) = 0.7071067811865475*As[3]; 
  AEM(2,5) = 0.6210590034081186*As[2]; 
  AEM(2,30) = 0.7071067811865474*As[3]; 
  AEM(3,7) = 0.7071067811865474*As[3]; 
 
  // Fill BEV. 
  BEV << B[0],B[1],B[2],B[3],B[4],B[5],B[6],B[7],B[8],B[9],B[10],B[11],B[12],B[13],B[14],B[15],B[16],B[17],B[18],B[19],B[20],B[21],B[22],B[23],B[24],B[25],B[26],B[27],B[28],B[29],B[30],B[31]; 
 
  // Solve the system of equations. 
  u = AEM.colPivHouseholderQr().solve(BEV); 
 
  // Copy data from Eigen vector. 
  Eigen::Map<VectorXd>(out,32,1) = u; 
 
} 
 
