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
    int l=0,r=n-1;
    int flag=0,sum1=0,sum2=0;
   while(l<=r)
   {
    int x=max(v[l],v[r]);
    if(x==v[l])l++;
    else r--;
    if(flag==0)
    {
        sum1+=x;
        flag=1;
    }
    else 
    {
        sum2+=x;
        flag=0;
    }
   }
   cout<<sum1<<" "<<sum2;
}