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

printf("%zu\n",sizeof(short int));
printf("%zu\n", sizeof(int));
printf("%zu\n", sizeof(unsigned short int));
printf("%zu\n", sizeof(long int));
printf("%zu\n", sizeof(float));
printf("%zu\n", sizeof(double));
printf("%zu\n", sizeof(unsigned char));
printf("%zu\n", sizeof(char));
printf("%zu\n", sizeof(signed char));

return 0;
}