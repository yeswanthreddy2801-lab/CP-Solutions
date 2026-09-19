#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    int ans=0;
    int maxi=*max_element(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        ans+=maxi-v[i];
    }
    cout<<ans;
}