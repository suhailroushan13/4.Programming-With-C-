#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;
  int rem, bin = 0, input, i = 0;
  printf("Enter the Decimal Number : ");
  scanf("%d", &input);

  // Binary To Decimal

  //  Decimal
  //  Binary
  //  Decimal
  while (input != 0) {
    rem = input % 10;
    bin += rem * pow(2, i);
    input = input / 10;
    i++;
  }
  printf("%d", bin);
  return 0;
}