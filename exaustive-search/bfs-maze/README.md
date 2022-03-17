## Notes

- The initial value of the distance matrix d is INF instead of 0.
- Set dx, dy to achieve movement in only four directions.

- bfs is essentially a queue, dfs is essentially a stack, and function recursion is essentially a stack. Therefore, dfs is suitable for recursion, while bfs is not very suitable for recursive implementation.
- The coordinate elements are stored in the form of pairs, and the pairs are used to form a queue.
     - Note usage: typedef, declaration, definition, instantiation

- only search for points that have not been searched (INF)
- No relaxation operation is required, the searched point is immediately the shortest path (in the case where the edge has no weight)
- Entry criteria are "No Wall" instead of "Have a Road", otherwise the end point will be excluded

# Notes in Chinese

- 距离矩阵d初始值为INF而不是0。
- 设置dx，dy，实现只在四个方向上移动。

- bfs实质上是队列，dfs实质上是栈，函数递归实质上也是栈。因此dfs适合用递归，而bfs不是很适合用递归实现。
- 坐标元素以pair的形式存储，用pair形成队列。
    - 注意用法：typedef、声明、定义、实例化

- 只搜索尚未被搜索的点（INF）
- 不需要松弛操作，搜索到的点就立即是最短路径（在边没有权值的情况下）
- 入队标准是“非墙”而不是“有路”，否则终点会被排除在外
