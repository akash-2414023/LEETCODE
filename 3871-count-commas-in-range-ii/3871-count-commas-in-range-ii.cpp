class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long m = 1000;
        while (m <= n) {
            ans += n - m + 1;
            m *= 1000;
        }
        return ans;
    }
};