#include <stdio.h>
int main() {
  float add, sub, div, mod, mul, input1, input2, total;

  printf("Enter thr 2 valus :");
  scanf("%f %f", &input1, &input2);

  add = input1 + input2;
  sub = input1 - input2;
  div = input1 / input2;
//   mod = (int)input1 % (int) input2;
  mul = input1 * input2;

  printf("%f + %f = %f\n", input1, input2, add);
  printf("%f - %f = %f\n", input1, input2, sub);
  printf("%f / %f = %f\n", input1, input2, div);
//   printf("%d %% %d =%d\n", (int)input1, (int)input2, (int)mod);
  printf("%f * %f = %f\n", input1, input2, mul);

  return 0;
}