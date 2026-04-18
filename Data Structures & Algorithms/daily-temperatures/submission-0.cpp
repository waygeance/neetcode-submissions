class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) 
    {
        stack<pair<int,int>> st;
        int n = arr.size();

        vector<int> ans;

        reverse(arr.begin(), arr.end());

        for(int i = 0; i < n; i++)
        {
            if(st.empty())
            {
                ans.push_back(0);
            }

            else if(st.top().first > arr[i])
            {
                ans.push_back(abs(st.top().second - i));
            }

            else
            {
                while(!st.empty() && st.top().first <= arr[i])
                {
                    st.pop();
                }

                if(st.empty()) ans.push_back(0);
                else ans.push_back(abs(st.top().second - i));
            }

            st.push({arr[i], i});
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
