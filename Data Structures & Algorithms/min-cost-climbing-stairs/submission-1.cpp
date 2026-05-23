#include <cstring>
#include <algorithm>
#include <vector>

class Solution {
public:

    static const int n= 101;
    static const int m= 10001;
    int dp[n][m];

    int solve(vector<int>& arr, int cost, int i)
    {
        int n= arr.size();
        if(i>=n) return cost;
        
        if( dp[i][cost]!=-1 ) return dp[i][cost];

        dp[i][cost] =cost+ min(solve(arr,arr[i],i+1), solve(arr, arr[i],i+2));

        return dp[i][cost];
    }

    int minCostClimbingStairs(vector<int>& cost) 
    {
        memset(dp, -1, sizeof(dp));
        int ans=0;
        return min(solve(cost,ans,0),solve(cost,ans,1));
    }
};

/*

dp

*/