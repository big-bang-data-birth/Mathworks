/*
 * File: _coder_predictFromModel_api.h
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

#ifndef _CODER_PREDICTFROMMODEL_API_H
#define _CODER_PREDICTFROMMODEL_API_H

/* Include Files */
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef struct_emxArray_char_T_1x14
#define struct_emxArray_char_T_1x14
struct emxArray_char_T_1x14 {
  char_T data[14];
  int32_T size[2];
};
#endif /* struct_emxArray_char_T_1x14 */
#ifndef typedef_emxArray_char_T_1x14
#define typedef_emxArray_char_T_1x14
typedef struct emxArray_char_T_1x14 emxArray_char_T_1x14;
#endif /* typedef_emxArray_char_T_1x14 */

#ifndef typedef_cell_wrap_0
#define typedef_cell_wrap_0
typedef struct {
  emxArray_char_T_1x14 f1;
} cell_wrap_0;
#endif /* typedef_cell_wrap_0 */

#ifndef c_typedef_emxArray_cell_wrap_0_
#define c_typedef_emxArray_cell_wrap_0_
typedef struct {
  cell_wrap_0 data[102];
  int32_T size[1];
} emxArray_cell_wrap_0_102;
#endif /* c_typedef_emxArray_cell_wrap_0_ */

#ifndef typedef_categorical
#define typedef_categorical
typedef struct {
  uint8_T codes[102];
  emxArray_cell_wrap_0_102 categoryNames;
} categorical;
#endif /* typedef_categorical */

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void predictFromModel(real_T x[612], categorical *label);

void predictFromModel_api(const mxArray *prhs, const mxArray **plhs);

void predictFromModel_atexit(void);

void predictFromModel_initialize(void);

void predictFromModel_terminate(void);

void predictFromModel_xil_shutdown(void);

void predictFromModel_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_predictFromModel_api.h
 *
 * [EOF]
 */
