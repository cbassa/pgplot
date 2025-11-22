#include "cpgplot.h"
extern void pgqlw_(int *lw);
void cpgqlw(int *lw)
{
  pgqlw_(lw);
}
