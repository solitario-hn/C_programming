// Write a program to convert binary number to decimal number.

#include <stdio.h>
#include <math.h>

void bin_to_dec(int n);

int main(){
    int n;
    printf("Enter the binary number to be converted:");
    scanf("%d",&n);
    bin_to_dec(n);
}


void bin_to_dec(int n){
    int sum=0,rem,original=n;

    int i=0;
    while(n!=0){
        rem=n%10;   //extract the last digit.
        n=n/10;
        sum+=rem*(pow(2,i)); 
        i++;
    }

    printf("Binary number: %d \n Decimal number: %d\n",original,sum);

}