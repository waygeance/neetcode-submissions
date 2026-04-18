class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        map<char,int> a,b;

        int n= s.size();
        int m= t.size();

        for(int i=0; i<n; i++)
        {
            a[s[i]]++;
        } 

        for(int i=0; i<m; i++)
        {
            b[t[i]]++;
        }       

        return a==b;
    }
};
