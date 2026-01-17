/*Write a C program to check whether a number
is even or odd using functions.*/

#include <stdio.h>

int even(int number);

void main(){
    printf("Enter the number you want to check:\n");
    int num;
    scanf("%i",&num);
    even(num);
}


int even(int number){
    if(number%2==0){
        printf("%i is Even.",number);
    }
    else{
        printf("%i is Odd.",number);
    }
}