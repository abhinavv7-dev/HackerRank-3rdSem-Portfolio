## Problem: Sparse Arrays (Medium)
**Link:** [HackerRank - Sparse Arrays](https://www.hackerrank.com/challenges/sparse-arrays/problem)

### Approach
Iterated through each query string and performed linear string matching against all entries in `stringList` using `strcmp`. Incrementally updated frequency counts into a dynamically allocated result array.

### Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N \times Q \times L)$ - Where $N$ is input string count, $Q$ is query count, and $L$ is max string length.
- **Space Complexity:** $\mathcal{O}(Q)$ - Memory allocated to return count results for $Q$ queries.