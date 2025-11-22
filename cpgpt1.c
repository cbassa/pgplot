#include "cpgplot.h"
extern void pgpt1_(float *xpt, float *ypt, int *symbol);
void cpgpt1(float xpt, float ypt, int symbol)
{
  pgpt1_(&xpt, &ypt, &symbol);
}
