# Dynamic Programming

- DP is all about reducing redundant calculations. You design a DP algorithm by considering how to construct the answer from the result of previous iterations, and you'd better scrutinize your algorithm by checking whether there are redundant calculations.

## Knapsack problem

- When you're processing the i^th object, you should be updating the (i + 1)^th row of the matrix.
- The only difference between the implementation of **complete knapsack** & **0/1 knapsack** is whether the **addition term** comes from the last iteration or current iteration (You can scrutinize this difference comparing solution 3 of 0/1 knapsack and solution 2 of complete knapsack). Thus when implementing with an array, the updating sequence (W -> 0 or 0 -> W) decides whether the result is of complete knapsack or 0/1 knapsack.

