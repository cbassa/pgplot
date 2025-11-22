#include "cpgplot.h"
extern void pghist_(int *n, const float *data, float *datmin, float *datmax, int *nbin, int *pgflag);
void cpghist(int n, const float *data, float datmin, float datmax, int nbin, int pgflag)
{
  pghist_(&n, (float *)data, &datmin, &datmax, &nbin, &pgflag);
}
