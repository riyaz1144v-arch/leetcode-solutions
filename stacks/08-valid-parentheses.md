# Problem 8 – Valid Parentheses

**LeetCode Problem:** Valid Parentheses  
**Problem Link:** https://leetcode.com/problems/valid-parentheses/  
**Language:** C  
**Difficulty:** Easy  
**Topic:** Stack

## Approach

The problem is solved using the Stack data structure (LIFO – Last In, First Out).

1. Initialize an empty stack.
2. Traverse each character in the string.
3. If the character is an opening bracket, push it onto the stack.
4. If it is a closing bracket, check whether the stack is empty.
5. Pop the top element and verify that it matches the closing bracket.
6. At the end, the stack must be empty for the expression to be valid.

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

## Test Cases

| Test | Input  | Expected Output |
| ---- | ------ | --------------- |
| 1    | ()[]{} | True            |
| 2    | ([)]   | False           |

## Notes

- Stack follows the LIFO principle.
- Opening brackets are pushed onto the stack.
- Closing brackets must match the most recently opened bracket.
- The expression is valid only when all brackets match and the stack is empty.
