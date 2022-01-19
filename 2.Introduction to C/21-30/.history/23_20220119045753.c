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
printf("%lld", sizeof(int));
printf("%lld", sizeof(unsigned short int));
printf("%lld", sizeof());
printf("%lld", sizeof(b));
printf("%lld", sizeof(c));
printf("%lld", sizeof(d));
printf("%lld", sizeof(de));
printf("%lld", sizeof(ef));

return 0;
}