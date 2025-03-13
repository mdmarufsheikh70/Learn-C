#include<stdio.h>
int main()
{
    int Largest;
    int index;
    int array[7];
    for(int i=0;i<7;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("My array:[");
    for(int i=0;i<7;i++)
    {
        printf("%d",array[i]);
         if(i!=6)
         {
               printf(",");
         }
    }
    printf("]");

    Largest=array[0];
    index=0;

    for(int i=1;i<7;i++)
    {
        if(array[0]<array[i])
        {
          Largest=array[i];
          index=i;
        }

    }
    printf("\nLargest number in the array is %d which was found at index %d.",Largest,index);

    return 0;

}
