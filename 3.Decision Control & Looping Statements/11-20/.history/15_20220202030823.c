#include <stdio.h>
int main()
{
int math,sci,hindi,tel,eng;
int total;
printf("Enter the marks in math: ");
scanf("%d",&math);
printf("Enter the marks in hindi: ");
scanf("%d",&hindi);
printf("Enter the marks in tel: ");
scanf("%d",&tel);
printf("Enter the marks in eng: ");
scanf("%d",&eng);
printf("Enter the marks in sci: ");
scanf("%d",&sci);

total = math + hindi + tel + eng + sci;
sum = total/5;
if(sum>=90)
{
    printf("90%% of the marks of the");
}
else if (sum >=70)
{
  printf("70%% of the marks of the");
}
else if(sum == 100)
{
    printf("100%% Congratulations");
}
else if (sum<=40)
{
    printf("Learn the subject");
}
else if (sum<=20)


return 0;
}