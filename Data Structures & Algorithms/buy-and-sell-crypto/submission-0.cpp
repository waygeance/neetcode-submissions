class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        if(prices.size()==1) return 0;

        int n= prices.size();
        int i=0;
        int j=1;
        int ans=0;

        while(j<n)
        {
            if(prices[j]>prices[i])
            {
                ans = max(ans, prices[j]-prices[i] );
                j++;
            }

            else
            {
                i=j;
                j++;
            }
        }


        return ans;
    }
};

// 10 11 16 22 29 30
// 30 20 19 14  8  1


// 10 2 3 5 1 2 15