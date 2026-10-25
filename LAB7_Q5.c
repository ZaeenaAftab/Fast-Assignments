#include <stdio.h>

int main() {
    char text[3][100];

    printf("Enter a string \n");

    for (int line = 0; line < 3; line++) {
        scanf("%99[^;\n]", text[line]);
        scanf("%*c");
    }

    for (int line = 0; line < 3; line++) {
        int vowel_count = 0;

        for (int character = 0; text[line][character] != '\0'; character++) {
            if (text[line][character] == 'a' || text[line][character] == 'e' || text[line][character] == 'i'
            || text[line][character] == 'o' || text[line][character] == 'u' || 
            text[line][character] == 'A' || text[line][character] == 'E' 
            || text[line][character] == 'I' || text[line][character] == 'O'
            || text[line][character] == 'U') {
                vowel_count++;
            }
        }

        printf("Sentence %d has %d vowels\n", line + 1, vowel_count);
    }   
}