class Solution {
public:
    bool isPalindrome(string s) 
    {
        int n= s.size();
        string k="";

        transform(s.begin(),s.end(),s.begin(),::tolower);

        for(int i=0; i<n; i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<= '9'))
            {
                k+=s[i];
            }
        }

        cout<<k<<endl;

        for(int i=0; i<k.size()/2; i++)
        {
            if(k[i]!=k[k.size()-1-i])
            {
                return false;
            }
        }  

        return true;  
    }
};
