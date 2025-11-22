#include "cpgplot.h"
extern void pgsfs_(int *fs);
void cpgsfs(int fs)
{
  pgsfs_(&fs);
}
