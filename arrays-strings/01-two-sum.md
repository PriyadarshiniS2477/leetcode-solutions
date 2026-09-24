## Problem: Two Sum (Easy)

**LeetCode:** https://leetcode.com/problems/two-sum/

### Approach

I used a brute-force approach with two nested loops. Each pair of elements is checked to find two numbers whose sum equals the target. When the pair is found, their indices are returned.

### Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(1)

### Local Test Cases

#### Test Case 1 — Typical Case

**Input:**

```text
nums = [2, 7, 11, 15]
target = 9
```

**Output:**

```text
[0, 1]
```

#### Test Case 2 — Edge Case

**Input:**

```text
nums = [3, 3]
target = 6
```

**Output:**

```text
[0, 1]
```

### Notes

* The solution was tested locally using GCC.
* Both local test cases passed.
* The solution was submitted to LeetCode and accepted.
* LeetCode result: 65/65 test cases passed.
* Runtime: 100 ms
* Memory: 9.41 MB
