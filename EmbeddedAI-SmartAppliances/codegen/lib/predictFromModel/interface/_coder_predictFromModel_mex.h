/*
 * File: _coder_predictFromModel_mex.h
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

#ifndef _CODER_PREDICTFROMMODEL_MEX_H
#define _CODER_PREDICTFROMMODEL_MEX_H

/* Include Files */
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS(void);

void unsafe_predictFromModel_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                         int32_T nrhs, const mxArray *prhs[1]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_predictFromModel_mex.h
 *
 * [EOF]
 */
