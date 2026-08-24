#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')x++;
        else x--;
    }
    if(x>0)cout<<"Anton";
    else if(x<0)cout<<"Danik";
    else cout<<"Friendship";
}