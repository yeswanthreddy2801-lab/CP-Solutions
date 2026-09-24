#include<bits/stdc++.h>
using namespace std;
int main()
{
   
        int n;
        cin>>n;
        vector<string>ans;
        for(int i=0;i<n;i++)
        {
           string a;
           cin>>a;
           if(a[0]=='a' || a[1]=='b' || a[2]=='c')
           {
            ans.push_back("YES");
           }
           else ans.push_back("NO");
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<endl;
        }
    
}