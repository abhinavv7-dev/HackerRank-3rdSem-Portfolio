## Problem: Diagonal Difference (Easy)
**Link:** [HackerRank - Diagonal Difference](https://www.hackerrank.com/challenges/diagonal-difference/problem)

### Approach
Used a single loop over matrix row indices $i$ from $0$ to $N-1$. Computed the primary diagonal sum via `arr[i][i]` and the secondary diagonal sum via `arr[i][N - 1 - i]`, then returned the absolute difference.

### Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N)$ - Single linear traversal over matrix rows.
- **Space Complexity:** $\mathcal{O}(1)$ - Constant extra space used for accumulator variables.