class Solution {
public:
    int fib(int n,vector<int>&ans)
    {
        if(n<=1)return n;
        else if(n==2)return 1;
        if(ans[n]!=-1)return ans[n];
        return ans[n]=fib(n-1,ans)+fib(n-2,ans)+fib(n-3,ans);
    }
    int tribonacci(int n) {
        vector<int>ans(n+1,-1);
        
       return fib(n,ans);
        
    }
};