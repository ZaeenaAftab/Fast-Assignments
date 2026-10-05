#include <stdio.h>
int main(){
    int n, left_ptr, right_ptr;


    printf("Enter a Number: ");
    scanf("%d", &n);

    left_ptr = n;
    right_ptr = n;

    for (int i = 0; i < (2 * n) - 1; i++){

        if (left_ptr == right_ptr){
            for (int j = 0; j < left_ptr; j++){
                printf(" ");
            }
            printf("*\n");
            right_ptr--;
            left_ptr++;
        }
        else{
            for (int j = 0; j <= left_ptr; j++){
                    if (j == right_ptr)
                    printf("*");
                    else if (j == left_ptr)
                    printf("*\n");
                    else
                    printf(" ");
                }   
            if (i < (n -1)){
                right_ptr--;
                left_ptr++;
            }
            else{
                right_ptr++;
                left_ptr--;
            }
        }

    }
}