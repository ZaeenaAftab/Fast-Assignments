#include <stdio.h>
int main(){
    int confidence, threshold;

    printf("Enter model confidence: ");
    scanf("%d", &confidence);

    printf("Enter required confidence threshold: ");
    scanf("%d", &threshold);

    if (confidence >= 90) {
        printf("Confidence Level: Very High\n");
    }
    else if (confidence >= 75) {
        printf("Confidence Level: High\n");
    }
    else if (confidence >= 50) {
        printf("Confidence Level: Moderate\n");
    }
    else {
        printf("Confidence Level: Low\n");
    }

    if (confidence >= threshold && confidence >= 50) {
        printf("Prediction Accepted.\n");
    }
    else {
        printf("Prediction Rejected.\n");
    }
}