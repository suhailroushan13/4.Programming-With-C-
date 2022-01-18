#include <stdio.h>
int main()
{
int a=10,b=10,c=10,d=10;


printf("Prefix %d\n",++a);


printf("Postfix %d\n",b++);
printf("%d\n",b);

printf("Prefix %d\n", --c);

printf("Postfix %d\n", d--);
printf("%d\n", d);

return 0;
}