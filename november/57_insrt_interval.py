class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:

        res = []

        for i in range(len(intervals)):

            # *---N--*  *----* *---*
            if(newInterval[1] < intervals[i][0]):
                res.append(newInterval)
                res = res + intervals[i:]
                return res
            # *-----*  *--N--*
            elif(newInterval[0]>intervals[i][1]):
                res.append(intervals[i])
            #overlapping case
            else:
                newInterval[0] = min(newInterval[0],intervals[i][0])
                newInterval[1] = max(newInterval[1],intervals[i][1])

        res.append(newInterval)
        return res