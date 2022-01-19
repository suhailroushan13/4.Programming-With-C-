#include <stdio.h>
int main()
{
int total_amt,item,quantity,discount,tax,amt;

printf("Enter the Price of Item :");
scanf("%d",&item);
printf("Enter the quantity :");
scanf("%d", &quantity);
printf("The discount is :10%% OFF :\n");
amt = (item * quantity);
discount = amt - (amt*10)/100;
printf("The GST Tax is :12%% \n\n\n ");
tax = (amt * 12)/100;

printf("********* THE BILL ***********\n\n");
printf("Price of Item %d\n:", item);
printf("Number of Items %d\n :",quantity);
printf("Disount 12%% %d\n",discount);
printf("The GST Tax is : %d\n\n\n",tax);
total_amt = (amt - discount) + tax;

printf("********* TOTAL BILL ***********\n");
printf("Total Bill: %d\n",total_amt);

return 0;
}