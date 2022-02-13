#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the 3 numbers : ");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
    printf("%d is Greatest Among all\n",a);
}
else if (b>a&&b>c)
{
  printf("%d is Greatest Among all", b);
}
else if (c>a&&c>b)
{
  printf("%d is Greatest Among all", c);
}
else
printf("Incorrect Value");


return 0;
}