#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    vector<vector<int>>v(n,vector<int>(n));
    int ind;
    int jnd;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
            if(v[i][j]==1)
            {
                ind=i;
                jnd=j;
            }
            
        }
    }
    cout<<abs(ind-2)+abs(jnd-2);


}