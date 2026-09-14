class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;

        }
        for(auto m:mp)
        {
            if(m.second==1)
            {
                return m.first;
            }
        }
        return 0;
    }
};