#include<stdio.h>
int main()
{
    char N[50];
    gets(N);
    int len=0;
    while(N[len]!='\0')
    {
        len++;
    }
    for(int i=0;i<len;i++)
    {
        if(N[i]=='z')
        {
            printf("a");
        }
    else
        {
            printf("%c",N[i]+1);
        }

    }
    return 0;
}

