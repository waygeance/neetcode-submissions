class Solution {
public:

    void solve(vector<vector<int>> &curr, vector<int> &temp , vector<int> &nums, int i, int n)
    {
        if(i==n)
        {
            curr.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        solve(curr,temp,nums,i+1,n);
        temp.pop_back();
        solve(curr,temp,nums,i+1,n);


    }

    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int n= nums.size();
        vector<vector<int>> curr;
        vector<int> temp;

        solve(curr,temp,nums,0,n);

        return curr;
    }
};
