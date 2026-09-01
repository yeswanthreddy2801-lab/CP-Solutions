#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    set<char>s1;
    for(char c:s)
    {
        s1.insert(c);
    }
    if(s1.size()==26)
    cout<<"YES";
    else
    cout<<"NO";


}