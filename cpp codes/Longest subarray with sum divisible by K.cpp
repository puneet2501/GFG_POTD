class Solution {
public:
    int longSubarrWthSumDivByK(int a[], int n, int k) {
        // Complete the function
        unordered_map<int, int> hm;
        hm[0] = -1;
        int len = 0, maxLen = 0, sum = 0;

        for (int i = 0; i < n; i++) {
            sum = (sum + a[i]) % k;
            if (sum < 0) sum = k + sum;

            if (hm.find(sum % k) != hm.end()) {
                len = i - hm[sum % k];
            }
            else hm[sum % k] = i;

            maxLen = max(maxLen, len);
        }

        return maxLen;
    }
};