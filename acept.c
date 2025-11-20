// write a function which will accept two parameters x,y and returns x^2+y^2
#include <stdio.h>
int twop(int x, int y)
{
    int acc=(x*x)+(y*y);
    return acc;
}
void main()
{
    int x=30;
    int y=40;
    printf("%d\n",twop(x,y));    
}