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
    int mini=INT_MAX;
    int maxi=INT_MIN;
    int indmin,indmax;
    for(int i=0;i<n;i++)
    {
        if(v[i]<=mini)
        {
            mini=v[i];
            indmin=i;
        }
        if(v[i]>maxi)
        {
            maxi=v[i];
            indmax=i;
        }
    }
    int ansmin=0,ansmax=0;
    ansmin=n-1-indmin;
    ansmax=indmax;
    if(indmin>indmax)
    {
        cout<<ansmin+ansmax;
    }
    else
    {
        cout<<ansmin+ansmax-1;
    }


}