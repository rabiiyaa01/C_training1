// write a function which will accept three parameters l,b,h and returns volume of cube
#include <stdio.h>
int cub(int l, int b, int h)
{
    int vol=l*b*h;
    return vol;
}
void main()
{
    int l=5;
    int b=8;
    int h=5;
    printf("%d\n",cub(l,b,h));
}
