#include <stdio.h>
int main()
{
int a,b,sum1=0,sum2=0,total=0;
printf("Enter the a and b : ");
scanf("%d %d",&a,&b);
while(a<=b)
{
    sum2 += b;
    sum1 += a;
    a++;
}

printf("%d ",a); 




return 0;
}