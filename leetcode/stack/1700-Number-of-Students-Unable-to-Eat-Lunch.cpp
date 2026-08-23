class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sn) {
         int n=st.size();
      int zero=0;
      int ones=0;
      for(int i=0;i<n;i++)
      {
        if(st[i]==0)zero++;
        else ones++;
      }
      int x=n;
      for(int i=0;i<n;i++)
      {
        if(sn[i]==1)
        {
            if(ones==0)return x;
            ones--;
            x--;

        }
        else
        {
            if(zero==0)return x;
            zero--;
            x--;
        }
      }
      return 0;
    }
}; 