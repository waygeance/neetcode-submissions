class Solution {
public:

    bool ispal(string s)
    {
        string k= s;
        reverse(s.begin(), s.end());
        return k==s;
    }
    string longestPalindrome(string s) {
        
        int n=s.size();
        string ans="";
        int len=0;

        for(int i=0; i<n; i++)
        {
            string temp;;
            for(int j=i; j<n; j++)
            {
                temp+=s[j];
                //cout<<temp<<endl;
                if(ispal(temp))
                {
                    //cout<<temp<<" ";
                    
                    if(temp.size()>=len)
                    {
                        ans=temp;
                        len=temp.size();
                    }
                }
            }
        }

        return ans;
    }
};
