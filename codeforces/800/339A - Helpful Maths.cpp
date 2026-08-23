#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(s[i]>=48 && s[i]<='9')
        {
             v.push_back(s[i]-48);
        }
    }
    string ans="";
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++)
    {
        ans+=to_string(v[i]);
        ans+='+';
    }
    ans+=to_string(v[v.size()-1]);
    cout<<ans;
}