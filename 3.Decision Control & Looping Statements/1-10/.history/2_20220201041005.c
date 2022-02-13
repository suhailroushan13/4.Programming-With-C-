#include <stdio.h>
#include <ctype.h>
// #include <conio.h>
int main()
{
int num;
char ch [100];
printf("Enter any key :");
scanf("%s", &ch);

if (isalpha(ch)>= 0 )
{
  printf("Printable Character It is");

}
else if (isdigit (ch)>=0 )

{
    printf("%s",ch);
  printf("Printable Number It is");
}


return 0;
}