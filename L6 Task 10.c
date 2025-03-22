#include<stdio.h>
int main()
{
    char s[50],n[50];
    char ch;
    gets(s);
    gets(n);
    int len=0;
    while(s[len]!='\0')
    {
        len++;
    }
    for(int i = 0;i<=len;i++)
    {
        printf("%c",s[i]);
        if(n[i] !='\0')
        {
            printf("%c",n[i]);
        }

    }

    return 0;
}

