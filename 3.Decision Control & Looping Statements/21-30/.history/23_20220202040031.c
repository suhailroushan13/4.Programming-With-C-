#include <stdio.h>
int main()
{
int a,b,sum;
printf("Enter the a and b : ");
scanf("%d %d",&a,&b);
while(a<=b)
{
    a += b;
    a++;
}

printf("%d ",a); 




return 0;
}