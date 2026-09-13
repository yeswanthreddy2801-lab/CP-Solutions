#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v.push_back({a,b,c});

    }

    for(int i=0;i<n;i++)
    {
        int a=v[i][0],b=v[i][1],c=v[i][2];
        if(a+b==c)cout<<"+";
        else cout<<"-";
        if(i<n-1)cout<<endl;
    }
}