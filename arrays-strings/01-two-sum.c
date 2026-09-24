#include <stdio.h>

void twoSum(int nums[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]\n", i, j);
                return;
            }
        }
    }

    printf("No solution\n");
}

int main() {
    // Test Case 1: Typical case
    int nums1[] = {2, 7, 11, 15};

    printf("Test Case 1: ");
    twoSum(nums1, 4, 9);

    // Test Case 2: Edge case with duplicate values
    int nums2[] = {3, 3};

    printf("Test Case 2: ");
    twoSum(nums2, 2, 6);

    return 0;
}