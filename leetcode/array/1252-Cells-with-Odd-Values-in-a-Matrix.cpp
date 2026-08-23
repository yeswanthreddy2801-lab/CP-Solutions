class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& in) {
         vector<vector<int>>v(m,vector<int>(n));
         int si=in.size();
         for(int i=0;i<si;i++)
         {
            for(int j=0;j<n;j++)
            {
                v[in[i][0]][j]++;
            }
            for(int j=0;j<m;j++)
            {
                v[j][in[i][1]]++;
            }
         }
         int c=0;
         for(int i=0;i<m;i++)
         {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]%2==1)c++;
            }
         }
         return c;
    }
};