#include <stdio.h>
int main(){
    int number;
    int digit = 0;
    int even = 0;
    int odd = 0;

    printf("Enter the meter value: ");
    scanf("%d", &number);

    while (number != 0){
        digit = number % 10;
        if (digit % 2 == 0)
        even++;
        else
        odd++;
        number = number / 10;
    }
    printf("Total Even Numbers: %d\n", even);
    printf("Total Odd Number: %d", odd);
}