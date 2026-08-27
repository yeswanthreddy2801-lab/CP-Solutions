class Solution {
public:
    int n;
    void dfs(int st,vector<vector<int>>&v,vector<int>arr,vector<vector<int>>&g)
    {
        if(st==n-1)
        {
            v.push_back(arr);
        }
        for(int i=0;i<g[st].size();i++)
        {
        arr.push_back(g[st][i]);
        dfs(g[st][i],v,arr,g);
        arr.pop_back();

        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {
        vector<vector<int>>v;
        vector<int>arr;
        n=g.size();
        arr.push_back(0);
        dfs(0,v,arr,g);
        return v;
    }
};