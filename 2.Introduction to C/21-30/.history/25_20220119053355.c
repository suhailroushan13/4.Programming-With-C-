#include <stdio.h>
int main()
{
int quantity,price,discount,tax,total_amount,amt,total_tax,total_discount,left_discount;
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
left_discount = amt -total_discount;
total_tax = (amt * tax)/100;
total_amount = (amt -left_discount) + total_tax;

printf("*************** BILL ***************");
printf("\n\nItem Price : %d\t\t\n",price);
printf("Quantity :   %d\t\t\n",quantity);
printf("\t\t---------------------\n");
printf("Total Price :%d\t\t\n",amt);
printf("Disount - : %d\t\t\n",total_discount);
printf("Tax :%d\t\t\n",total_tax);
printf("\t\t---------------------\n");
printf("Total Amount :%d\t\t\n",total_amount);

return 0;
}