/*
Brute force appraoch by comparing index 0 with the rest of the index.
After each iteration increment index to 1 and compare from index 2 onwards etc.

Iteration will end when index number hits number of elements in the vector.

Complexity
Time complexity:O(n^2)
Space complexity:O(n^2)
*/


class Solution {
    public int[] twoSum(int[] nums, int target) {
        for (int i=0; i<nums.length; i++) {
            for (int j=i+1; j<nums.length; j++) {
                if (nums[i] + nums[j] == target) {
                    return new int[]{i, j};
                }
            }
        }

        return new int[]{};
    }
}
