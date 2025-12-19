/*
 * File: predictFromModel_types.h
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

#ifndef PREDICTFROMMODEL_TYPES_H
#define PREDICTFROMMODEL_TYPES_H

/* Include Files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_char_T_1x14
#define struct_emxArray_char_T_1x14
struct emxArray_char_T_1x14 {
  char data[14];
  int size[2];
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
  int size[1];
} emxArray_cell_wrap_0_102;
#endif /* c_typedef_emxArray_cell_wrap_0_ */

#ifndef typedef_categorical
#define typedef_categorical
typedef struct {
  unsigned char codes[102];
  emxArray_cell_wrap_0_102 categoryNames;
} categorical;
#endif /* typedef_categorical */

#endif
/*
 * File trailer for predictFromModel_types.h
 *
 * [EOF]
 */
