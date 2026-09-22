## Problem: Dynamic Array (Easy-Medium)
**Link:** [HackerRank - Dynamic Array](https://www.hackerrank.com/challenges/dynamic-array/problem)

### Approach
Maintained $N$ dynamically resized sequences using pointers and doubling reallocation (`realloc`). Used bitwise XOR `(x ^ lastAnswer) % n` to locate target sequences, appending values for Type 1 queries and updating `lastAnswer` for Type 2 queries.

### Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N + Q)$ - $Q$ query operations each executed in amortized $\mathcal{O}(1)$ time.
- **Space Complexity:** $\mathcal{O}(N + Q)$ - Allocated dynamic space for $N$ sequence headers and elements appended across queries.