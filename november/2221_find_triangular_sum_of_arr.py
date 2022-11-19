class Solution:
    def triangularSum(self, nums: List[int]) -> int:

        if len(nums) == 1:
            return nums[0]

        new_nums = []

        for x in range(0, len(nums)-1):
            ele = (nums[x]+nums[x+1])%10
            new_nums.append(ele)
        
        return self.triangularSum( new_nums )