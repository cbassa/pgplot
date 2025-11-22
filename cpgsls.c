#include "cpgplot.h"
extern void pgsls_(int *ls);
void cpgsls(int ls)
{
  pgsls_(&ls);
}
