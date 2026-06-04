class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int i=0;
        int j=0;
        int n= s.size();
        unordered_set<char> st;
        int ans=0;

        while(j<n && i<n)
        {
            char ch= s[j];

            if(st.count(ch))
            {
                st.erase(st.find(s[i]));
                i++;
            }

            else
            {

                st.insert(ch);
                ans= max(ans, j-i+1);
                                j++;
            }
        } 

        return ans;   
    }
};

// abcadefgh
