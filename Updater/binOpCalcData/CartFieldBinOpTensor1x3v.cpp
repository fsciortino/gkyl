#include <math.h> 
#include <CartFieldBinOpModDecl.h> 
 
using namespace Eigen; 
 
void CartFieldBinOpMultiply1x3vTensor_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field in configuration space. 
  // B:       scalar field in phase space. 
  // Ncomp:   number of components of B (should =1 here). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (should=1 here). 
  // out:     output field A*B (same number of components as B). 
 
  double tmp[16]; 
  tmp[0] = 0.7071067811865475*A[1]*B[1]+0.7071067811865475*A[0]*B[0]; 
  tmp[1] = 0.7071067811865475*A[0]*B[1]+0.7071067811865475*B[0]*A[1]; 
  tmp[2] = 0.7071067811865475*A[1]*B[5]+0.7071067811865475*A[0]*B[2]; 
  tmp[3] = 0.7071067811865475*A[1]*B[6]+0.7071067811865475*A[0]*B[3]; 
  tmp[4] = 0.7071067811865475*A[1]*B[8]+0.7071067811865475*A[0]*B[4]; 
  tmp[5] = 0.7071067811865475*A[0]*B[5]+0.7071067811865475*A[1]*B[2]; 
  tmp[6] = 0.7071067811865475*A[0]*B[6]+0.7071067811865475*A[1]*B[3]; 
  tmp[7] = 0.7071067811865475*A[1]*B[11]+0.7071067811865475*A[0]*B[7]; 
  tmp[8] = 0.7071067811865475*A[0]*B[8]+0.7071067811865475*A[1]*B[4]; 
  tmp[9] = 0.7071067811865475*A[1]*B[12]+0.7071067811865475*A[0]*B[9]; 
  tmp[10] = 0.7071067811865475*A[1]*B[13]+0.7071067811865475*A[0]*B[10]; 
  tmp[11] = 0.7071067811865475*A[0]*B[11]+0.7071067811865475*A[1]*B[7]; 
  tmp[12] = 0.7071067811865475*A[0]*B[12]+0.7071067811865475*A[1]*B[9]; 
  tmp[13] = 0.7071067811865475*A[0]*B[13]+0.7071067811865475*A[1]*B[10]; 
  tmp[14] = 0.7071067811865475*A[1]*B[15]+0.7071067811865475*A[0]*B[14]; 
  tmp[15] = 0.7071067811865475*A[0]*B[15]+0.7071067811865475*A[1]*B[14]; 
 
  // This tmp allows for in-place multiplication. 
  for (unsigned short int i=0; i<16; i++) 
  { 
    out[i] = tmp[i]; 
  } 
 
} 
 
