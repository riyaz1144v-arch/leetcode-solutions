# Longest Common Prefix

**LeetCode:** https://leetcode.com/problems/longest-common-prefix/

**Language:** C

## Approach

I used a vertical scanning approach. I compare characters at the same position across all strings. If all characters match, I continue. If a mismatch occurs or a string ends, I stop and return the matching prefix.

## Time Complexity

O(S) – Where S is the total number of characters checked across the strings.

## Space Complexity

O(1) – Only a few extra variables are used.

## Local Testing

- Test Case 1: flower, flow, flight → fl (Passed)
- Test Case 2: dog, racecar, car → Empty string (Passed)

## Notes

This problem helped me understand string comparison, character traversal and finding common prefixes.
