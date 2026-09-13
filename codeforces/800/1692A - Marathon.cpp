#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        v.push_back({a,b,c,d});

    }
    for(int i=0;i<n;i++)
    {
        int cn=0;
        int a=v[i][0],b=v[i][1],c=v[i][2],d=v[i][3];
        if(b>a)cn++;
        if(c>a)cn++;
        if(d>a)cn++;
        cout<<cn;
        if(i<n-1)cout<<endl;

    }
}