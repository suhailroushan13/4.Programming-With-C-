#include <stdio.h>
#include <ctype.h>
// #include <conio.h>
int main()
{
int num;
char ch;
printf("Enter any key :");
scanf("%c", &ch);

if (isalpha(ch)>= 0 )
{
  printf("Printable Character It is");

}
else if (isdigit(ch)>=0 )

{
  printf("%d", num);
}
else if (isprint(ch)>=0 )
{
    printf("Printable Character It is");
}

return 0;
}