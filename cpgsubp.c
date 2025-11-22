#include "cpgplot.h"
extern void pgsubp_(int *nxsub, int *nysub);
void cpgsubp(int nxsub, int nysub)
{
  pgsubp_(&nxsub, &nysub);
}
