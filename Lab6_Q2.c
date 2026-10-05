#include <stdio.h>
int main(){
    int ticket;

    printf("Enter Ticket Number: ");
    scanf("%d", &ticket);

    while (ticket != 0){
        printf("%d\n", ticket % 10);
        ticket = ticket / 10;
    }
}