## Notes

(P.S. Try to prove the optimality of greedy algorithm for this problem.)

### Solution 1

Scan for several rounds and choose the work which starts after last chosen work ends and ends earliest.

- Simply mark the end time of chosen work as INF.

### Solution 2

Sort and scan once.

- A typical use of intrinsic **pair** structure & **sort()** method.
- Keep in mind that you want to sort according to **end time**, therefore you should set pair.first as end time and pair.second as start time.



## Notes in Chinese

- 已选项目不用标记，直接去掉。（类比水洼问题）
- 贪心算法的最优证明：

1. 与其它方案相比，在已经选取的工作数量相同的情况下，该方案的结束时间不会比其它方案晚。
2. 因此不存在选取更多工作的选择方案。

- 这种算法每一轮选取都要扫描一遍，时间复杂度为 $O(n^2)$，其实可以排序一次，然后扫描一遍选取即可。（见interval-scheduling-improved）