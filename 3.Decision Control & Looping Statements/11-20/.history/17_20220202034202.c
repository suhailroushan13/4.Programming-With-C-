#include <stdio.h>
int main()
{
int a,b,c;
int input;
printf("Press 0 for Exit:   \n");
printf("Press 1 for Case 1: \n");
printf("Press 2 for Case 2: \n");
printf("Press 3 for Case 3: \n");
printf("Press 4 for Case 4: \n");
printf("Press 5 for Case 5: \n");
printf("Enter an Number : ");
scanf("%d",&input);

switch(input)
{
    case 0: printf("You are in case 0:\n");break;
    case 1: printf("You are in case 1:\n");break;
    case 2: printf("You are in case 2:\n");break;
    case 3: printf("You are in case 3:\n");break;
    case 4: printf("You are in case 4:\n");break;
    case 5: printf("You are in case 5:\n");break;
    default: printf("Deafult case\n");





}

return 0;
}