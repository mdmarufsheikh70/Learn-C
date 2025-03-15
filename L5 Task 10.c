#include <stdio.h>

int Unique(int array[], int size);
void printArray(int array[], int length);

int main()

{
    int originalArray[] = {0, 0, 1, 2, 3, 4, 4, 5, 6, 6, 6, 7, 8, 9, 4, 4};
    int size = sizeof(originalArray) / sizeof(originalArray[0]);
    int U_Count = Unique(originalArray, size);
    int modifiedSize =U_Count;
    int modifiedArray[modifiedSize];

    int k = 0;
    for (int i = 0; i < size; i++)
    {
        int Duplicate = 0;
        for (int j = 0; j < k; j++)
        {
            if (originalArray[i] == modifiedArray[j])
            {
                Duplicate = 1;
                break;
            }
        }


        if (!Duplicate)
        {
            modifiedArray[k++] = originalArray[i];
        }
    }

    printf("Input Array: ");
    printArray(originalArray, size);
    printf("Modified Array: ");
    printArray(modifiedArray, modifiedSize);

    return 0;
}

int Unique(int array[], int size)

{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int Duplicate = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                Duplicate = 1;
                break;
            }
        }
        if (!Duplicate)
        {
            count++;
        }
    }
    return count;
}

void printArray(int array[], int length)

{
    printf("[");
    for (int k = 0; k < length; k++)
    {
        if(k == length - 1)
        {
            printf("%d", array[k]);
        }
        else
        {
            printf("%d,", array[k]);
        }
    }
    printf("]\n");
}

