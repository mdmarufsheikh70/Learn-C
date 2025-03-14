#include<stdio.h>
int main()
{
    printf("How many number you want in your array:");
    int n;
    scanf("%d",&n);

    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("\n%d",&array[i]);
    }

    printf("Original array:");
    printf("[");
    for(int i=0;i<n;i++)
    {
         printf("%d",array[i]);
         if(i<n-1)
         {
             printf(",");
         }
    }
    printf("]");

    printf("\nModified array:");
    printf("[");
    for(int i=0;i<n;i++)
    {
         if(array[i]%2!=0)
         {
           printf("%d",array[i]);

           if(i<n-2)
           {
             printf(",");
           }
           else if(i<n-1&&(array[n]%2!=0))

           {
             printf(",");
           }
         }

    }
    printf("]");
}
