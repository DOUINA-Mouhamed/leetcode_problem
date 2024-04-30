# Minimum Number of Operations to Make Array XOR Equal to K - LeetCode Problem

## Results
- **Accepted**
- **Submitted By**: DOUINA Mouhamed
- **Submission Date**: April 30, 2024, 03:22
- **Runtime**: 97 ms (Beats 80.00% of C submissions)
- **Memory Usage**: 13.45 MB (Beats 30.00% of C submissions)

## Problem Statement
You are given a 0-indexed integer array `nums` and a positive integer `k`.
You can apply the following operation on the array any number of times:

- Choose any element of the array and flip a bit in its binary representation. Flipping a bit means changing a 0 to 1 or vice versa.

Return the minimum number of operations required to make the bitwise XOR of all elements of the final array equal to `k`.
Note that you can flip leading zero bits in the binary representation of elements.

## Implementation Details

This solution is implemented in C. The main components of the implementation are:

- **Bit Manipulation**: Utilizes bitwise operations to manipulate the binary representation of numbers.
- **Greedy Approach**: Employs a greedy strategy to minimize the number of operations required.
- **Optimization**: Optimizes the solution to achieve better runtime and memory usage.

## Compilation and Execution

- Compile the program using GCC with the command `gcc xor_equal_to_k.c -o xorK`.
- Execute the compiled program by running `./xorK` in the terminal.

## Output
The program will output the minimum number of operations required to make the bitwise XOR of all elements of the final array equal to `k`.

## Constraints
- 1 <= nums.length <= 10^5
- 0 <= nums[i] <= 10^6
- 0 <= k <= 10^6

## Additional Information
The solution employs efficient algorithms to handle large input sizes within the specified constraints.
