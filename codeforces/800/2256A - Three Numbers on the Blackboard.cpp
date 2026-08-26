#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        v.push_back({x,y,z});
    }
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        sort(v[i].begin(),v[i].end());
        int x=v[i][0];
        int y=v[i][1];
        int z=v[i][2];
        if(x+y<=z)
        {
            ans.push_back(y);
        }
        else if(x+y>z)
        {
            ans.push_back(z-x);
        }
        else
        {
            ans.push_back(y-x);
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
}