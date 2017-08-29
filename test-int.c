/*
 * Integer tester, by John C. Lusth
 *
 */

#include "integer.h"
#include <stdio.h>
#include <stdlib.h>

int
main(int argc,char **argv)
    {
    if (argc != 1)
        {
        fprintf(stderr,"usage: %s\n",argv[0]);
        exit(1);
        }

    printf("integer tester, version 1\n");
    INTEGER *x = newINTEGER(2);
    printf("x is %d\n",getINTEGER(x));
    setINTEGER(x,3);
    printf("x is now ");
    displayINTEGER(stdout,x);
    printf("\n");

    return 0;
    }


