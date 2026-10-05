#include <stdio.h>
int main(){
    char str_array[10];

    printf("Enter a Word: ");
    scanf("%s", &str_array);

    //Printing Array
    printf("%s\n", str_array);

    //Counting length
    int i = 0;
    while (str_array[i] != '\0')
    {
        i++;
    }
    printf("Length of Array excluding Null Pointer is: %d\n", i);
    
    //Reversing Array
    int x = i - 1;
    for (int j = 0; j < (i/2); j++){
        char temp = str_array[j];
        str_array[j] = str_array[x];
        str_array[x] = temp;
        x--;
    }
    printf("Reversed String is: %s\n", str_array);
    
    //Palindrome

    x = i - 1;
    int check = 0;
    for (int j = 0; j < i/2; j++){
        if (str_array[j] != str_array[x]){
            check = 0;
            break;
        }
        else{
            x--;
            check = 1;
        }
    }
    printf("%s", (check == 1) ? "Is a Palindrome\n" : "Not a Palindrome\n");

    //Vowel and Constants count
    int Vowel = 0;
    int Constant = 0;
    for( int j = 0; j < i; j++){
        if ((str_array[j] == 'a') || (str_array[j] == 'e') || (str_array[j] == 'i') || (str_array[j] == 'o') || (str_array[j] == 'u'))
        Vowel++;
        else
        Constant++;
    }
    printf("Constants: %d\n", Constant);
    printf("Vowels: %d\n", Vowel);

}