#include "cpgplot.h"
extern void pgsitf_(int *itf);
void cpgsitf(int itf)
{
  pgsitf_(&itf);
}
