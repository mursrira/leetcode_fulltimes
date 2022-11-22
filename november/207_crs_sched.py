class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:

        store = collections.defaultdict(list)

        for ele in prerequisites:
            c = ele[0]
            pre = ele[1]
            store[c].append(pre)

        visit_set = set()

        def dfs(c):
            if store[c] == []:
                return True
            if c in visit_set:
                return False

            visit_set.add(c)

            for p in store[c]:
                if not dfs(p): return False

            visit_set.remove(c)
            store[c] = []
            return True

        for c in range(numCourses):
            if not dfs(c): return False

        return True