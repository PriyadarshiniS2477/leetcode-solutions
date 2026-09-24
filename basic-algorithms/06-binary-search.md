## Problem: Binary Search (Easy)

**LeetCode:** https://leetcode.com/problems/binary-search/

### Approach

I used the binary search technique. Since the array is sorted, I maintain two pointers, `left` and `right`, to represent the current search range. I calculate the middle index and compare the middle element with the target. If the target is larger, I search the right half. If the target is smaller, I search the left half. The process continues until the target is found or the search range becomes empty.

### Complexity

- **Time Complexity:** O(log n)
- **Space Complexity:** O(1)

### Local Test Cases

#### Test Case 1 — Typical Case

**Input:**
nums = [-1, 0, 3, 5, 9, 12]  
target = 9

**Output:**
4

#### Test Case 2 — Edge Case

**Input:**
nums = [-1, 0, 3, 5, 9, 12]  
target = 2

**Output:**
-1

### Notes

- The solution was tested locally using GCC.
- Both local test cases passed.
- The solution was submitted to LeetCode and accepted.
- LeetCode result: Accepted.
- Test cases passed: 47/47.
- Runtime: 0 ms.
- Memory: 9.90 MB.