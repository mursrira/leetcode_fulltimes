# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:

        q=deque()
        q.append(root)
        res=[]

        while q:
            l_q=len(q)
            tmp=[]
            for i in range(l_q):
                ele=q.popleft()
                if ele!=None:
                    tmp.append(ele.val)
                    if ele.left:
                        q.append(ele.left)
                    if ele.right:
                        q.append(ele.right)
            if tmp!=[]:
                res.append(tmp)
        return res