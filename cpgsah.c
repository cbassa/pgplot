#include "cpgplot.h"
extern void pgsah_(int *fs, float *angle, float *barb);
void cpgsah(int fs, float angle, float barb)
{
  pgsah_(&fs, &angle, &barb);
}
