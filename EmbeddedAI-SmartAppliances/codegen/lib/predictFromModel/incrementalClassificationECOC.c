/*
 * File: incrementalClassificationECOC.c
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

/* Include Files */
#include "incrementalClassificationECOC.h"
#include "ECOC.h"
#include "categorical.h"
#include "predictFromModel_internal_types.h"
#include "predictFromModel_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>

/* Function Definitions */
/*
 * Arguments    : unsigned char this_ClassNames_codes[3]
 *                cell_wrap_0 this_ClassNames_categoryNames[3]
 *                double this_Prior[3]
 *                c_incremental_coder_incremental this_Impl_BinaryLearners[3]
 *                boolean_T c_this_Impl_BinaryLearnersSeenC[6]
 * Return Type  : void
 */
void c_incrementalClassificationECOC(
    unsigned char this_ClassNames_codes[3],
    cell_wrap_0 this_ClassNames_categoryNames[3], double this_Prior[3],
    c_incremental_coder_incremental this_Impl_BinaryLearners[3],
    boolean_T c_this_Impl_BinaryLearnersSeenC[6])
{
  static const double dv1[6] = {726.93468557474046, 734.10424473410217,
                                761.22997057026066, 902.29766476477346,
                                985.50424772857536, 0.11053462811906191};
  static const double dv2[6] = {126.3738254901142,  216.49782185033334,
                                321.33056451810097, 479.9902782317285,
                                651.92063333659485, 0.23767345589102148};
  static const double dv3[6] = {-1015.8043438104837, -805.7176556746449,
                                -534.948753072569,   -394.67956529264205,
                                -261.92620872754554, 0.042057744404345045};
  static const char cv[14] = {'I', 'n', 'n', 'e', 'r', 'R', 'a',
                              'c', 'e', 'F', 'a', 'u', 'l', 't'};
  static const char cv2[14] = {'O', 'u', 't', 'e', 'r', 'R', 'a',
                               'c', 'e', 'F', 'a', 'u', 'l', 't'};
  static const char cv1[6] = {'N', 'o', 'r', 'm', 'a', 'l'};
  __m128d r;
  __m128d r1;
  __m128d r2;
  double dv[2];
  int i;
  this_Prior[0] = 0.34848484848484851;
  this_Prior[1] = 0.3515151515151515;
  this_Prior[2] = 0.3;
  for (i = 0; i < 6; i++) {
    c_this_Impl_BinaryLearnersSeenC[i] = true;
    this_Impl_BinaryLearners[0].Impl.Beta[i] = dv1[i];
  }
  this_Impl_BinaryLearners[0].Impl.Bias = -1.5656988330487029;
  dv[0] = 0.0;
  dv[1] = 1.0;
  r = _mm_loadu_pd(&dv[0]);
  r1 = _mm_set1_pd(-1.0);
  r2 = _mm_set1_pd(2.0);
  _mm_storeu_pd(&this_Impl_BinaryLearners[0].ClassNames[0],
                _mm_add_pd(r1, _mm_mul_pd(r2, r)));
  dv[0] = 0.0;
  dv[1] = 1.0;
  r = _mm_loadu_pd(&dv[0]);
  _mm_storeu_pd(&this_Impl_BinaryLearners[0].Prior[0],
                _mm_add_pd(_mm_set1_pd(0.50216450216450215),
                           _mm_mul_pd(_mm_set1_pd(-0.0043290043290042934), r)));
  for (i = 0; i < 6; i++) {
    this_Impl_BinaryLearners[1].Impl.Beta[i] = dv2[i];
  }
  this_Impl_BinaryLearners[1].Impl.Bias = -1.2953812014596227;
  dv[0] = 0.0;
  dv[1] = 1.0;
  r = _mm_loadu_pd(&dv[0]);
  _mm_storeu_pd(&this_Impl_BinaryLearners[1].ClassNames[0],
                _mm_add_pd(r1, _mm_mul_pd(r2, r)));
  dv[0] = 0.0;
  dv[1] = 1.0;
  r = _mm_loadu_pd(&dv[0]);
  _mm_storeu_pd(&this_Impl_BinaryLearners[1].Prior[0],
                _mm_add_pd(_mm_set1_pd(0.46261682242990654),
                           _mm_mul_pd(_mm_set1_pd(0.074766355140186924), r)));
  for (i = 0; i < 6; i++) {
    this_Impl_BinaryLearners[2].Impl.Beta[i] = dv3[i];
  }
  this_Impl_BinaryLearners[2].Impl.Bias = 0.040324057456475881;
  dv[0] = 0.0;
  dv[1] = 1.0;
  r = _mm_loadu_pd(&dv[0]);
  _mm_storeu_pd(&this_Impl_BinaryLearners[2].ClassNames[0],
                _mm_add_pd(r1, _mm_mul_pd(r2, r)));
  dv[0] = 0.0;
  dv[1] = 1.0;
  r = _mm_loadu_pd(&dv[0]);
  _mm_storeu_pd(&this_Impl_BinaryLearners[2].Prior[0],
                _mm_add_pd(_mm_set1_pd(0.46046511627906977),
                           _mm_mul_pd(_mm_set1_pd(0.0790697674418605), r)));
  this_ClassNames_categoryNames[0].f1.size[0] = 1;
  this_ClassNames_categoryNames[0].f1.size[1] = 14;
  for (i = 0; i < 14; i++) {
    this_ClassNames_categoryNames[0].f1.data[i] = cv[i];
  }
  this_ClassNames_categoryNames[1].f1.size[0] = 1;
  this_ClassNames_categoryNames[1].f1.size[1] = 6;
  for (i = 0; i < 6; i++) {
    this_ClassNames_categoryNames[1].f1.data[i] = cv1[i];
  }
  this_ClassNames_categoryNames[2].f1.size[0] = 1;
  this_ClassNames_categoryNames[2].f1.size[1] = 14;
  for (i = 0; i < 14; i++) {
    this_ClassNames_categoryNames[2].f1.data[i] = cv2[i];
  }
  this_ClassNames_codes[0] = 1U;
  this_ClassNames_codes[1] = 2U;
  this_ClassNames_codes[2] = 3U;
}

