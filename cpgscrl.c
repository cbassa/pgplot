#include "cpgplot.h"
extern void pgscrl_(float *dx, float *dy);
void cpgscrl(float dx, float dy)
{
  pgscrl_(&dx, &dy);
}
