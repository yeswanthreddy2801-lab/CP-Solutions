#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    string s="";
    for(int i=0;i<n;i++)
    {
        int a=s1[i]-48;
        int b=s2[i]-48;
        s+=to_string(a^b);
    }
    cout<<s;
}