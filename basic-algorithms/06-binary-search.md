# Problem 6 – Binary Search

**LeetCode Problem:** Binary Search  
**Problem Link:** https://leetcode.com/problems/binary-search/  
**Language:** C  
**Difficulty:** Easy  
**Topic:** Arrays – Searching

## Approach

Binary Search is used to find a target element in a sorted array.

1. Initialize `left` to 0 and `right` to the last index.
2. Calculate the middle index.
3. If the middle element equals the target, return its index.
4. If the middle element is smaller, search the right half.
5. Otherwise, search the left half.
6. If the target is not found, return -1.

## Complexity Analysis

- **Time Complexity:** O(log n)
- **Space Complexity:** O(1)

## Test Cases

| Test | Input                          | Expected Output |
| ---- | ------------------------------ | --------------- |
| 1    | Array: [1,3,5,7,9], Target: 7  | Index 3         |
| 2    | Array: [2,4,6,8,10], Target: 5 | -1              |

## Notes

- Binary Search requires a sorted array.
- It repeatedly divides the search range into half.
- It is more efficient than linear search for large sorted arrays.
