/*
 * File: categorical.c
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

/* Include Files */
#include "categorical.h"
#include "cellstr_sort.h"
#include "predictFromModel_types.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const cell_wrap_0 inputData[102]
 *                unsigned char b_codes[102]
 *                cell_wrap_0 b_categoryNames_data[]
 * Return Type  : int
 */
int categorical_categorical(const cell_wrap_0 inputData[102],
                            unsigned char b_codes[102],
                            cell_wrap_0 b_categoryNames_data[])
{
  static const boolean_T bv[128] = {
      false, false, false, false, false, false, false, false, false, true,
      true,  true,  true,  true,  false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, true,  true,
      true,  true,  true,  false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false};
  __m128d r;
  cell_wrap_0 c[102];
  cell_wrap_0 inData[102];
  cell_wrap_0 tempValueSet_data[102];
  double icats[102];
  double mask_data[102];
  double dv[2];
  int convert_data[102];
  int idx[102];
  int b_categoryNames_size;
  int b_i;
  int b_idx;
  int b_j1;
  int i;
  int j2;
  int mask_size_idx_1;
  int y_size_idx_1;
  signed char ii_data[102];
  signed char c_i;
  boolean_T d[102];
  boolean_T b_bool;
  boolean_T exitg2;
  for (i = 0; i < 102; i++) {
    b_j1 = 0;
    while ((b_j1 + 1 <= inputData[i].f1.size[1]) &&
           bv[(int)inputData[i].f1.data[b_j1]]) {
      b_j1++;
    }
    j2 = inputData[i].f1.size[1];
    while ((j2 > 0) && bv[(int)inputData[i].f1.data[j2 - 1]]) {
      j2--;
    }
    if (b_j1 + 1 > j2) {
      b_j1 = 0;
      j2 = 0;
    }
    inData[i].f1.size[0] = 1;
    j2 -= b_j1;
    inData[i].f1.size[1] = j2;
    for (b_i = 0; b_i < j2; b_i++) {
      inData[i].f1.data[b_i] = inputData[i].f1.data[b_j1 + b_i];
    }
  }
  cellstr_sort(inData, c, idx);
  d[0] = true;
  b_categoryNames_size = 1;
  for (i = 0; i < 101; i++) {
    boolean_T b;
    b_bool = false;
    j2 = c[i].f1.size[1];
    b = (j2 == 0);
    if (b && (c[i + 1].f1.size[1] == 0)) {
      b_bool = true;
    } else {
      b_j1 = c[i + 1].f1.size[1];
      if (j2 == b_j1) {
        j2 = 0;
        int exitg1;
        do {
          exitg1 = 0;
          if (j2 <= b_j1 - 1) {
            if (c[i].f1.data[j2] != c[i + 1].f1.data[j2]) {
              exitg1 = 1;
            } else {
              j2++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }
    }
    b_bool = !b_bool;
    d[i + 1] = b_bool;
    b_categoryNames_size += b_bool;
  }
  b_idx = 0;
  j2 = 0;
  exitg2 = false;
  while ((!exitg2) && (j2 < 102)) {
    if (d[j2]) {
      b_idx++;
      ii_data[b_idx - 1] = (signed char)(j2 + 1);
      if (b_idx >= 102) {
        exitg2 = true;
      } else {
        j2++;
      }
    } else {
      j2++;
    }
  }
  if (b_idx < 1) {
    b_idx = 0;
  }
  for (b_i = 0; b_i < b_idx; b_i++) {
    if (b_i + 1 != b_idx) {
      signed char y_data[101];
      j2 = ii_data[b_i + 1];
      c_i = ii_data[b_i];
      if (j2 - 1 < c_i) {
        y_size_idx_1 = 0;
      } else {
        y_size_idx_1 = j2 - c_i;
        j2 = y_size_idx_1 - 1;
        for (i = 0; i <= j2; i++) {
          y_data[i] = (signed char)(ii_data[b_i] + i);
        }
      }
      j2 = idx[y_data[0] - 1];
      for (i = 2; i <= y_size_idx_1; i++) {
        b_j1 = idx[y_data[i - 1] - 1];
        if (j2 > b_j1) {
          j2 = b_j1;
        }
      }
      convert_data[b_i] = j2;
    } else {
      c_i = ii_data[b_i];
      mask_size_idx_1 = 103 - c_i;
      j2 = 102 - c_i;
      b_j1 = ((103 - c_i) / 2) << 1;
      y_size_idx_1 = b_j1 - 2;
      for (i = 0; i <= y_size_idx_1; i += 2) {
        dv[0] = i;
        dv[1] = (double)i + 1.0;
        r = _mm_loadu_pd(&dv[0]);
        _mm_storeu_pd(&mask_data[i], _mm_add_pd(_mm_set1_pd(c_i), r));
      }
      for (i = b_j1; i <= j2; i++) {
        mask_data[i] = c_i + i;
      }
      j2 = idx[(int)mask_data[0] - 1];
      for (i = 2; i <= mask_size_idx_1; i++) {
        b_j1 = idx[(int)mask_data[i - 1] - 1];
        if (j2 > b_j1) {
          j2 = b_j1;
        }
      }
      convert_data[b_i] = j2;
    }
  }
  for (b_i = 0; b_i < 102; b_i++) {
    icats[b_i] = d[b_i];
  }
  for (i = 0; i < 101; i++) {
    icats[i + 1] += icats[i];
  }
  memcpy(&mask_data[0], &icats[0], 102U * sizeof(double));
  for (i = 0; i < 102; i++) {
    icats[idx[i] - 1] = mask_data[i];
  }
  for (i = 0; i < b_idx; i++) {
    tempValueSet_data[i].f1.size[0] = 1;
    j2 = inData[convert_data[i] - 1].f1.size[1];
    tempValueSet_data[i].f1.size[1] = j2;
    for (b_i = 0; b_i < j2; b_i++) {
      tempValueSet_data[i].f1.data[b_i] =
          inData[convert_data[i] - 1].f1.data[b_i];
    }
  }
  for (b_i = 0; b_i < b_categoryNames_size; b_i++) {
    d[b_i] = (tempValueSet_data[b_i].f1.size[1] == 0);
  }
  b_bool = false;
  j2 = 1;
  exitg2 = false;
  while ((!exitg2) && (j2 <= b_categoryNames_size)) {
    if (d[j2 - 1]) {
      b_bool = true;
      exitg2 = true;
    } else {
      j2++;
    }
  }
  if (b_bool) {
    for (b_i = 0; b_i < b_categoryNames_size; b_i++) {
      d[b_i] = !d[b_i];
    }
    j2 = 0;
    mask_size_idx_1 = b_categoryNames_size;
    b_j1 = 0;
    exitg2 = false;
    while ((!exitg2) && (b_j1 <= b_categoryNames_size - 1)) {
      if (d[b_j1]) {
        j2++;
        ii_data[j2 - 1] = (signed char)(b_j1 + 1);
        if (j2 >= b_categoryNames_size) {
          exitg2 = true;
        } else {
          b_j1++;
        }
      } else {
        b_j1++;
      }
    }
    if (b_categoryNames_size == 1) {
      if (j2 == 0) {
        mask_size_idx_1 = 0;
      }
    } else if (j2 < 1) {
      mask_size_idx_1 = 0;
    } else {
      mask_size_idx_1 = j2;
    }
    if (b_categoryNames_size - 1 >= 0) {
      memset(&convert_data[0], 0,
             (unsigned int)b_categoryNames_size * sizeof(int));
    }
    if (mask_size_idx_1 >= 1) {
      j2 = mask_size_idx_1 - 1;
      b_j1 = (mask_size_idx_1 / 2) << 1;
      y_size_idx_1 = b_j1 - 2;
      for (i = 0; i <= y_size_idx_1; i += 2) {
        dv[0] = i;
        dv[1] = (double)i + 1.0;
        r = _mm_loadu_pd(&dv[0]);
        _mm_storeu_pd(&mask_data[i], _mm_add_pd(_mm_set1_pd(1.0), r));
      }
      for (i = b_j1; i <= j2; i++) {
        mask_data[i] = (double)i + 1.0;
      }
    }
    for (b_i = 0; b_i < mask_size_idx_1; b_i++) {
      convert_data[ii_data[b_i] - 1] = (int)mask_data[b_i];
    }
    for (b_i = 0; b_i < 102; b_i++) {
      icats[b_i] = convert_data[(int)icats[b_i] - 1];
    }
    b_categoryNames_size = mask_size_idx_1;
    for (i = 0; i < mask_size_idx_1; i++) {
      inData[i].f1.size[0] = 1;
      c_i = ii_data[i];
      j2 = tempValueSet_data[c_i - 1].f1.size[1];
      inData[i].f1.size[1] = j2;
      for (b_i = 0; b_i < j2; b_i++) {
        inData[i].f1.data[b_i] = tempValueSet_data[c_i - 1].f1.data[b_i];
      }
    }
  } else if (b_categoryNames_size - 1 >= 0) {
    memcpy(&inData[0], &tempValueSet_data[0],
           (unsigned int)b_categoryNames_size * sizeof(cell_wrap_0));
  }
  if (b_categoryNames_size != 0) {
    for (i = 0; i < b_categoryNames_size; i++) {
      b_categoryNames_data[i].f1.size[0] = 1;
      j2 = inData[i].f1.size[1];
      b_categoryNames_data[i].f1.size[1] = j2;
      for (b_i = 0; b_i < j2; b_i++) {
        b_categoryNames_data[i].f1.data[b_i] = inData[i].f1.data[b_i];
      }
    }
  } else {
    b_categoryNames_size = 0;
  }
  for (b_i = 0; b_i < 102; b_i++) {
    double b_d;
    unsigned char u;
    b_d = icats[b_i];
    if (b_d < 256.0) {
      if (b_d >= 0.0) {
        u = (unsigned char)b_d;
      } else {
        u = 0U;
      }
    } else {
      u = MAX_uint8_T;
    }
    b_codes[b_i] = u;
  }
  return b_categoryNames_size;
}

/*
 * File trailer for categorical.c
 *
 * [EOF]
 */
