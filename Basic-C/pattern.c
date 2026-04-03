// #include <stdio.h>

// int main(){
//     //outer for loop=height=4
//     int n=4;
//     for(int i=1;i<=4;i++){
//         //printing out the spaces
//         for(int j=1;j<=(n-i);j++){
//             printf(" \t");
//         }
//         //printing out the stars
//         for(int k=1;k<=(2*i-1);k++){
//             printf("*\t");
//         }

//         printf("\n");
//     }
// }


// #include <stdio.h>

// int main(){
//     int n=4;
//     //outer loop for height
//     for(int i=1;i<=4;i++){
//         //printing out the spaces
//         for(int j=1;j<=(n-i);j++){
//             printf(" \t");
//         }
//         //printing out the half circle
//         for(int k=1;k<=i;k++){
//             printf("%d\t",k);
//         }
//         //printing out the other half
//         for(int l=(i-1);l>0;l--){
//             printf("%d\t",l);
//         }
//         printf("\n");
//     }
// }

//         5
//       5 4 5
//     5 4 3 4 5
//   5 4 3 2 3 4 5
// 5 4 3 2 1 2 3 4 5
// 

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// 0 1 0 1 0 1

// #include <stdio.h>

// int main(){
//     int n=6;
//     //outer loop height=6;
//     for(int i=1;i<=6;i++){
//         int to_print = (i % 2 == 0) ? 0 : 1;  // reset per row
//         //width=6
//         for(int j=1;j<=i;j++){
//             printf("%d\t",to_print);
//             //using ternary operator.
//             to_print=to_print>0?0:1;
//         }
//         printf("\n");
//     }
// }

// Write a program to print all prime numbers<=
// a given number

#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    printf("Enter the number to check:");
    scanf("%d",&n);  
    printf("PRIME NUMBERS:");
    

    for(int j=2;j<=n;j++){ //since one is a unique number.
        int i=2;
        bool isPrime=true;
        while(i<j){
            if(j%i==0&&i!=j){
                isPrime=false;
                break;
            }
            else{
                i++;
            }}
    if(isPrime){
        printf("%d,",j);
    }  
}
    printf("\n");}