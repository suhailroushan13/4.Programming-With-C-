#include <stdio.h>
int main()
{
int ten,five,two,one,total;
printf("Enter the tens five two one :");
scanf("%d %d %d %d",&ten,&five,&two,&one);

// ten = 10*ten;
// five = 5 * ten;
// two = 2 * ten;
// one = 1 * one;

total = ten *10 + five *5+ one *1+two *2; 

printf("Total Amount : %d\n",total);

return 0;
}