#include <stdio.h>
#include <stdlib.h>
int main()
{
    int * p = NULL;
    p = (int *) malloc(4*sizeof(int));
    p = (int *) malloc(8*sizeof(int));

    free(p);

    for(int i=0;i<1024;i++){
        p = (int *)malloc(1024*1024*1024);
    }

    printf("End\n");

    return 0;
}