#include <stdio.h>
#include <stdlib.h>

int subarr(int arr[],int n)
{
    int sub=arr[0] - arr[n-1];
    return abs(sub);
}
void main()
{
    int arr[4]={7,4,2,1};
    int n=4;
    printf("%d",subarr(arr,n));
}