#include "cpgplot.h"
extern void pgrect_(float *x1, float *x2, float *y1, float *y2);
void cpgrect(float x1, float x2, float y1, float y2)
{
  pgrect_(&x1, &x2, &y1, &y2);
}
