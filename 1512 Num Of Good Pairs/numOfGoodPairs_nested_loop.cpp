// Double iteration, compare from right to left
// Ignore last index in vec/array since theres nothing to compare. 
// Time : O(n^2) since we are using nested loop...
// https://leetcode.com/problems/number-of-good-pairs/solutions/4124210/easiest-nested-for-loop-method/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int count = 0;
        
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums.at(i) == nums.at(j))
                {
                    count++;
                }
            }
        }
        return count;
    }
};
