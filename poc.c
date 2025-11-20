//write a c function which will accept one input parameter r and returns the perimeter of circle, declare pi as constant
#include <stdio.h>
float poc(int r)
{
    const float pi=3.14;
    float circle=3.14 * 2 * r;
    return circle;
}
void main()
{
    int r=100;
    printf("%f",poc(r));
}


