## Problem: Valid Parentheses (Easy)

**LeetCode:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack-based approach. Whenever an opening bracket is encountered, it is pushed onto the stack. When a closing bracket is encountered, the top element of the stack is checked to make sure it is the matching opening bracket. If the brackets do not match, the string is invalid. At the end, the stack must be empty for the string to be valid.

### Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Local Test Cases

#### Test Case 1 — Typical Case

**Input:**
s = "()[]{}"

**Output:**
true

#### Test Case 2 — Edge Case

**Input:**
s = "(]"

**Output:**
false

### Notes

- The solution was tested locally using GCC.
- Both local test cases passed.
- The solution was submitted to LeetCode and accepted.
- LeetCode result: Accepted.
- Test cases passed: 103/103.
- Runtime: 0 ms.
- Memory: 9.49 MB.