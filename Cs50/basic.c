/*(a) Write a C program to add two numbers
(b) Write a C program to add three numbers*/

// #include <stdio.h>

// int main(){
//     int a=10,b=10;   //simply initizializing a variable defining it's type giving it a desired value.
//     int sum=a+b;     //C uses all basic arithmetic operators. likee '+' to add numbers.
//     printf("The sum of two numbers is: %d\n",sum);  //printf requires a format specifier before printing out the any value of a varibale then variable as a second or so on parameter in order.
//     return sum;
// }

#include <stdio.h>

// void main(){
//     float a,b;
//     // printf("%i %i %p %p",a,b,a,b);
//     printf("Enter the two numbers you wish to add:");
//     scanf("%f %f",&a,&b);
//     // scanf("%f",&b);
//     float sum = a + b;
//     printf("The sum of two numbers is : %f\n",sum);
// }

void main(){
    float a,b,c=0;
    printf("Enter the numbers you wish to add:\t");
    scanf("%f %f %f",&a,&b,&c);
    float sum=a+b+c;
    printf("%.2f\n",sum);
}
