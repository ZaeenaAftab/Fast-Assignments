#include <stdio.h>
int main(){
    int code, digit, reversed, num;
    reversed = 0;
    digit = 0;

    printf("Enter Library Code: ");
    scanf("%d", &code);
    num = code;

     while (num != 0) {
        digit = num % 10;               
        reversed = reversed * 10 + digit;
        num = num / 10;                 
    }
    printf("%s", (reversed == code) ? "Is a Palindrome": "Not a Palindrome");
}