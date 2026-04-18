class Solution {
public:
    int carFleet(int target, vector<int>& arr, vector<int>& brr) 
    {
            int n= arr.size();
            vector<pair<int,float>> time;
            int ans=1;

            for(int i=0; i<n; i++)
            {
                time.push_back({arr[i],float(target-arr[i])/brr[i]});
            }

            sort(time.begin(),time.end());
            reverse(time.begin(),time.end());

            for(auto it: time)
            {
                cout<<it.first<<" "<<it.second<<endl;
            }

            float mini = time[0].second;
            for(auto it: time)
            {
                if(it.second>mini)
                {
                    ans++;
                    mini=it.second;
                }
            }

            return ans;
    }
};
