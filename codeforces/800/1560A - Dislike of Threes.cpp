#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // vector<int>seive(1001,1);
    map<int,int>mp;
    int c=1;
    int i=1;
    while(c<=1000)
    {
        if(i%10!=3 && i%3!=0)
        {
            mp[c]=i;
            c++;
        }
        i++;

    }
  
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        ans.push_back(mp[a]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }

}