//
// Created by bamam on 8/29/2017.
//
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "real.h"

struct REAL{
    double store;
};

/*********************public interface**************************/
REAL *newREAL(double v){
    REAL *p = malloc(sizeof(REAL));
    assert(p != 0);
    p->store = v;
    return p;
}

double getREAL(REAL *r){
    return r->store;
}

double setREAL(REAL *r, double n){
    int old = r->store;
    r->store = n;
    return old;
}

void displayREAL(FILE *fp,void *p){
    fprintf(fp,"%f",getREAL(p));
}

void freeREAL(REAL *r){
    free(r);
}