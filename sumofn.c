// write a c program to generate sum of n n natural numbers
#include <stdio.h>
int result = 0;
void main()
{
    int result =0;
    int n;
    printf("enter value of n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) // rabiya
    {
        result=result+i;
    }
    printf("sum is %d",result);
}
