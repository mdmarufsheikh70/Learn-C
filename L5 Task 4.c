#include<stdio.h>

void sq_array(int array[],int size)
{
    for(int i=0;  i < size; i++)
    {
          array[i]=array[i]*array[i];
    }
}

int main()
{
        int i;
        int a1[]={1,2,3,4,5,6,7};
        int s1=sizeof(a1)/sizeof(a1[0]);

        printf("Given array 1:");
        printf("[");

        for(i=0;i<s1;i++)
        {
            printf("%d",a1[i]);
            if(i < s1-1)
        {
            printf(",");
        }
        }

        printf("]\n");

        printf("\nOutput 1:");
        sq_array(a1,s1);
        printf("[");
        for(i=0;i<s1;i++)
        {
           printf("%d",a1[i]);
           if(i < s1-1)
            {
                printf(",");
            }
        }
        printf("]\n");

        int a2[]={3,5,1,6};
        int s2=sizeof(a2)/sizeof(a2[0]);

        printf("\n\nGiven array 2:");
        printf("[");

        for(i=0;i<s2;i++)
        {
            printf("%d",a2[i]);
            if(i < s2-1)
        {
            printf(",");
        }
        }

        printf("]\n");

        printf("\nOutput 2:");
        sq_array(a2,s2);
        printf("[");
        for(i=0;i<s2;i++)
        {
           printf("%d",a2[i]);
           if(i < s2-1)
            {
                printf(",");
            }
        }
        printf("]\n");

        return  0;

}
