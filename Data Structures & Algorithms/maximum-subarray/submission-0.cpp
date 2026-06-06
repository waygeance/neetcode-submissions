class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n= nums.size();
        int ans=0;
        int fin=-1001;

        for(int i=0; i<n; i++)
        {
            ans+=nums[i];
            if(ans<0) ans=0;

            fin= max(fin,ans);
        }

        if(fin==0) return *max_element(nums.begin(),nums.end());
        return fin;
    }
};
