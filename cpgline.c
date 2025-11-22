#include "cpgplot.h"
extern void pgline_(int *n, const float *xpts, const float *ypts);
void cpgline(int n, const float *xpts, const float *ypts)
{
  pgline_(&n, (float *)xpts, (float *)ypts);
}
