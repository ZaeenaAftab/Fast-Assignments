#include <stdio.h>
int main(){
    int Age, Income, Credit_Score, Status;

    printf("Enter Age: ");
    scanf("%d", &Age);

    printf("Enter Income: ");
    scanf("%d", &Income);

    printf("Enter Credit Score: ");
    scanf("%d", &Credit_Score);

    printf("Enter 1 if loan exists else enter 0: ");
    scanf("%d", &Status);

    if ((Age >= 21) && (Income >= 100000) && (Credit_Score >= 750) && (Status == 0)){
        printf("High Aproval Chance.");
    }
    else if ((Age >= 21) && (Income >= 75000) && (Credit_Score >= 650) && (Status)){
        printf("Manual Review.");
    }
    else if ((Age >= 21) && (Income >= 50000) && (Credit_Score >= 600)){
        printf("Possibly Eligible.");
    }
    else{
        printf("Rejected.");
    }

}