// Medium - 90% - O(n) for both space and time complexity
// Link to soln: https://leetcode.com/problems/majority-element-ii/solutions/4132606/iterate-through-a-map-90-o-n-time-space/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        unordered_map<int, int> elementCount;
        int threshold = nums.size() / 3;
        vector<int> majority;

        for (int i = 0; i < nums.size(); i++) 
        {
            elementCount[nums[i]]++;
        }

        for (unordered_map<int, int>::iterator it = elementCount.begin(); it != elementCount.end(); it++) 
        {
            int element = it->first;
            int count = it->second;

            // Check if count hits threshold
            if (count > threshold) {
                majority.push_back(element);
            }
        }
        return majority;
    }
};
