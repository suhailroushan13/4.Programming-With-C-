#include <stdio.h>
int main() {
  int a, b, c;
  int input, i = 1, j = 1;
  int sum = 0;
  int nev = 0;

  while (i) {
    printf("Enter a number :");
    scanf("%d", &input);
    if (input == -1) {

      break;
    }

    sum += input;
    input++;

    i++;
  }

  while (i) {
    if (input == -1) {

      break;
    }
    if (input < 0) {
      nev += input;
      input++;
    }
    i++;
  }
  printf("%d\n", sum);
  printf("%d\n", nev);

  return 0;
}