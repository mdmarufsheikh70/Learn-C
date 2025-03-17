#include<stdio.h>
#include<string.h>
int main()
{
    int l,n;
    char s[100],sn1[100],sn2[100];
    gets(s);
    scanf("%d",n);

    l= strlen(s)-1;


     for(int i=n-1,k=0;i>=0;i--)
     {
         sn1[k]=s[i];
         k++;
     }


    for(int i=n,j=0;s[i]!='\0';i++)
    {
       sn2[j]=s[i];
       j++;
    }
    printf("%s",sn1);
    printf("%s",sn2);
    return 0;
}
