from heapq import heappop,heappush
class Solution:
    def minCostConnectPoints(self, points: List[List[int]]) -> int:

        visit_set=set()
        cost=0
        n=len(points)
        edges=collections.defaultdict(list)
        for i in range(n):
            x1,y1=points[i]
            for j in range(i+1,n):
                x2,y2=points[j]
                d=abs(x1-x2)+abs(y1-y2)
                edges[i].append((d,j))
                edges[j].append((d,i))

        min_heap=[(0,0)] # (cost,dest-point)
        while(len(visit_set)<n):
            d,j = heappop(min_heap)
            if j in visit_set:
                continue
            visit_set.add(j)
            cost += d

            for d1,j1 in edges[j]:
                if j1 not in visit_set:
                    heappush(min_heap,(d1,j1))

        return cost