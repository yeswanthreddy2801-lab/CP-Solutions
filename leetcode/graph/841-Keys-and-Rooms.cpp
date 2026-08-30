class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int  n=rooms.size();
        vector<int>v(n,0);
        queue<int>q;
        v[0]=1;
        for(int i=0;i<rooms[0].size();i++)
        {
            if(v[rooms[0][i]]==0)
            {

            q.push(rooms[0][i]);
            v[rooms[0][i]]=1;
            }
        }
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            for(int i=0;i<rooms[x].size();i++)
            {
                if(v[rooms[x][i]]==0)
                {

                q.push(rooms[x][i]);
                v[rooms[x][i]]=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)return false;
        }
        return true;
    }
};