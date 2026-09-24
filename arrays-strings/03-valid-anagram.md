## Problem: Valid Anagram (Easy)

**LeetCode:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency-counting approach. I created an array of size 26 to store the frequency of each lowercase English letter. The frequency is increased for each character in the first string and decreased for each character in the second string. If all frequency values are zero, the two strings are anagrams.

### Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Local Test Cases

#### Test Case 1 — Typical Case

**Input:**
s = "anagram"  
t = "nagaram"

**Output:**
true

#### Test Case 2 — Edge Case

**Input:**
s = "rat"  
t = "car"

**Output:**
false

### Notes

- The solution was tested locally using GCC.
- Both local test cases passed.
- The solution was submitted to LeetCode and accepted.
- LeetCode result: Accepted.
- Test cases passed: 55/55.
- Runtime: 0 ms.
- Memory: 9.00 MB.