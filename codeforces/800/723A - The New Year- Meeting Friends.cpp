#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int maxi=max(x,max(y,z));
    int mini=min(x,min(y,z));
    int ans=(maxi+mini)/2;
    int res=abs(x-ans)+abs(y-ans)+abs(z-ans);
    cout<<maxi-mini;
}