#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==1)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"Easy";
    }
    else cout<<"Hard";
}