#include <stdio.h>
int main() {
  int a, b, c;
  int sum = 1;
  int input;

  printf("Enter the number till you need factorial : ");
  scanf("%d", &input);
  if (input == 0)
  {
    printf("The Fac of 0 is 1\n");
  }
  for (int i = 1; i <= input; i++) {
    sum *= i;
    printf("The Fac of %d is %d\n",i, sum);
  }
 

  return 0;
}