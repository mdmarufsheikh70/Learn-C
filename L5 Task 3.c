#include <stdio.h>
int main()
{
    int array [5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int j=4;j>=0;j--)
    {
        printf("%d\n",array[j]);
    }
    return 0;
}
