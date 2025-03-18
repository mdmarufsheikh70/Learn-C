#include <stdio.h>
#include<math.h>
int main() 
{
  float r;
  double p = M_PI;
  scanf("%f", &r);
  double a = (double)p* r * r;
  double c=(double)2*p*r;
  printf("Area is % .14f\n Circumference is %.15f", a, c);
  return 0;
}