void CartFieldBinOpMultiply1x3vTensor_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
{ 
  // A:       scalar/vector field in configuration space. 
  // B:       scalar field in phase space. 
  // Ncomp:   number of components of B (should =1 here). 
  // eqNcomp: =1 if A:numComponents=B:numComponents, =0 else (should=1 here). 
  // out:     output field A*B (same number of components as B). 
 
  double tmp[81]; 
  tmp[0] = 0.7071067811865475*A[2]*B[11]+0.7071067811865475*A[1]*B[1]+0.7071067811865475*A[0]*B[0]; 
  tmp[1] = 0.6324555320336759*A[1]*B[11]+0.6324555320336759*B[1]*A[2]+0.7071067811865475*A[0]*B[1]+0.7071067811865475*B[0]*A[1]; 
  tmp[2] = 0.7071067811865475*A[2]*B[19]+0.7071067811865475*A[1]*B[5]+0.7071067811865475*A[0]*B[2]; 
  tmp[3] = 0.7071067811865475*A[2]*B[21]+0.7071067811865475*A[1]*B[6]+0.7071067811865475*A[0]*B[3]; 
  tmp[4] = 0.7071067811865475*A[2]*B[25]+0.7071067811865475*A[1]*B[8]+0.7071067811865475*A[0]*B[4]; 
  tmp[5] = 0.632455532033676*A[1]*B[19]+0.6324555320336759*A[2]*B[5]+0.7071067811865475*A[0]*B[5]+0.7071067811865475*A[1]*B[2]; 
  tmp[6] = 0.632455532033676*A[1]*B[21]+0.6324555320336759*A[2]*B[6]+0.7071067811865475*A[0]*B[6]+0.7071067811865475*A[1]*B[3]; 
  tmp[7] = 0.7071067811865475*A[2]*B[32]+0.7071067811865475*A[1]*B[15]+0.7071067811865475*A[0]*B[7]; 
  tmp[8] = 0.632455532033676*A[1]*B[25]+0.6324555320336759*A[2]*B[8]+0.7071067811865475*A[0]*B[8]+0.7071067811865475*A[1]*B[4]; 
  tmp[9] = 0.7071067811865475*A[2]*B[35]+0.7071067811865475*A[1]*B[16]+0.7071067811865475*A[0]*B[9]; 
  tmp[10] = 0.7071067811865475*A[2]*B[37]+0.7071067811865475*A[1]*B[17]+0.7071067811865475*A[0]*B[10]; 
  tmp[11] = 0.4517539514526256*A[2]*B[11]+0.7071067811865475*A[0]*B[11]+0.7071067811865475*B[0]*A[2]+0.6324555320336759*A[1]*B[1]; 
  tmp[12] = 0.7071067811865475*A[2]*B[44]+0.7071067811865475*A[1]*B[20]+0.7071067811865475*A[0]*B[12]; 
  tmp[13] = 0.7071067811865475*A[2]*B[45]+0.7071067811865475*A[1]*B[23]+0.7071067811865475*A[0]*B[13]; 
  tmp[14] = 0.7071067811865475*A[2]*B[47]+0.7071067811865475*A[1]*B[28]+0.7071067811865475*A[0]*B[14]; 
  tmp[15] = 0.6324555320336759*A[1]*B[32]+0.6324555320336759*A[2]*B[15]+0.7071067811865475*A[0]*B[15]+0.7071067811865475*A[1]*B[7]; 
  tmp[16] = 0.6324555320336759*A[1]*B[35]+0.6324555320336759*A[2]*B[16]+0.7071067811865475*A[0]*B[16]+0.7071067811865475*A[1]*B[9]; 
  tmp[17] = 0.6324555320336759*A[1]*B[37]+0.6324555320336759*A[2]*B[17]+0.7071067811865475*A[0]*B[17]+0.7071067811865475*A[1]*B[10]; 
  tmp[18] = 0.7071067811865475*A[2]*B[50]+0.7071067811865475*A[1]*B[31]+0.7071067811865475*A[0]*B[18]; 
  tmp[19] = 0.4517539514526256*A[2]*B[19]+0.7071067811865475*A[0]*B[19]+0.632455532033676*A[1]*B[5]+0.7071067811865475*A[2]*B[2]; 
  tmp[20] = 0.632455532033676*A[1]*B[44]+0.6324555320336759*A[2]*B[20]+0.7071067811865475*A[0]*B[20]+0.7071067811865475*A[1]*B[12]; 
  tmp[21] = 0.4517539514526256*A[2]*B[21]+0.7071067811865475*A[0]*B[21]+0.632455532033676*A[1]*B[6]+0.7071067811865475*A[2]*B[3]; 
  tmp[22] = 0.7071067811865475*A[2]*B[54]+0.7071067811865475*A[1]*B[33]+0.7071067811865475*A[0]*B[22]; 
  tmp[23] = 0.632455532033676*A[1]*B[45]+0.6324555320336759*A[2]*B[23]+0.7071067811865475*A[0]*B[23]+0.7071067811865475*A[1]*B[13]; 
  tmp[24] = 0.7071067811865475*A[2]*B[55]+0.7071067811865475*A[1]*B[34]+0.7071067811865475*A[0]*B[24]; 
  tmp[25] = 0.4517539514526256*A[2]*B[25]+0.7071067811865475*A[0]*B[25]+0.632455532033676*A[1]*B[8]+0.7071067811865475*A[2]*B[4]; 
  tmp[26] = 0.7071067811865475*A[2]*B[57]+0.7071067811865475*A[1]*B[36]+0.7071067811865475*A[0]*B[26]; 
  tmp[27] = 0.7071067811865475*A[2]*B[58]+0.7071067811865475*A[1]*B[39]+0.7071067811865475*A[0]*B[27]; 
  tmp[28] = 0.632455532033676*A[1]*B[47]+0.6324555320336759*A[2]*B[28]+0.7071067811865475*A[0]*B[28]+0.7071067811865475*A[1]*B[14]; 
  tmp[29] = 0.7071067811865475*A[2]*B[60]+0.7071067811865475*A[1]*B[41]+0.7071067811865475*A[0]*B[29]; 
  tmp[30] = 0.7071067811865475*A[2]*B[62]+0.7071067811865475*A[1]*B[42]+0.7071067811865475*A[0]*B[30]; 
  tmp[31] = 0.632455532033676*A[1]*B[50]+0.6324555320336759*A[2]*B[31]+0.7071067811865475*A[0]*B[31]+0.7071067811865475*A[1]*B[18]; 
  tmp[32] = 0.4517539514526256*A[2]*B[32]+0.7071067811865475*A[0]*B[32]+0.6324555320336759*A[1]*B[15]+0.7071067811865475*A[2]*B[7]; 
  tmp[33] = 0.6324555320336759*A[1]*B[54]+0.6324555320336759*A[2]*B[33]+0.7071067811865475*A[0]*B[33]+0.7071067811865475*A[1]*B[22]; 
  tmp[34] = 0.6324555320336759*A[1]*B[55]+0.6324555320336759*A[2]*B[34]+0.7071067811865475*A[0]*B[34]+0.7071067811865475*A[1]*B[24]; 
  tmp[35] = 0.4517539514526256*A[2]*B[35]+0.7071067811865475*A[0]*B[35]+0.6324555320336759*A[1]*B[16]+0.7071067811865475*A[2]*B[9]; 
  tmp[36] = 0.6324555320336759*A[1]*B[57]+0.6324555320336759*A[2]*B[36]+0.7071067811865475*A[0]*B[36]+0.7071067811865475*A[1]*B[26]; 
  tmp[37] = 0.4517539514526256*A[2]*B[37]+0.7071067811865475*A[0]*B[37]+0.6324555320336759*A[1]*B[17]+0.7071067811865475*A[2]*B[10]; 
  tmp[38] = 0.7071067811865475*A[2]*B[66]+0.7071067811865475*A[1]*B[51]+0.7071067811865475*A[0]*B[38]; 
  tmp[39] = 0.6324555320336759*A[1]*B[58]+0.6324555320336759*A[2]*B[39]+0.7071067811865475*A[0]*B[39]+0.7071067811865475*A[1]*B[27]; 
  tmp[40] = 0.7071067811865475*A[2]*B[67]+0.7071067811865475*A[1]*B[52]+0.7071067811865475*A[0]*B[40]; 
  tmp[41] = 0.6324555320336759*A[1]*B[60]+0.6324555320336759*A[2]*B[41]+0.7071067811865475*A[0]*B[41]+0.7071067811865475*A[1]*B[29]; 
  tmp[42] = 0.6324555320336759*A[1]*B[62]+0.6324555320336759*A[2]*B[42]+0.7071067811865475*A[0]*B[42]+0.7071067811865475*A[1]*B[30]; 
  tmp[43] = 0.7071067811865475*A[2]*B[69]+0.7071067811865475*A[1]*B[53]+0.7071067811865475*A[0]*B[43]; 
  tmp[44] = 0.4517539514526256*A[2]*B[44]+0.7071067811865475*A[0]*B[44]+0.632455532033676*A[1]*B[20]+0.7071067811865475*A[2]*B[12]; 
  tmp[45] = 0.4517539514526256*A[2]*B[45]+0.7071067811865475*A[0]*B[45]+0.632455532033676*A[1]*B[23]+0.7071067811865475*A[2]*B[13]; 
  tmp[46] = 0.7071067811865475*A[2]*B[72]+0.7071067811865475*A[1]*B[56]+0.7071067811865475*A[0]*B[46]; 
  tmp[47] = 0.4517539514526256*A[2]*B[47]+0.7071067811865475*A[0]*B[47]+0.632455532033676*A[1]*B[28]+0.7071067811865475*A[2]*B[14]; 
  tmp[48] = 0.7071067811865475*A[2]*B[73]+0.7071067811865475*A[1]*B[61]+0.7071067811865475*A[0]*B[48]; 
  tmp[49] = 0.7071067811865475*A[2]*B[74]+0.7071067811865475*A[1]*B[64]+0.7071067811865475*A[0]*B[49]; 
  tmp[50] = 0.4517539514526256*A[2]*B[50]+0.7071067811865475*A[0]*B[50]+0.632455532033676*A[1]*B[31]+0.7071067811865475*A[2]*B[18]; 
  tmp[51] = 0.632455532033676*A[1]*B[66]+0.6324555320336759*A[2]*B[51]+0.7071067811865475*A[0]*B[51]+0.7071067811865475*A[1]*B[38]; 
  tmp[52] = 0.632455532033676*A[1]*B[67]+0.6324555320336759*A[2]*B[52]+0.7071067811865475*A[0]*B[52]+0.7071067811865475*A[1]*B[40]; 
  tmp[53] = 0.632455532033676*A[1]*B[69]+0.6324555320336759*A[2]*B[53]+0.7071067811865475*A[0]*B[53]+0.7071067811865475*A[1]*B[43]; 
  tmp[54] = 0.4517539514526256*A[2]*B[54]+0.7071067811865475*A[0]*B[54]+0.6324555320336759*A[1]*B[33]+0.7071067811865475*A[2]*B[22]; 
  tmp[55] = 0.4517539514526256*A[2]*B[55]+0.7071067811865475*A[0]*B[55]+0.6324555320336759*A[1]*B[34]+0.7071067811865475*A[2]*B[24]; 
  tmp[56] = 0.6324555320336759*A[1]*B[72]+0.6324555320336759*A[2]*B[56]+0.7071067811865475*A[0]*B[56]+0.7071067811865475*A[1]*B[46]; 
  tmp[57] = 0.4517539514526256*A[2]*B[57]+0.7071067811865475*A[0]*B[57]+0.6324555320336759*A[1]*B[36]+0.7071067811865475*A[2]*B[26]; 
  tmp[58] = 0.4517539514526256*A[2]*B[58]+0.7071067811865475*A[0]*B[58]+0.6324555320336759*A[1]*B[39]+0.7071067811865475*A[2]*B[27]; 
  tmp[59] = 0.7071067811865475*A[2]*B[76]+0.7071067811865475*A[1]*B[68]+0.7071067811865475*A[0]*B[59]; 
  tmp[60] = 0.4517539514526256*A[2]*B[60]+0.7071067811865475*A[0]*B[60]+0.6324555320336759*A[1]*B[41]+0.7071067811865475*A[2]*B[29]; 
  tmp[61] = 0.6324555320336759*A[1]*B[73]+0.6324555320336759*A[2]*B[61]+0.7071067811865475*A[0]*B[61]+0.7071067811865475*A[1]*B[48]; 
  tmp[62] = 0.4517539514526256*A[2]*B[62]+0.7071067811865475*A[0]*B[62]+0.6324555320336759*A[1]*B[42]+0.7071067811865475*A[2]*B[30]; 
  tmp[63] = 0.7071067811865475*A[2]*B[77]+0.7071067811865475*A[1]*B[70]+0.7071067811865475*A[0]*B[63]; 
  tmp[64] = 0.6324555320336759*A[1]*B[74]+0.6324555320336759*A[2]*B[64]+0.7071067811865475*A[0]*B[64]+0.7071067811865475*A[1]*B[49]; 
  tmp[65] = 0.7071067811865475*A[2]*B[78]+0.7071067811865475*A[1]*B[71]+0.7071067811865475*A[0]*B[65]; 
  tmp[66] = 0.4517539514526256*A[2]*B[66]+0.7071067811865475*A[0]*B[66]+0.632455532033676*A[1]*B[51]+0.7071067811865475*A[2]*B[38]; 
  tmp[67] = 0.4517539514526256*A[2]*B[67]+0.7071067811865475*A[0]*B[67]+0.632455532033676*A[1]*B[52]+0.7071067811865475*A[2]*B[40]; 
  tmp[68] = 0.632455532033676*A[1]*B[76]+0.6324555320336759*A[2]*B[68]+0.7071067811865475*A[0]*B[68]+0.7071067811865475*A[1]*B[59]; 
  tmp[69] = 0.4517539514526256*A[2]*B[69]+0.7071067811865475*A[0]*B[69]+0.632455532033676*A[1]*B[53]+0.7071067811865475*A[2]*B[43]; 
  tmp[70] = 0.632455532033676*A[1]*B[77]+0.6324555320336759*A[2]*B[70]+0.7071067811865475*A[0]*B[70]+0.7071067811865475*A[1]*B[63]; 
  tmp[71] = 0.632455532033676*A[1]*B[78]+0.6324555320336759*A[2]*B[71]+0.7071067811865475*A[0]*B[71]+0.7071067811865475*A[1]*B[65]; 
  tmp[72] = 0.4517539514526256*A[2]*B[72]+0.7071067811865475*A[0]*B[72]+0.6324555320336759*A[1]*B[56]+0.7071067811865475*A[2]*B[46]; 
  tmp[73] = 0.4517539514526256*A[2]*B[73]+0.7071067811865475*A[0]*B[73]+0.6324555320336759*A[1]*B[61]+0.7071067811865475*A[2]*B[48]; 
  tmp[74] = 0.4517539514526256*A[2]*B[74]+0.7071067811865475*A[0]*B[74]+0.6324555320336759*A[1]*B[64]+0.7071067811865475*A[2]*B[49]; 
  tmp[75] = 0.7071067811865475*A[2]*B[80]+0.7071067811865475*A[1]*B[79]+0.7071067811865475*A[0]*B[75]; 
  tmp[76] = 0.4517539514526256*A[2]*B[76]+0.7071067811865475*A[0]*B[76]+0.632455532033676*A[1]*B[68]+0.7071067811865475*A[2]*B[59]; 
  tmp[77] = 0.4517539514526256*A[2]*B[77]+0.7071067811865475*A[0]*B[77]+0.632455532033676*A[1]*B[70]+0.7071067811865475*A[2]*B[63]; 
  tmp[78] = 0.4517539514526256*A[2]*B[78]+0.7071067811865475*A[0]*B[78]+0.632455532033676*A[1]*B[71]+0.7071067811865475*A[2]*B[65]; 
  tmp[79] = 0.632455532033676*A[1]*B[80]+0.6324555320336759*A[2]*B[79]+0.7071067811865475*A[0]*B[79]+0.7071067811865475*A[1]*B[75]; 
  tmp[80] = 0.4517539514526256*A[2]*B[80]+0.7071067811865475*A[0]*B[80]+0.632455532033676*A[1]*B[79]+0.7071067811865475*A[2]*B[75]; 
 
  // This tmp allows for in-place multiplication. 
  for (unsigned short int i=0; i<81; i++) 
  { 
    out[i] = tmp[i]; 
  } 
 
} 
 
