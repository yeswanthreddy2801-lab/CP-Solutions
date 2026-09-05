class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gs) {
        map<int,vector<int>>mp;
        int n=gs.size();
        for(int i=0;i<n;i++)
        {
             mp[gs[i]].push_back(i);

        }
        vector<vector<int>>ans;
        for(auto m:mp)
        {
            auto x=m.second;
            vector<int>v;

            for(int i=0;i<x.size();i++)
            {
                // cout<<x[i]<<" ";
                    v.push_back(x[i]);
                    cout<<i+1<<" "<<m.first<<" ";
                if((i+1)%m.first==0)
                {
                    cout<<"yes";
                    ans.push_back(v);
                    v.clear();

                }

            }
            cout<<endl;
        }
        return ans;

    }
};