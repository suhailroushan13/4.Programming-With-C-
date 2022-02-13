#include <stdio.h>
int main()
{
int a,b,c;
ch input;

printf("Enter the character : ");
scanf("%s", &input);
switch (input) {
case 1:
  printf("SUNDAY\n");
  break;
case 2:
  printf("MONDAY\n");
  break;
case 3:
  printf("TUESDAY\n");
  break;
case 4:
  printf("Its a Vowel\n");
  break;
case 5:
  printf("Its a Vowel\n");
  break;
case 6:
  printf("Its a Vowel\n");
  break;
case 7:
  printf("Its a Vowel\n");
  break;

default:
  printf("Incorrect Value\n");
  break;
}

return 0;
}