void CartFieldBinOpDivide1x3vTensor_P1(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
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
  double Bs[16]; 
  if (avgA) { 
    As[0] = A[0]; 
    As[1] = 0.0; 
    Bs[0] = B[0]; 
    Bs[1] = 0.0; 
    Bs[2] = B[2]; 
    Bs[3] = B[3]; 
    Bs[4] = B[4]; 
    Bs[5] = 0.0; 
    Bs[6] = 0.0; 
    Bs[7] = B[7]; 
    Bs[8] = 0.0; 
    Bs[9] = B[9]; 
    Bs[10] = B[10]; 
    Bs[11] = 0.0; 
    Bs[12] = 0.0; 
    Bs[13] = 0.0; 
    Bs[14] = B[14]; 
    Bs[15] = 0.0; 
  } else { 
    As[0] = A[0]; 
    As[1] = A[1]; 
    Bs[0] = B[0]; 
    Bs[1] = B[1]; 
    Bs[2] = B[2]; 
    Bs[3] = B[3]; 
    Bs[4] = B[4]; 
    Bs[5] = B[5]; 
    Bs[6] = B[6]; 
    Bs[7] = B[7]; 
    Bs[8] = B[8]; 
    Bs[9] = B[9]; 
    Bs[10] = B[10]; 
    Bs[11] = B[11]; 
    Bs[12] = B[12]; 
    Bs[13] = B[13]; 
    Bs[14] = B[14]; 
    Bs[15] = B[15]; 
  } 
 
  // Declare Eigen Matrix with triple basis tensor dotted with B vector. 
  Eigen::MatrixXd AEM = Eigen::MatrixXd::Zero(16,16); 
  // Declare Eigen Vector with coefficients of B. 
  Eigen::VectorXd BEV = Eigen::VectorXd::Zero(16);  
  // Declare vector with solution to system of equations. 
  Eigen::VectorXd u = Eigen::VectorXd::Zero(16);  
 
  // Fill AEM matrix. 
  AEM(0,0) = 0.7071067811865475*As[0]; 
  AEM(0,1) = 0.7071067811865475*As[1]; 
  AEM(0,2) = 0.7071067811865475*As[1]; 
  AEM(0,3) = 0.7071067811865475*As[0]; 
 
  // Fill BEV. 
  BEV << Bs[0],Bs[1],Bs[2],Bs[3],Bs[4],Bs[5],Bs[6],Bs[7],Bs[8],Bs[9],Bs[10],Bs[11],Bs[12],Bs[13],Bs[14],Bs[15]; 
 
  // Solve the system of equations. 
  u = AEM.colPivHouseholderQr().solve(BEV); 
 
  // Copy data from Eigen vector. 
  Eigen::Map<VectorXd>(out,16,1) = u; 
 
} 
 
