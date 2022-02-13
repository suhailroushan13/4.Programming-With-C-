#include <stdio.h>
int main() {
  int a, b, n;
  printf("Enter the number till you need even and odd : ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      printf(" %d is Even\n",i);
    } else {
      printf(" %d is Odd\n",i);
    }
  }
  return 0;
}