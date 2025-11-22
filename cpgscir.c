#include "cpgplot.h"
extern void pgscir_(int *icilo, int *icihi);
void cpgscir(int icilo, int icihi)
{
  pgscir_(&icilo, &icihi);
}
