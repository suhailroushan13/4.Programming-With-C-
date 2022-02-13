#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;
  int input, sum;
  printf("Enter the number  : ");
  scanf("%d", &input);
  if (input < 0) {
    printf("Negative Not Allowed\n");
  } else {
    sum = sqrt(input);
    printf("%d\n", sum);
  }

  return 0;
}