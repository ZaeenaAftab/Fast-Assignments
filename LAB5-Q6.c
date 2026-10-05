#include <stdio.h>
int main(){
    int Category, S_Category;

    printf("Enter 1 to Choose Classification\n Enter 2 to Choose Regression\n Enter 3 to Choose Clustering\n Enter 4 to Choose Computer Vision: ");
    scanf("%d", &Category);

    switch (Category)
    {
    case 1:
        printf("Enter 1 for Logistic Regression\n Enter 2 for Decision Tree\n Enter 3 for KNN:  ");
        scanf("%d", &S_Category);
        switch (S_Category){
            case 1:
                printf("Your Category is Classification and choice is Logistic Regression.");
                break;
            case 2: 
                printf("Your Category is Classification and choice is Decision Tree.");
                break;
            case 3: 
                printf("Your Category is Classification and choice is KNN.");
                break;
            default:
                printf("Invalid choice.");
                break;
        }
        break;
    case 2: 
        printf("Enter 1 for Linear Regression\n Enter 2 for Polynomial Regression\n Enter 3 for SVR:  ");
        scanf("%d", &S_Category);
        switch (S_Category){
            case 1:
                printf("Your Category is Regression and choice is Linear Regression.");
                break;
            case 2: 
                printf("Your Category is Regression and choice is Polynomial Regression.");
                break;
            case 3: 
                printf("Your Category is Regression and choice is SVR.");
                break;
            default:
                printf("Invalid choice.");
                break;
        }
        break;
    case 3:
        printf("Enter 1 for K-Means\n Enter 2 for Hierarchical Clustering\n Enter 3 for DBSCAN:  ");
        scanf("%d", &S_Category);
        switch (S_Category){
            case 1:
                printf("Your Category is Clustering and choice is K-Means.");
                break;
            case 2: 
                printf("Your Category is Clustering and choice is Hierarchical Clustering.");
                break;
            case 3: 
                printf("Your Category is Clustering and choice is DBSCAN.");
                break;
            default:
                printf("Invalid choice.");
                break;
        }
        break;
    case 4:
        printf("Enter 1 for CNN\n Enter 2 for YOLO\n Enter 3 for R-CNN:  ");
        scanf("%d", &S_Category);
        switch (S_Category){
            case 1:
                printf("Your Category is Computer Vision and choice is CNN.");
                break;
            case 2: 
                printf("Your Category is Computer Vision and choice is YOLO.");
                break;
            case 3: 
                printf("Your Category is Computer Vision and choice is R-CNN.");
                break;
            default:
                printf("Invalid choice.");
                break;
        }
        break; 
        
    
    default:
        printf("Invalid Category.");
        break;
    }
}