include <stdio.h>
#include <string.h>
vvoid main()
{
    //create
    char name[15] = "rabiya";
    char new[100] = "hello";

    //access
    printf("%c\n", name[9]);

    //lenght
    printf("length of string is %ld\n", strlen(name));

    //concatentation
    strcat(new, name);    // new= hello+rabiya
    printf("%s",new);

    //search for a char in string!
    printf("%d",strstr(new, "hello")); //0
}