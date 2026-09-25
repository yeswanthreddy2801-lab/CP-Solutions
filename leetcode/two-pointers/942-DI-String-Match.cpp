class Solution {
public:
    vector<int> diStringMatch(string s) {
          int x=0;
          int y=s.length();
          int n=y;
          vector<int>v(y+1);
          for(int i=0;i<n;i++)
          {
            if(s[i]=='I')
            {
                v[i]=x;
                x++;
            }
            else 
            {
                v[i]=y;
                y--;
            }
          }
          if(s[n-1]=='I')
          {
            v[n]=x;
          }
          else 
          v[n]=y;
          return v;
    }
};