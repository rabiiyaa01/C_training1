// create a structure with three variables with car name,maximum speed,price.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
    char name[100];
    float speed;
    int price;
};
void main()
{
    int n;
    printf("enter the number of car: ");
    scanf("%d", &n);
    struct car b[n];
    for (int i=0; i<n; i++)
    {
        printf("enter name of car: ");
        scanf("%s",b[i].name);

        printf("enter the speed of car: ");
        scanf("%f",&b[i].speed);

        printf("enter the price of car: ");
        scanf("%d",&b[i].price);
            
    }
     for(int i=0; i<n; i++)
   {
    printf("%s\n",b[i].name);
    printf("%f\n",b[i].speed);
    printf("%d\n",b[i].price);
    }
}


