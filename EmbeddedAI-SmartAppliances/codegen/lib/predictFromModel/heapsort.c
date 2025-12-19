/*
 * File: heapsort.c
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

/* Include Files */
#include "heapsort.h"
#include "cellstr_sort.h"
#include "predictFromModel_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void heapify(int x[102], int idx, int xstart, int xend,
                    const cell_wrap_0 cmp_workspace_c[102]);

/* Function Definitions */
/*
 * Arguments    : int x[102]
 *                int idx
 *                int xstart
 *                int xend
 *                const cell_wrap_0 cmp_workspace_c[102]
 * Return Type  : void
 */
static void heapify(int x[102], int idx, int xstart, int xend,
                    const cell_wrap_0 cmp_workspace_c[102])
{
  int extremum;
  int extremumIdx;
  int leftIdx;
  boolean_T changed;
  boolean_T exitg1;
  changed = true;
  extremumIdx = (idx + xstart) - 2;
  leftIdx = ((idx << 1) + xstart) - 1;
  exitg1 = false;
  while ((!exitg1) && (leftIdx < xend)) {
    int cmpIdx;
    int xcmp;
    changed = false;
    extremum = x[extremumIdx];
    cmpIdx = leftIdx - 1;
    xcmp = x[leftIdx - 1];
    if (cellstr_sort_anonFcn1(cmp_workspace_c, x[leftIdx - 1], x[leftIdx])) {
      cmpIdx = leftIdx;
      xcmp = x[leftIdx];
    }
    if (cellstr_sort_anonFcn1(cmp_workspace_c, x[extremumIdx], xcmp)) {
      x[extremumIdx] = xcmp;
      x[cmpIdx] = extremum;
      extremumIdx = cmpIdx;
      leftIdx = ((((cmpIdx - xstart) + 2) << 1) + xstart) - 1;
      changed = true;
    } else {
      exitg1 = true;
    }
  }
  if (changed && (leftIdx <= xend)) {
    extremum = x[extremumIdx];
    if (cellstr_sort_anonFcn1(cmp_workspace_c, x[extremumIdx],
                              x[leftIdx - 1])) {
      x[extremumIdx] = x[leftIdx - 1];
      x[leftIdx - 1] = extremum;
    }
  }
}

/*
 * Arguments    : int x[102]
 *                int xstart
 *                int xend
 *                const cell_wrap_0 cmp_workspace_c[102]
 * Return Type  : void
 */
void b_heapsort(int x[102], int xstart, int xend,
                const cell_wrap_0 cmp_workspace_c[102])
{
  int idx;
  int n;
  n = xend - xstart;
  for (idx = n + 1; idx >= 1; idx--) {
    heapify(x, idx, xstart, xend, cmp_workspace_c);
  }
  for (idx = 0; idx < n; idx++) {
    int t;
    int t_tmp;
    t_tmp = (xend - idx) - 1;
    t = x[t_tmp];
    x[t_tmp] = x[xstart - 1];
    x[xstart - 1] = t;
    heapify(x, 1, xstart, t_tmp, cmp_workspace_c);
  }
}

/*
 * File trailer for heapsort.c
 *
 * [EOF]
 */
