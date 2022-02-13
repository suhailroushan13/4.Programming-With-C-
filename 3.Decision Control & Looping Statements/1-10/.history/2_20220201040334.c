#include <stdio.h>
int main()
{
int num;
char ch;
printf("Enter any key :");
scanf("%d", &ch);

if (isalpha(ch)>=0 )
{
    printf("%c", ch);
   
}
else if (isdigit(ch)>=0 )

{
  printf("%d", num);
}
else if (isprint(ch)>=0 )

return 0;
}