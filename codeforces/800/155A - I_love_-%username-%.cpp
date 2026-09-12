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
    int maxi=v[0];
    int mini=v[0];
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(maxi<v[i])
        {
            maxi=v[i];
            c++;
        }
        if(v[i]<mini)
        {
            mini=v[i];
            c++;
        }

    }
    cout<<c;
}