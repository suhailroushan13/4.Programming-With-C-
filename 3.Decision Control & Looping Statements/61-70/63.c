#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;
  int i, j;
  int input;
  int sum = 0;
  printf("Enter the number  : ");
  scanf("%d", &input);
  for (i = 0; i <= input; i++) {
    sum += pow(i, 3);
  }
  printf("%d\n", sum);

  return 0;
}