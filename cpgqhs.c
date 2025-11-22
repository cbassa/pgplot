#include "cpgplot.h"
extern void pgqhs_(float *angle, float *sepn, float *phase);
void cpgqhs(float *angle, float *sepn, float *phase)
{
  pgqhs_(angle, sepn, phase);
}
