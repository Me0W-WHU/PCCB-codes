http://poj.org/problem?id=3617

# Notes

- Mind the case when both ends are equal. It's not a random choice! Make further comparison.
    - In c++, use double pointers.
    - If you implement this in python, you can simply compare the string with its reversed string.
- You needn't declare a new array to store the answer, just putchar() them one by one while processing.
- On POJ it is required that the output contains at most 80 in each line, beware of your output format.

# Notes in Chinese

- 注意两端相等的情况，此时需要进一步比较后续的大小。
- 这里应用了首尾两个指针，并用一个bool变量表示比较结果。
- 按顺序输出的字符就是答案了，不需要单独开一个数组存储答案，直接一个个putchar()即可。
- **poj上要求每行最多输出80个，不然Presentation Error。**

P.S.
如果能够反向取子串（Python），就可应用以下算法：
  - 按字典序比较原字符串S和反转后的字符串S'
  - 如果S < S'则取开头字符
  - 如果S > S'则取末尾字符 （相等时随意取）