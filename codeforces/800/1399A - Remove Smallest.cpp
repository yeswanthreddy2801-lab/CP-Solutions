#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>ans;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        int flag=0;
        vector<int>v(a);
        for(int j=0;j<a;j++)
        {
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        for(int j=0;j<a-1;j++)
        {
            if(abs(v[j]-v[j+1])<=1)
            {

            }
            else
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            ans.push_back("YES");

        }
        else
        ans.push_back("NO");
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
}