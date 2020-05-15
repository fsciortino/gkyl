local ffi = require "ffi"

ffi.cdef [[

void cuda_MomentCalc1x1vSer_M0_P1(RectCart_t *grid, Range_t *range, GkDeviceProp *prop, int numBlocks, int numThreads, const double *fIn, double *out)
 
]]
