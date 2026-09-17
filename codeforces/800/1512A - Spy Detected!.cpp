#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>res;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        map<int,int>mp;
        vector<int>v(m);
        for(int j=0;j<m;j++)
        {
            cin>>v[j];
            mp[v[j]]++;
            
        }
        int ans=0;
        for(auto mm :mp)
        {
            if(mm.second==1)
            {
                ans=mm.first;
                break;
            }
        }
        for(int j=0;j<m;j++)
        {

            if(v[j]==ans)
            {
                res.push_back(j+1);
                break;
            }
        }
    }
        for(int i=0;i<res.size();i++)
        {

            cout<<res[i];
            if(i<n-1)
            cout<<endl;
        }


        
    

}