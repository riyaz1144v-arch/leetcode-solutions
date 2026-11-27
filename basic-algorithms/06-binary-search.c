#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int size1 = 5;

    printf("Test Case 1:\n");
    printf("Target 7 found at index: %d\n",
           binarySearch(arr1, size1, 7));

    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = 5;

    printf("\nTest Case 2:\n");
    printf("Target 5 found at index: %d\n",
           binarySearch(arr2, size2, 5));

    return 0;
}