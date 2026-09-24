#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<string,string>>ans;
    for(int i=0;i<n;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        char c=s1[0];
        s1[0]=s2[0];
        s2[0]=c;
        ans.push_back({s1,s2});

    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }

}