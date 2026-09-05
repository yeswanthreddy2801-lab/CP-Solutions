class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& po, vector<vector<int>>& qr) {
        int n=qr.size();
        int m=po.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x=qr[i][0],y=qr[i][1],z=qr[i][2];

            int c=0;
            for(int j=0;j<m;j++)
            {
                int xx=po[j][0];
                int yy=po[j][1];
                int first=(xx-x)*(xx-x);
                int second=(yy-y)*(yy-y);
                int third=z*z;
                if(first+second<=third)
                {
                    c++;
                }
            }
            v.push_back(c);
        }
        return v;
    }
};