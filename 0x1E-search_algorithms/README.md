# Search Algorithms

This repository contains implementations of various search algorithms. Search algorithms are used to retrieve information stored within some data structure. This README provides a brief overview of some common search algorithms and their space complexity.

## Table of Contents

- [Linear Search](#linear-search)
- [Binary Search](#binary-search)
- [Breadth-First Search (BFS)](#breadth-first-search-bfs)
- [Depth-First Search (DFS)](#depth-first-search-dfs)
- [References](#references)

## Linear Search

Linear search is the simplest search algorithm. It checks each element of a list sequentially until the desired element is found or the list ends.

- **Algorithm:**
  1. Start from the first element.
  2. Compare the current element with the target element.
  3. If the current element is the target element, return its index.
  4. If the current element is not the target element, move to the next element and repeat step 2.
  5. If the list ends, return -1 (indicating the element is not in the list).

- **Space Complexity:** O(1)
  - Linear search requires a constant amount of additional space.

## Binary Search

Binary search is a more efficient algorithm that works on sorted lists by repeatedly dividing the search interval in half.

- **Algorithm:**
  1. Start with the middle element of the list.
  2. If the middle element is the target element, return its index.
  3. If the target element is smaller than the middle element, repeat the search on the left half.
  4. If the target element is larger than the middle element, repeat the search on the right half.
  5. If the interval is empty, return -1.

- **Space Complexity:** O(1)
  - Binary search also requires a constant amount of additional space.

## Breadth-First Search (BFS)

Breadth-First Search is an algorithm for traversing or searching tree or graph data structures. It starts at the root node and explores all neighbor nodes at the present depth level before moving on to nodes at the next depth level.

- **Algorithm:**
  1. Start at the root node.
  2. Initialize a queue and enqueue the root node.
  3. While the queue is not empty:
     - Dequeue a node from the queue.
     - If the dequeued node is the target node, return the node.
     - Otherwise, enqueue all unvisited adjacent nodes.
  4. If the target node is not found, return null.

- **Space Complexity:** O(V)
  - V is the number of vertices in the graph. BFS requires space to store the queue and the set of visited nodes.

## Depth-First Search (DFS)

Depth-First Search is an algorithm for traversing or searching tree or graph data structures. It starts at the root node and explores as far as possible along each branch before backtracking.

- **Algorithm:**
  1. Start at the root node.
  2. Initialize a stack and push the root node.
  3. While the stack is not empty:
     - Pop a node from the stack.
     - If the popped node is the target node, return the node.
     - Otherwise, push all unvisited adjacent nodes onto the stack.
  4. If the target node is not found, return null.

- **Space Complexity:** O(V)
  - V is the number of vertices in the graph. DFS requires space to store the stack and the set of visited nodes.

## References

- [GeeksforGeeks: Linear Search](https://www.geeksforgeeks.org/linear-search/)
- [GeeksforGeeks: Binary Search](https://www.geeksforgeeks.org/binary-search/)
- [GeeksforGeeks: Breadth-First Search](https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/)
- [GeeksforGeeks: Depth-First Search](https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/)

