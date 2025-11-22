#include "cpgplot.h"
extern void pgqcs_(int *units, float *xch, float *ych);
void cpgqcs(int units, float *xch, float *ych)
{
  pgqcs_(&units, xch, ych);
}
