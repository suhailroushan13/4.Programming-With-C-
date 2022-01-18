#include <stdio.h>
int main()
{
int a=10,b=10,c=10,d=10;


printf("Prefix %d\n",++a);


printf("Postfix %d\n",b++);
printf("%d",b);

printf("Prefix %d\n", --c);

printf("Postfix %d", d--);
printf("%d", d);

return 0;
}