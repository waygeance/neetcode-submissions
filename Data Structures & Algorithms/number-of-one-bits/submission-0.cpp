class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int ans=0;


        for(int i=0; i<32; i++)
        {
            cout<< (1<<i) <<endl;
            if((n & (1<<i)) !=0) ans++;
        }

        return ans;
    }
};
