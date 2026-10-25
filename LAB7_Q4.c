#include <stdio.h>
#include <string.h>

int main() {
    char words[3][100];

    printf("Enter 3 words");
    for (int line = 0; line < 3; line++) {
        scanf("%[^\n]", words[line]);
        scanf("%*c");
    }

    int max_row = 0;
    int max_column = 0;
    int max_length = 0;
    int word_start = 0;   

    for (int r = 0; r < 3; r++) {
        int position = 0;                       
        int total_length = strlen(words[r]);

        for (int c = 0; c < 3; c++) {  

            while (position < total_length && words[r][position] == ' ')
                position++;

            int begin = position;                                     
            while (position < total_length && words[r][position] != ' ')
                position++;   

            int current_length = position - begin;                             

            if (max_length < current_length) {
                max_row = r;
                max_column = c;
                max_length = current_length;
                word_start = begin;
            }
        }
    }

    printf("Word with greatest Length ");
    for (int index = word_start; index < word_start + max_length; index++)
        printf("%c", words[max_row][index]);  

    printf("\n");
    printf("Row Number %d\n", max_row);
    printf("Column Number %d\n", max_column);
}