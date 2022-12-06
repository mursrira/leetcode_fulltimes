from heapq import *
from typing import List

class Solution:
    def furthestBuilding(self, heights: List[int], bricks: int, ladders: int) -> int:
        
        n = len(heights)
        heap = []

        for i in range(n-1):
            h = heights[i+1]-heights[i]
            if(h<=0): continue
            heapq.heappush(heap, h)
            if len(heap)>ladders:
                min_h = heapq.heappop(heap)
                bricks -= min_h
            if bricks<0: return i
        return n-1