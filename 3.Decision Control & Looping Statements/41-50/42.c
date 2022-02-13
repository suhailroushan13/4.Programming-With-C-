#include <stdio.h>
int main() {
  int a, b, c;
  int input, i, num = 10;
  printf("Enter the Number of Table :");
  scanf("%d", &input);

  for (i = 1; i <= 10; i++) {
    printf("%d X %d = %d\n", input, i, input * i);
  }
  return 0;
}