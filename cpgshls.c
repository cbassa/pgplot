#include "cpgplot.h"
extern void pgshls_(int *ci, float *ch, float *cl, float *cs);
void cpgshls(int ci, float ch, float cl, float cs)
{
  pgshls_(&ci, &ch, &cl, &cs);
}
