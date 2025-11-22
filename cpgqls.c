#include "cpgplot.h"
extern void pgqls_(int *ls);
void cpgqls(int *ls)
{
  pgqls_(ls);
}
