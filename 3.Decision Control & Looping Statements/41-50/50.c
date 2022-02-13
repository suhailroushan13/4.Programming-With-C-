#include <stdio.h>
int main()
{
int a,b,c;
int input;
int temp;
printf("Enter the number  : "); 
scanf("%d", &input);
while(input!=0)
{
    temp = input%10;
    printf("%d", temp);
    input = input/10;
   
}


return 0;
}