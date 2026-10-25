#include <stdio.h>
int main(){
    char logs[3][30];
    int count = 0;

    for (int i = 0; i < 3; i++) {
        printf("Enter log entry %d (username,status,timestamp): ", i + 1);

        scanf(" %29[^,],%29[^,],%29[^\n]",
              logs[0], logs[1], logs[2]);
        
        for (int j = 0; logs[j][0] != '\0' && j < 3; j++) {
            for (int k = 0; logs[j][k] != '\0'; k++) {
                if (logs[j][k] >= 'A' && logs[j][k] <= 'Z') {
                    count++;
                }
            }
        }
    }

    printf("\nTotal uppercase letters: %d\n", count);
}