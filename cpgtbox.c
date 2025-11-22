#include "cpgplot.h"
#include <string.h>
extern void pgtbox_(const char *xopt, float *xtick, int *nxsub, const char *yopt, float *ytick, int *nysub, int len_xopt, int len_yopt);
void cpgtbox(const char *xopt, float xtick, int nxsub, const char *yopt, float ytick, int nysub)
{
  int len_xopt = strlen(xopt);
  int len_yopt = strlen(yopt);
  pgtbox_((char *)xopt, &xtick, &nxsub, (char *)yopt, &ytick, &nysub, len_xopt, len_yopt);
}
