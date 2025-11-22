#include "cpgplot.h"
extern void pgshs_(float *angle, float *sepn, float *phase);
void cpgshs(float angle, float sepn, float phase)
{
  pgshs_(&angle, &sepn, &phase);
}
