#include <stdio.h>
int main()
{
float cel,far,total;

printf("Enter fahrenheit : ");
scanf("%f",&far);

cel = (far - 32) * 5/9;

printf("The Celsus is %f\n",cel);
return 0;
}