/*(a) Write a C program to add two numbers
(b) Write a C program to add three numbers*/

/*(a) Write a C program to find area of circle 
(b) Write a C program to calculate simple interest*/

// #include <stdio.h>

// int main(){
//     int a,b;   //simply initizializing a variable defining it's type giving it a desired value.
//     printf("Enter the numbers to add:\n");
//     scanf("%d%d",&a,&b);
//         //C uses all basic arithmetic operators. likee '+' to add numbers.
//     printf("The sum of two numbers is: %d\n",a+b);  //printf requires a format specifier before printing out the any value of a varibale then variable as a second or so on parameter in order.
//     return 0;
// }

// #include <stdio.h>

// void main(){
//     float a,b,c;
//     // printf("%i %i %p %p",a,b,a,b);
//     printf("Enter the two numbers you wish to add:");
//     scanf("%f %f",&a,&b);
//     // scanf("%f",&b);  //%i (Integer): Reads or prints an integer. It is more versatile than %d because it interprets input as decimal (e.g., 10), octal (e.g., 012), or hexadecimal (e.g., 0xA) based on the prefix.
//     float sum = a + b;
//     printf("The sum of two numbers is : %f\n",sum);
// }


// #include <stdio.h>
// void main(){
//     float a,b,c=0;
//     printf("Enter the numbers you wish to add:\t");
//     scanf("%f %f %f",&a,&b,&c);
//     float sum=a+b+c;
//     printf("The sum of the numbers is %.2f\n",sum);
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

// Write a C program to print a block F using
// hash (#), where the F has a height of six
// characters and width of five and four
// characters

// #include <stdio.h>

// void main(){
//     int height=5,width=5;
//     for(int i=0;i<height;i++){
//         if (i==0){
//             for(int j=0;j<width;j++){
//                 printf("#");
//             }
//             printf("\n");
//         }
//         else if (i==(height/2)){       //since height is int datatype division operator will auto choose only int value.
//             for(int k=0;k<(width-1);k++){
//                 printf("#");
//             }
//             printf("\n");
//         }
//         else{
//             printf("#\n");
//         }
//     }
// }

// Write a C program that accepts two item’s
// weight (floating points' values) and number of
// purchase(floating points'values)andcalculate
// the average value of the items

// #include <stdio.h>

// void main(){
//     float wt1,wt2,item1,item2;
//     printf("Enter the numer of purchase and weight(in kg) of item1: \t");
//     scanf("%f%f",&item1,&wt1); //using scanf to allocate the values into the variable with &
//     printf("Enter the number of purchase and weight(in kg) of item2:\t");
//     scanf("%f%f",&item2,&wt2);
//     float avg=(((wt1*item1)+(wt2*item2))/2);
//     printf("Your average value of items is %f\n",avg);
// }

// (a)Write a C program to swap two variables
// using a third variable

// #include <stdio.h>

// void main(){
//     int a=10,b=20,temp;   //hard coding values of a and b as an example.
//     printf("Value of a=%d and b=%d before swap.\n",a,b);
//     temp=a;           //value of a stores into temp.
//     a=b;              //b stores into a.
//     b=temp;           //b takes value of temp which stored value of a.
//     printf("Value of a=%d and b=%d after swap.\n",a,b );
// }

// (b)Write a C program to swap two variables
// without using a third variable

// #include <stdio.h>

// void main(){
//     int a,b;
//     //taking user input
//     printf("Enter value of a and b to be swapped: \t");
//     scanf("%d%d",&a,&b);
//     printf("Value of a=%d and b=%d before swap.\n",a,b);
//     a+=b;            //adding value of b into a 
//     b=a-b;           //b now has value of (sum of both a and b)- value of a ,i.e. a.
//     a=a-b;           //a now has value of (sum of both a and b)- value of b(i.e. a).
//     printf("Value of a=%d and b=%d after swap.\n",a,b);
// }

// (a)Write a C program to convert a given integer
// (in seconds) to hours, minutes, and seconds.

// #include <stdio.h>

// int main() {
//     int integer, hours, minutes, seconds;
//     // Prompt the user for input
//     printf("Enter time in seconds: ");
//     scanf("%d", &integer);
//     // Calculate hours, minutes, and remaining seconds
//     hours = integer / 3600;              // 3600 seconds in an hour
//     minutes = (integer % 3600) / 60;     // Remaining seconds after hours, divided by 60 for minutes
//     seconds = (integer % 3600) % 60;     // Remaining seconds after both hours and minutes
//     // Print the result
//     printf("%d seconds is equivalent to: %d hours, %d minutes, and %d seconds. \n", integer, hours, minutes, seconds);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int total, years, weeks, days_remaining;
//     printf("Enter the number of days: ");
//     scanf("%d", &total);
//     years = total / 365;       // Calculate the number of years .
//     days_remaining = total% 365;  // Calculate the remaining days after accounting for years.
//     weeks = days_remaining / 7;   // Calculate the number of weeks in the remaining days
//     days_remaining = days_remaining % 7; // Calculate the number of days in the remaining days
//     printf("%d days is equal to: \n", total);
//     printf("Years: %d\n", years);
//     printf("Weeks: %d\n", weeks);
//     printf("Days: %d\n", days_remaining);
//     return 0;
// }

// Write a program to find the area of triangle.
// Area = sqrt(s*(s-a)*(s-b)*(s-c))


// #include <stdio.h>
// #include <math.h>  //using math.h to use sqrt built-in func.

// int main(){
//     float a,b,c,semi,area;
//     printf("Enter the three sides of the triangle:\t");
//     scanf("%f%f%f",&a,&b,&c);
//     semi=((a+b+c)/2);  //calculating the semi perimeter
//     area=sqrt((semi)*(semi-a)*(semi-b)*(semi-c));   //using sqrt function.
//     printf("Area of the triangle is:%.2f\n",area);  //printing out the result upto 2 decimals using .2f precision

//     return 0;

// }

// Write a C program to check whether a number
// is even or odd

#include <stdio.h>

int main(){
    int num;
    printf("Enter the integer to be checked:\t");
    scanf("%d",&num);
    //if numbers remained is 0(i.e. completely divisible by 0 it is even.)
    if (num%2==0){
        printf("%d is EVEN.\n",num);
    }
    else{
        printf("%d is ODD.\n",num);
    }
    return 0;
}