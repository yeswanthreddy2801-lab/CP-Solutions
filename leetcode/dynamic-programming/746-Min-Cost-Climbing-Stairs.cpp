class Solution {
public:
    int fib(int x,vector<int>&ans,int n,vector<int>&cost,vector<int>&v)
    {
        if(x<=1)return ans[x]=cost[x];
        if(ans[x]!=-1)return ans[x];
        return ans[x]=min(cost[x]+fib(x-1,ans,n,cost,v),cost[x]+fib(x-2,ans,n,cost,v));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        cost.push_back(0);
        vector<int>ans(n+1,-1);
        vector<int>v(n+1,-1);
        fib(n,ans,n+1,cost,v);
        // fib(1,ans,n+1,cost);
        return ans[n];
    }
};