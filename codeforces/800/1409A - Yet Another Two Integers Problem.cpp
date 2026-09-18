#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        double r=abs(a-b);
        r=ceil(r/10);
        int x=r;
        // cout<<endl<<x<<endl;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
        if(i<n-1)cout<<endl;
    }
}