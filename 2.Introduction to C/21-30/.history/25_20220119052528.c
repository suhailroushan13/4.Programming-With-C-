#include <stdio.h>
int main()
{
int quantity,price,discount,tax,total_amount;
printf("Enter the price :");
scanf("%d",&price);
printf("Enter the quantity :");
scanf("%d", &quantity);
printf("Enter the discount :");
scanf("%d", &discount);
printf("Enter the tax :");
scanf("%d", &tax);

printf("*************** BILL ***************");
printf("Item Price %d\t\t",price);

return 0;
}