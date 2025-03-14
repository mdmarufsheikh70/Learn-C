#include <stdio.h>
int main() 
{
 int s;
 scanf("%d", &s);
 int L=3000-(125*s*s);
 double L2=12000/(4+(double)(s*s)/14900);
 if (s<100)
 {
 printf("%d", L);
 }
 else if(s>=100)
 {
 printf("%.13lf", L2);
 }
 return 0;
}
