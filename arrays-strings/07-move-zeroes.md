# Problem 7 – Move Zeroes

**LeetCode Problem:** Move Zeroes  
**Problem Link:** https://leetcode.com/problems/move-zeroes/  
**Language:** C  
**Difficulty:** Easy  
**Topic:** Arrays

## Approach

The problem is solved using the two-pointer technique.

1. Initialize a position variable to 0.
2. Traverse the array.
3. Whenever a non-zero element is found, place it at the current position.
4. Increase the position.
5. Fill all remaining positions with zeroes.

This maintains the relative order of non-zero elements.

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Test Cases

| Test | Input        | Expected Output |
| ---- | ------------ | --------------- |
| 1    | [0,1,0,3,12] | [1,3,12,0,0]    |
| 2    | [0,0,1]      | [1,0,0]         |

## Notes

- Non-zero elements maintain their original order.
- Zeroes are moved to the end.
- The operation is performed in-place without using an additional array.
