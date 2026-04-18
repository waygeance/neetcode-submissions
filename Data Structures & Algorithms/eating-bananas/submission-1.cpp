class Solution {
public:

    bool check(vector<int>& arr, int tar, int h)
    {
        int n= arr.size();

        long long sum=0;

        for(int i=0; i<n; i++)
        {
            sum+= ceil(double(arr[i])/tar);
        }

        if(sum>h) return false;
        else return true;
    }

    int minEatingSpeed(vector<int>& arr, int h) 
    {
            int left=1;
            int right= *max_element(arr.begin(),arr.end());


            while(left<right)
            {
                long long mid= (left+right)/2;

                if(check(arr,mid,h)) right=mid; 
                else left= mid+1;
            }

            return left;
    }
};
