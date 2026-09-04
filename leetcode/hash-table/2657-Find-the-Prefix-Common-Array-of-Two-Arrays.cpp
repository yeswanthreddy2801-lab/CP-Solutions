class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int l=0,r=0;
        int n=A.size();
        vector<int>vis(n+1);
vector<int>v;
        for(int i=0;i<n;i++)
        {
            int c=0;
            vis[A[i]]++;
            if(vis[A[i]]>=2)
            {
                c++;
            }
            vis[B[i]]++;
            if(vis[B[i]]>=2)
            {
                c++;
            }
            if(i!=0)
            {
                v.push_back(v[i-1]+c);
            }
            else
            v.push_back(c);
        }
        return v;
    }
};