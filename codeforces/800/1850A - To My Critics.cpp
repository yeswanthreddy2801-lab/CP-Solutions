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
        if(a+b>=10 || a+c>=10 || b+c >=10)
        {
            ans.push_back("yes");
        }
        else ans.push_back("No");
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
}