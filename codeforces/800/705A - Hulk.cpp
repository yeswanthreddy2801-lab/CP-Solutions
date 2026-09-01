#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s="";
    
    for(int i=0;i<n;i++)
    {
        if(i%2==0 && i!=n-1)
        s+="I hate that ";
        else if(i!=n-1) s+="I love that ";
    }
    if(n%2==0)
    {
        s+="I love it";
    }
    else
    {
        s+="I hate it";
    }
    cout<<s;
}