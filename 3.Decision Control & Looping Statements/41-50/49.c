#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c;
int x,n,power;
printf("Enter the x value :");
scanf("%d", &x);
printf("Enter the power n value :");
scanf("%d", &n);
power = pow(x,n);
printf("Pow (%d,%d) is %d\n",x,n,power);



return 0;
}