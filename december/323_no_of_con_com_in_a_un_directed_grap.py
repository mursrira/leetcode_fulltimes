class Solution:
    def countComponents(self, n: int, edges: List[List[int]]) -> int:

        res = [()]
        store=collections.defaultdict(list)

        for a,b in edges:
            store[a].append(b)
            store[b].append(a)

        
        def bfs(node, res):   
            q=collections.deque([node])
            while(len(q)>0):
                l=len(q)
                for _ in range(l):
                    ele=q.popleft()
                    res.add(ele)
                    for nei in store[ele]:
                        if nei not in res:
                            q.append(nei)
            return res
        
        res=set()
        cnt=0
        for i in range(n):
            if i in res:
                continue
            else:
                cnt+=1
                res=bfs(i,res)

        return cnt