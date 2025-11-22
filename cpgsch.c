#include "cpgplot.h"
extern void pgsch_(float *size);
void cpgsch(float size)
{
  pgsch_(&size);
}
