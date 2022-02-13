#include <stdio.h>
int main()
{
int a,b,c;
char ch;
printf("Enter any character :");
scanf("%s",&ch);
if(ch=='')
{
    printf("Given character is Vowel");
}
else
{
    printf("Given character is not a Vowel");
}
return 0;
}