#include <stdio.h>
int main() {
  float d;
  int a, b, c;
  printf("Enter the float value :");
  scanf("%d", &d);

  a = (float)(d);

  printf("The Int Value now is %d\n", (float)d);
  printf("The Int Value now is %d\n", a);

  return 0;
}