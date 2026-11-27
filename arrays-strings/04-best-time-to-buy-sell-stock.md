# Best Time to Buy and Sell Stock

**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

**Language:** C

## Approach

I used a single-pass approach. I maintain the minimum stock price seen so far and calculate the profit for each subsequent day. I update the maximum profit whenever a higher profit is found.

## Time Complexity

O(n) – The price array is traversed once.

## Space Complexity

O(1) – Only two variables are used.

## Local Testing

- Test Case 1: [7,1,5,3,6,4] → 5 (Passed)
- Test Case 2: [7,6,4,3,1] → 0 (Passed)

## Notes

This problem helped me understand array traversal, minimum value tracking and efficient profit calculation.
