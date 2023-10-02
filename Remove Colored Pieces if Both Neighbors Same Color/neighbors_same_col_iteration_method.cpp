// Beats 88.92%
// Link to explanation: https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/solutions/4119117/easy-loop-if-else-method-88-98-beginner-s-method/

#include <cmath>

class Solution {
public:
    bool winnerOfGame(string colors) {
        
        // declare and init scores
        int aliceScore = 0;
        int bobScore = 0;

        if (colors.size() >= 1 && colors.size() <= pow(10,5)) 
        {
            // iterate through the colors to find consecutive colors
            for (int i = 1; i < colors.size(); i++)
            {
                // check left and right for same color neighbors
                if (colors[i] == colors[i-1] && colors[i] == colors[i+1])
                {
                    // update the scores accordingly
                    if (colors[i] == 'A') 
                    {
                        aliceScore++;
                    } 
                    
                    if (colors[i] == 'B') 
                    {
                        bobScore++;
                    }
                }
                // if no matching neighbour colors, go back to start of for-loop
            }
        }
        
        // return true if alice's score is greater than bob's
        return (aliceScore > bobScore);
    }
};