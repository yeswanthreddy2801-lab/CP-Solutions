#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    for(int i=0;i<n;i++)
    {
        int x=v[i].first;
        int y=v[i].second;
        int r=x%y;
        if(r!=0)
        {
            int z=y-r;
            cout<<z<<endl;
        }
        else cout<<0<<endl;
    }
}