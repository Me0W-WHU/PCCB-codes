# The Longest Increasing Subsequence (LIS) problem 
## Solution 1
- dp[i] stands for the length of the longest increasing subsequence that ends with the i^th element of the sequence.
- be careful to the usage of fill().
- This solution has O(n^2) time complexity. 

## Solution 2
- dp[i] stands for the minimum ending number for an i-numbers-long subsequence.
- The i^th iterate means taking s[i] into consideration. During each iteration, scan the array, whenever you find dp[j] less than s[i], you update dp[j+1] with min(s[i], dp[j+1]).
- j = 0 is an exception, you should always update dp[1] regardless of the relationship between dp[0] and s[i].
- This solution also has O(n^2) time complexity.