void CartFieldBinOpDivide1x3vTensor_P2(const double *A, const double *B, const short int Ncomp, const short int eqNcomp, double *out) 
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
  double Bs[81]; 
  if (avgA) { 
    As[0] = A[0]; 
    As[1] = 0.0; 
    As[2] = 0.0; 
    Bs[0] = B[0]; 
    Bs[1] = 0.0; 
    Bs[2] = B[2]; 
    Bs[3] = B[3]; 
    Bs[4] = B[4]; 
    Bs[5] = 0.0; 
    Bs[6] = 0.0; 
    Bs[7] = B[7]; 
    Bs[8] = 0.0; 
    Bs[9] = B[9]; 
    Bs[10] = B[10]; 
    Bs[11] = 0.0; 
    Bs[12] = B[12]; 
    Bs[13] = B[13]; 
    Bs[14] = B[14]; 
    Bs[15] = 0.0; 
    Bs[16] = 0.0; 
    Bs[17] = 0.0; 
    Bs[18] = B[18]; 
    Bs[19] = 0.0; 
    Bs[20] = 0.0; 
    Bs[21] = 0.0; 
    Bs[22] = B[22]; 
    Bs[23] = 0.0; 
    Bs[24] = B[24]; 
    Bs[25] = 0.0; 
    Bs[26] = B[26]; 
    Bs[27] = B[27]; 
    Bs[28] = 0.0; 
    Bs[29] = B[29]; 
    Bs[30] = B[30]; 
    Bs[31] = 0.0; 
    Bs[32] = 0.0; 
    Bs[33] = 0.0; 
    Bs[34] = 0.0; 
    Bs[35] = 0.0; 
    Bs[36] = 0.0; 
    Bs[37] = 0.0; 
    Bs[38] = B[38]; 
    Bs[39] = 0.0; 
    Bs[40] = B[40]; 
    Bs[41] = 0.0; 
    Bs[42] = 0.0; 
    Bs[43] = B[43]; 
    Bs[44] = 0.0; 
    Bs[45] = 0.0; 
    Bs[46] = B[46]; 
    Bs[47] = 0.0; 
    Bs[48] = B[48]; 
    Bs[49] = B[49]; 
    Bs[50] = 0.0; 
    Bs[51] = 0.0; 
    Bs[52] = 0.0; 
    Bs[53] = 0.0; 
    Bs[54] = 0.0; 
    Bs[55] = 0.0; 
    Bs[56] = 0.0; 
    Bs[57] = 0.0; 
    Bs[58] = 0.0; 
    Bs[59] = B[59]; 
    Bs[60] = 0.0; 
    Bs[61] = 0.0; 
    Bs[62] = 0.0; 
    Bs[63] = B[63]; 
    Bs[64] = 0.0; 
    Bs[65] = B[65]; 
    Bs[66] = 0.0; 
    Bs[67] = 0.0; 
    Bs[68] = 0.0; 
    Bs[69] = 0.0; 
    Bs[70] = 0.0; 
    Bs[71] = 0.0; 
    Bs[72] = 0.0; 
    Bs[73] = 0.0; 
    Bs[74] = 0.0; 
    Bs[75] = B[75]; 
    Bs[76] = 0.0; 
    Bs[77] = 0.0; 
    Bs[78] = 0.0; 
    Bs[79] = 0.0; 
    Bs[80] = 0.0; 
  } else { 
    As[0] = A[0]; 
    As[1] = A[1]; 
    As[2] = A[2]; 
    Bs[0] = B[0]; 
    Bs[1] = B[1]; 
    Bs[2] = B[2]; 
    Bs[3] = B[3]; 
    Bs[4] = B[4]; 
    Bs[5] = B[5]; 
    Bs[6] = B[6]; 
    Bs[7] = B[7]; 
    Bs[8] = B[8]; 
    Bs[9] = B[9]; 
    Bs[10] = B[10]; 
    Bs[11] = B[11]; 
    Bs[12] = B[12]; 
    Bs[13] = B[13]; 
    Bs[14] = B[14]; 
    Bs[15] = B[15]; 
    Bs[16] = B[16]; 
    Bs[17] = B[17]; 
    Bs[18] = B[18]; 
    Bs[19] = B[19]; 
    Bs[20] = B[20]; 
    Bs[21] = B[21]; 
    Bs[22] = B[22]; 
    Bs[23] = B[23]; 
    Bs[24] = B[24]; 
    Bs[25] = B[25]; 
    Bs[26] = B[26]; 
    Bs[27] = B[27]; 
    Bs[28] = B[28]; 
    Bs[29] = B[29]; 
    Bs[30] = B[30]; 
    Bs[31] = B[31]; 
    Bs[32] = B[32]; 
    Bs[33] = B[33]; 
    Bs[34] = B[34]; 
    Bs[35] = B[35]; 
    Bs[36] = B[36]; 
    Bs[37] = B[37]; 
    Bs[38] = B[38]; 
    Bs[39] = B[39]; 
    Bs[40] = B[40]; 
    Bs[41] = B[41]; 
    Bs[42] = B[42]; 
    Bs[43] = B[43]; 
    Bs[44] = B[44]; 
    Bs[45] = B[45]; 
    Bs[46] = B[46]; 
    Bs[47] = B[47]; 
    Bs[48] = B[48]; 
    Bs[49] = B[49]; 
    Bs[50] = B[50]; 
    Bs[51] = B[51]; 
    Bs[52] = B[52]; 
    Bs[53] = B[53]; 
    Bs[54] = B[54]; 
    Bs[55] = B[55]; 
    Bs[56] = B[56]; 
    Bs[57] = B[57]; 
    Bs[58] = B[58]; 
    Bs[59] = B[59]; 
    Bs[60] = B[60]; 
    Bs[61] = B[61]; 
    Bs[62] = B[62]; 
    Bs[63] = B[63]; 
    Bs[64] = B[64]; 
    Bs[65] = B[65]; 
    Bs[66] = B[66]; 
    Bs[67] = B[67]; 
    Bs[68] = B[68]; 
    Bs[69] = B[69]; 
    Bs[70] = B[70]; 
    Bs[71] = B[71]; 
    Bs[72] = B[72]; 
    Bs[73] = B[73]; 
    Bs[74] = B[74]; 
    Bs[75] = B[75]; 
    Bs[76] = B[76]; 
    Bs[77] = B[77]; 
    Bs[78] = B[78]; 
    Bs[79] = B[79]; 
    Bs[80] = B[80]; 
  } 
 
  // Declare Eigen Matrix with triple basis tensor dotted with B vector. 
  Eigen::MatrixXd AEM = Eigen::MatrixXd::Zero(81,81); 
  // Declare Eigen Vector with coefficients of B. 
  Eigen::VectorXd BEV = Eigen::VectorXd::Zero(81);  
  // Declare vector with solution to system of equations. 
  Eigen::VectorXd u = Eigen::VectorXd::Zero(81);  
 
  // Fill AEM matrix. 
  AEM(0,0) = 0.7071067811865475*As[0]; 
  AEM(0,1) = 0.7071067811865475*As[1]; 
  AEM(0,3) = 0.7071067811865475*As[1]; 
  AEM(0,4) = 0.6324555320336759*As[2]+0.7071067811865475*As[0]; 
  AEM(0,8) = 0.7071067811865475*As[0]; 
  AEM(0,17) = 0.7071067811865475*As[1]; 
  AEM(0,33) = 0.7071067811865475*As[2]; 
  AEM(0,34) = 0.6324555320336759*As[1]; 
  AEM(0,59) = 0.7071067811865475*As[2]; 
 
  // Fill BEV. 
  BEV << Bs[0],Bs[1],Bs[2],Bs[3],Bs[4],Bs[5],Bs[6],Bs[7],Bs[8],Bs[9],Bs[10],Bs[11],Bs[12],Bs[13],Bs[14],Bs[15],Bs[16],Bs[17],Bs[18],Bs[19],Bs[20],Bs[21],Bs[22],Bs[23],Bs[24],Bs[25],Bs[26],Bs[27],Bs[28],Bs[29],Bs[30],Bs[31],Bs[32],Bs[33],Bs[34],Bs[35],Bs[36],Bs[37],Bs[38],Bs[39],Bs[40],Bs[41],Bs[42],Bs[43],Bs[44],Bs[45],Bs[46],Bs[47],Bs[48],Bs[49],Bs[50],Bs[51],Bs[52],Bs[53],Bs[54],Bs[55],Bs[56],Bs[57],Bs[58],Bs[59],Bs[60],Bs[61],Bs[62],Bs[63],Bs[64],Bs[65],Bs[66],Bs[67],Bs[68],Bs[69],Bs[70],Bs[71],Bs[72],Bs[73],Bs[74],Bs[75],Bs[76],Bs[77],Bs[78],Bs[79],Bs[80]; 
 
  // Solve the system of equations. 
  u = AEM.colPivHouseholderQr().solve(BEV); 
 
  // Copy data from Eigen vector. 
  Eigen::Map<VectorXd>(out,81,1) = u; 
 
} 
 