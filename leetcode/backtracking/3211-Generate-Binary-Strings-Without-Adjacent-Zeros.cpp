class Solution {
public:
    void call(int n,string s,vector<string>&ans)
    {
        if(s.length()==n)
        {
            ans.push_back(s);
            return;


        }
        int nn=s.length();
        if(nn>0)
        {
            if(s[nn-1]=='1')
            {
 string y=s+"0";
        call(n,y,ans);
             string x=s+"1";
        call(n,x,ans);

            }
            else 
            {
        string x=s+"1";
        call(n,x,ans);

            }
        }
        else
        {
             string y=s+"0";
        call(n,y,ans);
          string x=s+"1";
        call(n,x,ans);
        }
       


    }
    vector<string> validStrings(int n) {
        string s;
        vector<string>ans;
        call(n,s,ans);
    return ans;
    }
};