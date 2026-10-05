#include <stdio.h>
int main(){
    int attendance;
    int present = 0;
    int absent = 0;

    for (int i = 0; i < 15; i++){
        printf("Enter 1 for Present and Enter 0 for Absent: ");
        scanf("%d", &attendance);

        if (attendance == 1)
        present ++;
        else
        absent++;

        printf("Enter 1 for Present and Enter 0 for Absent: ");
        scanf("%d", &attendance);

        if (attendance == 1)
        present ++;
        else
        absent++;

    }
    printf("%d number of students are present.\n", present);
    printf("%d number of students are absent.\n", absent);
}