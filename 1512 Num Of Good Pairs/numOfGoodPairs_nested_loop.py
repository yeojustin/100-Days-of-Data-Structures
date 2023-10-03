# Double iteration, compare from right to left
# Ignore last index in vec/array since theres nothing to compare. 
# Time : O(n^2) since we are using nested loop...
# Beat 80%. 37ms, 16.28mb


class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count = 0
        for i in range(len(nums) - 1):
            for j in range(i + 1, len(nums)):
                count += 1 if nums[i] == nums[j] else 0
        return count