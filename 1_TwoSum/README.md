# Two Sum - LeetCode Problem

## Problem Statement
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to the target. You may assume that each input would have exactly one solution, and you may not use the same element twice. The answer can be returned in any order.

## Implementation Details

This solution is implemented in C. The main components of the implementation are:

- **Hash Table:** Utilizes a custom hash table for storing elements and their indices to facilitate quick lookup.
- **Hash Functions:** Employs linear probing for collision handling within the hash table.
- **Memory Management:** Implements dynamic memory allocation for managing the hash table and result array. Proper memory management is ensured by the caller through appropriate memory deallocation.

## Compilation and Execution

- Compile the program using GCC with the command `gcc twoSum.c -o twoSum`.
- Execute the compiled program by running `./twoSum` in the terminal.

## Output
The program will output the indices of the two numbers that add up to the target if a solution is found. If no solution is available, it will output a message indicating no solution was found.

## Constraints
- The length of `nums` must be between 2 and 10,000.
- Values in `nums` and the `target` can range from `-1,000,000,000` to `1,000,000,000`.
- There is exactly one valid answer for each input.

## Additional Information
The returned array from the function is dynamically allocated, and it is expected that the caller will free this memory.