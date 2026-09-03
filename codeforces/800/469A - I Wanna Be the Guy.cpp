#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;

    
    vector<int>p(x);
    set<int>s;
    for(int i=0;i<x;i++)
    {
        cin>>p[i];
        s.insert(p[i]);
    }
    int y;
    cin>>y;
    vector<int>q(y);
    for(int i=0;i<y;i++)
    {
        cin>>q[i];
        s.insert(q[i]);
    }
    if(s.size()==n)
    {
        cout<<"I become the guy.";
    }
    else
   cout<<"Oh, my keyboard!";

}