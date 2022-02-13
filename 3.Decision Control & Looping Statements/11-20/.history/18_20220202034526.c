#include <stdio.h>
int main()
{
int a,b,c;
// int input;
char input;

printf("Enter the character");
scanf("%s",&input);

switch(input)
{
    case 'A':
    printf("Its a Vowel\n"); 
    break;
    case 'E':
    printf("Its a Vowel\n");
    break;
    case 'I':
    printf("Its a Vowel\n");
    break;
    case 'O':
    printf("Its a Vowel\n");
    break;
    case 'U':
    printf("Its a Vowel\n");
    break;
    case 'a':
    printf("Its a Vowel\n");
    break;
    case 'e':
    printf("Its a Vowel\n");
    break;
    case 'o':
    printf("Its a Vowel\n");
    break;
    case 'i':
    printf("Its a Vowel\n");
    break;
    case 'u':
    printf("Its a Vowel\n");
    break;
    default: printf("Not a Vowel\n");
      break;
}
return 0;
}