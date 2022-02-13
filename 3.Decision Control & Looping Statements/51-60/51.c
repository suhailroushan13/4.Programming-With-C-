#include <stdio.h>
int main() {
  int a, b, c;
  int sum = 0;
  printf("Enter the number  : ");
  scanf("%d", &a);
  while (a != 0) {
    b = a % 10;
    sum += b;
    a = a / 10;
  }
  printf("%d ", sum);
  return 0;
}