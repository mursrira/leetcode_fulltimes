class Solution:
    
    def dfs(self, ele, r, c, grid):

        loop_over = [ (r,c+1), (r,c-1), (r-1,c), (r+1,c) ]

        for (r,c) in loop_over:
            if( r < len(grid) and r >=0 and c < len(grid[r]) and c >=0 ):
                ele = grid[r][c]
                
                if ele == "1":
                    grid[r][c] = "0"
                    self.dfs( ele, r, c, grid )
                

        

    def numIslands(self, grid: List[List[str]]) -> int:

        res = 0
        for r in range( len(grid) ):
            for c in range( len(grid[r]) ):

                ele = grid[r][c]
                if ele == "1":
                    self.dfs( ele, r, c, grid )
                    res += 1
        return res