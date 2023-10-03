// Double iteration, compare from right to left
// Ignore last index in vec/array since theres nothing to compare. 
// Time : O(n^2) since we are using nested loop...
// Beat 86.48%. 1ms, 39.52mb

class Solution {
    public int numIdenticalPairs(int[] nums) {
        int count = 0;
        
        for (int i = 0; i < nums.length - 1; i++)
        {
            for (int j = i + 1; j < nums.length; j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
}