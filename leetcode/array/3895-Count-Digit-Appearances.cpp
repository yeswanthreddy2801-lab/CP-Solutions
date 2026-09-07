class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt = 0;
        for(auto it : nums) {
            int num = it;
            while(num != 0) {
                if(digit == num % 10)
                    cnt++;
                num /= 10;
            }
        }
        return cnt;
    }
};