class Solution {
public:
    int minimumChairs(string s) {
        int n=s.size();
        int maxi=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='E')
            {
                c++;
                maxi=max(maxi,c);
            }
            else c--;
        }
        return maxi;
    }
};