#include <stdio.h>
int main()
{
int a,b,c,n,i=1,sum=0;
printf("Enter the number : ");
scanf("%d", &n);
do
{
sum = sum + n;
i++;
}
while(i<=n);
return 0;
}