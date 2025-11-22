#include "cpgplot.h"
extern void pgcirc_(float *xcent, float *ycent, float *radius);
void cpgcirc(float xcent, float ycent, float radius)
{
  pgcirc_(&xcent, &ycent, &radius);
}
