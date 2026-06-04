class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n= height.size();
        vector<int> left(n);
        vector<int> right(n);
        int ans=0;
        int maxi=0;

        for(int i=0;i<n; i++)
        {
            maxi= max(maxi,height[i]);
            left[i]=maxi;
        }

        //for(auto it: left) cout<<it<<" ";
        maxi=0;
        for(int i=n-1; i>=0; i--)
        {
            maxi= max(maxi,height[i]);
            right[i]=maxi;
        }

        //for(auto it: right) cout<<it<<" ";

        for(int i=0; i<n; i++)
        {
            int temp= min(right[i],left[i])-height[i];

            if(temp>0) ans+=temp;
        } 

        return ans;   
    }
};

// [0,2,0,3,1,0,1,3,2,1]
//  0 2 2 3 3 3 3 3 3 3
//  3 3 3 3 3 3 3 3 2 1
 
