class Solution {
public:
    int lastStoneWeight(vector<int>& arr) 
    {
        multiset<int,greater<int>> ms;
        int n= arr.size();

        for(int i=0; i<n; i++)
        {
            ms.insert(arr[i]);
        }

        while(ms.size()>1)
        {
            int a= *ms.begin();
            int b= *next(ms.begin());

            ms.erase(ms.begin(),next(ms.begin(),2));

            if(a!=b) ms.insert(a-b);

        }

        if(ms.size()==1) return *ms.begin();
        else return 0;

    }
};
