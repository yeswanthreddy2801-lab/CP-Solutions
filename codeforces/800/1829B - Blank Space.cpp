#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        int c=0;
        int maxi=0;
        for(int i=0;i<x;i++)
        {
            int y;
            cin>>y;
            if(y==0)
            {
                c++;
                maxi=max(c,maxi);

            }
            else c=0;
        }
        ans.push_back(maxi);
        
    }
    for(int i=0;i<n;i++)
    {
        
        cout<<ans[i];
        if(i<n-1)cout<<endl;
    }
}