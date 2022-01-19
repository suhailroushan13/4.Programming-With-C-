#include <stdio.h>
int main() {
  float d;
  int a, b, c;
  printf("Enter the float value :");
  scanf("%f", &d);

  a = (float)(d);

  printf("The Int Value now is %f\n", (float)d);
  printf("The Int Value now is %f\n", a);

  return 0;
}