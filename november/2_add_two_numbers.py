class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        store = {}
        for i in range( len(nums) ):
            store[nums[i]] = i

        for i in range( len(nums) ):
            to_find = target-nums[i]
            if to_find in store and store[to_find] != i:
                return [i,store[to_find]]