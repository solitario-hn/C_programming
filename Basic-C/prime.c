#include <stdio.h>
//input and print it's prime numbers from 0 to 5  make two func

int main() {
    int num, i, j, factor;
    printf("Enter the number till which you want to check:\n");
    scanf("%d", &num);

    for (i = 2; i <= num; i++) {
        factor = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                factor++;
            }}
        if (factor == 2) {
            printf("%d \t", i);
        }}
    printf("\nAre the prime number between %i",num);
    return 0;
}