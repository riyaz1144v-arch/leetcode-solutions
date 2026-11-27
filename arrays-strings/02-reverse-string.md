# Reverse String

**LeetCode:** https://leetcode.com/problems/reverse-string/

**Language:** C

## Approach

I used the two-pointer technique. One pointer starts at the beginning of the array and another starts at the end. I swap the characters and move both pointers towards the centre until the entire string is reversed.

## Time Complexity

O(n) – Each character is processed at most once.

## Space Complexity

O(1) – Reversal is performed in-place without using extra arrays.

## Local Testing

- Test Case 1: hello → olleh (Passed)
- Test Case 2: a → a (Passed)

## Notes

This problem helped me understand the two-pointer technique, character arrays and in-place swapping.
