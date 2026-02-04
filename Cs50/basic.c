/*(a) Write a C program to add two numbers
(b) Write a C program to add three numbers*/

/*(a) Write a C program to find area of circle 
(b) Write a C program to calculate simple interest*/

// #include <stdio.h>

// int main(){
//     int a=10,b=10;   //simply initizializing a variable defining it's type giving it a desired value.
//     int sum=a+b;     //C uses all basic arithmetic operators. likee '+' to add numbers.
//     printf("The sum of two numbers is: %d\n",sum);  //printf requires a format specifier before printing out the any value of a varibale then variable as a second or so on parameter in order.
//     return sum;
// }

// #include <stdio.h>

// void main(){
//     float a,b;
//     // printf("%i %i %p %p",a,b,a,b);
//     printf("Enter the two numbers you wish to add:");
//     scanf("%f %f",&a,&b);
//     // scanf("%f",&b);
//     float sum = a + b;
//     printf("The sum of two numbers is : %f\n",sum);
// }

// void main(){
//     float a,b,c=0;
//     printf("Enter the numbers you wish to add:\t");
//     scanf("%f %f %f",&a,&b,&c);
//     float sum=a+b+c;
//     printf("%.2f\n",sum);
// }
// working


// #include <stdio.h>
// #include <math.h>
// int main(){
//     float pi=3.14;    //we need float dataype to hold decimals.
//     float radius=0;
//     printf("Enter the radius of the circle:\t");
//     scanf("%f",&radius);
//     float area=pi*(pow(radius,2));
//     printf("The area of the circle is:%f\n",area);
//     return 0;
// }
// while using diff header files you need to link them first in via command line since gcc 
// //doesn't automatically link them. ---for here, gcc basic.c -lm -o basic.
// //do not redeclare same variable again and again in a scope will cause compiler error
// //---e.g. int area; then again after line 4 int area=32;   {two time variable declaration.}


// #include <stdio.h>

// void main(){
//     float principal,rate,time=0;   //adding 0 value by default to avoid garbage values.
//     printf("Enter the original amount borrowed or invested: \t");
//     scanf("%f",&principal);
//     printf("Enter the annual interest rate:\t");
//     scanf("%f",&rate);
//     printf("Enter the duration the money is borrowed or invested in years:\t");
//     scanf("%f",&time);
//     float simple=(principal*rate*time)/100;
//     printf("Your calculated simple interest for the amount is %.2f.\n",simple);
// }