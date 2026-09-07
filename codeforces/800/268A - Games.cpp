#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        int x;
        cin>>x;
        mp[x]++;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(mp.count(v[i])>0)
        {
            ans+=mp[v[i]];
        }
    }
    cout<<ans;
}