#include "cpgplot.h"
extern void pgsci_(int *ci);
void cpgsci(int ci)
{
  pgsci_(&ci);
}
