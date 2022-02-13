#include <stdio.h>
int main()
{
int a,b,c;
char ch;
printf("Enter any character :");
scanf("%s",&ch);
if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
{
    printf("Given character is Vowel\n");
}
else
{
    printf("Given character is not a Vowel\n");
}
return 0;
}