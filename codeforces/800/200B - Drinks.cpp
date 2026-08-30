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
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
    }
    cout<<fixed<<setprecision(12)<<sum/double(n);
    
}