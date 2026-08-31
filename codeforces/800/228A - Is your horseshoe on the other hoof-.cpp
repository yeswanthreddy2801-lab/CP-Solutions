#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a;
    cin>>x>>y>>z>>a;
    set<int>s;
    s.insert(x);
    s.insert(y);
    s.insert(z);
    s.insert(a);
    cout<<4-s.size();
}