#include <stdio.h>
int main()
{
float cel,far,total;

printf("Enter fahrenheit : ");
scanf("%f",&far);

cel = (far - 32) * 5/9;
// far = (cel * 9/5) +32;

printf("The Celsus is %.4f\n",cel);
return 0;
}