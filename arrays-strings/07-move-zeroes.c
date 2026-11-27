#include <stdio.h>

void moveZeroes(int arr[], int size)
{
    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[position] = arr[i];
            position++;
        }
    }

    // Fill the remaining positions with zeroes
    while (position < size)
    {
        arr[position] = 0;
        position++;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr1[] = {0, 1, 0, 3, 12};
    int size1 = 5;

    printf("Test Case 1:\n");
    moveZeroes(arr1, size1);
    printArray(arr1, size1);

    int arr2[] = {0, 0, 1};
    int size2 = 3;

    printf("\nTest Case 2:\n");
    moveZeroes(arr2, size2);
    printArray(arr2, size2);

    return 0;
}