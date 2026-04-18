class KthLargest {
public:

    multiset<int> ms;
    int K;

    KthLargest(int k, vector<int>& nums) 
    {
        int n= nums.size();
        K=k;

        for(int i=0; i<n; i++)
        {
            ms.insert(nums[i]);
        }

        for(int i=0; i<n-k; i++)
        {
            ms.erase(ms.begin());
        }

    }
    
    int add(int val) 
    {
        ms.insert(val);    
        if(ms.size()>K) ms.erase(ms.begin());

        return *ms.begin();
    }
};
