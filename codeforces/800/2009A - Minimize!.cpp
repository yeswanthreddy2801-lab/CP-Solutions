#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        ans.push_back(b-a);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
}