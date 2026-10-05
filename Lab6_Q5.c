#include <stdio.h>
int main(){
    int n, factorial,answer,factorial_s;
    factorial = 1;
    factorial_s = 1;

    printf("Enter a Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 2*n; i++){
        factorial *= i;
    }
    for (int i = 1; i <= n; i++){
        factorial_s *= i;
    }
    answer = factorial / (factorial_s * ((n + 1) * factorial_s));

    printf("%d", answer);
}