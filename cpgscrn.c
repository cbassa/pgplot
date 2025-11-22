#include "cpgplot.h"
#include <string.h>
extern void pgscrn_(int *ci, const char *name, int *ier, int len_name);
void cpgscrn(int ci, const char *name, int *ier)
{
  int len_name = strlen(name);
  pgscrn_(&ci, (char *)name, ier, len_name);
}
