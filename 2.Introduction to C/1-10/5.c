#include <math.h>
#include <stdio.h>

int main() {
  float x1, x2, y1, y2;
  float distance;
  printf("Enter the valus of x1 and x2 :");
  scanf("%f %f",&x1,&x2);
  printf("Enter the valus of y1 and y2 :");
  scanf("%f %f", &y1, &y2);

  distance = sqrt(pow((x2-x1),2)+ pow((y2-y1),2));

  printf("Distance between 2 points is %f\n",distance);



  return 0;
}
