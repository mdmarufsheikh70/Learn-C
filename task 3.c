#include<stdio.h>
int main() 
{
 int a, b;
 scanf("%d %d", &a, &b); 
 if (a>b)
 {
 printf("First is greater");
 }
 else if(b > a)
 {
 printf("Second is greater");
 }
  else
  {
  printf("The numbers are equal");
  }
 return 0;
}
