#include "cpgplot.h"
extern void pgscf_(int *font);
void cpgscf(int font)
{
  pgscf_(&font);
}
