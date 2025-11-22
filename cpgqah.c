#include "cpgplot.h"
extern void pgqah_(int *fs, float *angle, float *barb);
void cpgqah(int *fs, float *angle, float *barb)
{
  pgqah_(fs, angle, barb);
}
