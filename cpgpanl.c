#include "cpgplot.h"
extern void pgpanl_(int *nxc, int *nyc);
void cpgpanl(int nxc, int nyc)
{
  pgpanl_(&nxc, &nyc);
}
