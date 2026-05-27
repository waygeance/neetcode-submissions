class Solution {
public:



    int maxProduct(vector<int>& nums) 
    {
        int ans= -1e8;

        for(int i=0; i< nums.size(); i++)
        {
            for(int j=i; j<nums.size(); j++)
            {
                 int temp=1;
                for(int k=i; k<=j; k++)
                {
                    temp*= nums[k];
                }
                ans= max(ans,temp);
            }

            //cout<<endl;
        } 

        return ans;   
    }
};
