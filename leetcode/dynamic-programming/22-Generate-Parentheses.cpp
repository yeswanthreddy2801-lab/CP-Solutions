class Solution {
public:
    void dfs(int st,int en,int n,string str,vector<string>&res)
    {
        if(st==n && en==n)
        {
            res.push_back(str);
            return;
        }
        if(st<n)
        {
            dfs(st+1,en,n,str+"(",res);
        }
        if(en<st)
        {
            dfs(st,en+1,n,str+")",res);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        dfs(0,0,n,"",res);
        return res;
    }
};