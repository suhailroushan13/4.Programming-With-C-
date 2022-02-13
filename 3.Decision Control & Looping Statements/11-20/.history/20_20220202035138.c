#include <stdio.h>
int main()
{
int a,b,c;
int input;
printf("Enter the number from 1 to 10: ");
scanf("%d",&input);

switch(input)
{
case 1:
case 3:
case 5:
case 7:
case 9:
printf("ODD\n");
break;

case 2:
case 4:
case 6:
case 8:
case 10:
printf("EVEN\n");




}

return 0;
}