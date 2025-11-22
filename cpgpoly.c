#include "cpgplot.h"
extern void pgpoly_(int *n, const float *xpts, const float *ypts);
void cpgpoly(int n, const float *xpts, const float *ypts)
{
  pgpoly_(&n, (float *)xpts, (float *)ypts);
}
