#include <stdio.h>
#include <ctype.h>
// #include <conio.h>
int main()
{
int num;
char ch;
printf("Enter any key :");
scanf("%s", &ch);

if (isalpha(ch)> 0 )
{
  printf("Printable Character It is\n");

}
else if (isdigit (ch)>0 )

{
 
  printf(" Number It is\n");
}


return 0;
}