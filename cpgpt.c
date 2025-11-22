#include "cpgplot.h"
extern void pgpt_(int *n, const float *xpts, const float *ypts, int *symbol);
void cpgpt(int n, const float *xpts, const float *ypts, int symbol)
{
  pgpt_(&n, (float *)xpts, (float *)ypts, &symbol);
}
