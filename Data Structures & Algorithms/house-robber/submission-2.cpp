#include<bits/stdc++.h>

class Solution {
public:

    static const int n= 101;
    int dp[n];

    int solve(vector<int> &nums, int i)
    {
        if(i>=nums.size()) return 0;

        if(dp[i]!=-1) return dp[i];

        int rob= nums[i] + solve(nums, i+2);
        int skip= solve(nums, i+1);

        dp[i]= max(rob,skip);

        return dp[i];
    }

    int rob(vector<int>& nums) 
    {
        memset(dp,-1,sizeof(dp));
        return max(solve(nums,0),solve(nums,1));
    }
};
