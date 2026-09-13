class Solution {
public:
    int fib(int n,vector<int>&nums,vector<int>&ans)
    {
        if(n<=1)return ans[n]=nums[n];
        if(n==2)return ans[n]=max(nums[n]+nums[n-2],nums[n-2]);
        if(ans[n]!=-1)return ans[n];
        return ans[n]=max(fib(n-2,nums,ans)+nums[n],fib(n-3,nums,ans)+nums[n]);
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)return nums[n-1];
        if(n==2)return max(nums[n-1],nums[n-2]);
        vector<int>ans(n+1,-1);
        fib(n-1,nums,ans);
        fib(n-2,nums,ans);
        int x=max(ans[n-1],ans[n-2]);
        return x>=0?x:0;
    }
};