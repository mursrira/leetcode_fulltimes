from heapq import heappush
from typing import List

class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        
        if( len(arr) < k ):
            return 0
        
        dictNums = {}
        
        for num in arr:
            
            if num not in dictNums:
                dictNums[ num ] = 0
            
            dictNums[ num ] += 1
        
        minHeap = [ ]
        
        for ( number, times ) in dictNums.items():
            heappush( minHeap, ( number, times ) )
        
        
            
        
        
            
            