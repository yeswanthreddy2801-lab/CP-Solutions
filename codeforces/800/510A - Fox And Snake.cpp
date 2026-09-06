#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    int flag=1;
    for(int i=0;i<n;i++)
    {
        string s="";
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            {
                s+='#';
            }
        }
        else 
        {
            if(flag==0)
            {
                s+='#';
            }
            for(int j=0;j<m-1;j++)
            {
                s+='.';
            }
            if(flag==1)
            s+='#';

            flag^=1;
        }
        cout<<s<<endl;
    }
}