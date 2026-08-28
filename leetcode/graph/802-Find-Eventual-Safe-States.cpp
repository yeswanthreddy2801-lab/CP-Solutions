class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>>v(n);
        vector<int>indeg(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<graph[i].size();j++)
            {
                v[graph[i][j]].push_back(i);
                indeg[i]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indeg[i]==0)
            {
                q.push(i);

            }
        }
        vector<int>res;
        while(!q.empty())
        {
            int x=q.front();
            res.push_back(x);
            q.pop();
            for(int i=0;i<v[x].size();i++)
            {
                indeg[v[x][i]]--;
                if(indeg[v[x][i]]==0)
                {
                    q.push(v[x][i]);
                }
            }

        }
        sort(res.begin(),res.end());
        return res;

    }
};