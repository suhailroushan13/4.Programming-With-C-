#include <stdio.h>
int main()
{
int a,b,c;
int even,odd,input;
printf("Enter any number : ");
scanf("%d",&input);
if(input%2==0)
{
    printf("Given Number is Even %d\n",input);
}
else if(input%2!=0)
{
  printf("Given Number is Odd %d ", input);
}
return 0;
}