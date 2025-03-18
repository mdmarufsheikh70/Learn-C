#include<stdio.h>
int main()
{
    char N[10];
    gets(N);
    int l = 0;
    int f= 1;
    for(int i=0;N[i] !='\0';i++)
    {
        l++;
    }
    for(int j=0;j<l;j++)
    {
        if(N[j]!='0' && N[j]!='1')
        {
            f = 0;
            break;
        }
    }
    if(f==1)
    {
        printf("Binary");
    }
    else
    {
        printf("Not Binary\n");
    }
    return 0;
}
