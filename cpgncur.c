#include "cpgplot.h"
extern void pgncur_(int *maxpt, int *npt, float *x, float *y, int *symbol);
void cpgncur(int maxpt, int *npt, float *x, float *y, int symbol)
{
  pgncur_(&maxpt, npt, x, y, &symbol);
}
