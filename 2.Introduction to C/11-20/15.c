#include<stdio.h>
#include<math.h>
int main( )
{

int r;
float pi = 3.1415926536;
float area;

printf("Enter the radius of the circle :");
scanf("%d",&r);

area = pi * pow(r,2);

printf("The area of the circle is %f",area);


}