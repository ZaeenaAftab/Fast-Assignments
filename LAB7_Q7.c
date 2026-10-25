#include <stdio.h>

int main() {

    float data[3][4];

    for (int row = 0; row < 3; row++) {
        printf("Enter Data for Day %d \n", row + 1);
        for (int col = 0; col < 4; col++) {
            scanf("%f", &data[row][col]);
        }
    }

    printf("Enter a number from 0 to 3 \n");
    int position;
    scanf("%d", &position);

    for (int row = 0; row < 3; row++) {
        for (int col = position; col < 3; col++) {
            data[row][col] = data[row][col + 1];
        }
    }

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf(" %.2f", data[row][col]);
        }
        printf("\n");
    }

}