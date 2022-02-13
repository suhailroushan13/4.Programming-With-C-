#include <stdio.h>
int main() {
  int a, b, c;
  int sum = 1;
  int input;

  printf("Enter the number till you need factorial : ");
  scanf("%d", &input);
  for (int i = 1; i <= input; i++) {
    sum *= i;
    printf("The Fac of %d is %d\n",i, sum);
  }
 

  return 0;
}