#include <stdio.h>
int main(){
    char student_name[3][50];
    int marks[3][3];
    int sum = 0;
    int avg = 0;

    for (int i = 0; i < 3; i++){
        printf("Enter student Name: ");
        scanf(" %[^\n]", student_name[i]);

        for (int j = 0; j < 3; j++){
        printf("Enter Marks for Subject %d: ", j + 1);
        scanf("%d", &marks[i][j]);
        }
    
    }

    printf("\n----------SCHOOL REPORT----------\n");
    for (int y = 0; y < 3; y++){
    printf("Student Name: %s\n", student_name[y]);
        for (int j = 0; j < 3; j++){
        sum = sum + marks[y][j];
        }
        avg = sum/3;
        printf("Student Average is: %d\n", avg);
        sum = 0;
    }
}