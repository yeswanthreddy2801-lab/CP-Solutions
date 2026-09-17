#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a>=b && a<=c) || (a>=c && a<=b))
        ans.push_back(a);
        else if((b>=a && b<=c) ||(b>=c && b<=a))
        ans.push_back(b);
        else if((c>=a && c<=b) ||(c>=b && c<=a))
        ans.push_back(c);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i];
        if(i<n-1)
        cout<<endl;
    }
}