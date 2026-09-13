#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {

        int rating=v[i];
        if(1900 <= rating)
        {
            cout<<"Division 1";
        }
        else if(1600<= rating && rating <=1899)
        {
            cout<<"Division 2";
        }
        else if(1400<= rating && rating <=1599)
        {
            cout<<"Division 3";
        }
        else if(rating<=1399)
        {
            cout<<"Division 4";
        }
        if(i<n-1)
        {
            cout<<endl;
        }
    }
}