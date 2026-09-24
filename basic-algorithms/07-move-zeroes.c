#include <stdio.h>

void moveZeroes(int nums[], int numsSize)
{
    int position = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < numsSize)
    {
        nums[position] = 0;
        position++;
    }
}

void printArray(int nums[], int numsSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");
}

int main()
{
    // Test Case 1 - Typical Case
    int nums1[] = {0, 1, 0, 3, 12};
    int n1 = 5;

    moveZeroes(nums1, n1);

    printf("Test Case 1: ");
    printArray(nums1, n1);

    // Test Case 2 - Edge Case
    int nums2[] = {0, 0, 1};
    int n2 = 3;

    moveZeroes(nums2, n2);

    printf("Test Case 2: ");
    printArray(nums2, n2);

    return 0;
}