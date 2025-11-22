#include "cpgplot.h"
extern void pgpap_(float *width, float *aspect);
void cpgpap(float width, float aspect)
{
  pgpap_(&width, &aspect);
}
