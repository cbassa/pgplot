#include "cpgplot.h"
extern void pgqclp_(int *state);
void cpgqclp(int *state)
{
  pgqclp_(state);
}
