#include<stdio.h>
int main()
{
    int array_one[]={1,2,3,4,5,6,7,8,9};
    int array_two[]={10,11,12,-13,-14,-16};

    int s1=sizeof(array_one)/sizeof(array_one[0]);

    int s2=sizeof(array_two)/sizeof(array_two[0]);


    printf("Output for the above arrays:[");

    for(int i=0;i<s1;i++)
    {
        if(array_one[i]%2==0)

        {
            printf("%d",array_one[i]);

            if(i<s1-2)
            {
                printf(",");
            }
        }

    }


    for(int j=0;j<s2;j++)
    {
        if(array_two[j]%2==0)
        {
            printf(",%d",array_two[j]);
        }
    }
    printf("]");

    return 0;
}
