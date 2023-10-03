// Beats 94.55%
// Link to explanation: https://leetcode.com/problems/roman-to-integer/solutions/4123847/94-55-unordered-map-and-for-loop-only-simplified-o-n-o-1/

class Solution {
public:
    int romanToInt(const string& s) 
    {
        // Roman numeral values mapping
        static const unordered_map<char, int> romanValues = \
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
        int prevValue = 0;

        for (int i = s.size() - 1; i >= 0; i--) 
        {
            int currentValue = romanValues.at(s[i]);

            if (currentValue < prevValue) 
            {
                total -= currentValue;
            } 
            else 
            {
                total += currentValue;
            }

            prevValue = currentValue;
        }

        return total;
    }
};