#include <stdio.h>

#ifndef __STRING_INCLUDED__
#define __STRING_INCLUDED__

typedef struct STRING {
    char *value;
} STRING;

extern STRING *newSTRING(char *);
extern char *getSTRING(STRING *);
extern char *setSTRING(STRING *,char *);
extern void displaySTRING(FILE *,void *);
extern void freeSTRING(STRING *);

#endif

