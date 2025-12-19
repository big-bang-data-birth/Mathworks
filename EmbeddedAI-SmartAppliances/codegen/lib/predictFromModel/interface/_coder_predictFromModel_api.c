/*
 * File: _coder_predictFromModel_api.c
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

/* Include Files */
#include "_coder_predictFromModel_api.h"
#include "_coder_predictFromModel_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131675U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "predictFromModel",                                   /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[612];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[612];

static void emlrtExitTimeCleanupDtorFcn(const void *r);

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                 const char_T *identifier))[612];

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const categorical *u);

/* Function Definitions */
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[612]
 */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[612]
{
  real_T(*y)[612];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[612]
 */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[612]
{
  static const int32_T dims[2] = {102, 6};
  real_T(*ret)[612];
  int32_T iv[2];
  boolean_T bv[2] = {false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[612])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const void *r
 * Return Type  : void
 */
static void emlrtExitTimeCleanupDtorFcn(const void *r)
{
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *nullptr
 *                const char_T *identifier
 * Return Type  : real_T (*)[612]
 */
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                 const char_T *identifier))[612]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[612];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const categorical *u
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const categorical *u)
{
  static const int32_T b_i = 102;
  const mxArray *propValues[5];
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *y;
  int32_T iv[2];
  int32_T i;
  int32_T i1;
  int32_T n;
  const char_T *propClasses[5] = {
      "matlab.internal.coder.categorical", "matlab.internal.coder.categorical",
      "matlab.internal.coder.categorical", "matlab.internal.coder.categorical",
      "matlab.internal.coder.categorical"};
  const char_T *propNames[5] = {"codes", "categoryNames", "isProtected",
                                "isOrdinal", "numCategoriesUpperBound"};
  uint8_T *pData;
  y = NULL;
  for (i = 0; i < 5; i++) {
    propValues[i] = NULL;
  }
  m = NULL;
  m1 = NULL;
  m2 = NULL;
  m3 = NULL;
  m4 = NULL;
  emlrtAssign(&y, emlrtCreateClassInstance2022a(
                      (emlrtCTX)sp, "matlab.internal.coder.categorical"));
  m = propValues[0];
  b_y = NULL;
  m5 = emlrtCreateNumericArray(1, (const void *)&b_i, mxUINT8_CLASS, mxREAL);
  pData = (uint8_T *)emlrtMxGetData(m5);
  for (i = 0; i < 102; i++) {
    pData[i] = u->codes[i];
  }
  emlrtAssign(&b_y, m5);
  emlrtAssign(&m, b_y);
  propValues[0] = m;
  m1 = propValues[1];
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateCellArrayR2014a(1, &u->categoryNames.size[0]));
  i1 = 0;
  n = u->categoryNames.size[0];
  while (i1 < n) {
    int32_T i2;
    d_y = NULL;
    iv[0] = 1;
    i2 = u->categoryNames.data[i1].f1.size[1];
    iv[1] = i2;
    m5 = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, i2, m5,
                             &u->categoryNames.data[i1].f1.data[0]);
    emlrtAssign(&d_y, m5);
    emlrtSetCell(c_y, i1, d_y);
    i1++;
  }
  emlrtAssign(&m1, c_y);
  propValues[1] = m1;
  m2 = propValues[2];
  e_y = NULL;
  m5 = emlrtCreateLogicalScalar(false);
  emlrtAssign(&e_y, m5);
  emlrtAssign(&m2, e_y);
  propValues[2] = m2;
  m3 = propValues[3];
  f_y = NULL;
  m5 = emlrtCreateLogicalScalar(false);
  emlrtAssign(&f_y, m5);
  emlrtAssign(&m3, f_y);
  propValues[3] = m3;
  m4 = propValues[4];
  g_y = NULL;
  m5 = emlrtCreateDoubleScalar(102.0);
  emlrtAssign(&g_y, m5);
  emlrtAssign(&m4, g_y);
  propValues[4] = m4;
  emlrtSetAllProperties((emlrtCTX)sp, &y, 0, 5, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource(
                      (emlrtCTX)sp, y, 0, "matlab.internal.coder.categorical"));
  return y;
}

/*
 * Arguments    : const mxArray *prhs
 *                const mxArray **plhs
 * Return Type  : void
 */
void predictFromModel_api(const mxArray *prhs, const mxArray **plhs)
{
  categorical label;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*x)[612];
  st.tls = emlrtRootTLSGlobal;
  /* Marshall function inputs */
  x = emlrt_marshallIn(&st, emlrtAlias(prhs), "x");
  /* Invoke the target function */
  predictFromModel(*x, &label);
  /* Marshall function outputs */
  *plhs = emlrt_marshallOut(&st, &label);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void predictFromModel_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtPushHeapReferenceStackR2021a(
      &st, false, NULL, (void *)&emlrtExitTimeCleanupDtorFcn, NULL, NULL, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  predictFromModel_xil_terminate();
  predictFromModel_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void predictFromModel_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void predictFromModel_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_predictFromModel_api.c
 *
 * [EOF]
 */
