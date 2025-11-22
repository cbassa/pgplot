#include "cpgplot.h"
extern void pgmove_(float *x, float *y);
void cpgmove(float x, float y)
{
  pgmove_(&x, &y);
}
