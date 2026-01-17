#include <stdio.h>

int main()
{
    char* myname;
    scanf("%s", &myname); 
    
    printf("Hey , How are you %s",myname);
    return 0;
}

/*
Unlike many other programming languages, 
C does not have a String type to easily create string variables. 
Instead, you must use the char type and create an array of characters to make a string in C:
*/
