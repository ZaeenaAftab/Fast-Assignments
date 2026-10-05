#include <stdio.h>
int main(){
    int arr[9], Max, Min;

    //initialisation of array
    for (int i = 0; i < 8; i++){
        printf("Enter a Number: ");
        scanf("%d", &arr[i]);
    }

    //printing array
    for (int i = 0; i < 8; i++){
        printf("%d\n", arr[i]);
    }

    //Finding Max and Min
    Max = arr[0];
    Min = arr[0];
    for (int i = 1; i < 8; i++){
        Max = (arr[i] > Max) ? arr[i] : Max;
        Min = (arr[i] < Min) ? arr[i] : Min;
    }
    printf("The Largest Number is: %d\n", Max);
    printf("The Smallest Number is: %d\n", Min);

    //Linear Search
    int search;
    int check = 0;
    int found;
    printf("Enter a Search Value: ");
    scanf("%d", &search);
    for (int i = 0; i < 8; i++){
        check = (search == arr[i]) ? 1 : 0;
        if (check == 1){
            found = i;
            break;
        }
    }
    if (check == 1)
    printf("Number found at array position: %d\n", found);
    else
    printf("Not Found\n");

    //Adding a value in Array
    int new_Value, Position;

    printf("Enter the New Value: ");
    scanf("%d", &new_Value);

    printf("Enter the desired position of the Value: ");
    scanf("%d", &Position);

    for (int i = 9; i >= Position; i--){
        arr[i] = arr[i - 1];
    }
    arr[Position] = new_Value;
    for (int i = 0; i < 9; i++){
        printf("%d\n", arr[i]);
    }

    //Deleting a value in Array
    int Delete;

    printf("Enter the array index which is to be deleted: ");
    scanf("%d", &Delete);

    for (int i = Delete; i < 8; i++){
        arr[i] = arr[i+1];
    }
    for (int i = 0; i < 8; i++){
        printf("%d\n", arr[i]);
    }
}