#include <stdio.h>
#include <string.h>
void main()
{
    char des[100]= "we are having c proram sessions";
    char se [10]="sessions";
    if ((strstr (des, se)) != NULL)
    printf("found");
    else
    printf("not found");
}