#include <stdio.h>
void main()
{
    int arr[3]={45,89,53};
    int*p= arr;
    printf("%d",*(p+1));
}