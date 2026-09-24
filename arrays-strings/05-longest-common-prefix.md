## Problem: Longest Common Prefix (Easy)

**LeetCode:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I used a character-by-character comparison approach. I compare the characters of all strings at the same position. If all strings have the same character, it is added to the common prefix. The process stops when a mismatch or the end of a string is reached.

### Complexity

- **Time Complexity:** O(n × m)
- **Space Complexity:** O(1)

Where `n` is the number of strings and `m` is the length of the shortest string.

### Local Test Cases

#### Test Case 1 — Typical Case

**Input:**
strs = ["flower", "flow", "flight"]

**Output:**
"fl"

#### Test Case 2 — Edge Case

**Input:**
strs = ["dog", "racecar", "car"]

**Output:**
""

### Notes

- The solution was tested locally using GCC.
- Both local test cases passed.
- The solution was submitted to LeetCode and accepted.
- LeetCode result: Accepted.
- Test cases passed: 126/126.
- Runtime: 0 ms.
- Memory: 8.92 MB.