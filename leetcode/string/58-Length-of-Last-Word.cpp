class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' ')
            c++;
            else break;
        }
        int c2=0;
        for(int i=n-1-c;i>=0;i--)
        {
            if(s[i]==' ')
            break;
            else
            c2++;
        }
        return c2;

    }
};