#include <math.h>
#include <stdio.h>

// Armstrong Number
// It is also known as Narcissistic Number

int main() {
  int a, b, c;
  int  sum = 0, n, rem,temp,r;
  printf("Enter the number  : ");
  scanf("%d", &n);
  temp = n;
  while (n > 0) {
    r = n % 10;
    sum = sum + (r*r*r);
    n = n / 10;
  }

  if (sum == temp) {
    printf("Armstrong Number\n");
  } else {
    printf("Not an Armstrong Number\n");
  }

  return 0;
}