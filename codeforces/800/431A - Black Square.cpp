#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(4);
    for(int i=0;i<4;i++)
    {
        cin>>v[i];
    }
    string s;
    cin>>s;
    int n=s.length();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=v[s[i]-1-48];
    }
    cout<<ans;
}