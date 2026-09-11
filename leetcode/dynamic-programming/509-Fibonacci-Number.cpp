class Solution {
public:

    int fib(int n) {
        vector<int>v(n+1,-1);
        return fibb(n,v);
    }
    int fibb(int n,vector<int>&v)
    {
        if(n<=1)return n;
        if(v[n]!=-1)return v[n];
        return v[n]=fib(n-1)+fib(n-2);

    }
};