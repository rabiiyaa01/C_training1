#include <stdio.h>
#include <stdlib.h>
void main()
{
    float *p=(float *)calloc(5,sizeof(float));
    p[0]=2.3;
    p[1]=5.6;
    p[3]=8.9;
    p[4]=5.6;
    printf("%f",p[3]);
    free (p);
}