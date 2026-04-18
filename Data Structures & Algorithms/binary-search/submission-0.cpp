class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n= nums.size();
        int left=0;
        int right=n-1;
        int mid= (left+right)/2;

        while(left <= right)
        {
            if(nums[mid]>target)
            {
                right= mid -1;
                mid= (left+right)/2;
            }

            else if( nums[mid]<target)
            {
                left= mid +1;
                mid= (left+right)/2;
            }

            else
            {
                return mid;
            }
        }

        return -1;
    }
};
