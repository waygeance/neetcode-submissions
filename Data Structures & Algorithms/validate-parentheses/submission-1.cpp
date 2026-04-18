class Solution {
public:
    bool isValid(string s) 
    {
        int n = s.size();
        stack<char> st;
        st.push(s[0]);

        for(int i=1; i<n; i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            
            else
            {
                char t= st.top();
                
                if((t=='(' && s[i]==')') || (t=='{' && s[i]=='}') || (t=='[' && s[i]==']'))
                {
                    st.pop();
                }
                else st.push(s[i]);
            }


        }

        if(st.empty()) return true;
        else return false;    
    }
};
