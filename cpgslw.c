#include "cpgplot.h"
extern void pgslw_(int *lw);
void cpgslw(int lw)
{
  pgslw_(&lw);
}
