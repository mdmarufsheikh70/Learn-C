#include<stdio.h>


    int same_number(int array1 [], int s1, int array2 [], int s2)
        {
            for(int i=0;i<s1;i++)
            {
                for(int j=0;j<s2;j++)
                {
                    if(array1[i]==array2[j])
                    {
                        return 1 ;
                    }
                }
            }
            return 0;
        }





int main()
{
    int array1[]= {1,4,3,2,6};
    int array2[]= {5,6,9,8,7};

    int s1=sizeof(array1)/sizeof(array1[0]);
    int s2=sizeof(array2)/sizeof(array2[0]);

    if (same_number(array1,s1, array2,s2))
    {
        printf("True");
    }
    else
    {
    printf("Flase");

    }
    return 0;
}
