#include <stdio.h>
int main() {
    int age;
    float height;
    char grade;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);
    getchar();

    printf("Enter your Grade: ");
    scanf("%c", &grade);

    printf("Age: %d\n",age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c", grade);
}