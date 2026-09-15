#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    string demo="codeforces";
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<10;j++)
        {
            if(demo[j]!=v[i][j])
            {
                c++;

            }
        }
        ans.push_back(c);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i];
        if(i<n-1)
        {
            cout<<endl;
        }
    }
}