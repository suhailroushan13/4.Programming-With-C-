#include <stdio.h>
int main() {
  int a, b, c = 0;
  int input;

  int count = 0;
  printf("Enter the number  : ");
  scanf("%d", &input);

  for (int i = 1; i <= input; i++) {
    if (input % i == 0) {
      count++;
      printf("*%d\n", count);
    }
  }
  if (count == 2) {
    printf("%d Prime Number", input);
  } else {
    printf("%d Not a Prime Number Or A Composite Number", input);
  }

  // If a number is having more than 2 factors then is a composite or non Prime
  // If a number is having only 1 factors then its a prime number

  return 0;
}