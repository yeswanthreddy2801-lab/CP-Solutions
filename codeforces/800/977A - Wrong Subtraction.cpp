#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    while(m>0)
    {
        int x=n%10;
        if(x==0)
        {
            n/=10;
        }
        else n--;
        m--;
    }
    cout<<n;
}