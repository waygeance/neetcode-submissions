class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> mp;

        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        } 

        vector<vector<int>> arr;

        for(auto i: mp)
        {
            arr.push_back({i.second,i.first});
            cout<<"fre "<<i.second<<" Num: "<<i.first<<endl;
        }

        vector<int> ans;

        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());

        for(int i=0; i<k; i++)
        {
            ans.push_back(arr[i][1]);
        }

        return ans;
    }
};
