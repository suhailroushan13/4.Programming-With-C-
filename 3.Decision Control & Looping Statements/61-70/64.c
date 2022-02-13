#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;
  int i, j;
  int sum = 0;
  int input;
  printf("Enter the number  : ");
  scanf("%d", &input);

  for (i = 1; i <= input; i++) {
    if (i % 2 == 0) {
      sum += pow(i, 2);
    }
  }
  printf("%d\n", sum);
  return 0;
}