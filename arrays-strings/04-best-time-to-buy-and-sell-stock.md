## Problem: Best Time to Buy and Sell Stock (Easy)

**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I used a single-pass approach. I keep track of the minimum price seen so far and calculate the profit that can be made by selling at the current price. Whenever a larger profit is found, I update the maximum profit.

### Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Local Test Cases

#### Test Case 1 — Typical Case

**Input:**
prices = [7, 1, 5, 3, 6, 4]

**Output:**
5

#### Test Case 2 — Edge Case

**Input:**
prices = [7, 6, 4, 3, 1]

**Output:**
0

### Notes

- The solution was tested locally using GCC.
- Both local test cases passed.
- The solution was submitted to LeetCode and accepted.
- LeetCode result: Accepted.
- Test cases passed: 213/213.
- Runtime: 0 ms.
- Memory: 16.05 MB.