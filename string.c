#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

STRING *newSTRING(char *x) {
    STRING *p = malloc(sizeof(STRING));
    if (p == 0) {
        fprintf(stderr,"out of memory\n");
        exit(-1);
    }
    p->value = x;
    return p;
}

char *getSTRING(STRING *v) {
    return v->value;
}

char *setSTRING(STRING *v,char *x) {
    char *old = v->value;
    v->value = x;
    return old;
}

void displaySTRING(FILE *fp,void *v) {
    fprintf(fp,"\"%s\"",getSTRING(v));
}

void freeString(STRING *v) {
    free(v);
}