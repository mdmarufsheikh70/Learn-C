#include<stdio.h>
int main()
{
    char s[100],sn[100];
    gets(s);
    int l;
    l = strlen(s)-1;

    for(int i = l,j = 0;s[i]! = '\0'; i--)
    {
       sn[j] = s[i];
       j++;
    }
    printf("%s",sn);
    return 0;
}

