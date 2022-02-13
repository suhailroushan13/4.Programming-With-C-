#include <stdio.h>
int main()
{
int a,b,c;
int sum=-1;

int i=1;
while(i<=5)
{
    printf("Enter the number  : ");
    scanf("%d",&a);
    sum = (a > sum) ? a : sum;
    i++;
    
   

    
}

printf("%d ",sum);

return 0;
}