/*
 * File: cellstr_sort.c
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

/* Include Files */
#include "cellstr_sort.h"
#include "introsort.h"
#include "predictFromModel_types.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * Arguments    : const cell_wrap_0 c[102]
 *                cell_wrap_0 sorted[102]
 *                int idx[102]
 * Return Type  : void
 */
void cellstr_sort(const cell_wrap_0 c[102], cell_wrap_0 sorted[102],
                  int idx[102])
{
  int i;
  int loop_ub;
  introsort(c, idx);
  sorted[0].f1.size[0] = 1;
  loop_ub = c[idx[0] - 1].f1.size[1];
  sorted[0].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[0].f1.data[i] = c[idx[0] - 1].f1.data[i];
  }
  sorted[1].f1.size[0] = 1;
  loop_ub = c[idx[1] - 1].f1.size[1];
  sorted[1].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[1].f1.data[i] = c[idx[1] - 1].f1.data[i];
  }
  sorted[2].f1.size[0] = 1;
  loop_ub = c[idx[2] - 1].f1.size[1];
  sorted[2].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[2].f1.data[i] = c[idx[2] - 1].f1.data[i];
  }
  sorted[3].f1.size[0] = 1;
  loop_ub = c[idx[3] - 1].f1.size[1];
  sorted[3].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[3].f1.data[i] = c[idx[3] - 1].f1.data[i];
  }
  sorted[4].f1.size[0] = 1;
  loop_ub = c[idx[4] - 1].f1.size[1];
  sorted[4].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[4].f1.data[i] = c[idx[4] - 1].f1.data[i];
  }
  sorted[5].f1.size[0] = 1;
  loop_ub = c[idx[5] - 1].f1.size[1];
  sorted[5].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[5].f1.data[i] = c[idx[5] - 1].f1.data[i];
  }
  sorted[6].f1.size[0] = 1;
  loop_ub = c[idx[6] - 1].f1.size[1];
  sorted[6].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[6].f1.data[i] = c[idx[6] - 1].f1.data[i];
  }
  sorted[7].f1.size[0] = 1;
  loop_ub = c[idx[7] - 1].f1.size[1];
  sorted[7].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[7].f1.data[i] = c[idx[7] - 1].f1.data[i];
  }
  sorted[8].f1.size[0] = 1;
  loop_ub = c[idx[8] - 1].f1.size[1];
  sorted[8].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[8].f1.data[i] = c[idx[8] - 1].f1.data[i];
  }
  sorted[9].f1.size[0] = 1;
  loop_ub = c[idx[9] - 1].f1.size[1];
  sorted[9].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[9].f1.data[i] = c[idx[9] - 1].f1.data[i];
  }
  sorted[10].f1.size[0] = 1;
  loop_ub = c[idx[10] - 1].f1.size[1];
  sorted[10].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[10].f1.data[i] = c[idx[10] - 1].f1.data[i];
  }
  sorted[11].f1.size[0] = 1;
  loop_ub = c[idx[11] - 1].f1.size[1];
  sorted[11].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[11].f1.data[i] = c[idx[11] - 1].f1.data[i];
  }
  sorted[12].f1.size[0] = 1;
  loop_ub = c[idx[12] - 1].f1.size[1];
  sorted[12].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[12].f1.data[i] = c[idx[12] - 1].f1.data[i];
  }
  sorted[13].f1.size[0] = 1;
  loop_ub = c[idx[13] - 1].f1.size[1];
  sorted[13].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[13].f1.data[i] = c[idx[13] - 1].f1.data[i];
  }
  sorted[14].f1.size[0] = 1;
  loop_ub = c[idx[14] - 1].f1.size[1];
  sorted[14].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[14].f1.data[i] = c[idx[14] - 1].f1.data[i];
  }
  sorted[15].f1.size[0] = 1;
  loop_ub = c[idx[15] - 1].f1.size[1];
  sorted[15].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[15].f1.data[i] = c[idx[15] - 1].f1.data[i];
  }
  sorted[16].f1.size[0] = 1;
  loop_ub = c[idx[16] - 1].f1.size[1];
  sorted[16].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[16].f1.data[i] = c[idx[16] - 1].f1.data[i];
  }
  sorted[17].f1.size[0] = 1;
  loop_ub = c[idx[17] - 1].f1.size[1];
  sorted[17].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[17].f1.data[i] = c[idx[17] - 1].f1.data[i];
  }
  sorted[18].f1.size[0] = 1;
  loop_ub = c[idx[18] - 1].f1.size[1];
  sorted[18].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[18].f1.data[i] = c[idx[18] - 1].f1.data[i];
  }
  sorted[19].f1.size[0] = 1;
  loop_ub = c[idx[19] - 1].f1.size[1];
  sorted[19].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[19].f1.data[i] = c[idx[19] - 1].f1.data[i];
  }
  sorted[20].f1.size[0] = 1;
  loop_ub = c[idx[20] - 1].f1.size[1];
  sorted[20].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[20].f1.data[i] = c[idx[20] - 1].f1.data[i];
  }
  sorted[21].f1.size[0] = 1;
  loop_ub = c[idx[21] - 1].f1.size[1];
  sorted[21].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[21].f1.data[i] = c[idx[21] - 1].f1.data[i];
  }
  sorted[22].f1.size[0] = 1;
  loop_ub = c[idx[22] - 1].f1.size[1];
  sorted[22].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[22].f1.data[i] = c[idx[22] - 1].f1.data[i];
  }
  sorted[23].f1.size[0] = 1;
  loop_ub = c[idx[23] - 1].f1.size[1];
  sorted[23].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[23].f1.data[i] = c[idx[23] - 1].f1.data[i];
  }
  sorted[24].f1.size[0] = 1;
  loop_ub = c[idx[24] - 1].f1.size[1];
  sorted[24].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[24].f1.data[i] = c[idx[24] - 1].f1.data[i];
  }
  sorted[25].f1.size[0] = 1;
  loop_ub = c[idx[25] - 1].f1.size[1];
  sorted[25].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[25].f1.data[i] = c[idx[25] - 1].f1.data[i];
  }
  sorted[26].f1.size[0] = 1;
  loop_ub = c[idx[26] - 1].f1.size[1];
  sorted[26].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[26].f1.data[i] = c[idx[26] - 1].f1.data[i];
  }
  sorted[27].f1.size[0] = 1;
  loop_ub = c[idx[27] - 1].f1.size[1];
  sorted[27].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[27].f1.data[i] = c[idx[27] - 1].f1.data[i];
  }
  sorted[28].f1.size[0] = 1;
  loop_ub = c[idx[28] - 1].f1.size[1];
  sorted[28].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[28].f1.data[i] = c[idx[28] - 1].f1.data[i];
  }
  sorted[29].f1.size[0] = 1;
  loop_ub = c[idx[29] - 1].f1.size[1];
  sorted[29].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[29].f1.data[i] = c[idx[29] - 1].f1.data[i];
  }
  sorted[30].f1.size[0] = 1;
  loop_ub = c[idx[30] - 1].f1.size[1];
  sorted[30].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[30].f1.data[i] = c[idx[30] - 1].f1.data[i];
  }
  sorted[31].f1.size[0] = 1;
  loop_ub = c[idx[31] - 1].f1.size[1];
  sorted[31].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[31].f1.data[i] = c[idx[31] - 1].f1.data[i];
  }
  sorted[32].f1.size[0] = 1;
  loop_ub = c[idx[32] - 1].f1.size[1];
  sorted[32].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[32].f1.data[i] = c[idx[32] - 1].f1.data[i];
  }
  sorted[33].f1.size[0] = 1;
  loop_ub = c[idx[33] - 1].f1.size[1];
  sorted[33].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[33].f1.data[i] = c[idx[33] - 1].f1.data[i];
  }
  sorted[34].f1.size[0] = 1;
  loop_ub = c[idx[34] - 1].f1.size[1];
  sorted[34].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[34].f1.data[i] = c[idx[34] - 1].f1.data[i];
  }
  sorted[35].f1.size[0] = 1;
  loop_ub = c[idx[35] - 1].f1.size[1];
  sorted[35].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[35].f1.data[i] = c[idx[35] - 1].f1.data[i];
  }
  sorted[36].f1.size[0] = 1;
  loop_ub = c[idx[36] - 1].f1.size[1];
  sorted[36].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[36].f1.data[i] = c[idx[36] - 1].f1.data[i];
  }
  sorted[37].f1.size[0] = 1;
  loop_ub = c[idx[37] - 1].f1.size[1];
  sorted[37].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[37].f1.data[i] = c[idx[37] - 1].f1.data[i];
  }
  sorted[38].f1.size[0] = 1;
  loop_ub = c[idx[38] - 1].f1.size[1];
  sorted[38].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[38].f1.data[i] = c[idx[38] - 1].f1.data[i];
  }
  sorted[39].f1.size[0] = 1;
  loop_ub = c[idx[39] - 1].f1.size[1];
  sorted[39].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[39].f1.data[i] = c[idx[39] - 1].f1.data[i];
  }
  sorted[40].f1.size[0] = 1;
  loop_ub = c[idx[40] - 1].f1.size[1];
  sorted[40].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[40].f1.data[i] = c[idx[40] - 1].f1.data[i];
  }
  sorted[41].f1.size[0] = 1;
  loop_ub = c[idx[41] - 1].f1.size[1];
  sorted[41].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[41].f1.data[i] = c[idx[41] - 1].f1.data[i];
  }
  sorted[42].f1.size[0] = 1;
  loop_ub = c[idx[42] - 1].f1.size[1];
  sorted[42].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[42].f1.data[i] = c[idx[42] - 1].f1.data[i];
  }
  sorted[43].f1.size[0] = 1;
  loop_ub = c[idx[43] - 1].f1.size[1];
  sorted[43].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[43].f1.data[i] = c[idx[43] - 1].f1.data[i];
  }
  sorted[44].f1.size[0] = 1;
  loop_ub = c[idx[44] - 1].f1.size[1];
  sorted[44].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[44].f1.data[i] = c[idx[44] - 1].f1.data[i];
  }
  sorted[45].f1.size[0] = 1;
  loop_ub = c[idx[45] - 1].f1.size[1];
  sorted[45].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[45].f1.data[i] = c[idx[45] - 1].f1.data[i];
  }
  sorted[46].f1.size[0] = 1;
  loop_ub = c[idx[46] - 1].f1.size[1];
  sorted[46].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[46].f1.data[i] = c[idx[46] - 1].f1.data[i];
  }
  sorted[47].f1.size[0] = 1;
  loop_ub = c[idx[47] - 1].f1.size[1];
  sorted[47].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[47].f1.data[i] = c[idx[47] - 1].f1.data[i];
  }
  sorted[48].f1.size[0] = 1;
  loop_ub = c[idx[48] - 1].f1.size[1];
  sorted[48].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[48].f1.data[i] = c[idx[48] - 1].f1.data[i];
  }
  sorted[49].f1.size[0] = 1;
  loop_ub = c[idx[49] - 1].f1.size[1];
  sorted[49].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[49].f1.data[i] = c[idx[49] - 1].f1.data[i];
  }
  sorted[50].f1.size[0] = 1;
  loop_ub = c[idx[50] - 1].f1.size[1];
  sorted[50].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[50].f1.data[i] = c[idx[50] - 1].f1.data[i];
  }
  sorted[51].f1.size[0] = 1;
  loop_ub = c[idx[51] - 1].f1.size[1];
  sorted[51].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[51].f1.data[i] = c[idx[51] - 1].f1.data[i];
  }
  sorted[52].f1.size[0] = 1;
  loop_ub = c[idx[52] - 1].f1.size[1];
  sorted[52].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[52].f1.data[i] = c[idx[52] - 1].f1.data[i];
  }
  sorted[53].f1.size[0] = 1;
  loop_ub = c[idx[53] - 1].f1.size[1];
  sorted[53].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[53].f1.data[i] = c[idx[53] - 1].f1.data[i];
  }
  sorted[54].f1.size[0] = 1;
  loop_ub = c[idx[54] - 1].f1.size[1];
  sorted[54].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[54].f1.data[i] = c[idx[54] - 1].f1.data[i];
  }
  sorted[55].f1.size[0] = 1;
  loop_ub = c[idx[55] - 1].f1.size[1];
  sorted[55].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[55].f1.data[i] = c[idx[55] - 1].f1.data[i];
  }
  sorted[56].f1.size[0] = 1;
  loop_ub = c[idx[56] - 1].f1.size[1];
  sorted[56].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[56].f1.data[i] = c[idx[56] - 1].f1.data[i];
  }
  sorted[57].f1.size[0] = 1;
  loop_ub = c[idx[57] - 1].f1.size[1];
  sorted[57].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[57].f1.data[i] = c[idx[57] - 1].f1.data[i];
  }
  sorted[58].f1.size[0] = 1;
  loop_ub = c[idx[58] - 1].f1.size[1];
  sorted[58].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[58].f1.data[i] = c[idx[58] - 1].f1.data[i];
  }
  sorted[59].f1.size[0] = 1;
  loop_ub = c[idx[59] - 1].f1.size[1];
  sorted[59].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[59].f1.data[i] = c[idx[59] - 1].f1.data[i];
  }
  sorted[60].f1.size[0] = 1;
  loop_ub = c[idx[60] - 1].f1.size[1];
  sorted[60].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[60].f1.data[i] = c[idx[60] - 1].f1.data[i];
  }
  sorted[61].f1.size[0] = 1;
  loop_ub = c[idx[61] - 1].f1.size[1];
  sorted[61].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[61].f1.data[i] = c[idx[61] - 1].f1.data[i];
  }
  sorted[62].f1.size[0] = 1;
  loop_ub = c[idx[62] - 1].f1.size[1];
  sorted[62].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[62].f1.data[i] = c[idx[62] - 1].f1.data[i];
  }
  sorted[63].f1.size[0] = 1;
  loop_ub = c[idx[63] - 1].f1.size[1];
  sorted[63].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[63].f1.data[i] = c[idx[63] - 1].f1.data[i];
  }
  sorted[64].f1.size[0] = 1;
  loop_ub = c[idx[64] - 1].f1.size[1];
  sorted[64].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[64].f1.data[i] = c[idx[64] - 1].f1.data[i];
  }
  sorted[65].f1.size[0] = 1;
  loop_ub = c[idx[65] - 1].f1.size[1];
  sorted[65].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[65].f1.data[i] = c[idx[65] - 1].f1.data[i];
  }
  sorted[66].f1.size[0] = 1;
  loop_ub = c[idx[66] - 1].f1.size[1];
  sorted[66].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[66].f1.data[i] = c[idx[66] - 1].f1.data[i];
  }
  sorted[67].f1.size[0] = 1;
  loop_ub = c[idx[67] - 1].f1.size[1];
  sorted[67].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[67].f1.data[i] = c[idx[67] - 1].f1.data[i];
  }
  sorted[68].f1.size[0] = 1;
  loop_ub = c[idx[68] - 1].f1.size[1];
  sorted[68].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[68].f1.data[i] = c[idx[68] - 1].f1.data[i];
  }
  sorted[69].f1.size[0] = 1;
  loop_ub = c[idx[69] - 1].f1.size[1];
  sorted[69].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[69].f1.data[i] = c[idx[69] - 1].f1.data[i];
  }
  sorted[70].f1.size[0] = 1;
  loop_ub = c[idx[70] - 1].f1.size[1];
  sorted[70].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[70].f1.data[i] = c[idx[70] - 1].f1.data[i];
  }
  sorted[71].f1.size[0] = 1;
  loop_ub = c[idx[71] - 1].f1.size[1];
  sorted[71].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[71].f1.data[i] = c[idx[71] - 1].f1.data[i];
  }
  sorted[72].f1.size[0] = 1;
  loop_ub = c[idx[72] - 1].f1.size[1];
  sorted[72].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[72].f1.data[i] = c[idx[72] - 1].f1.data[i];
  }
  sorted[73].f1.size[0] = 1;
  loop_ub = c[idx[73] - 1].f1.size[1];
  sorted[73].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[73].f1.data[i] = c[idx[73] - 1].f1.data[i];
  }
  sorted[74].f1.size[0] = 1;
  loop_ub = c[idx[74] - 1].f1.size[1];
  sorted[74].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[74].f1.data[i] = c[idx[74] - 1].f1.data[i];
  }
  sorted[75].f1.size[0] = 1;
  loop_ub = c[idx[75] - 1].f1.size[1];
  sorted[75].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[75].f1.data[i] = c[idx[75] - 1].f1.data[i];
  }
  sorted[76].f1.size[0] = 1;
  loop_ub = c[idx[76] - 1].f1.size[1];
  sorted[76].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[76].f1.data[i] = c[idx[76] - 1].f1.data[i];
  }
  sorted[77].f1.size[0] = 1;
  loop_ub = c[idx[77] - 1].f1.size[1];
  sorted[77].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[77].f1.data[i] = c[idx[77] - 1].f1.data[i];
  }
  sorted[78].f1.size[0] = 1;
  loop_ub = c[idx[78] - 1].f1.size[1];
  sorted[78].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[78].f1.data[i] = c[idx[78] - 1].f1.data[i];
  }
  sorted[79].f1.size[0] = 1;
  loop_ub = c[idx[79] - 1].f1.size[1];
  sorted[79].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[79].f1.data[i] = c[idx[79] - 1].f1.data[i];
  }
  sorted[80].f1.size[0] = 1;
  loop_ub = c[idx[80] - 1].f1.size[1];
  sorted[80].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[80].f1.data[i] = c[idx[80] - 1].f1.data[i];
  }
  sorted[81].f1.size[0] = 1;
  loop_ub = c[idx[81] - 1].f1.size[1];
  sorted[81].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[81].f1.data[i] = c[idx[81] - 1].f1.data[i];
  }
  sorted[82].f1.size[0] = 1;
  loop_ub = c[idx[82] - 1].f1.size[1];
  sorted[82].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[82].f1.data[i] = c[idx[82] - 1].f1.data[i];
  }
  sorted[83].f1.size[0] = 1;
  loop_ub = c[idx[83] - 1].f1.size[1];
  sorted[83].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[83].f1.data[i] = c[idx[83] - 1].f1.data[i];
  }
  sorted[84].f1.size[0] = 1;
  loop_ub = c[idx[84] - 1].f1.size[1];
  sorted[84].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[84].f1.data[i] = c[idx[84] - 1].f1.data[i];
  }
  sorted[85].f1.size[0] = 1;
  loop_ub = c[idx[85] - 1].f1.size[1];
  sorted[85].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[85].f1.data[i] = c[idx[85] - 1].f1.data[i];
  }
  sorted[86].f1.size[0] = 1;
  loop_ub = c[idx[86] - 1].f1.size[1];
  sorted[86].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[86].f1.data[i] = c[idx[86] - 1].f1.data[i];
  }
  sorted[87].f1.size[0] = 1;
  loop_ub = c[idx[87] - 1].f1.size[1];
  sorted[87].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[87].f1.data[i] = c[idx[87] - 1].f1.data[i];
  }
  sorted[88].f1.size[0] = 1;
  loop_ub = c[idx[88] - 1].f1.size[1];
  sorted[88].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[88].f1.data[i] = c[idx[88] - 1].f1.data[i];
  }
  sorted[89].f1.size[0] = 1;
  loop_ub = c[idx[89] - 1].f1.size[1];
  sorted[89].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[89].f1.data[i] = c[idx[89] - 1].f1.data[i];
  }
  sorted[90].f1.size[0] = 1;
  loop_ub = c[idx[90] - 1].f1.size[1];
  sorted[90].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[90].f1.data[i] = c[idx[90] - 1].f1.data[i];
  }
  sorted[91].f1.size[0] = 1;
  loop_ub = c[idx[91] - 1].f1.size[1];
  sorted[91].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[91].f1.data[i] = c[idx[91] - 1].f1.data[i];
  }
  sorted[92].f1.size[0] = 1;
  loop_ub = c[idx[92] - 1].f1.size[1];
  sorted[92].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[92].f1.data[i] = c[idx[92] - 1].f1.data[i];
  }
  sorted[93].f1.size[0] = 1;
  loop_ub = c[idx[93] - 1].f1.size[1];
  sorted[93].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[93].f1.data[i] = c[idx[93] - 1].f1.data[i];
  }
  sorted[94].f1.size[0] = 1;
  loop_ub = c[idx[94] - 1].f1.size[1];
  sorted[94].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[94].f1.data[i] = c[idx[94] - 1].f1.data[i];
  }
  sorted[95].f1.size[0] = 1;
  loop_ub = c[idx[95] - 1].f1.size[1];
  sorted[95].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[95].f1.data[i] = c[idx[95] - 1].f1.data[i];
  }
  sorted[96].f1.size[0] = 1;
  loop_ub = c[idx[96] - 1].f1.size[1];
  sorted[96].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[96].f1.data[i] = c[idx[96] - 1].f1.data[i];
  }
  sorted[97].f1.size[0] = 1;
  loop_ub = c[idx[97] - 1].f1.size[1];
  sorted[97].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[97].f1.data[i] = c[idx[97] - 1].f1.data[i];
  }
  sorted[98].f1.size[0] = 1;
  loop_ub = c[idx[98] - 1].f1.size[1];
  sorted[98].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[98].f1.data[i] = c[idx[98] - 1].f1.data[i];
  }
  sorted[99].f1.size[0] = 1;
  loop_ub = c[idx[99] - 1].f1.size[1];
  sorted[99].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[99].f1.data[i] = c[idx[99] - 1].f1.data[i];
  }
  sorted[100].f1.size[0] = 1;
  loop_ub = c[idx[100] - 1].f1.size[1];
  sorted[100].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[100].f1.data[i] = c[idx[100] - 1].f1.data[i];
  }
  sorted[101].f1.size[0] = 1;
  loop_ub = c[idx[101] - 1].f1.size[1];
  sorted[101].f1.size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sorted[101].f1.data[i] = c[idx[101] - 1].f1.data[i];
  }
}

/*
 * Arguments    : const cell_wrap_0 c[102]
 *                int i
 *                int j
 * Return Type  : boolean_T
 */
boolean_T cellstr_sort_anonFcn1(const cell_wrap_0 c[102], int i, int j)
{
  int b_n_tmp;
  int k;
  int n;
  int n_tmp;
  boolean_T varargout_1;
  n_tmp = c[i - 1].f1.size[1];
  b_n_tmp = c[j - 1].f1.size[1];
  n = (int)fmin(n_tmp, b_n_tmp);
  varargout_1 = (n_tmp < b_n_tmp);
  k = 0;
  int exitg1;
  do {
    exitg1 = 0;
    if (k <= n - 1) {
      if (c[i - 1].f1.data[k] != c[j - 1].f1.data[k]) {
        varargout_1 = (c[i - 1].f1.data[k] < c[j - 1].f1.data[k]);
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      if (n_tmp == b_n_tmp) {
        varargout_1 = (i < j);
      }
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  return varargout_1;
}

/*
 * File trailer for cellstr_sort.c
 *
 * [EOF]
 */
