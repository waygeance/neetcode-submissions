class Solution {
public:

    int ans(int n, vector<int>& dp)
    {
        if(dp[n]!=-1) return dp[n];

        return dp[n]=ans(n-1,dp)+ans(n-2,dp);
    }

    int climbStairs(int n) 
    {
        vector<int> dp(n,-1);
        dp[0]=1;
        dp[1]=2;
        return ans(n-1,dp);
    }
};
