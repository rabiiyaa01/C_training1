//write a function which multipy three numbers and call it by reference
#include <stdio.h>
void prod_value(int a,int b,int c)
{
    int prod=a*b*c;
    printf("%d",prod);
}
void prod_ref(int*a, int*b, int*c)
{
    int prod=(*a)*(*b)*(*c);
    printf("%d",prod);
}
void main()
{
    int a=1;
    int b=5;
    int c=2;
    printf("call by ref: ");
    prod_ref(&a,&b,&c);
}
