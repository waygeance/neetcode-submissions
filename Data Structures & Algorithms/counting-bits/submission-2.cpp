class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans;
        vector<int> pow= {1,2,4,8,16,32,64,128,256,512,1024};
        int j=0;
        int high = 0;
        ans.push_back(0);
        for(int i=1; i<=n; i++)
        {
            if(pow[j]==i)
            {
                ans.push_back(1);
                high= i;
                j++;
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