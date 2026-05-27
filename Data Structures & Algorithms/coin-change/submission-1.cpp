#include <bits/stdc++.h>

class Solution {
public:
    static const int N =10001;
    int dp[N];

    int solve( vector<int>& coins, int amount)
    {
        
        if(amount<0) return -1;
        if(amount==0) return 0;
        int count= 1e9;

        if(dp[amount]!=-1) return dp[amount];

        for(int i=0; i<coins.size(); i++)
        {
            if(amount-coins[i]>=0)
            {
                count =  min(count, 1 + solve(coins,amount-coins[i]) );
            }
        } 

        return dp[amount]= count;
    }

    

    int coinChange(vector<int>& coins, int amount) 
    {
            // vector<int> dp(amount+1,-1);

            // dp[0]=0;
            // for(int i=1; i<dp.size(); i++)
            // {
            //     for(int j=0; j<coins.size(); j++)
            //     {
            //         dp[i]= 1+ min()
            //     }
            // }

            memset(dp, -1, sizeof(dp));

            int ans= solve(coins,amount);
            if(ans==1e9) return -1;
            else return ans;
    }
};


