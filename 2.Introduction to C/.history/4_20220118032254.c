#include <stdio.h>
int main() {
  float base, height, input, sum;

  printf("Enter the base and height of the triangle : ");
  scanf("%f %f", &base, &height);

  sum = 0.5 * base * height;

  printf("Area of the triangle is cm %.2f\n ", sum);

  return 0;
}