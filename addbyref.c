//write a function which add three numbers and call it by reference
#include <stdio.h>
void sum_ref(int*a, int*b, int*c)
{
    int sum=*a+*b+*c;
    printf("%d",sum);
}
void main()
{
    int a=1;
    int b=5;
    int c=2;
    printf("call by ref: ");
    sum_ref(&a,&b,&c);
}
