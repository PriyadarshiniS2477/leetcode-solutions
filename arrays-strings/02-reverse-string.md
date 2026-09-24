## Problem: Reverse String (Easy)

**LeetCode:** https://leetcode.com/problems/reverse-string/

### Approach

I used the two-pointer approach to reverse the string in-place. One pointer starts from the beginning and another from the end, and their characters are swapped until the pointers meet.

### Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Local Test Cases

#### Test Case 1 — Typical Case

**Input:**
s = ["h","e","l","l","o"]

**Output:**
["o","l","l","e","h"]

#### Test Case 2 — Edge Case

**Input:**
s = ["a"]

**Output:**
["a"]

### Notes

- The solution was tested locally using GCC.
- Both local test cases passed.
- The solution was submitted to LeetCode and accepted.
- LeetCode result: Accepted.
- Runtime: 0 ms.