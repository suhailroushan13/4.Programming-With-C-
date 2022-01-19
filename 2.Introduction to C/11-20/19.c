#include <stdio.h>
int main()
{
int a,b,temp;

printf("Enter the value of a b :");
scanf("%d %d",&a,&b);

temp =a;
a  = b;
b = temp;


printf("The Swaped Values are %d %d",a,b);



// Without using 3rd varibale
// a = a-b;
// b = a+b;
// a = b-a;

// Using XOR Operator
// a = a^b;
// b = a^b;
// a = b^a;
}