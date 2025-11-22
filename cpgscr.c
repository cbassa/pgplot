#include "cpgplot.h"
extern void pgscr_(int *ci, float *cr, float *cg, float *cb);
void cpgscr(int ci, float cr, float cg, float cb)
{
  pgscr_(&ci, &cr, &cg, &cb);
}
