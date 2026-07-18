class Solution {
public:
    int reverse(int x) 
    {
        bool neg= false;
        if(x<0) neg= true;

        string s= to_string(x);
        if(neg) s.erase(s.begin());
        ::reverse(s.begin(),s.end());

        try
        {
            int ans= stoi(s);

            return neg ? -1 * ans: ans;
        }

        catch(...) {return 0;}
    }
};
