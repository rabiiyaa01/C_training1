#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    strcpy(s1.name, "Rabiya");
    s1.age=19;
    s1.marks=99.9;
    

    struct student s2;
    strcpy(s1.name, "Jon");
    s2.age=23;
    s2.marks=97.9;

    struct student s3={"Jeh",27,67.9};

    printf("%s ", s1.name);
    printf("%f",s3.marks);
    


}