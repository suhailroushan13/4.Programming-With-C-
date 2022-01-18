#include <stdio.h>
int main()
{
int a=10,b=10,c=10,d=10;


printf("Prefix",++a);


printf("Postfix",b++);
printf("%d",b);

printf("Prefix", --a);

printf("Postfix", --);
printf("%d", a);

return 0;
}