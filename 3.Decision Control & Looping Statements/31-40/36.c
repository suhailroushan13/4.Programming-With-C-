#include <stdio.h>
int main() {
  int a, b, c;
  int count = 0;

  for (int j = 1; j <= 4; j++) {

    for (int i = 1; i <= j; i++) {
      printf("%d", count++);
      
    }
    printf("\n");
  }

  return 0;
}