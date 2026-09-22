## Problem: Compare the Triplets (Easy)
**Link:** [HackerRank - Compare the Triplets](https://www.hackerrank.com/challenges/compare-the-triplets/problem)

### Approach
Iterated through the 3-element ratings arrays `a` and `b` in parallel using a single loop. Kept track of Alice's and Bob's scores by direct element comparison and returned a dynamically allocated array containing both scores.

### Complexity Analysis
- **Time Complexity:** $\mathcal{O}(1)$ - Fixed input size of 3 elements.
- **Space Complexity:** $\mathcal{O}(1)$ - Auxiliary memory allocated only for the 2-element output array.