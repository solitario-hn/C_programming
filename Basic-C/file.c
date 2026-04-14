// #include <stdio.h>
//                     PRIME NUMBER                 //
// int main() {
//     int n, i, j;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     int prime[n+1];

//     for(i = 0; i <= n; i++)
//         prime[i] = 1;

//     prime[0] = prime[1] = 0;

//     for(i = 2; i * i <= n; i++) {
//         if(prime[i] == 1) {
//             for(j = i * i; j <= n; j += i) {
//                 prime[j] = 0;
//             }
//         }
//     }

//     printf("Prime numbers up to %d are:\n", n);

//     for(i = 2; i <= n; i++) {
//         if(prime[i] == 1)
//             printf("%d ", i);
//     }

//     return 0;
// }

// 

// Write a program to find product,sum,average,
// max and min from a list of n numbers

// 

#include <stdio.h>

int main() {
    int n,i=0;
    printf("Enter the no. of elements in array: ");
    scanf("%d",&n);
    float arr[n];
    //taking user input for elements in array
    while(i<n){
        printf("Enter the %d element of array: ",i+1);
        scanf("%f",&arr[i]); 
        i++;
    }
    float min = arr[0],max = arr[0];
    int minIndex = 0, maxIndex = 0;

    for(int j = 1; j< n; j++) {
        if(arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }

        if(arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    printf("Index of smallest element: %d\n", minIndex);
    printf("Index of largest element: %d\n", maxIndex);
    return 0;
}