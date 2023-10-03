// v1, 88%, 22ms
// see v2 here, same concept but its better optimised
// https://github.com/yeojustin/Leetcode-Repo/blob/main/Roman%20To%20Int/roman_to_int_unordered_map.cpp

class Solution 
{
public:
    int romanToInt(string s) 
    {
        unordered_map<char, int> romanCharVal = 
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int total = 0;

        for (int i = 0; i < s.size(); i++)
        {
            int currentVal = romanCharVal[s[i]];
            int nextVal = (i + 1 < s.size()) ? romanCharVal[s[i + 1]] : 0;

            if (currentVal < nextVal) 
            {
                total -= currentVal;
            } 
            else 
            {
                total += currentVal;
            }
        }
        return total;
    }
};