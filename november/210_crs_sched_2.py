class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:


        store = { idx:[] for idx in range(numCourses) }
        visit_set, cycle_set = set(), set()
        res = []

        def dfs( crs ):
            
            if crs in visit_set:
                return True

            if crs in cycle_set:
                return False

            cycle_set.add( crs )

            for pre in store[crs]:
                if not dfs(pre): return False

            cycle_set.remove( crs )
            visit_set.add( crs )
            res.append( crs )

        
        
        for crs in range(numCourses):
            if not dfs(crs): return []

        return res