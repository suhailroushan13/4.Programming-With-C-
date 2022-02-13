#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;
  int rem, bin = 0, input, i = 0;
  printf("Enter the Decimal Number : ");
  scanf("%d", &input);

  // Decimal to Hexa

  //  Hexa
  //  Decimal
  //  Hexa
  while (input != 0) {
    rem = input % 16;
    bin += rem * pow(10, i);
    input = input / 16;
    i++;
  }
  printf("%d\n", bin);
  return 0;
}