#include <stdio.h>
int main(){
    int password;
    int sum = 0;

    printf("Enter a 4 digit Password: ");
    scanf("%d", &password);

    for (int i = 0; i < 4; i++){
        sum = sum + (password % 10);
        password = password / 10;
    }
    printf("%s", (sum > 10) ? "Strong Password" : "Weak Password");
}