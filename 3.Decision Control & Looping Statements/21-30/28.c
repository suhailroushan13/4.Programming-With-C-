#include <stdio.h>
int main() {
  int a, b, c;
  int sq, cube=1;
  int i, j, n = 5;
  int sum = 1;

  for (i = 1; i <= n; i++)

  {
      sum =  i*i;
      printf("The Square of 1stn   Numbers are %d\n", sum);
  }

  for (j =1;j <= i; j++)
  {
      cube = j*j*j;
      printf("The Cube of 1st  n Numbers are %d\n", cube);
  }

//   printf("The Square of 1st 10 Numbers are %d\n", sum);
 
  return 0;
}