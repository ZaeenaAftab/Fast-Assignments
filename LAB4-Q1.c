#include <stdio.h>
int main(){
    int N1,N2,N3;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &N1, &N2, &N3);
    if ((N1 >= N2) && (N1 >= N3)){
        printf("%d is the greatest", N1);
    }
    else if ((N2 >= N1) && (N2 >= N3)){
        printf("%d is the greatest", N2);
    }
    else if ((N3 >= N1) && (N3 >= N2)){
        printf("%d is the greatest", N3);
    }
}