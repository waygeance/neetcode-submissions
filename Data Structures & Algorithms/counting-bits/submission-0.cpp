class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans;

        for(int i=0; i<=n; i++)
        {
            ans.push_back(__builtin_popcount(i));
        }    

        return ans;
    }
};

// 0 -> 0
// 1 -> 1
// 2 -> 10