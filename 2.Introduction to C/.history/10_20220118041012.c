#include <stdio.h>
int main()
{
int a=10,b=10,c=10,d=10;


printf("Prefix %d",++a);


printf("Postfix %d",b++);
printf("%d",b);

printf("Prefix ", --c);

printf("Postfix", d--);
printf("%d", d);

return 0;
}