#include <math.h>
#include <stdio.h>

int main() {
  int x1, x2, y1, y2;
  int distance;
  printf("Enter the valus of x1 and x2 %d %d",x1,x2);
  scanf("%d %d",&x1,&x2);
  printf("Enter the valus of y1 and y2 %d %d", y1, y2);
  scanf("%d %d", &y1, &y2);

  distance = sqrt(pow(x2-x1)+ pow(y2-y1));



  return 0;
}
