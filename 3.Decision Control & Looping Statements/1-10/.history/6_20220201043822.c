#include <stdio.h>
int main()
{
int a,b,c;
char ch;
printf("Enter any character :");
scanf("%s",&ch);
if(ch=='A'||ch=='a'||ch=='E')
{
    printf("Given character is Vowel\n");
}
else
{
    printf("Given character is not a Vowel");
}
return 0;
}