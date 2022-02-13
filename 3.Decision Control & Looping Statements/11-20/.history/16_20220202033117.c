#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d1,d2;

    printf("Enter the 3 numbers for quadratic roots: ");
    scanf("%d %d %d",&a,&b,&c);

    // -b+sqrt(b^2-4ac)/2a >0 Real Roots
    // -b-sqrt(b^2-4ac)/2a == 0 Equal Roots
    // -b-sqrt(b^2-4ac)/2a <0 Imaginary Roots

    d1 = (-b + sqrt(b * b - (4 * a * c)) / (2 * a));
    // d2 = (-b - sqrt(b * b -( 4 * a * c) / (2 * a)));
    printf("d1 is %d\n",d1);
    // printf("d2 is %d\n",d2);

    // if(d1 == 0 && d2 ==0)
    // {
    //     printf("Equal Roots\n");
    //     printf("Roots are x1 = %d and x2 = %d are ", d1, d2);
    // }
    // else if(d1>0 && d2>0)
    // {
    //     printf("Real Roots\n");
    //     printf("Roots are x1 = %d and x2 = %d are ", d1, d2);
    // }
    // else if(d1<0 && d2<0)
    // {
    //     printf("Imaginary Roots\n");
    //     printf("Roots are x1 = %d and x2 = %d are ", d1, d2);
    // }
    // else printf("Incorrect Value");

    // return 0;
}