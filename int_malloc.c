#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p=(int *)malloc(3*sizeof(int));
    p[0]=23;
    p[1]=56;
    p[2]=89;

    p=(int*)realloc(p,5*sizeof(int));
    p[3]=89;
    p[4]=78;
    for (int i=0; i<5; i++)
    {
        printf("%d ",p[i]);
    }


}
