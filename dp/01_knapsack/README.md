- Solution 1: Recursive Search. 
- Solution 2: DP - Top to bottom.
- Solution 3: DP - Bottom to top.
    - object of v[i] and w[i] is first included in the i^th line of the matrix, whose line number is (i + 1)
- Solution 4: DP - using value instead of weight as column, and simplifying the matrix to an array.
    - Mind that initializing the array with fill() may affect other variables. Be careful!
- You can memset a matrix to -1 or 0, because all of their binary digits are the same, but you cannot memset a matrix to other values such as 1.

