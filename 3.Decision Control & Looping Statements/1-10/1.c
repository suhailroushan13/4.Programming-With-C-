#include <stdio.h>
int main()
{
    int age,voted;
    printf("Enter the age :");
    scanf("%d", &age);

    if (age>=18)
    {
        printf("Yes! You Can Vote\n");
    }
    else 
    {
        printf("No ! You Cannot Vote\n");
    }
}