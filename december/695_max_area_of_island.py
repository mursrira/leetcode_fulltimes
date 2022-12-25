class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:

        rows, cols = len(grid), len(grid[0])
        visit_set = set()
        max_area = 0

        def dfs(r,c):
            if(r<0 or r==rows or c<0 or c==cols or (r,c) in visit_set or grid[r][c]==0):
                return 0
            visit_set.add((r,c))

            return 1+dfs(r+1,c)+dfs(r-1,c)+dfs(r,c+1)+dfs(r,c-1)



        for row in range(rows):
            for col in range(cols):
                max_area = max(dfs(row,col), max_area)
        
        return max_area
    
class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:

        rows, cols = len(grid), len(grid[0])
        max_area = 0

        def dfs(r,c):
            if(r<0 or r==rows or c<0 or c==cols or grid[r][c]==0):
                return 0
            grid[r][c] = 0

            return 1+dfs(r+1,c)+dfs(r-1,c)+dfs(r,c+1)+dfs(r,c-1)



        for row in range(rows):
            for col in range(cols):
                max_area = max(dfs(row,col), max_area)
        
        return max_area