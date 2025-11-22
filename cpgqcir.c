#include "cpgplot.h"
extern void pgqcir_(int *icilo, int *icihi);
void cpgqcir(int *icilo, int *icihi)
{
  pgqcir_(icilo, icihi);
}
