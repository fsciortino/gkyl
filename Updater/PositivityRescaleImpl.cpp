#include <PositivityRescaleImpl.h> 
double findMinNodalValue(const double *fIn, int ndim) { 
  double fmin = 0.0; 
  if (ndim == 1) { 
  double fVal[2]; // fVal = array of vales of fIn evaluated at each node 
  fVal[0] = 0.7071067811865475*(fIn[0]-0.5773502691896258*fIn[1]); 
  fVal[1] = 0.7071067811865475*(0.5773502691896258*fIn[1]+fIn[0]); 
  fmin = *std::min_element(fVal, fVal+2); 
  } 
  else if(ndim == 2) { 
  double fVal[4]; // fVal = array of vales of fIn evaluated at each node 
  fVal[0] = 0.1666666666666667*fIn[3]-0.2886751345948129*(fIn[2]+fIn[1])+0.5*fIn[0]; 
  fVal[1] = (-0.1666666666666667*fIn[3])-0.2886751345948129*fIn[2]+0.5*(0.5773502691896258*fIn[1]+fIn[0]); 
  fVal[2] = (-0.1666666666666667*fIn[3])+0.5773502691896258*(0.5*fIn[2]-0.5*fIn[1])+0.5*fIn[0]; 
  fVal[3] = 0.1666666666666667*fIn[3]+0.5*(0.5773502691896258*(fIn[2]+fIn[1])+fIn[0]); 
  fmin = *std::min_element(fVal, fVal+4); 
  } 
  else if(ndim == 3) { 
  double fVal[8]; // fVal = array of vales of fIn evaluated at each node 
  fVal[0] = -0.3535533905932737*(0.1924500897298753*fIn[7]-0.3333333333333333*fIn[6]-0.3333333333333333*(fIn[5]+fIn[4])+0.5773502691896258*(fIn[3]+fIn[2]+fIn[1])-1.0*fIn[0]); 
  fVal[1] = 0.3535533905932737*(0.1924500897298753*fIn[7]+0.3333333333333333*fIn[6]-0.3333333333333333*(fIn[5]+fIn[4])+0.5773502691896258*(fIn[1]-1.0*(fIn[3]+fIn[2]))+fIn[0]); 
  fVal[2] = 0.3535533905932737*(0.1924500897298753*fIn[7]-0.3333333333333333*fIn[6]+0.3333333333333333*fIn[5]-0.3333333333333333*fIn[4]+0.5773502691896258*((-1.0*fIn[3])+fIn[2]-1.0*fIn[1])+fIn[0]); 
  fVal[3] = -0.3535533905932737*(0.1924500897298753*fIn[7]-1.0*((-0.3333333333333333*fIn[6])-1.0*(0.3333333333333333*fIn[5]-0.3333333333333333*fIn[4]))+0.5773502691896258*fIn[3]-1.0*(0.5773502691896258*(fIn[2]+fIn[1])+fIn[0])); 
  fVal[4] = 0.3535533905932737*(0.1924500897298753*fIn[7]-0.3333333333333333*(fIn[6]+fIn[5])+0.3333333333333333*fIn[4]+0.5773502691896258*(fIn[3]-1.0*(fIn[2]+fIn[1]))+fIn[0]); 
  fVal[5] = -0.3535533905932737*(0.1924500897298753*fIn[7]-1.0*((-0.3333333333333333*fIn[6])-1.0*(0.3333333333333333*fIn[4]-0.3333333333333333*fIn[5]))+0.5773502691896258*(fIn[2]-1.0*fIn[3])-1.0*(0.5773502691896258*fIn[1]+fIn[0])); 
  fVal[6] = -0.3535533905932737*(0.1924500897298753*fIn[7]+0.3333333333333333*((-1.0*fIn[6])+fIn[5]+fIn[4])+0.5773502691896258*(fIn[1]-1.0*(fIn[3]+fIn[2]))-1.0*fIn[0]); 
  fVal[7] = 0.3535533905932737*(0.1924500897298753*fIn[7]+0.3333333333333333*(fIn[6]+fIn[5]+fIn[4])+0.5773502691896258*(fIn[3]+fIn[2]+fIn[1])+fIn[0]); 
  fmin = *std::min_element(fVal, fVal+8); 
  } 
  else if(ndim == 4) { 
  double fVal[16]; // fVal = array of vales of fIn evaluated at each node 
  fVal[0] = 0.02777777777777778*fIn[15]-0.04811252243246882*(fIn[14]+fIn[13]+fIn[12]+fIn[11])+0.08333333333333333*(fIn[10]+fIn[9]+fIn[8]+fIn[7]+fIn[6]+fIn[5])-0.1443375672974065*(fIn[4]+fIn[3]+fIn[2]+fIn[1])+0.25*fIn[0]; 
  fVal[1] = (-0.02777777777777778*fIn[15])+0.1924500897298753*(0.25*(fIn[13]+fIn[12]+fIn[11])-0.25*fIn[14])+0.08333333333333333*(fIn[10]+fIn[9])-0.08333333333333333*fIn[8]+0.08333333333333333*fIn[7]-0.08333333333333333*(fIn[6]+fIn[5])-0.1443375672974065*(fIn[4]+fIn[3]+fIn[2])+0.25*(0.5773502691896258*fIn[1]+fIn[0]); 
  fVal[2] = (-0.02777777777777778*fIn[15])+0.1924500897298753*(0.25*fIn[14]-0.25*fIn[13]+0.25*(fIn[12]+fIn[11]))+0.08333333333333333*fIn[10]-0.08333333333333333*fIn[9]+0.08333333333333333*fIn[8]-0.08333333333333333*fIn[7]+0.08333333333333333*fIn[6]-0.08333333333333333*fIn[5]+0.5773502691896258*((-0.25*(fIn[4]+fIn[3]))+0.25*fIn[2]-0.25*fIn[1])+0.25*fIn[0]; 
  fVal[3] = 0.02777777777777778*fIn[15]+0.1924500897298753*(0.25*(fIn[14]+fIn[13])-0.25*(fIn[12]+fIn[11]))+0.08333333333333333*fIn[10]-0.08333333333333333*(fIn[9]+fIn[8]+fIn[7]+fIn[6])+0.08333333333333333*fIn[5]-0.1443375672974065*(fIn[4]+fIn[3])+0.25*(0.5773502691896258*(fIn[2]+fIn[1])+fIn[0]); 
  fVal[4] = (-0.02777777777777778*fIn[15])+0.1924500897298753*(0.25*(fIn[14]+fIn[13])-0.25*fIn[12]+0.25*fIn[11])-0.08333333333333333*fIn[10]+0.08333333333333333*(fIn[9]+fIn[8])-0.08333333333333333*(fIn[7]+fIn[6])+0.08333333333333333*fIn[5]+0.5773502691896258*((-0.25*fIn[4])+0.25*fIn[3]-0.25*(fIn[2]+fIn[1]))+0.25*fIn[0]; 
  fVal[5] = 0.02777777777777778*fIn[15]+0.1924500897298753*(0.25*fIn[14]-0.25*fIn[13]+0.25*fIn[12]-0.25*fIn[11])-0.08333333333333333*fIn[10]+0.08333333333333333*fIn[9]-0.08333333333333333*(fIn[8]+fIn[7])+0.08333333333333333*fIn[6]-0.08333333333333333*fIn[5]+0.5773502691896258*((-0.25*fIn[4])+0.25*fIn[3]-0.25*fIn[2])+0.25*(0.5773502691896258*fIn[1]+fIn[0]); 
  fVal[6] = 0.02777777777777778*fIn[15]+0.1924500897298753*((-0.25*fIn[14])+0.25*(fIn[13]+fIn[12])-0.25*fIn[11])-0.08333333333333333*(fIn[10]+fIn[9])+0.08333333333333333*(fIn[8]+fIn[7])-0.08333333333333333*(fIn[6]+fIn[5])+0.5773502691896258*((-0.25*fIn[4])+0.25*(fIn[3]+fIn[2])-0.25*fIn[1])+0.25*fIn[0]; 
  fVal[7] = (-0.02777777777777778*fIn[15])+0.1924500897298753*(0.25*fIn[11]-0.25*(fIn[14]+fIn[13]+fIn[12]))-0.08333333333333333*(fIn[10]+fIn[9]+fIn[8])+0.08333333333333333*(fIn[7]+fIn[6]+fIn[5])-0.1443375672974065*fIn[4]+0.25*(0.5773502691896258*(fIn[3]+fIn[2]+fIn[1])+fIn[0]); 
  fVal[8] = (-0.02777777777777778*fIn[15])+0.1924500897298753*(0.25*(fIn[14]+fIn[13]+fIn[12])-0.25*fIn[11])-0.08333333333333333*(fIn[10]+fIn[9]+fIn[8])+0.08333333333333333*(fIn[7]+fIn[6]+fIn[5])+0.5773502691896258*(0.25*fIn[4]-0.25*(fIn[3]+fIn[2]+fIn[1]))+0.25*fIn[0]; 
  fVal[9] = 0.02777777777777778*fIn[15]+0.1924500897298753*(0.25*fIn[14]-0.25*(fIn[13]+fIn[12])+0.25*fIn[11])-0.08333333333333333*(fIn[10]+fIn[9])+0.08333333333333333*(fIn[8]+fIn[7])-0.08333333333333333*(fIn[6]+fIn[5])+0.5773502691896258*(0.25*fIn[4]-0.25*(fIn[3]+fIn[2]))+0.25*(0.5773502691896258*fIn[1]+fIn[0]); 
  fVal[10] = 0.02777777777777778*fIn[15]+0.1924500897298753*((-0.25*fIn[14])+0.25*fIn[13]-0.25*fIn[12]+0.25*fIn[11])-0.08333333333333333*fIn[10]+0.08333333333333333*fIn[9]-0.08333333333333333*(fIn[8]+fIn[7])+0.08333333333333333*fIn[6]-0.08333333333333333*fIn[5]+0.5773502691896258*(0.25*fIn[4]-0.25*fIn[3]+0.25*fIn[2]-0.25*fIn[1])+0.25*fIn[0]; 
  fVal[11] = (-0.02777777777777778*fIn[15])+0.1924500897298753*((-0.25*(fIn[14]+fIn[13]))+0.25*fIn[12]-0.25*fIn[11])-0.08333333333333333*fIn[10]+0.08333333333333333*(fIn[9]+fIn[8])-0.08333333333333333*(fIn[7]+fIn[6])+0.08333333333333333*fIn[5]+0.5773502691896258*(0.25*fIn[4]-0.25*fIn[3])+0.25*(0.5773502691896258*(fIn[2]+fIn[1])+fIn[0]); 
  fVal[12] = 0.02777777777777778*fIn[15]+0.1924500897298753*(0.25*(fIn[12]+fIn[11])-0.25*(fIn[14]+fIn[13]))+0.08333333333333333*fIn[10]-0.08333333333333333*(fIn[9]+fIn[8]+fIn[7]+fIn[6])+0.08333333333333333*fIn[5]+0.5773502691896258*(0.25*(fIn[4]+fIn[3])-0.25*(fIn[2]+fIn[1]))+0.25*fIn[0]; 
  fVal[13] = (-0.02777777777777778*fIn[15])+0.1924500897298753*((-0.25*fIn[14])+0.25*fIn[13]-0.25*(fIn[12]+fIn[11]))+0.08333333333333333*fIn[10]-0.08333333333333333*fIn[9]+0.08333333333333333*fIn[8]-0.08333333333333333*fIn[7]+0.08333333333333333*fIn[6]-0.08333333333333333*fIn[5]+0.5773502691896258*(0.25*(fIn[4]+fIn[3])-0.25*fIn[2])+0.25*(0.5773502691896258*fIn[1]+fIn[0]); 
  fVal[14] = (-0.02777777777777778*fIn[15])+0.1924500897298753*(0.25*fIn[14]-0.25*(fIn[13]+fIn[12]+fIn[11]))+0.08333333333333333*(fIn[10]+fIn[9])-0.08333333333333333*fIn[8]+0.08333333333333333*fIn[7]-0.08333333333333333*(fIn[6]+fIn[5])+0.5773502691896258*(0.25*(fIn[4]+fIn[3]+fIn[2])-0.25*fIn[1])+0.25*fIn[0]; 
  fVal[15] = 0.02777777777777778*fIn[15]+0.04811252243246882*(fIn[14]+fIn[13]+fIn[12]+fIn[11])+0.08333333333333333*(fIn[10]+fIn[9]+fIn[8]+fIn[7]+fIn[6]+fIn[5])+0.25*(0.5773502691896258*(fIn[4]+fIn[3]+fIn[2]+fIn[1])+fIn[0]); 
  fmin = *std::min_element(fVal, fVal+16); 
  } 
  else if(ndim == 5) { 
  double fVal[32]; // fVal = array of vales of fIn evaluated at each node 
  fVal[0] = -0.1767766952966368*(0.06415002990995844*fIn[31]-0.1111111111111111*fIn[30]-0.1111111111111111*(fIn[29]+fIn[28])-0.1111111111111111*(fIn[27]+fIn[26])+0.1924500897298753*(fIn[25]+fIn[24]+fIn[23]+fIn[22]+fIn[21]+fIn[20]+fIn[19]+fIn[18]+fIn[17]+fIn[16])-0.3333333333333333*(fIn[15]+fIn[14])-0.3333333333333333*(fIn[13]+fIn[12])-0.3333333333333333*(fIn[11]+fIn[10])-0.3333333333333333*(fIn[9]+fIn[8])-0.3333333333333333*(fIn[7]+fIn[6])+0.5773502691896258*(fIn[5]+fIn[4]+fIn[3]+fIn[2]+fIn[1])-1.0*fIn[0]); 
  fVal[1] = 0.1767766952966368*(0.06415002990995844*fIn[31]+0.1111111111111111*fIn[30]-0.1111111111111111*(fIn[29]+fIn[28]+fIn[27]+fIn[26])+0.1924500897298753*((-1.0*(fIn[25]+fIn[24]))+fIn[23]-1.0*fIn[22]+fIn[21]+fIn[20]-1.0*fIn[19]+fIn[18]+fIn[17]+fIn[16])+0.3333333333333333*(fIn[15]+fIn[14]+fIn[13])-0.3333333333333333*fIn[12]+0.3333333333333333*(fIn[11]+fIn[10])-0.3333333333333333*fIn[9]+0.3333333333333333*fIn[8]-0.3333333333333333*(fIn[7]+fIn[6])-0.5773502691896258*(fIn[5]+fIn[4]+fIn[3]+fIn[2]-1.0*fIn[1])+fIn[0]); 
  fVal[2] = 0.1767766952966368*(0.06415002990995844*fIn[31]-0.1111111111111111*fIn[30]+0.1111111111111111*fIn[29]-0.1111111111111111*(fIn[28]+fIn[27]+fIn[26])+0.1924500897298753*((-1.0*fIn[25])+fIn[24]-1.0*fIn[23]+fIn[22]-1.0*fIn[21]+fIn[20]+fIn[19]-1.0*fIn[18]+fIn[17]+fIn[16])+0.3333333333333333*(fIn[15]+fIn[14])-0.3333333333333333*fIn[13]+0.3333333333333333*(fIn[12]+fIn[11])-0.3333333333333333*fIn[10]+0.3333333333333333*fIn[9]-0.3333333333333333*fIn[8]+0.3333333333333333*fIn[7]-0.3333333333333333*fIn[6]+0.5773502691896258*((-1.0*(fIn[5]+fIn[4]+fIn[3]-1.0*fIn[2]))-1.0*fIn[1])+fIn[0]); 
  fVal[3] = -0.1767766952966368*(0.06415002990995844*fIn[31]-1.0*((-0.1111111111111111*fIn[30])-1.0*(0.1111111111111111*fIn[29]-0.1111111111111111*fIn[28]))-0.1111111111111111*(fIn[27]+fIn[26])+0.1924500897298753*(fIn[25]-1.0*(fIn[24]+fIn[23]+fIn[22]+fIn[21]-1.0*fIn[20]+fIn[19]+fIn[18]-1.0*(fIn[17]+fIn[16])))-1.0*(0.3333333333333333*fIn[15]-1.0*((-0.3333333333333333*(fIn[14]-1.0*(fIn[13]+fIn[12]-1.0*fIn[11])))-1.0*((-0.3333333333333333*(fIn[10]+fIn[9]+fIn[8]))-1.0*(0.3333333333333333*fIn[7]-0.3333333333333333*fIn[6]))))+0.5773502691896258*(fIn[5]+fIn[4]+fIn[3])-1.0*(0.5773502691896258*(fIn[2]+fIn[1])+fIn[0])); 
  fVal[4] = 0.1767766952966368*(0.06415002990995844*fIn[31]-0.1111111111111111*(fIn[30]+fIn[29])+0.1111111111111111*fIn[28]-0.1111111111111111*(fIn[27]+fIn[26])+0.1924500897298753*(fIn[25]-1.0*(fIn[24]+fIn[23]-1.0*fIn[22])+fIn[21]-1.0*fIn[20]+fIn[19]+fIn[18]-1.0*fIn[17]+fIn[16])+0.3333333333333333*fIn[15]-0.3333333333333333*fIn[14]+0.3333333333333333*(fIn[13]+fIn[12])-0.3333333333333333*fIn[11]+0.3333333333333333*(fIn[10]+fIn[9])-0.3333333333333333*(fIn[8]+fIn[7])+0.3333333333333333*fIn[6]+0.5773502691896258*((-1.0*(fIn[5]+fIn[4]))+fIn[3]-1.0*(fIn[2]+fIn[1]))+fIn[0]); 
  fVal[5] = -0.1767766952966368*(0.06415002990995844*fIn[31]-1.0*(0.1111111111111111*fIn[29]-0.1111111111111111*fIn[30])-0.1111111111111111*((-1.0*fIn[28])+fIn[27]+fIn[26])+0.1924500897298753*((-1.0*fIn[25])+fIn[24]-1.0*(fIn[23]+fIn[22]-1.0*fIn[21]+fIn[20]+fIn[19]-1.0*fIn[18]+fIn[17]-1.0*fIn[16]))-1.0*(0.3333333333333333*fIn[15]-1.0*(0.3333333333333333*fIn[14]-1.0*(0.3333333333333333*(fIn[13]-1.0*(fIn[12]+fIn[11]-1.0*fIn[10])-1.0*(fIn[9]+fIn[8]-1.0*fIn[7]))-0.3333333333333333*fIn[6])))+0.5773502691896258*(fIn[5]+fIn[4]-1.0*fIn[3]+fIn[2])-1.0*(0.5773502691896258*fIn[1]+fIn[0])); 
  fVal[6] = -0.1767766952966368*(0.06415002990995844*fIn[31]-0.1111111111111111*fIn[30]-0.1111111111111111*((-1.0*(fIn[29]+fIn[28]))+fIn[27]+fIn[26])+0.1924500897298753*((-1.0*(fIn[25]+fIn[24]))+fIn[23]+fIn[22]-1.0*(fIn[21]+fIn[20]-1.0*fIn[19]+fIn[18]+fIn[17]-1.0*fIn[16]))+0.3333333333333333*((-1.0*fIn[15])+fIn[14]+fIn[13])+0.3333333333333333*((-1.0*fIn[12])+fIn[11]+fIn[10])+0.3333333333333333*((-1.0*(fIn[9]+fIn[8]))+fIn[7]+fIn[6])+0.5773502691896258*(fIn[5]+fIn[4]-1.0*(fIn[3]+fIn[2]-1.0*fIn[1]))-1.0*fIn[0]); 
  fVal[7] = 0.1767766952966368*(0.06415002990995844*fIn[31]+0.1111111111111111*(fIn[30]+fIn[29]+fIn[28])-0.1111111111111111*(fIn[27]+fIn[26])+0.1924500897298753*(fIn[25]+fIn[24]+fIn[23]-1.0*(fIn[22]+fIn[21]+fIn[20]+fIn[19]+fIn[18]+fIn[17]-1.0*fIn[16]))+0.3333333333333333*fIn[15]-0.3333333333333333*(fIn[14]+fIn[13]+fIn[12]+fIn[11]+fIn[10]+fIn[9])+0.3333333333333333*(fIn[8]+fIn[7]+fIn[6])+0.5773502691896258*((-1.0*(fIn[5]+fIn[4]))+fIn[3]+fIn[2]+fIn[1])+fIn[0]); 
  fVal[8] = 0.1767766952966368*(0.06415002990995844*fIn[31]-0.1111111111111111*(fIn[30]+fIn[29]+fIn[28])+0.1111111111111111*fIn[27]-0.1111111111111111*fIn[26]+0.1924500897298753*(fIn[25]+fIn[24]+fIn[23]-1.0*(fIn[22]+fIn[21]+fIn[20]-1.0*(fIn[19]+fIn[18]+fIn[17])+fIn[16]))-0.3333333333333333*fIn[15]+0.3333333333333333*(fIn[14]+fIn[13]+fIn[12])-0.3333333333333333*(fIn[11]+fIn[10]+fIn[9])+0.3333333333333333*(fIn[8]+fIn[7]+fIn[6])+0.5773502691896258*((-1.0*fIn[5])+fIn[4]-1.0*(fIn[3]+fIn[2]+fIn[1]))+fIn[0]); 
  fVal[9] = -0.1767766952966368*(0.06415002990995844*fIn[31]-1.0*(0.1111111111111111*fIn[26]-0.1111111111111111*(fIn[30]-1.0*(fIn[29]+fIn[28]-1.0*fIn[27])))+0.1924500897298753*((-1.0*(fIn[25]+fIn[24]))+fIn[23]+fIn[22]-1.0*(fIn[21]+fIn[20]+fIn[19]-1.0*(fIn[18]+fIn[17])))-1.0*(0.1924500897298753*fIn[16]-1.0*(0.3333333333333333*fIn[15]-0.3333333333333333*fIn[14])+0.3333333333333333*fIn[13]-0.3333333333333333*fIn[12])+0.3333333333333333*(fIn[11]+fIn[10])+0.3333333333333333*((-1.0*(fIn[9]+fIn[8]))+fIn[7]+fIn[6])+0.5773502691896258*(fIn[5]-1.0*fIn[4]+fIn[3]+fIn[2])-1.0*(0.5773502691896258*fIn[1]+fIn[0])); 
  fVal[10] = -0.1767766952966368*(0.06415002990995844*fIn[31]-1.0*(0.1111111111111111*(fIn[30]-1.0*fIn[29])-0.1111111111111111*(fIn[27]-1.0*fIn[28])+0.1111111111111111*fIn[26])+0.1924500897298753*((-1.0*fIn[25])+fIn[24]-1.0*(fIn[23]+fIn[22]-1.0*fIn[21]+fIn[20])+fIn[19]-1.0*fIn[18]+fIn[17])-1.0*(0.1924500897298753*fIn[16]-1.0*(0.3333333333333333*(fIn[15]-1.0*fIn[14])-1.0*(0.3333333333333333*((-1.0*(fIn[13]-1.0*fIn[12]+fIn[11]))+fIn[10]-1.0*(fIn[9]+fIn[8]-1.0*fIn[7]))-0.3333333333333333*fIn[6])))+0.5773502691896258*(fIn[5]-1.0*fIn[4]+fIn[3]-1.0*fIn[2]+fIn[1])-1.0*fIn[0]); 
  fVal[11] = 0.1767766952966368*(0.06415002990995844*fIn[31]+0.1111111111111111*(fIn[30]+fIn[29])-0.1111111111111111*fIn[28]+0.1111111111111111*fIn[27]-0.1111111111111111*fIn[26]+0.1924500897298753*(fIn[25]-1.0*(fIn[24]+fIn[23]-1.0*fIn[22])+fIn[21]-1.0*(fIn[20]+fIn[19]+fIn[18]-1.0*fIn[17]+fIn[16]))-0.3333333333333333*fIn[15]+0.3333333333333333*fIn[14]-0.3333333333333333*(fIn[13]+fIn[12]+fIn[11])+0.3333333333333333*(fIn[10]+fIn[9])-0.3333333333333333*(fIn[8]+fIn[7])+0.3333333333333333*fIn[6]+0.5773502691896258*((-1.0*fIn[5])+fIn[4]-1.0*fIn[3]+fIn[2]+fIn[1])+fIn[0]); 
  fVal[12] = -0.1767766952966368*(0.06415002990995844*fIn[31]-1.0*(0.1111111111111111*fIn[30]-1.0*(0.1111111111111111*fIn[28]-0.1111111111111111*fIn[29])-0.1111111111111111*fIn[27]+0.1111111111111111*fIn[26])+0.1924500897298753*(fIn[25]-1.0*(fIn[24]+fIn[23]+fIn[22]+fIn[21]-1.0*(fIn[20]+fIn[19]+fIn[18])))-1.0*(0.1924500897298753*(fIn[17]+fIn[16])-1.0*((-0.3333333333333333*((-1.0*(fIn[15]+fIn[14]))+fIn[13]+fIn[12]))-1.0*(0.3333333333333333*fIn[11]-0.3333333333333333*(fIn[10]+fIn[9]+fIn[8]))+0.3333333333333333*fIn[7]-0.3333333333333333*fIn[6]))+0.5773502691896258*(fIn[5]-1.0*(fIn[4]+fIn[3]-1.0*fIn[2])+fIn[1])-1.0*fIn[0]); 
  fVal[13] = 0.1767766952966368*(0.06415002990995844*fIn[31]+0.1111111111111111*fIn[30]-0.1111111111111111*fIn[29]+0.1111111111111111*(fIn[28]+fIn[27])-0.1111111111111111*fIn[26]+0.1924500897298753*((-1.0*fIn[25])+fIn[24]-1.0*fIn[23]+fIn[22]-1.0*fIn[21]+fIn[20]-1.0*fIn[19]+fIn[18]-1.0*(fIn[17]+fIn[16]))-0.3333333333333333*(fIn[15]+fIn[14])+0.3333333333333333*fIn[13]-0.3333333333333333*fIn[12]+0.3333333333333333*fIn[11]-0.3333333333333333*fIn[10]+0.3333333333333333*fIn[9]-0.3333333333333333*fIn[8]+0.3333333333333333*fIn[7]-0.3333333333333333*fIn[6]+0.5773502691896258*((-1.0*fIn[5])+fIn[4]+fIn[3]-1.0*fIn[2]+fIn[1])+fIn[0]); 
  fVal[14] = 0.1767766952966368*(0.06415002990995844*fIn[31]-0.1111111111111111*fIn[30]+0.1111111111111111*(fIn[29]+fIn[28]+fIn[27])-0.1111111111111111*fIn[26]+0.1924500897298753*((-1.0*(fIn[25]+fIn[24]))+fIn[23]-1.0*fIn[22]+fIn[21]+fIn[20]+fIn[19]-1.0*(fIn[18]+fIn[17]+fIn[16]))-0.3333333333333333*(fIn[15]+fIn[14]+fIn[13])+0.3333333333333333*(fIn[12]+fIn[11]+fIn[10])-0.3333333333333333*fIn[9]+0.3333333333333333*fIn[8]-0.3333333333333333*(fIn[7]+fIn[6])+0.5773502691896258*((-1.0*fIn[5])+fIn[4]+fIn[3]+fIn[2]-1.0*fIn[1])+fIn[0]); 
  fVal[15] = -0.1767766952966368*(0.06415002990995844*fIn[31]-1.0*((-0.1111111111111111*(fIn[30]+fIn[29]+fIn[28]))-0.1111111111111111*fIn[27]+0.1111111111111111*fIn[26])+0.1924500897298753*(fIn[25]+fIn[24]+fIn[23]+fIn[22]+fIn[21]+fIn[20]-1.0*(fIn[19]+fIn[18]+fIn[17]+fIn[16]))+0.3333333333333333*(fIn[15]+fIn[14]+fIn[13]+fIn[12]-1.0*(fIn[11]+fIn[10]))-0.3333333333333333*(fIn[9]+fIn[8])-0.3333333333333333*(fIn[7]+fIn[6])+0.5773502691896258*fIn[5]-1.0*(0.5773502691896258*(fIn[4]+fIn[3]+fIn[2]+fIn[1])+fIn[0])); 
  fVal[16] = 0.1767766952966368*(0.06415002990995844*fIn[31]-0.1111111111111111*(fIn[30]+fIn[29]+fIn[28]+fIn[27])+0.1111111111111111*fIn[26]+0.1924500897298753*(fIn[25]+fIn[24]+fIn[23]+fIn[22]+fIn[21]+fIn[20]-1.0*(fIn[19]+fIn[18]+fIn[17]+fIn[16]))-0.3333333333333333*(fIn[15]+fIn[14]+fIn[13]+fIn[12])+0.3333333333333333*(fIn[11]+fIn[10]+fIn[9]+fIn[8]+fIn[7]+fIn[6])+0.5773502691896258*(fIn[5]-1.0*(fIn[4]+fIn[3]+fIn[2]+fIn[1]))+fIn[0]); 
  fVal[17] = -0.1767766952966368*(0.06415002990995844*fIn[31]-1.0*((-0.1111111111111111*fIn[30])+0.1111111111111111*(fIn[29]+fIn[28])+0.1111111111111111*fIn[27]-0.1111111111111111*fIn[26])+0.1924500897298753*((-1.0*(fIn[25]+fIn[24]))+fIn[23]-1.0*fIn[22]+fIn[21]+fIn[20]+fIn[19])-1.0*(0.1924500897298753*(fIn[18]+fIn[17]+fIn[16])-1.0*((-0.3333333333333333*(fIn[11]-1.0*(fIn[15]+fIn[14]+fIn[13]-1.0*fIn[12])))-1.0*(0.3333333333333333*fIn[10]-0.3333333333333333*fIn[9])))+0.3333333333333333*((-1.0*fIn[8])+fIn[7]+fIn[6])+0.5773502691896258*((-1.0*fIn[5])+fIn[4]+fIn[3]+fIn[2])-1.0*(0.5773502691896258*fIn[1]+fIn[0])); 
  fVal[18] = -0.1767766952966368*(0.06415002990995844*fIn[31]-1.0*(0.1111111111111111*fIn[30]-1.0*(0.1111111111111111*fIn[29]-0.1111111111111111*fIn[28])+0.1111111111111111*fIn[27]-0.1111111111111111*fIn[26])+0.1924500897298753*((-1.0*fIn[25])+fIn[24]-1.0*fIn[23]+fIn[22]-1.0*fIn[21]+fIn[20]-1.0*fIn[19]+fIn[18]-1.0*(fIn[17]+fIn[16]))+0.3333333333333333*(fIn[15]+fIn[14]-1.0*fIn[13]+fIn[12]-1.0*fIn[11]+fIn[10]-1.0*fIn[9]+fIn[8]-1.0*fIn[7]+fIn[6])+0.5773502691896258*((-1.0*fIn[5])+fIn[4]+fIn[3]-1.0*fIn[2]+fIn[1])-1.0*fIn[0]); 
  fVal[19] = 0.1767766952966368*(0.06415002990995844*fIn[31]+0.1111111111111111*(fIn[30]+fIn[29])-0.1111111111111111*(fIn[28]+fIn[27])+0.1111111111111111*fIn[26]+0.1924500897298753*(fIn[25]-1.0*(fIn[24]+fIn[23]+fIn[22]+fIn[21]-1.0*(fIn[20]+fIn[19]+fIn[18]))-1.0*(fIn[17]+fIn[16]))-0.3333333333333333*(fIn[15]+fIn[14])+0.3333333333333333*(fIn[13]+fIn[12]+fIn[11])-0.3333333333333333*(fIn[10]+fIn[9]+fIn[8]+fIn[7])+0.3333333333333333*fIn[6]+0.5773502691896258*(fIn[5]-1.0*(fIn[4]+fIn[3]-1.0*fIn[2])+fIn[1])+fIn[0]); 
  fVal[20] = -0.1767766952966368*(0.06415002990995844*fIn[31]-1.0*(0.1111111111111111*fIn[30]+0.1111111111111111*fIn[29]+0.1111111111111111*(fIn[27]-1.0*fIn[28])-0.1111111111111111*fIn[26])+0.1924500897298753*(fIn[25]-1.0*(fIn[24]+fIn[23]-1.0*fIn[22])+fIn[21]-1.0*(fIn[20]+fIn[19]+fIn[18]-1.0*fIn[17]))-1.0*(0.1924500897298753*fIn[16]-0.3333333333333333*fIn[15]-0.3333333333333333*((-1.0*fIn[14])+fIn[13]+fIn[12])-1.0*(0.3333333333333333*fIn[11]-0.3333333333333333*fIn[10])+0.3333333333333333*fIn[9]-0.3333333333333333*fIn[8]-1.0*(0.3333333333333333*fIn[7]-0.3333333333333333*fIn[6]))+0.5773502691896258*((-1.0*fIn[5])+fIn[4]-1.0*fIn[3]+fIn[2]+fIn[1])-1.0*fIn[0]); 
  fVal[21] = 0.1767766952966368*(0.06415002990995844*fIn[31]+0.1111111111111111*fIn[30]-0.1111111111111111*fIn[29]+0.1111111111111111*fIn[28]-0.1111111111111111*fIn[27]+0.1111111111111111*fIn[26]+0.1924500897298753*((-1.0*fIn[25])+fIn[24]-1.0*(fIn[23]+fIn[22]-1.0*fIn[21]+fIn[20])+fIn[19]-1.0*fIn[18]+fIn[17]-1.0*fIn[16])-0.3333333333333333*fIn[15]+0.3333333333333333*fIn[14]-0.3333333333333333*fIn[13]+0.3333333333333333*fIn[12]-0.3333333333333333*fIn[11]+0.3333333333333333*fIn[10]-0.3333333333333333*(fIn[9]+fIn[8])+0.3333333333333333*fIn[7]-0.3333333333333333*fIn[6]+0.5773502691896258*(fIn[5]-1.0*fIn[4]+fIn[3]-1.0*fIn[2]+fIn[1])+fIn[0]); 
  fVal[22] = 0.1767766952966368*(0.06415002990995844*fIn[31]-0.1111111111111111*fIn[30]+0.1111111111111111*(fIn[29]+fIn[28])-0.1111111111111111*fIn[27]+0.1111111111111111*fIn[26]+0.1924500897298753*((-1.0*(fIn[25]+fIn[24]))+fIn[23]+fIn[22]-1.0*(fIn[21]+fIn[20]+fIn[19]-1.0*(fIn[18]+fIn[17])+fIn[16]))-0.3333333333333333*fIn[15]+0.3333333333333333*(fIn[14]+fIn[13])-0.3333333333333333*(fIn[12]+fIn[11]+fIn[10])+0.3333333333333333*(fIn[9]+fIn[8])-0.3333333333333333*(fIn[7]+fIn[6])+0.5773502691896258*(fIn[5]-1.0*fIn[4]+fIn[3]+fIn[2]-1.0*fIn[1])+fIn[0]); 
  fVal[23] = -0.1767766952966368*(0.06415002990995844*fIn[31]-1.0*((-0.1111111111111111*fIn[30])+0.1111111111111111*(fIn[27]-1.0*(fIn[29]+fIn[28]))-0.1111111111111111*fIn[26])+0.1924500897298753*(fIn[25]+fIn[24]+fIn[23]-1.0*(fIn[22]+fIn[21]+fIn[20]-1.0*(fIn[19]+fIn[18]+fIn[17])))-1.0*(0.1924500897298753*fIn[16]-0.3333333333333333*fIn[15]-0.3333333333333333*(fIn[10]-1.0*(fIn[14]+fIn[13]+fIn[12]-1.0*fIn[11]))-1.0*(0.3333333333333333*fIn[9]-0.3333333333333333*fIn[8]))-0.3333333333333333*(fIn[7]+fIn[6])+0.5773502691896258*(fIn[4]-1.0*fIn[5])-1.0*(0.5773502691896258*(fIn[3]+fIn[2]+fIn[1])+fIn[0])); 
  fVal[24] = -0.1767766952966368*(0.06415002990995844*fIn[31]+0.1111111111111111*(fIn[26]-1.0*(fIn[30]+fIn[29]+fIn[28]-1.0*fIn[27]))+0.1924500897298753*(fIn[25]+fIn[24]+fIn[23]-1.0*(fIn[22]+fIn[21]+fIn[20]+fIn[19]+fIn[18]+fIn[17]-1.0*fIn[16]))-1.0*(0.3333333333333333*fIn[15]-1.0*(0.3333333333333333*(fIn[14]+fIn[13]+fIn[12]+fIn[11]+fIn[10])-1.0*(0.3333333333333333*fIn[8]-0.3333333333333333*fIn[9])))-0.3333333333333333*(fIn[7]+fIn[6])+0.5773502691896258*((-1.0*(fIn[5]+fIn[4]))+fIn[3]+fIn[2]+fIn[1])-1.0*fIn[0]); 
  fVal[25] = 0.1767766952966368*(0.06415002990995844*fIn[31]+0.1111111111111111*fIn[30]-0.1111111111111111*(fIn[29]+fIn[28])+0.1111111111111111*(fIn[27]+fIn[26])+0.1924500897298753*((-1.0*(fIn[25]+fIn[24]))+fIn[23]+fIn[22]-1.0*(fIn[21]+fIn[20]-1.0*fIn[19]+fIn[18]+fIn[17]-1.0*fIn[16]))+0.3333333333333333*fIn[15]-0.3333333333333333*(fIn[14]+fIn[13])+0.3333333333333333*fIn[12]-0.3333333333333333*(fIn[11]+fIn[10])+0.3333333333333333*(fIn[9]+fIn[8])-0.3333333333333333*(fIn[7]+fIn[6])+0.5773502691896258*(fIn[5]+fIn[4]-1.0*(fIn[3]+fIn[2]-1.0*fIn[1]))+fIn[0]); 
  fVal[26] = 0.1767766952966368*(0.06415002990995844*fIn[31]-0.1111111111111111*fIn[30]+0.1111111111111111*fIn[29]-0.1111111111111111*fIn[28]+0.1111111111111111*(fIn[27]+fIn[26])+0.1924500897298753*((-1.0*fIn[25])+fIn[24]-1.0*(fIn[23]+fIn[22]-1.0*fIn[21]+fIn[20]+fIn[19]-1.0*fIn[18]+fIn[17]-1.0*fIn[16]))+0.3333333333333333*fIn[15]-0.3333333333333333*fIn[14]+0.3333333333333333*fIn[13]-0.3333333333333333*(fIn[12]+fIn[11])+0.3333333333333333*fIn[10]-0.3333333333333333*(fIn[9]+fIn[8])+0.3333333333333333*fIn[7]-0.3333333333333333*fIn[6]+0.5773502691896258*(fIn[5]+fIn[4]-1.0*fIn[3]+fIn[2]-1.0*fIn[1])+fIn[0]); 
  fVal[27] = -0.1767766952966368*(0.06415002990995844*fIn[31]+0.1111111111111111*(fIn[30]+fIn[29])+0.1111111111111111*((-1.0*fIn[28])+fIn[27]+fIn[26])+0.1924500897298753*(fIn[25]-1.0*(fIn[24]+fIn[23]-1.0*fIn[22])+fIn[21]-1.0*fIn[20]+fIn[19]+fIn[18]-1.0*fIn[17]+fIn[16])-1.0*(0.3333333333333333*fIn[15]-1.0*(0.3333333333333333*(fIn[14]-1.0*(fIn[13]+fIn[12]-1.0*fIn[11]))-1.0*(0.3333333333333333*fIn[10]-1.0*(0.3333333333333333*fIn[8]-0.3333333333333333*fIn[9])-0.3333333333333333*fIn[7]+0.3333333333333333*fIn[6])))+0.5773502691896258*(fIn[3]-1.0*(fIn[5]+fIn[4]))-1.0*(0.5773502691896258*(fIn[2]+fIn[1])+fIn[0])); 
  fVal[28] = 0.1767766952966368*(0.06415002990995844*fIn[31]-0.1111111111111111*(fIn[30]+fIn[29])+0.1111111111111111*(fIn[28]+fIn[27]+fIn[26])+0.1924500897298753*(fIn[25]-1.0*(fIn[24]+fIn[23]+fIn[22]+fIn[21]-1.0*fIn[20]+fIn[19]+fIn[18]-1.0*(fIn[17]+fIn[16])))+0.3333333333333333*(fIn[15]+fIn[14])-0.3333333333333333*(fIn[13]+fIn[12])+0.3333333333333333*fIn[11]-0.3333333333333333*(fIn[10]+fIn[9]+fIn[8]+fIn[7])+0.3333333333333333*fIn[6]+0.5773502691896258*(fIn[5]+fIn[4]+fIn[3]-1.0*(fIn[2]+fIn[1]))+fIn[0]); 
  fVal[29] = -0.1767766952966368*(0.06415002990995844*fIn[31]-1.0*((-0.1111111111111111*fIn[30])-1.0*(0.1111111111111111*fIn[28]-0.1111111111111111*fIn[29]))+0.1111111111111111*(fIn[27]+fIn[26])+0.1924500897298753*((-1.0*fIn[25])+fIn[24]-1.0*fIn[23]+fIn[22]-1.0*fIn[21]+fIn[20]+fIn[19]-1.0*fIn[18]+fIn[17]+fIn[16])-1.0*(0.3333333333333333*fIn[15]-1.0*((-0.3333333333333333*fIn[14])-1.0*(0.3333333333333333*(fIn[12]+fIn[11]-1.0*(fIn[10]-1.0*(fIn[9]-1.0*(fIn[8]-1.0*(fIn[7]-1.0*fIn[6])))))-0.3333333333333333*fIn[13]))+0.5773502691896258*(fIn[5]+fIn[4]+fIn[3]-1.0*fIn[2]))-1.0*(0.5773502691896258*fIn[1]+fIn[0])); 
  fVal[30] = -0.1767766952966368*(0.06415002990995844*fIn[31]+0.1111111111111111*((-1.0*fIn[30])+fIn[29]+fIn[28])+0.1111111111111111*(fIn[27]+fIn[26])+0.1924500897298753*((-1.0*(fIn[25]+fIn[24]))+fIn[23]-1.0*fIn[22]+fIn[21]+fIn[20]-1.0*fIn[19]+fIn[18]+fIn[17]+fIn[16])-1.0*(0.3333333333333333*fIn[15]-1.0*((-0.3333333333333333*fIn[14])-0.3333333333333333*fIn[13]-0.3333333333333333*((-1.0*fIn[12])+fIn[11]+fIn[10])-1.0*(0.3333333333333333*(fIn[8]-1.0*fIn[9])-0.3333333333333333*(fIn[7]+fIn[6])))+0.5773502691896258*(fIn[5]+fIn[4]+fIn[3]+fIn[2]-1.0*fIn[1]))-1.0*fIn[0]); 
  fVal[31] = 0.1767766952966368*(0.06415002990995844*fIn[31]+0.1111111111111111*(fIn[30]+fIn[29]+fIn[28]+fIn[27]+fIn[26])+0.1924500897298753*(fIn[25]+fIn[24]+fIn[23]+fIn[22]+fIn[21]+fIn[20]+fIn[19]+fIn[18]+fIn[17]+fIn[16])+0.3333333333333333*(fIn[15]+fIn[14]+fIn[13]+fIn[12]+fIn[11]+fIn[10]+fIn[9]+fIn[8]+fIn[7]+fIn[6])+0.5773502691896258*(fIn[5]+fIn[4]+fIn[3]+fIn[2]+fIn[1])+fIn[0]); 
  fmin = *std::min_element(fVal, fVal+32); 
  } 
  return fmin; 
}

