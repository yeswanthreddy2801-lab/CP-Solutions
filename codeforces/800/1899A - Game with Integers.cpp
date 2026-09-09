#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {

        int x;cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        int x=v[i];
        if(x%3==0)
        {
            cout<<"Second"<<endl;
        }
        else cout<<"First"<<endl;
    }
}