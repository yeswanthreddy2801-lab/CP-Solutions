class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int,int>mp;
        int ans=0;
        while(n!=0)
        {
            int x=n%10;
            mp[x]++;
            n/=10;
        }
        for(auto m:mp)
        {
            ans+=m.first*m.second;
        }
        return ans;
    }
};