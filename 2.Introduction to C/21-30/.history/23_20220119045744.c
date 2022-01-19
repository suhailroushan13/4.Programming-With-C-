#include <stdio.h>
int main()
{
short int aa;
int a;
unsigned short int ab;
long int bb;
float b;
double c;
char d;
unsigned char de;
signed char ef;

printf("%lld",sizeof(short int));
printf("%lld", sizeof(a));
printf("%lld", sizeof(ab));
printf("%lld", sizeof(bb));
printf("%lld", sizeof(b));
printf("%lld", sizeof(c));
printf("%lld", sizeof(d));
printf("%lld", sizeof(de));
printf("%lld", sizeof(ef));

return 0;
}