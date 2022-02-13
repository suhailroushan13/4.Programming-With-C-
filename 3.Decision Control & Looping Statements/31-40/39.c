#include <stdio.h>
#define N 5
int main() {
  int a, b, c;
  int i, j, k;
  for (i = 1; i <= N; i++) {
    for (j = 1; j <= N - i; j++) {
      printf(" ");
    }
    for (j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }

  return 0;
}