#include <stdio.h>
int main() {
  float a, b, c,i;
  float sum = 0, temp;
  float u, l, n;

  printf("Enter the n value : ");
  scanf("%f", &n);

  for ( i = 1; i <= n; i++) {
    a = 1 / i;
    sum += a;
  }
printf("%f\n", sum);
  return 0;
}