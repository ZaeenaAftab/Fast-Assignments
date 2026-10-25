#include <stdio.h>
int main(){
    char messages[3][100];

    printf("Enter 3 Secret Lines \n");
    for (int line = 0; line < 3; line++) {
        scanf(" %99[A-Z ]", messages[line]);
        scanf("%*[^\n]");
    }

    for (int line = 0; line < 3; line++) {
        int space_count = 0;
        int word_count = 0;

        for (int character = 0; messages[line][character] != '\0'; character++) {
            if (messages[line][character] == ' ')
                space_count++;
            else if (character == 0 || messages[line][character - 1] == ' ')
                word_count++;
        }

        printf("Message : %s\n", messages[line]);
        printf("Word Count: %d \n Spaces: %d", word_count, space_count);
        printf(" \n");
    }
}