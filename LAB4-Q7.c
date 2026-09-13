#include <stdio.h>
int main(){
    float data, price, basicCost, discount, finalCost;

    printf("Enter data used in GB: ");
    scanf("%f", &data);

    printf("Enter price per GB: ");
    scanf("%f", &price);

    basicCost = data * price;

    if (data < 50)
    {
        discount = 0;
    }
    else if (data >= 50 && data <= 99)
    {
        discount = 5;
    }
    else if (data >= 100 && data <= 199)
    {
        discount = 10;
    }
    else
    {
        discount = 10;
    }

    finalCost = basicCost - (basicCost * discount / 100);

    printf("Basic Cost = %.2f\n", basicCost);
    printf("Discount = %.2f%%\n", discount);
    printf("Final Cost = %.2f", finalCost);
}