# Valid Anagram

**LeetCode:** https://leetcode.com/problems/valid-anagram/

**Language:** C

## Approach

I used a frequency counting technique with an array of 256 elements. I increment the count for each character in the first string and decrement it for each character in the second string. If all counts are zero, the strings are anagrams.

## Time Complexity

O(n) – Each character is processed once, and the frequency array is checked in constant-sized time.

## Space Complexity

O(1) – A fixed-size array of 256 elements is used.

## Local Testing

- Test Case 1: anagram, nagaram → True (Passed)
- Test Case 2: rat, car → False (Passed)

## Notes

This problem helped me understand character frequency counting and array-based string comparison.
