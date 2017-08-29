#ifndef __REAL_INCLUDED__
#define __REAL_INCLUDED__

#include <stdio.h>

typedef struct REAL REAL;

extern REAL *newREAL(double r);
extern double getREAL(REAL *r);
extern double setREAL(REAL *r, double n);
extern void displayREAL(FILE *fp,void *p);
extern void freeREAL(REAL *r);

#endif





