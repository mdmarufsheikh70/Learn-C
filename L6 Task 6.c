#include<stdio.h>
int main()
{
    char N[1000];
    scanf("%s",N);
    int len=0;
    while(N[len]!='\0')
    {
        len++;
    }
    for(int i=0;i<len;i++)
    {
        printf("%c : %d\n",N[i],N[i]);
    }


return 0;
}

