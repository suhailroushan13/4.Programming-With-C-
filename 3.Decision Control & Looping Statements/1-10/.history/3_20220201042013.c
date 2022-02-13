#include <stdio.h>
int main()
{
int a,b,c;
int max,min,input;
printf("Enter any 2 number : ");
scanf("%d %d",&a,&b);
if(a>b)
{
    printf("%d is Greater than %d",a,b);
}
else if (b>a)
{
    printf("%d is Greater than %d ",b,a);

}
else if (a==b)
{
    printf("%d both numbers are same",a);
}
return 0;
}