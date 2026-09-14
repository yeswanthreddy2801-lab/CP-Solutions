#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int ans=max(n,m)-min(n,m);
    int mini=min(n,m);
    cout<<mini<<" "<<ans/2;
    
}