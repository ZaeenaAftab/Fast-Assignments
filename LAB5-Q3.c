#include <stdio.h>
int main(){
    int Category, S_Category;

    printf("Enter 1 to Choose Animals \n Enter 2 to Choose Vehicle \n Enter 3 to Choose Food \n Enter 4 to Choose Human: ");
    scanf("%d", &Category);

    switch (Category)
    {
    case 1:
        printf("Enter 1 for Cat \n Enter 2 for Dog \n Enter 3 for Bird:  ");
        scanf("%d", &S_Category);
        switch (S_Category){
            case 1:
                printf("Your Category is Animals and Animal choice is Cat.");
                break;
            case 2: 
                printf("Your Category is Animals and Animal choice is Dog.");
                break;
            case 3: 
                printf("Your Category is Animals and Animal choice is Bird.");
                break;
            default:
                printf("Invalid choice.");
                break;
        }
        break;
    case 2: 
        printf("Enter 1 for Car \n Enter 2 for Bus \n Enter 3 for Bike:  ");
        scanf("%d", &S_Category);
        switch (S_Category){
            case 1:
                printf("Your Category is Vehicles and Vehicle choice is Car.");
                break;
            case 2: 
                printf("Your Category is Vehicles and Vehicle choice is Bus.");
                break;
            case 3: 
                printf("Your Category is Vehicles and Vehicle choice is Bike.");
                break;
            default:
                printf("Invalid choice.");
                break;
        }
        break;
    case 3:
        printf("Enter 1 for Pizza \n Enter 2 for Burger \n Enter 3 for Biriyani:  ");
        scanf("%d", &S_Category);
        switch (S_Category){
            case 1:
                printf("Your Category is Food and choice is Pizza.");
                break;
            case 2: 
                printf("Your Category is Food and choice is Burger.");
                break;
            case 3: 
                printf("Your Category is Food and choice is Biriyani.");
                break;
            default:
                printf("Invalid choice.");
                break;
        }
        break;
    case 4:
        printf("Enter 1 for Male \n Enter 2 for Female \n Enter 3 for Child:  ");
        scanf("%d", &S_Category);
        switch (S_Category){
            case 1:
                printf("Your Category is Human and choice is Male.");
                break;
            case 2: 
                printf("Your Category is Human and choice is Female.");
                break;
            case 3: 
                printf("Your Category is Human and choice is Child.");
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