//Write a program to compare two given strings

#include <stdio.h>
#include <string.h>
void compare(char array1[],char array2[]);

void main(){
    char string1[30];
    char string2[30];
    printf("Write the string 1 , you wish to compare:\n");
    fgets(string1,sizeof(string1),stdin);   //using fgets function to read a whole line of text from the terminal input.
    printf("Write the string to be compared:\n");
    fgets(string2,30,stdin);
    compare(string1,string2);
}



void compare(char array1[],char array2[]){   //taking string array parameters.
    int length1=strlen(array1);
    int length2=strlen(array2);              //using strlen built-in func in string.h file,to measure the length of the string.

    if(length1==length2){                    //comparing lengths , if and only if two lenghts are equal then strings can be EQUAL.
          for(int i=0;i<length1;i++){
        if(array1[i]==array2[i]){            //comparing each character one by one,if they are equal in length.
            continue;
        }
        else{
            printf("Strings are not equal.");
            return ;
        }} 
    printf("Strings are equal");
    }else{
        printf("Strings are not equal.");
    }}

