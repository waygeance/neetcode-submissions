class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n= nums.size();
        long long pro=1;
        vector<int> ans(n);
        int zero=0;
        
        for(int i=0; i<n; i++)
        {
            if(nums[i]==0)
            {
                zero++;
            }

            else
            {
                pro*=nums[i];
            }
        }

        if(zero==0)
        {
            for(int i=0; i<n; i++)
            {
                ans[i]= pro/nums[i];
            }

            return ans;
        }

        else if(zero==1)
        {
            for(int i=0; i<n; i++)
            {
                if(nums[i]==0)
                {
                    ans[i]=pro;
                }
            }

            return ans;            
        }

        else
        {
            return ans;
        }
    }
};
