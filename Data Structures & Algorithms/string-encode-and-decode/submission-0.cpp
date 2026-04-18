class Solution {
public:

    string encode(vector<string>& strs) 
    {
        int n= strs.size();
        string s="";
        string join= "bha";

        for(int i=0; i<n; i++)
        {
            s+= strs[i];
            s+= join;
        }
        cout<<s;
        return s;
    }

    vector<string> decode(string s) 
    {
        vector<string> ans;
        int n= s.size();
        string temp= "";

        for(int i=0; i<n-2; i++)
        {
            if(s[i]=='b' && s[i+1]=='h' && s[i+2]=='a')
            {
                ans.push_back(temp);
                temp="";
                i=i+2;
            }

            else
            {
                temp+=s[i];
            }
        }


        return ans;
    }
};
