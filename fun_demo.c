#include <stdio.h>
int myadd(int a, int b)
{
    int sum=a+b;
    return sum;
}
void main()
{
    int a=90;
    int b=60;
    printf("%d\n", myadd(a,b));

    int c=50;
    int d=67;
    printf("%d\n", myadd(c,d));
}