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
    total = sum1 + sum2;
    a++;
    b++;
}

printf("%d ",total); 




return 0;
}