#include <stdio.h>
int main()
{
int quantity,price,discount,tax,total_amount,amt;
printf("Enter the price :");
scanf("%d",&price);
printf("Enter the quantity :");
scanf("%d", &quantity);
printf("Enter the discount :");
scanf("%d", &discount);
printf("Enter the tax :");
scanf("%d", &tax);
amt = price* quantity;

printf("*************** BILL ***************");
printf("Item Price %d\t\t\n",price);
printf("Quantity   %d\t\t\n",quantity);
printf("\t\t---------------------\n");
printf("Total Price %d\t\t\n")


return 0;
}