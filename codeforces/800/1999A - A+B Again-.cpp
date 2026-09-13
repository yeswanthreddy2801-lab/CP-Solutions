#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);

    }
    for(int i=0;i<n;i++)
    {
        int a=v[i];
        int sum=(a% 10) +(a/10);
        cout<<sum;
        if(i<n-1)cout<<endl;
    }
}