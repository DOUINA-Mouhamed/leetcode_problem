# Sum of Distances in Tree - LeetCode Problem

## Results
- **Accepted**
- **Submitted By**: DOUINA Mouhamed
- **Submission Date**: April 29, 2024, 05:51
- **Runtime**: 43 ms (Beats 100.00% of Rust submissions)
- **Memory Usage**: 9.58 MB (Beats 100.00% of Rust submissions)

## Problem Statement
Given an undirected connected tree with n nodes labeled from 0 to n - 1 and n - 1 edges, along with an array `edges` where `edges[i] = [ai, bi]` indicates an edge between nodes `ai` and `bi`. You are tasked with returning an array `answer` of length `n` where `answer[i]` represents the sum of the distances between the ith node in the tree and all other nodes.

## Implementation Details

This solution is implemented in Rust. The main components of the implementation are:

- **Tree Traversal**: Utilizes depth-first search (DFS) for traversing the tree and calculating distances.
- **Dynamic Programming**: Employs dynamic programming to calculate the sum of distances for each node.
- **Memory Optimization**: Efficiently manages memory usage to minimize memory footprint during execution.

## Compilation and Execution

Ensure you have Rust installed on your system. If not, you can install it from [rust-lang.org](https://www.rust-lang.org/).

To compile the program, navigate to the project directory and run the following command:

`cargo build`

To execute the compiled program, run the following command:

`cargo run`

This will run the compiled program.

## Output
The program will output the array answer, where each element represents the sum of distances between the corresponding node and all other nodes in the tree.

## Constraints
1 <= n <= 3 * 10^4
edges.length == n - 1
edges[i].length == 2
0 <= ai, bi < n
ai != bi
The given input represents a valid tree.
