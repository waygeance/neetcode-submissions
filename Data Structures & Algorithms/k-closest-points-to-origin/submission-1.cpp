class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) 
    {
        multiset<tuple<int,int,int>> ms;
        vector<vector<int>> ans;

        int n= arr.size();

        for(int i=0; i<n; i++)
        {
            int ab= ((arr[i][0])*(arr[i][0]) + (arr[i][1])*(arr[i][1]));
            ms.insert({ab,arr[i][0],arr[i][1]});
        }

        for(int i=0; i<k; i++)
        {
            auto it = next(ms.begin(), i);
            int b = get<1>(*it);
            int c  = get<2>(*it);
            ans.push_back({b,c});
        }

        return ans;

    }
};
