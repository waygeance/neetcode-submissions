class Solution {
public:
    int reverse(int x) 
    {
        int res=0;

        int max=  pow(2,31) -1;
        int min= pow(-2, 31);
        

        cout<<max<<"  "<<min;

        while(x)
        {
            int mod= int(x%10);
            if(res>max/10 || res<min/10) return 0;
            else if(res==min/10 && mod< min%10) return 0;
            else if(res==max/10 && mod> max%10) return 0;
            res= res*10 + mod;
            x/=10;
        }

        return res;
    }
};
