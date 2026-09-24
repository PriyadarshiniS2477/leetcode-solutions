#include <stdio.h>

int search(int nums[], int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
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
    // Test Case 1 - Typical Case
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    int n1 = 6;
    int target1 = 9;

    printf("Test Case 1: %d\n", search(nums1, n1, target1));

    // Test Case 2 - Edge Case
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    int n2 = 6;
    int target2 = 2;

    printf("Test Case 2: %d\n", search(nums2, n2, target2));

    return 0;
}