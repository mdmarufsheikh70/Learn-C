#include <stdio.h>
int main() 
{
 int a;
 scanf("%d",&a);
 if(a%2==0 && a%5==0)
 {
 printf("multiple 2 and 5 both");
 }
 else if(a%2==0||a%5==0)
 {
 printf("%d",a);
 }
 else 
 {
 printf("Not a matiple we want ");
 }
 return 0;
}