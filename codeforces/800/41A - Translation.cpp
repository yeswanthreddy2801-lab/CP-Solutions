#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    int n1=s1.length();

    int n=s2.length();
    int flag=0;
    if(n1!=n)
    {
        cout<<"NO";
        flag=1;
    }else
    for(int i=0;i<n;i++)
    {
        if(s1[i]!=s2[n-i-1])
        {
            cout<<"NO";
            flag=1;
            break;
        }
    }
    if(flag==0)cout<<"YES";
}