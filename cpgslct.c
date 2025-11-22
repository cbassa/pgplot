#include "cpgplot.h"
extern void pgslct_(int *id);
void cpgslct(int id)
{
  pgslct_(&id);
}
