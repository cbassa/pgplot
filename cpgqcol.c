#include "cpgplot.h"
extern void pgqcol_(int *ci1, int *ci2);
void cpgqcol(int *ci1, int *ci2)
{
  pgqcol_(ci1, ci2);
}
