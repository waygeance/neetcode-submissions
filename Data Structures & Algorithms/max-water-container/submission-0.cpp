class Solution {
public:
    int maxArea(vector<int>& arr) 
    {
            int n = arr.size();
            int ans=0;

            for(int i=0; i<n; i++)
            {
                for(int j=i+1; j<n; j++)
                {

                    ans= max(ans,((j-i) * min(arr[j],arr[i])) );
                }
            }

            return ans;
    }
};
