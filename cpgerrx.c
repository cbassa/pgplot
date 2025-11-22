#include "cpgplot.h"
extern void pgerrx_(int *n, const float *x1, const float *x2, const float *y, float *t);
void cpgerrx(int n, const float *x1, const float *x2, const float *y, float t)
{
  pgerrx_(&n, (float *)x1, (float *)x2, (float *)y, &t);
}
