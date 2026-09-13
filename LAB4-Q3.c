#include <stdio.h>
int main(){
    int total, duplicate, missing;
    printf("Enter total number of records: ");
    scanf("%d", &total);
    printf("Enter  number of missing records: ");
    scanf("%d", &missing);
    printf("Enter number of duplicate records: ");
    scanf("%d", &duplicate);

    if (total <= 0)
    {
        printf("Invalid Dataset");
    }
    else
    {
        int missing_percentage = (missing*100)/total;
        int duplicate_percentage = (duplicate*100)/total; 
        if (missing_percentage > 30)
        {
            printf("Poor Quality Dataset");
        }
        else if ((missing_percentage <= 30) && (duplicate_percentage > 20))
        {
            printf("Dataset requires Cleaning.");
        }
        else
        {
            printf("Dataset ready for training.");
        }
    }
}