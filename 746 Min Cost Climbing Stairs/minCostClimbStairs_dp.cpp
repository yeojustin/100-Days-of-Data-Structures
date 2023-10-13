// 84.96%
// Dynamic programming method... not the most efficient way but it gets the job done

class Solution 
{
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size();
        if (n < 2) 
        {
            return 0; // No cost to reach the top if there are less than 2 steps.
        }
        
        vector<int> dp(n); // dp[i] represents the minimum cost to reach step i.
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        for (int i = 2; i < n; ++i)
        {
            dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
        }
        
        // To reach the top, you can start from the second-to-last step or the last step.
        return min(dp[n - 1], dp[n - 2]);
    }
};