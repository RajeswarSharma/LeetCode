from collections import defaultdict
class Solution:
    def findTargetSumWays(self, nums: List[int], target: int) -> int:
        length = len(nums)

        memo = defaultdict(lambda: -1)
        def helper(i, cur_sum):
            if memo[(i, cur_sum)] != -1:
                return memo[(i, cur_sum)]
            if i == length-1:
                if cur_sum == target:
                    return 1
                return 0
            res = helper(i+1, cur_sum-nums[i+1]) + helper(i+1, cur_sum+nums[i+1])
            memo[(i, cur_sum)] = res
            return res
            
        return helper(0, -nums[0]) + helper(0, nums[0])