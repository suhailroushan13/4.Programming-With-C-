#include <stdio.h>
int main() {
  int a, b, c;
  int i = 1;
 int sum=0;
 int count = 0;

  while (i <= b) {

    printf("Enter the number  : ");
    scanf("%d", &a);

    if (a == -1) {
      printf("Stopped\n");
      break;
    } else if (a > 0) {
      count += a;


    } 
    sum += a/i;
    
    i++;
  }
  printf("Positive Numbers sum is %d\n", a);
  printf("Sum is %d\n", sum);

  return 0;
}