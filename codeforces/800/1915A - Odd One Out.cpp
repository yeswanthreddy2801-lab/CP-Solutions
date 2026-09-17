#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int an=a^b^c;
        ans.push_back(an);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i];
        if(i<n-1)cout<<endl;
    }
}