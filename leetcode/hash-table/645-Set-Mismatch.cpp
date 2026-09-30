// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
//         int n=nums.size();
//         int xorr=0;
//         int xorr2=0;
//         int sum1=n*(n+1)/2;
//         int sum2=0;
//         for(int i=1;i<=n;i++)
//         {
//             xorr^=i;
//             xorr2^=nums[i-1];
//             sum2+=nums[i-1];
    
//         }
//         int sum=xorr^xorr2;
//         cout<<sum;
//         int i=0;
//         int place=0;
//         while(i<32)
//         {
//         if(sum&(1<<i)) 
//         {
//             place=i;
//             break;
//         }
//         i++;
//         }
//         int buk1=0,buk2=0;
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]&(1<<place))
//             {
//                 buk1^=nums[i];
//             }
//             else buk2^=nums[i];
//         }
//         int ans=sum1-sum2;
//         if(ans>0)
//         {
        
//             return {min(buk1,buk2),max(buk1,buk2)};
//         }
//         else 
//             return {max(buk1,buk2),min(buk1,buk2)};

        

//     }
// };

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        int xorr = 0;

        // XOR of 1..n and array
        for (int i = 1; i <= n; i++) {
            xorr ^= i;
            xorr ^= nums[i - 1];
        }

        // Find rightmost set bit
        int place = 0;
        while ((xorr & (1 << place)) == 0) {
            place++;
        }

        int buk1 = 0, buk2 = 0;

        // Divide numbers into two groups
        for (int i = 1; i <= n; i++) {
            if (i & (1 << place))
                buk1 ^= i;
            else
                buk2 ^= i;
        }

        for (int x : nums) {
            if (x & (1 << place))
                buk1 ^= x;
            else
                buk2 ^= x;
        }

        // Find which is duplicate
        for (int x : nums) {
            if (x == buk1)
                return {buk1, buk2};
        }

        return {buk2, buk1};
    }
};