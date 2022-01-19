#include <stdio.h>
int main()
{
int a=10,b=15,c=20,d=25;

printf("Enter the number for a b c d :\n");
// scanf("%d %d %d %d", &a, &b, &c, &d);
printf("Before a was %d\n",a);
printf("The Prefix of ++a is %d\n",++a);
printf("The Prefix of --a is %d\n",--a);

printf("///////////////////////////\n");



printf("Before b was %d\n",b);
printf("The Prefix of ++b is %d\n",++b);
printf("The Prefix of --b is %d\n", --b);

printf("///////////////////////////\n");

printf("Before a was %d\n", c);
printf("The Prefix of c++ is %d\n", c++);
printf("Now the value of c is %d\n", c);

printf("The Prefix of --d is %d\n", d--);

printf("Now the value of d is %d\n", d);

return 0;
}