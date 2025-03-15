#include <stdio.h>
int main() 
{
 int a;
 scanf("%d",&a);
 int h = a / 3600;
 int m=a/60;
 int s=a%60;
 printf("Hours:%d Minutes:%d Seconds:%d",h,m,s);
 return 0;
}
