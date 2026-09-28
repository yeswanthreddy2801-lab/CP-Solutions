class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int maxi=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')c++;
            else if(s[i]==')')c--;
            maxi=max(maxi,c);
        }
        return maxi;
    }
};