#include <stdio.h>
int main(){
    int User, C_Score;

    printf("Enter 1 for Authorized User\nEnter 2 for Unauthorized User: ");
    scanf("%d", &User);

    printf("Enter Confidence Score: ");
    scanf("%d", &C_Score);

    if ((C_Score >= 80) && (User == 1)){
        printf("Face Recognized - Access Granted");
    }
    else if ((C_Score >= 50) && (C_Score < 80)){
        printf("Manual Verification.");
    }
    else{
        printf("%s\n", User == 0 ? "Low Confidence Score - Access Denied." : "User is Unauthorized - Access Denied.");
    }
    
}