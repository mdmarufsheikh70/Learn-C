#include<stdio.h>
int main()
{
    printf("please enter a number that is gater than 4:");
    int n;
    scanf("%d",&n);
    if (n<5)
    {
        printf("Not possible");
    }
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("[");
    for(int j=2;j<n-2;j++)
    {

         printf("%d",array[j]);
         if(j!=n-3)
        {
           printf(",");
        }

    }

    printf("]\n");

    return 0;

}
