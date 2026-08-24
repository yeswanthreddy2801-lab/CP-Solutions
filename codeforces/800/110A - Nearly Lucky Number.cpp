#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int c=0;
    while(n!=0)
    {
        int x=n%10;
        if(x==7 || x==4)
        {
            c++;
        }
        n/=10;
    }
    if(c==7 || c==4)
    {
        cout<<"YES";
    }
    else cout<<"NO";
}