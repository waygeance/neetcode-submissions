class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) 
    {
        int n= arr.size();
        sort(arr.begin(),arr.end());
        int i=0;
        int j=n-1;
        while(i<j)
        {
            int curr= target-arr[j];

            if(curr > arr[i])
            {
                i++;
            }

            else if(curr == arr[i])
            {
                return {i+1,j+1};
            }

            else
            {
                j--;
            }
        }    
    }
};
