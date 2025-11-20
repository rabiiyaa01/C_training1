// write ac function which will accept an array arr,its size as n, and returns the difference between first and last element
#include <stdio.h>
int subarr(int arr[],int n)
{
    int sub=arr[0] - arr[n-1];
    return sub;
}
void main()
{
    int arr[5]={4,3,7,8,9};
    int n=5;
    printf("%d",subarr(arr,n));
}