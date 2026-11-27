
#include <stdio.h>

void twoSum(int nums[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("Output: [%d, %d]\n", i, j);
                return;
            }
        }
    }

    printf("No valid pair found.\n");
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 9;

    printf("Test Case 1:\n");
    twoSum(nums, size, target);

    int nums2[] = {3, 2, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int target2 = 6;

    printf("\nTest Case 2:\n");
    twoSum(nums2, size2, target2);

    return 0;
}
