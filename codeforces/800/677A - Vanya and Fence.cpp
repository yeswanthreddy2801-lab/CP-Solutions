#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m)
        {
            float xx=arr[i];
            
            x+=ceil(xx/(float)m);
        }
        else
        {
            x++;
        }
    }
    cout<<x;
}