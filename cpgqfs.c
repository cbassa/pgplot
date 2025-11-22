#include "cpgplot.h"
extern void pgqfs_(int *fs);
void cpgqfs(int *fs)
{
  pgqfs_(fs);
}
