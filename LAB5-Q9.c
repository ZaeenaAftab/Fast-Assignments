#include <stdio.h>
#include <math.h>
int main(){
    int choice;
    float num, base, exponent;
    printf("AI Mathematical Calculator\n");
    printf("1. Square Root\n");
    printf("2. Power\n");
    printf("3. Absolute Value\n");
    printf("4. Floor\n");
    printf("5. Ceiling\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter a number: ");
            scanf("%f", &num);

            if (num >= 0) {
                printf("Square Root = %.2f", sqrt(num));
            }
            else {
                printf("Invalid input. Square root cannot be calculated for a negative number.");
            }
            break;

        case 2:
            printf("Enter base: ");
            scanf("%f", &base);

            printf("Enter exponent: ");
            scanf("%f", &exponent);

            printf("Power = %.2f", pow(base, exponent));
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%f", &num);

            printf("Absolute Value = %.2f", fabs(num));
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%f", &num);

            printf("Floor = %.2f", floor(num));
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%f", &num);

            printf("Ceiling = %.2f", ceil(num));
            break;

        default:
            printf("Invalid menu choice.");
    }
}