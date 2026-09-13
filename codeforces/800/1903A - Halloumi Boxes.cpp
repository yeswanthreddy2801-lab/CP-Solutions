#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    vector<vector<int>>vv;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        vector<int>ans;
        for(int i=0;i<x;i++)
        {
            int r;
            cin>>r;
            ans.push_back(r);
        }
        vv.push_back(ans);
       
        
    }
    for(int i=0;i<v.size();i++)
    {
        int x=v[i].first;
        int y=v[i].second;
        if(y>=2)cout<<"YES";
        else 
        {
            int flag=0;
            for(int j=0;j<x-1;j++)
            {
                if(vv[i][j]<=vv[i][j+1])
                {

                }
                else 
                {
                    cout<<"NO";
                    flag=1;
                    break;
                }

            }
            if(flag==0)
            cout<<"YES";


            }
        if(i<n-1)cout<<endl;
    }
}