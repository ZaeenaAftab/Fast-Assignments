#include <stdio.h>
int main(){
    int choice;

    printf("Enter 1 for Greeting\nEnter 2 for Study\nEnter 3 for Weather\nEnter 4 for Help: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Hello, How are you, Goodbye");
        break;
    case 2:
        printf("Programming, Mathematics, AI");
        break;
    case 3:
        printf("Today, Tomorrow, Forecast");
        break;
    case 4:
        printf("About Chatbot, Commands, Exit");
        break;
    
    default:
        printf("Invalid Choice!");
        break;
    }
}