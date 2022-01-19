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
total_discount = ( amt *discount)/100;
total_tax = (amt * tax)/100;

printf("*************** BILL ***************");
printf("Item Price : %d\t\t\n",price);
printf("Quantity :   %d\t\t\n",quantity);
printf("\t\t---------------------\n");
printf("Total Price :%d\t\t\n",amt);
printf("Disount - : %d\t\t\n",total_discount);
printf("Tax :%d\t\t\n",total_tax);
printf("\t\t---------------------\n");
printf("Total Amount :%d\t\t\n",)

return 0;
}