#include "cpgplot.h"
extern void pgsclp_(int *state);
void cpgsclp(int state)
{
  pgsclp_(&state);
}
