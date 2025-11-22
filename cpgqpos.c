#include "cpgplot.h"
extern void pgqpos_(float *x, float *y);
void cpgqpos(float *x, float *y)
{
  pgqpos_(x, y);
}
