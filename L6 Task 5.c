#include<stdio.h>
int main(){
    char s[100];
    gets(s);
    int len=0;
    while(s[len] !='\0')
    {
        len++;
    }
    for( int i=0;i<len;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",s[j]);
        }
        printf("\n");
    }
    return 0;
}
