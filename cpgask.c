#include "cpgplot.h"
extern void pgask_(Logical *flag);
void cpgask(Logical flag)
{
  int l_flag = flag ? 1:0;
  pgask_(&l_flag);
}
