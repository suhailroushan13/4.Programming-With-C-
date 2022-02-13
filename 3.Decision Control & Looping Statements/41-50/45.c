#include <stdio.h>
int main() {
  int a, b, c;
  int i, j, n;
  float sum = 0;
  float avg;
  printf("Enter the number :");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  avg = sum / n;

  printf("%.f\n", sum);
  printf("%.1f\n", avg);

  return 0;
}