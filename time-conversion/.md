## Problem: Time Conversion (Easy)
**Link:** [HackerRank - Time Conversion](https://www.hackerrank.com/challenges/time-conversion/problem)

### Approach
Parsed the formatted 12-hour string using `sscanf`. Converted hours based on AM/PM indicators (`hh = 0` for 12 AM and `hh += 12` for PM times other than 12 PM), then formatted into military 24-hour time via `snprintf`.

### Complexity Analysis
- **Time Complexity:** $\mathcal{O}(1)$ - String parsing acts on a fixed 10-character input length.
- **Space Complexity:** $\mathcal{O}(1)$ - Fixed 9-byte dynamic string buffer output.