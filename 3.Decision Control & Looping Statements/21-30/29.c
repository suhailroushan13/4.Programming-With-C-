#include <stdio.h>
int main() {
  int a, b, c;

  int i, j;
  int sum = 0;

  for (i = 1901; i <= 2100; i++) {

    if (i % 4  && i % 400)

    {
       
    } else if (!i%100) {
      
    }
    else 
    {
      printf("%d\n", i);
    }
    // sum = i / 4 && i / 100;
    // printf("%d\n", sum);
  }


  return 0;
}