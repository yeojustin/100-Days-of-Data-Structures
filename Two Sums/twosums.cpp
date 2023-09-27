/*
Brute force appraoch by comparing index 0 with the rest of the index.
After each iteration increment index to 1 and compare from index 2 onwards etc.

Iteration will end when index number hits number of elements in the vector.

Complexity
Time complexity:O(n^2)
Space complexity:O(n^2)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        if (nums.empty())
        {
            return {};
        }

        // brute force approach
        for (int i=0; i<nums.size(); i++)
        {
            for (int j=i+1; j<nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }

        return {}; //return empty vec if no solution found
    }
};
