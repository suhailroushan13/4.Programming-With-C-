#include <stdio.h>
int main()
{
int num,input;
char ch;
printf("Enter any key :");
scanf("%d", &input);

if (isalpha(ch)>=0 )
{
    printf("%c", ch);
   
}
else if (isdigit(num)>=0 )

{
  printf("%d", num);
}

return 0;
}