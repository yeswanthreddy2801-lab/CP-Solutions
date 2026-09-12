class Solution {
public:
    int fib(int n,vector<int>&v)
    {
        if(n<=2)return n;
        if(v[n]!=-1)return v[n];
        return v[n]=fib(n-1,v)+fib(n-2,v);
    }
    int climbStairs(int n) {
        vector<int>v(n+1,-1);
        return fib(n,v);
    }
};