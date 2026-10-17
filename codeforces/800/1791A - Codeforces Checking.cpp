#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        int n;
        cin>>n;
        vector<char>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]=='c' || v[i]=='o' || v[i]=='d' || v[i]=='e' || v[i]=='f' || v[i]=='r' ||v[i]=='s')
            {
                cout<<"YES";
            }
            else cout<<"NO";

            if(i<n-1)cout<<endl;
            
        }

    
}
