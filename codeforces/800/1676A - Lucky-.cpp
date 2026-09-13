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
    for(int i=0;i<n;i++)
    {
        string s=v[i];
        int l=0;
        int sum1=0,sum2=0;
        while(l<3)
        {
            sum1+=(s[l]-'0');
            sum2+=(s[6-l-1]-'0');
            l++;
        }


    
    if(sum1==sum2)
    {
        cout<<"Yes";
    }
    else cout<<"No";
    if(i<(n-1))
    {
        cout<<endl;
    }
}
    
}