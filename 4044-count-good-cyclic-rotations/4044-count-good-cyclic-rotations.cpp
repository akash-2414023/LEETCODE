class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();

        long long fHalf = 0;
        long long sum = 0;
        int ans = 0;

        for (int x : nums) {
            sum += x;
        }

        for (int j = 0; j < n / 2; j++) {
            fHalf += nums[j];
        }

        int i = 0;
        int j = n / 2;

        while (i < n) {
            if (2 * fHalf > sum) {
                ans++;
            }

            fHalf += nums[j % n] - nums[i];

            i++;
            j++;
        }

        return ans;
    }
};