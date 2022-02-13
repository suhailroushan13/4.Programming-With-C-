#include <stdio.h>
int main()
{
int a,b,c;
int num;
char ch;
printf("Enter the Char and Number :");
if(scanf("%s %d",&ch,&num)==0)
{
    printf("Data Collected Successfully\n");
}
else
{
    printf("Data Collected Failure\n");
}

    return 0;
}