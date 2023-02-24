from typing import List
class TreeNode:
    def __init__(self, start, end):
        self.start = start
        self.end = end
        self.left = None
        self.right = None
        self.sum = 0
        
class FenwichTree:
    def __init__(self, arr):
        self.root = self.buildTree(arr, 0, len(arr)-1)
        
    def buildTree(self, arr, l, r):
        if l > r: return None
        root = TreeNode(l, r)
        if l == r: root.sum = arr[l]; return root
        m = l + (r - l) // 2
        root.left = self.buildTree(arr, l, m)
        root.right = self.buildTree(arr, m+1, r)
        root.sum = root.left.sum + root.right.sum
        return root
        
    def update(self, index, val, node=None):
        if node is None: node = self.root
        if node.start == node.end: node.sum = val; return 
        m = node.start + (node.end - node.start) // 2
        if index <= m: self.update(index, val, node.left)
        else: self.update(index, val, node.right)
        node.sum = node.left.sum + node.right.sum
        
    def sumRange(self, st, end, node=None): 
        if node is None: node = self.root
        if node.start == st and node.end == end: return node.sum
        m = node.start + (node.end - node.start) // 2
        if end <= m: return self.sumRange(st, end, node.left)
        if st >= m+1: return self.sumRange(st, end, node.right)
        return self.sumRange(st, m, node.left) + self.sumRange(m+1, end, node.right)

class NumArray:

    def __init__(self, nums: List[int]):
        self.tree = FenwichTree(nums)

    def update(self, i: int, val: int) -> None:
        self.tree.update(i, val)

    def sumRange(self, i: int, j: int) -> int:
        return self.tree.sumRange(i, j)

class Solution:
    def handleQuery(self, nums1: List[int], nums2: List[int], queries: List[List[int]]) -> List[int]:
        l = len(nums1)
        s3 = 0
        for i in range(l):
            # s1 += nums1[i]
            s3 += nums2[i]
        
        ret = []
        f = FenwichTree(nums1)
        s1 = f.sumRange(0,l)

        for i in range(len(queries)):
            q = queries[i] 
            if q[0] == 1:
                pass
            elif q[0] == 2:
                s3+=(s1*q[1])
            elif q[0] == 3:
                ret.append(s3)
            
        
        return ret