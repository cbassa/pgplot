#include "cpgplot.h"
#include <string.h>
extern void pgqtxt_(float *x, float *y, float *angle, float *fjust, const char *text, float *xbox, float *ybox, int len_text);
void cpgqtxt(float x, float y, float angle, float fjust, const char *text, float *xbox, float *ybox)
{
  int len_text = strlen(text);
  pgqtxt_(&x, &y, &angle, &fjust, (char *)text, xbox, ybox, len_text);
}
