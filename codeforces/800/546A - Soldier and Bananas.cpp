#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,m;
    cin>>k>>n>>m;
    int sum=0;
    
    for(int i=1;i<=m;i++)
    {
        sum+=(k*i);
    }
    if(sum>n)
    cout<<sum-n;
    else cout<<0;
}