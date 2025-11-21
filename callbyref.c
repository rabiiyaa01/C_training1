#include <stdio.h>
void sum_value(int a,int b)
{
    int sum=a+b;
    printf("%d\n",sum);
}
void sum_ref(int*a,int*b)
{
    int sum=*a+*b;
    printf("%d",sum);
}
void main()
{
    int a=89;
    int b=78;
    sum_value(a,b); //call by value
    sum_ref(&a,&b); //call by reference


}