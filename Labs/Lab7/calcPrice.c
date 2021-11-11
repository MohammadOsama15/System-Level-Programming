#include <stdio.h>

int main()
{
    int item_number,quantity;
    char purchase_date[12];
    float unit_price,total;
    printf("Enter item Number: ");
    scanf("%d",&item_number);
    printf("Enter unit price: ");
    scanf("%f",&unit_price);
    printf("Enter quantity: ");
    scanf("%d",&quantity);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%s",purchase_date);
    total=unit_price*quantity;
    printf("Item \t");
    printf("QTY \t");
    printf("purchase date \t \t");
    printf("Unit Price \t");
    printf("Total Amount \t \n");
    printf("%d \t",item_number);
    printf("%d \t",quantity);
    printf(purchase_date);
    printf("\t \t $ %f \t",unit_price);
    printf("$ %f \t",total, "\n");
    return 0;
}
