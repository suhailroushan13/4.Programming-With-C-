#include <stdio.h>
int main() {
  int a, b, c;
  int i = 1;
  int count =0;
    int count1 =0;
    int count2 = 0;

    while (i <= b) {

      printf("Enter the number  : ");
      scanf("%d", &a);

      if (a == -1) {
        printf("Stopped\n");
        break;
      } else if (a > 0) {
        count += a;

    } else if (a <0) {
      count1 += a;
    } else if (a == 0) {
      count2 += a;
    }
    i++;
  }
  printf("%d",count);
  printf("%d", count1);

  return 0;
}