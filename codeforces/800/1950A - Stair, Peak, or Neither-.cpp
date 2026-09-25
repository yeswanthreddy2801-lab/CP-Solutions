#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>ans;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b && b<c)ans.push_back("STAIR");
        else if(a<b && b>c)ans.push_back("PEAK");
        else ans.push_back("NONE");
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
}