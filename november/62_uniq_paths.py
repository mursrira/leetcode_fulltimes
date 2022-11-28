class Solution:
    def uniquePaths(self, m: int, n: int) -> int:

        # Bottom Row
        row = [1]*n

        for i in range(m-1):
            newRow = [1]*n
            # we are doing j: n-2, since we know last
            # column is always 1
            for j in range(n-2,-1,-1):
                newRow[j] = newRow[j+1] + row[j]
            
            row = newRow
        
        return row[0]
    
class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        dp = [[1]*m]*n

        for row in range(1, len(dp)):
            for col in range(1, len(dp[row])):
                dp[row][col] = dp[row-1][col]+dp[row][col-1]
        return dp[-1][-1]