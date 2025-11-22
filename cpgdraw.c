#include "cpgplot.h"
extern void pgdraw_(float *x, float *y);
void cpgdraw(float x, float y)
{
  pgdraw_(&x, &y);
}
