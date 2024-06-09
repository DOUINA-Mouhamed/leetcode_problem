# Two Sum - LeetCode Problem

## Author
DOUINA Mouhamed

## Submission Details
- **Status**: Accepted
- **Submitted at**: Jun 09, 2024 15:19
- **Runtime**: 0ms
  - Beats 100.00% of users with Rust
- **Memory**: 2.56MB
  - Beats 6.88% of users with Rust

## Problem Statement

### 1. Two Sum
**Difficulty**: Easy

### Problem Description
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

### Examples

#### Example 1:
- **Input**: `nums = [2, 7, 11, 15]`, `target = 9`
- **Output**: `[0, 1]`
- **Explanation**: Because `nums[0] + nums[1] == 9`, we return `[0, 1]`.

#### Example 2:
- **Input**: `nums = [3, 2, 4]`, `target = 6`
- **Output**: `[1, 2]`

#### Example 3:
- **Input**: `nums = [3, 3]`, `target = 6`
- **Output**: `[0, 1]`

### Constraints
- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Only one valid answer exists.

### Follow-up
Can you come up with an algorithm that is less than `O(n^2)` time complexity?

## Solution
The provided solution uses a hash map to achieve a time complexity of `O(n)`.