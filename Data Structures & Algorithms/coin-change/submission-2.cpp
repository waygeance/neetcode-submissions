#include <bits/stdc++.h>

class Solution {
public:

    static const int N= 10001;
    int dp[N];

    int solve( vector<int>& coins, int amount)
    {
        if(amount<0) return -1;
        if (amount==0) return 0;
        int count= 1e8;

        if(dp[amount]!= -1) return dp[amount];

        for(int i=0; i<coins.size(); i++)
        {
            if(amount-coins[i]>=0 )
            { count= min(count, 1+ solve(coins, amount-coins[i])); }
        }

        return dp[amount]=count;
    }

    int coinChange(vector<int>& coins, int amount) 
    {
        memset(dp, -1, sizeof(dp));
        int ans= solve(coins,amount);
        return ans==1e8 ? -1: ans;    
    }
};
