#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c;
int rem,bin=0,input,i=0;
printf("Enter the Decimal Number : ");
scanf("%d",&input);

// Decimal to Binary

//  Binary
//  Decimal
//  Binary
while(input!=0)
{
    rem = input%2;
    bin += rem * pow(10,i);
    input = input/2;
    i++;
}
printf("%d",bin);
return 0;
}