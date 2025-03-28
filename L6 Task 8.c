#include<stdio.h>
int main()
{
    char N[50];
    gets(N);
    int len = 0;
    while(N[len]! = '\0')
    {
        len++;
    }
    for(int i = 1;i<len;i = i+2)
    {
        printf("%c",N[i]-32);
    }
   return 0;
}

