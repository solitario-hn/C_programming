#include <stdio.h>
#include <math.h>  //using math.h to use sqrt built-in func.

int main(){
    float a,b,c,semi,area;
    printf("Enter the three sides of the triangle:\t");
    scanf("%f%f%f",&a,&b,&c);
    semi=((a+b+c)/2);  //calculating the semi perimeter
    area=sqrt((semi)*(semi-a)*(semi-b)*(semi-c));   //using sqrt function.
    printf("Area of the triangle is:%.2f\n",area);  //printing out the result upto 2 decimals using .2f precision

    return 0;

}