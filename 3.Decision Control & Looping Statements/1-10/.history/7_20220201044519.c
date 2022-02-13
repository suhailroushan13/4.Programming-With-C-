#include <stdio.h>
int main()
{
int a,b,c;
int input;
printf("Enter the year: ");
scanf("%d",&input);
if(input%4==0||input%10==0||)
{
    printf("Leap year\n");
}
else 
{
    printf("Not a leap year\n");
}


return 0;
}