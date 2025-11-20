#include <stdio.h>
void exam(int m1,int m2,int m3)
{
    if
    (m1>=40 && m2>=40 && m3>=40)
     printf("yayyy passed");
     else
     printf("failedd ,go and study");
     float avg=(m1+m2+m3)/3;
     printf("\n average is %f", avg);
}    
 void main()
 {
    int m1,m2,m3;
    printf("enter the m1,m2,m3: ");
    scanf("%d%d%d", &m1, &m2, &m3);
    exam (m1,m2,m3);
 }   