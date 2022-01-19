#include <stdio.h>
int main()
{
float floats;
int  intgers;
printf("Enter the Integer :");
scanf("%d", &intgers);
floats = (float)intgers;
printf("%f\n",floats);
return 0;
}