double rescale(const double *fIn, double *fOut, int ndim, int numBasis, int *idx, double tCurr)
{
  double f0 = fIn[0]*std::pow(0.707107,ndim);

  if(f0 < 0.) {
     if(ndim == 1) {
       printf("WARNING: negative cell avg %e in cell %2d, tCurr = %e\n", f0, idx[0], tCurr);
     } else if( ndim == 2) {
       printf("WARNING: negative cell avg %e in cell %2d %2d, tCurr = %e\n", f0, idx[0], idx[1], tCurr);
     } else if( ndim == 3) {
       printf("WARNING: negative cell avg %e in cell %2d %2d %2d, tCurr = %e\n", f0, idx[0], idx[1], idx[2], tCurr);
     } else if( ndim == 4) {
       printf("WARNING: negative cell avg %e in cell %2d %2d %2d %2d, tCurr = %e\n", f0, idx[0], idx[1], idx[2], idx[3], tCurr);
     } else if( ndim == 5) {
       printf("WARNING: negative cell avg %e in cell %2d %2d %2d %2d %2d, tCurr = %e\n", f0, idx[0], idx[1], idx[2], idx[3], idx[4], tCurr);
     }
  }

  double fmin = findMinNodalValue(fIn, ndim);
  //if (fmin < 0) {
  //   if(ndim == 1) {
  //     printf("warning: negative control node %e in cell %2d, tCurr = %e \n", fmin, idx[1], tCurr);
  //   } else if(ndim == 2) {
  //     printf("warning: negative control node %e in cell %2d %2d, tCurr = %e\n", fmin, idx[1], idx[2], tCurr);
  //   } else if(ndim == 3) {
  //     printf("warning: negative control node %e in cell %2d %2d %2d, tCurr = %e\n", fmin, idx[1], idx[2], idx[3], tCurr);
  //   } else if(ndim == 4) {
  //     printf("warning: negative control node %e in cell %2d %2d %2d %2d, tCurr = %e\n", fmin, idx[1], idx[2], idx[3], idx[4], tCurr);
  //   } else if(ndim == 5) {
  //     printf("warning: negative control node %e in cell %2d %2d %2d %2d %2d, tCurr = %e\n", fmin, idx[1], idx[2], idx[3], idx[4], idx[5], tCurr);
  //   }
  //}

  double theta = 1.0; // std::min(1.0, f0/(f0 - fmin + EPSILON));

  // modify moments. note no change to cell average
  fOut[0] = fIn[0]; 
  double del2ChangeCell = 0.0;
  for(int i=1; i<numBasis; i++) {
    if(theta < 1) del2ChangeCell += fIn[i]*fIn[i];
    fOut[i] = theta*fIn[i];
  }
  
  return del2ChangeCell*(1-theta*theta);
}
