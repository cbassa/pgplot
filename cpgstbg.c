#include "cpgplot.h"
extern void pgstbg_(int *tbci);
void cpgstbg(int tbci)
{
  pgstbg_(&tbci);
}
