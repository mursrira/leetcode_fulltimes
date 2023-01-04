class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # State: Buying or Selling
        # If Buy -> jump i+1
        # If Sell -> jump i+2

        dp={}
        def dfs(i, buying):
            if i>len(prices)-1:
                return 0
            if (i,buying) in dp:
                return dp[(i,buying)]
            
            cooldown=dfs(i+1,buying)

            if buying:
                buy=dfs(i+1,not buying)-prices[i]
                dp[(i,buying)]=max(buy,cooldown)
            else:
                sell=dfs(i+2, not buying)+prices[i]
                dp[(i,buying)]=max(sell,cooldown)
            return dp[(i,buying)]
        return dfs(0,True)