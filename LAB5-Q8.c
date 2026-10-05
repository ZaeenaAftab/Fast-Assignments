#include <stdio.h>
int main(){
    int permission;

    printf("Enter permission value: ");
    scanf("%d", &permission);

    if (permission & 1) {
        printf("View permission: Allowed\n");
    }

    if (permission & 2) {
        printf("Training permission: Allowed\n");
    }

    if (permission & 4) {
        printf("Testing permission: Allowed\n");
    }

    if (permission & 8) {
        printf("Deployment permission: Allowed\n");
    }

    if ((permission & 2) && (permission & 8)) {
        printf("User has BOTH training and deployment permissions.\n");
    }

}