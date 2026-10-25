#include <stdio.h>

int main() {

    int numbers[4][3]; 

    for (int row_index = 0; row_index < 3; row_index++) {
        printf("Enter 3 Numbers \n");
        for (int col_index = 0; col_index < 3; col_index++) {
            scanf("%d", &numbers[row_index][col_index]);
        }
    }

    printf("Enter a Row \n");
    int insert_row;
    scanf("%d", &insert_row);

    for (int row_index = 3; row_index > insert_row; row_index--) {
        for (int col_index = 0; col_index < 3; col_index++) {
            numbers[row_index][col_index] = numbers[row_index - 1][col_index];
        }
    }

    printf("Enter New Row Values");
    for (int col_index = 0; col_index < 3; col_index++) {
        scanf("%d", &numbers[insert_row][col_index]);
    }

    for (int row_index = 0; row_index < 4; row_index++) {
        for (int col_index = 0; col_index < 3; col_index++) {
            printf("%d ", numbers[row_index][col_index]);
        }
        printf("\n");
    }

}