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
    int c=0,ans=0;

    for(int i=0;i<n;i++)
    {
        if(v[i]==-1)
        {
            if(c>=1)
            {
                c--;
            }
            else ans++;
        }
        else c+=v[i];
    }
    cout<<ans;
}