#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    vector<long long>ans;
    while(m!=0)
    {
        int x,y,n;
        cin>>x>>y>>n;
   long long k=n-(n-y)%x;
   ans.push_back(k);
   m--;
    }
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<endl;

}