class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans;
        int high = 0;
        ans.push_back(0);
        for(int i=1; i<=n; i++)
        {
            if(__builtin_popcount(i)==1)
            {
                ans.push_back(1);
                high= i;
            } 

            else
            {
                ans.push_back(ans[high]+ ans[i-high]);
            }
        }

        return ans;
    }
};

//1100 