#include <stdio.h>
int main()
{
int a,b,c;
char ch;
printf("Enter any cha : ");
scanf("%s",&ch);
if(ch>=97)
{
    printf("%c\n", ch-32);
}
else if(ch>=65)
{
    
  printf("%c\n", ch + 32);
}

return 0;
}