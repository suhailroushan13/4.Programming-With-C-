#include <stdio.h>
int main()
{
int a,b,c;
int input;
printf("Enter the any number : ");
scanf("%d",&input);
if(input<0)
{
    printf("The Number Is Negative %d\n",input);
}
else if (input>0)
{
  printf("The Number Is Positive %d\n", input);
}
else if (input==0)
{
  printf("The Number Is Equal to Zero %d",input); 
}
return 0;
}