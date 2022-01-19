#include <stdio.h>
int main()
{
int num,digit;

printf("Enter the num :");
scanf("%d",&num);

digit = num % 10;

printf("the digit is %d\n",digit);

return 0;
}