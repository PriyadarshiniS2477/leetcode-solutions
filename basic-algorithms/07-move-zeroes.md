## Problem: Move Zeroes (Easy)

**LeetCode:** https://leetcode.com/problems/move-zeroes/

### Approach

I used a two-step approach. First, I move all non-zero elements to the beginning of the array while maintaining their original order. Then, I fill the remaining positions with zeros. This modifies the array in-place.

### Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Local Test Cases

#### Test Case 1 — Typical Case

**Input:**
nums = [0, 1, 0, 3, 12]

**Output:**
[1, 3, 12, 0, 0]

#### Test Case 2 — Edge Case

**Input:**
nums = [0, 0, 1]

**Output:**
[1, 0, 0]

### Notes

- The solution was tested locally using GCC.
- Both local test cases passed.
- The solution was submitted to LeetCode and accepted.
- LeetCode result: Accepted.
- Test cases passed: 75/75.
- Runtime: 0 ms.
- Memory: 20.34 MB.