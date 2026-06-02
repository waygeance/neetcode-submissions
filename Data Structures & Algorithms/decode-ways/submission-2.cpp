#include<bits/stdc++.h>;

class Solution {
public:


    int dp[102];

    int solve(string &s, int i)
    {
        if(s.size()==i) return 1;

        if(dp[i]!=-1) return dp[i];
        int ways=0;

        if('1'<=s[i] && s[i]<='9') ways+= solve(s,i+1);

        if( (i+1<s.size()) && (s[i]=='1') && ('0'<=s[i+1] && s[i+1]<='9') ) ways+= solve(s,i+2);
        else if((i+1<s.size()) && (s[i]=='2') && ('0'<=s[i+1] && s[i+1]<='6') ) ways+= solve(s,i+2);

        return dp[i]=ways;
    }

    int numDecodings(string s) 
    {
        memset(dp,-1, sizeof(dp));
        return solve(s,0);
    }
};
