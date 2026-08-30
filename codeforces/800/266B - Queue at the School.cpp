#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    while(k!=0)
    {

    
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='B')
        {
            char t=s[i];
            s[i]=s[i+1];
            s[i+1]=t;
            // i++;
            if(s[i]!='B')
            i++;

        }


    }
    k--;
}
cout<<s;
}