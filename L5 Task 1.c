#include<stdio.h>
int main()
{
    int array[5];
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
        printf("[");
        for(int j = 0; j < = i; j++)
        {

            printf("%d", array [j]);
            if(j! = i)
            {
                printf(",");
            }

        }
        printf("]\n");
    }
    return 0;
}
