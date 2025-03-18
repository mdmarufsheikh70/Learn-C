#include<stdio.h>
int main()
{
    char  N[20];
    gets(N);
    int l=0;
    for(int i=0;N[i] !='\0';i++)
    {
        l++;
    }
    if(N[l-2] == 'e' && N[l-1]=='r')
    {
        N[l-1]= 's';
        N[l]= 't';
        N[l+1]= '\0';
        printf("%s\n",N);
    }
    else if(N[l-3]=='e' && N[l-2]=='s' && N[l-1]=='t')
    {
        printf("%s\n",N);
    }
    else if(l>3)
    {
        N[l]='e';
        N[l+1]='r';
        N[l+2]='\0';
        puts(N);
    }
    else if(l<4)
    {
        puts(N);
    }
return 0;
}

