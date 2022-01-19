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

printf("%zu",sizeof(short int));
printf("%zu", sizeof(int));
printf("%zu", sizeof(unsigned short int));
printf("%zu", sizeof(long int));
printf("%zu", sizeof(float));
printf("%zu", sizeof(double));
printf("%zu", sizeof(unsigned char));
printf("%zu", sizeof(char));
printf("%zu", sizeof(signed char));

return 0;
}