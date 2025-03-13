#include<stdio.h>
int main()
{

    int arr1[]={1,4,7,5};
    int arr2[]={6,1,3,9};

    int s1=sizeof(arr1)/sizeof(arr1[0]);
    int s2=sizeof(arr2)/sizeof(arr2[0]);

    arr1[s1-1]=arr2[0];

    printf("[");

    for(int i=0;i<s1;i++)

        {

            printf("%d",arr1[i]);

            if(i!=s1-1)

             {
                printf(",");
             }
        }

    for (int i=1;i<s2;i++)
    {

        printf(",%d",arr2[i]);

    }
    printf("]\n");


    return 0;

}



