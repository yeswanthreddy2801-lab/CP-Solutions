#include<bits/stdc++.h>
using namespace std;
static bool comp(pair<int,int>a,pair<int,int>b)
{
    if(a.first<b.first)return true;
    else if(a.first==b.first)
    {
        if(a.second<b.second)return true;
        else return false;
    }
    else return false;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>vis(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<pair<int,int>>pr;
    for(int i=0;i<n;i++)
    {
        pr.push_back({v[i],i});

    }
    sort(pr.begin(),pr.end(),comp);
    int flagse=0,flagth=0,second=0,third=0,first=0;
    for(int i=0;i<n;i++)
    {
        if(pr[i].first==2 && flagse==0)
        {
            second=i;
            flagse=1;
        }
        if(pr[i].first==3 && flagth==0)
        {
            third=i;
            flagth=1;
        }
    }
    // cout<<first<<" "<<second<<" "<<third<<endl;
    int first1=first,second1=second,third1=third;
    int c=0;
    while(first1<second && second1<third && third1<n && pr[first1].first==1 && pr[second1].first==2 && pr[third1].first==3)
    {
        
            c++;
            first1++;
            second1++;
            third1++;
        
    }
    cout<<c<<endl;

    while(first<second && second<third && third<n && pr[first].first==1 && pr[second].first==2 && pr[third].first==3)
    {
       
            cout<<pr[first].second+1<<" "<<pr[second].second+1<<" "<<pr[third].second+1<<endl;
            first++;
            second++;
            third++;
        
    }
   
}