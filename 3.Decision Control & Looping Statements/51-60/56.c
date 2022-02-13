#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;
  int rem, bin = 0, input, i = 0;
  printf("Enter the Decimal Number : ");
  scanf("%d", &input);

  // Octal to Decimal
  //  Decimal
  //  Octal
  //  Decimal
  while (input != 0) {
    rem = input % 10;
    bin += rem * pow(8, i);
    input = input / 10;
    i++;
  }
  printf("%d\n", bin);
  return 0;
}