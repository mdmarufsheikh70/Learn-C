#include <stdio.h>
int main() 
{
 int a;
 scanf("%d",&a);
 if(a%2==0||a%5==0)
 {
 printf("%d",a);
 }
 else
 {
 printf("the number is not multiple of 2 or 5");
 }
 
 return 0;
}