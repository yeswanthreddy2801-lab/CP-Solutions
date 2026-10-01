class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        if(n&1)return false;
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                if(s[i]=='(') st.push(')');
                else if(s[i]=='{' ) st.push('}');
                else st.push(']');
            }
            else if(!st.empty())
            {
                if(s[i]!=st.top())
                {
                    return false;
                }
                else
                st.pop();
            }
            else return false;
        }
        if(st.empty())
        return true;
        else return false;
    }
};