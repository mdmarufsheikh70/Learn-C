#include <stdio.h>
int main() 
{
 int a;
 scanf("%d",&a);
 int s1=a*200;
 int s2=8000+(a-40)*300;
 if(a<0)
 {
 printf("Hour can not be negative");
 }
 else if(40>=a&&a>=0)
 {
 printf("%d",s1);
 }
 else if(168>=a&&a>40)
 {
 printf("%d",s2);
 }
 else if(a>168)
 {
 printf("impossible to work more than 168 hours per week");
 }
 return 0;
 
}