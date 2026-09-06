class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=nums.size();
        vector<int>ans;
        int r=n-1;
        int xoor=0;
        for(int i=0;i<nums.size();i++)
        {
            xoor^=nums[i];
        }
        while(n!=0)
        {
        int maxi=0;

        
        int res=0;
        res=xoor^((1<<maximumBit)-1);
        // for(int i=0;i<(1<<maximumBit);i++)
        // {
        //     // maxi=max(maxi,xoor^i);
        //     if(maxi<(xoor^i))
        //     {
        //         res=i;
        //         maxi=(xoor^i);
        //     }
        // }
        nums.pop_back();
        n--;
        ans.push_back(res);
        xoor^=nums[r];
        r--;
        }
        return ans;

    }
};