class Solution {
public:
    int getSum(int a, int b) 
    {
        int sum=0;
        int carry=0;
        int ans=0;
        int cin=0;

        for(int i=0; i<32; i++)
        {
            int A = (a >> i) & 1;
            int B = (b >> i) & 1;
            
            sum= A ^ B ^ cin;
            carry= ( (A&B) | (A&cin) | (B&cin) );
            cin=carry;
            if(sum) ans |= (1<<i);
        }

        return ans;
    }
};

// half adder-> 
// a b s c
// 0 0 0 0
// 0 1 1 0
// 1 0 1 0
// 1 1 0 1

// 1 0 0
// 1 1 1
// 0  1  1