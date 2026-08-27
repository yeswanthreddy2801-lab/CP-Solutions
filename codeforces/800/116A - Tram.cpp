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
    int sum=0,maxi=0;

    for(int i=0;i<n;i++)
    {
        int x=v[i].first;
        int y=v[i].second;
        sum-=x;
        sum+=y;
        maxi=max(maxi,sum);        


    }
    cout<<maxi;
}