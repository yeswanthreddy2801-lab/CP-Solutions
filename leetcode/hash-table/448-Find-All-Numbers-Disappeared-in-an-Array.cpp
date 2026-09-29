class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // map<int>mp;
        int n=nums.size();
        vector<int>v(n+1);
        for(int i=0;i<n;i++)
        {
            v[nums[i]]++;
        }
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            if(v[i]==0)
            ans.push_back(i);
        }
        return ans;
    }
};