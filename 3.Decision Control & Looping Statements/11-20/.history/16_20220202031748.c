#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d1,d2;
    int real,img,equal;
    printf("Enter the 3 numbers for quadratic roots: ");
    scanf("%d %d %d",&a,&b,&c);

    // -b+sqrt(b^2-4ac)/2a >0 Real Roots
    // -b-sqrt(b^2-4ac)/2a == 0 Equal Roots
    // -b-sqrt(b^2-4ac)/2a <0 Imaginary Roots

    d1 = (-b + sqrt(b * b - (4 * ac)) / 2 * a);
    d2 = (-b - sqrt(b * b - (4 * ac)) / 2 * a);

    if(d1 == 0 && d2 ==0)
    {
        printf("Equal Roots")
    }
    else if(d1>0 && d2>0)
    {
        p
    }
}