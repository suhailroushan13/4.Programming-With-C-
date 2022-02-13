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
else if (isdigit(num)>=0 )

{
  printf("%d", num);
}

return 0;
}