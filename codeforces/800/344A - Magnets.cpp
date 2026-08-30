#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int c=1;
    char l=s[0][1];
    for(int i=1;i<n;i++)
    {
        if(s[i][0]==l)
        {
            c++;
        }
        l=s[i][1];
    }
    cout<<c;
}