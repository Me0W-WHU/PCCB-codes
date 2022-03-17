## Description

Use coins of values 1, 5, 10, 50, 100, 500 to purchase a total value A. Find out at least how many coins are needed.

Input: The number of available coins for each value, and the target value A.

```
3 2 1 3 0 2 620
```

Output: At least how many coins are needed.

```
6
```

## Notes

- Use high-value coins as many as possible, unless there aren't enough available coins left. Use a simple min() statement to denote this process.
- Use a concise and elegant style to make the for-loop as follows:

```c++
int n[6];
for (int & i : n) cin >> i;
```

## Notes In Chinese

- 变量命名简洁一点：中间变量t，最终结果ans

- “在硬币数量允许的情况下尽可能多用硬币”：用一个min()语句即可表达。

- 数组赋值简写：

    ```c++
    int n[6];
    for (int & i : n) cin >> i;
    ```

