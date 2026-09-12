#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int minu;
    cin>>minu;
    int rem=240-minu;
    int sum=0;
    int c=0;
    for(int i=1;i<=n;i++)
    {
        sum+=(i*5);
        if(sum<=rem)
        {
            c++;
        }
        else break;
    }
    cout<<c;
}