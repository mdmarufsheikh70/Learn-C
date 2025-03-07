#include <stdio.h>
int main() 
{
 int a,b;
 scanf("%d%d",&a,&b); 
 if (a>b)
 {
 int s=(a-b);
 printf("%d",s);
 }
 else if(b>a)
 {
 int ss=(b-a);
 printf("%d",ss);
 }
 else
 {
 printf("0");
 }
 return 0;
}