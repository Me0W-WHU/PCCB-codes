http://poj.org/problem?id=3253

The sawing process can be viewed as a binary tree. Each node in the tree represents the length of a plank, and its children represents the length of its two divided parts after sawing.

The cost can be calculated as the sum of every node value times its depth.

Apparently, the optimum case is when smaller planks go deeper in the tree. The process of building such tree is similar to building a Huffman tree. With greedy algorithm, you can achieve this with O(n2) complexity.