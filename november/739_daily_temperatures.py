class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:

        res = [0]*len(temperatures)
        stk = []

        for idx in range( len(temperatures) ):

            curr_temp = temperatures[idx]

            while len(stk) != 0 and curr_temp > stk[-1][0]:
                prev_temp, prev_idx = stk.pop()
                res[prev_idx] = idx - prev_idx
            
            stk.append([curr_temp, idx])
        
        return res