/*
 * Arguments    : const unsigned char this_ClassNames_codes[3]
 *                const cell_wrap_0 this_ClassNames_categoryNames[3]
 *                const double this_Prior[3]
 *                const c_incremental_coder_incremental
 * this_Impl_BinaryLearners[3] const double X[612] unsigned char
 * varargout_1_codes[102] cell_wrap_0 varargout_1_categoryNames_data[]
 * Return Type  : int
 */
int d_incrementalClassificationECOC(
    const unsigned char this_ClassNames_codes[3],
    const cell_wrap_0 this_ClassNames_categoryNames[3],
    const double this_Prior[3],
    const c_incremental_coder_incremental this_Impl_BinaryLearners[3],
    const double X[612], unsigned char varargout_1_codes[102],
    cell_wrap_0 varargout_1_categoryNames_data[])
{
  static const char cv[11] = {'<', 'u', 'n', 'd', 'e', 'f',
                              'i', 'n', 'e', 'd', '>'};
  cell_wrap_0 ycell[102];
  cell_wrap_0 names[4];
  cell_wrap_35 s[2];
  double classnum[102];
  double a__8;
  int b_idx;
  int idx;
  int ii;
  unsigned int u;
  int varargin_1;
  int varargout_1_categoryNames_size;
  boolean_T indsToExclude[102];
  boolean_T exitg1;
  for (ii = 0; ii < 102; ii++) {
    indsToExclude[ii] = false;
    varargout_1_categoryNames_size = 0;
    exitg1 = false;
    while ((!exitg1) && (varargout_1_categoryNames_size < 6)) {
      if (rtIsNaN(X[ii + 102 * varargout_1_categoryNames_size])) {
        indsToExclude[ii] = true;
        exitg1 = true;
      } else {
        varargout_1_categoryNames_size++;
      }
    }
  }
  ECOC_score(this_Impl_BinaryLearners, X, s);
  varargin_1 = 0;
  a__8 = rtMinusInf;
  if (this_Prior[0] > rtMinusInf) {
    a__8 = this_Prior[0];
  }
  if (a__8 < this_Prior[1]) {
    a__8 = this_Prior[1];
    varargin_1 = 1;
  }
  if (a__8 < this_Prior[2]) {
    varargin_1 = 2;
  }
  for (idx = 0; idx < 102; idx++) {
    classnum[idx] = rtNaN;
    if (!indsToExclude[idx]) {
      if (!rtIsNaN(s[0].f1[idx])) {
        b_idx = 1;
      } else {
        b_idx = 0;
        varargout_1_categoryNames_size = 2;
        exitg1 = false;
        while ((!exitg1) && (varargout_1_categoryNames_size < 4)) {
          if (!rtIsNaN(
                  s[0].f1[idx + 102 * (varargout_1_categoryNames_size - 1)])) {
            b_idx = varargout_1_categoryNames_size;
            exitg1 = true;
          } else {
            varargout_1_categoryNames_size++;
          }
        }
      }
      if (b_idx == 0) {
        b_idx = 1;
      } else {
        a__8 = s[0].f1[idx + 102 * (b_idx - 1)];
        varargout_1_categoryNames_size = b_idx + 1;
        for (ii = varargout_1_categoryNames_size; ii < 4; ii++) {
          double d;
          d = s[0].f1[idx + 102 * (ii - 1)];
          if (a__8 < d) {
            a__8 = d;
            b_idx = ii;
          }
        }
      }
      classnum[idx] = b_idx;
    }
  }
  names[0].f1.size[0] = 1;
  names[0].f1.size[1] = 11;
  for (ii = 0; ii < 11; ii++) {
    names[0].f1.data[ii] = cv[ii];
  }
  names[1].f1.size[0] = 1;
  varargout_1_categoryNames_size = this_ClassNames_categoryNames[0].f1.size[1];
  names[1].f1.size[1] = this_ClassNames_categoryNames[0].f1.size[1];
  for (ii = 0; ii < varargout_1_categoryNames_size; ii++) {
    names[1].f1.data[ii] = this_ClassNames_categoryNames[0].f1.data[ii];
  }
  names[2].f1.size[0] = 1;
  varargout_1_categoryNames_size = this_ClassNames_categoryNames[1].f1.size[1];
  names[2].f1.size[1] = this_ClassNames_categoryNames[1].f1.size[1];
  for (ii = 0; ii < varargout_1_categoryNames_size; ii++) {
    names[2].f1.data[ii] = this_ClassNames_categoryNames[1].f1.data[ii];
  }
  names[3].f1.size[0] = 1;
  varargout_1_categoryNames_size = this_ClassNames_categoryNames[2].f1.size[1];
  names[3].f1.size[1] = this_ClassNames_categoryNames[2].f1.size[1];
  for (ii = 0; ii < varargout_1_categoryNames_size; ii++) {
    names[3].f1.data[ii] = this_ClassNames_categoryNames[2].f1.data[ii];
  }
  u = this_ClassNames_codes[varargin_1] + 1U;
  if (u > 255U) {
    u = 255U;
  }
  b_idx = names[(int)u - 1].f1.size[1];
  for (idx = 0; idx < 102; idx++) {
    ycell[idx].f1.size[0] = 1;
    ycell[idx].f1.size[1] = b_idx;
    for (ii = 0; ii < b_idx; ii++) {
      ycell[idx].f1.data[ii] = names[(int)u - 1].f1.data[ii];
    }
    if (!indsToExclude[idx]) {
      ycell[idx].f1.size[0] = 1;
      a__8 = classnum[idx];
      varargout_1_categoryNames_size =
          this_ClassNames_categoryNames[(int)a__8 - 1].f1.size[1];
      ycell[idx].f1.size[1] = varargout_1_categoryNames_size;
      for (ii = 0; ii < varargout_1_categoryNames_size; ii++) {
        ycell[idx].f1.data[ii] =
            this_ClassNames_categoryNames[(int)a__8 - 1].f1.data[ii];
      }
    }
  }
  return categorical_categorical(ycell, varargout_1_codes,
                                 varargout_1_categoryNames_data);
}

/*
 * File trailer for incrementalClassificationECOC.c
 *
 * [EOF]
 */
