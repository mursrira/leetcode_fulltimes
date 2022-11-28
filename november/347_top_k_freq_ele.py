class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:

        count = {}

        for num in nums:
            count[num] = count.get(num, 0)+1
        
        freq = []
        for i in range(len(nums)+1,0,-1):
            freq.append([])
        
        for k_c,v in count.items():
            if k_c not in freq[v]:
                freq[v].append(k_c)

        res = []
        for i in range(len(freq)-1,0,-1):
            for j in range(len(freq[i])):
                res.append(freq[i][j])
                if len(res)== k:
                    return res

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:

        count = {}

        for num in nums:
            count[num] = count.get(num, 0)-1

        from heapq import heappush,heappop
        h = []

        for k_c,v in count.items():
            heappush( h,(v,k_c) )

        res = []

        for i in range(k):
            ele = heappop(h)[1]
            res.append(ele)
        return res