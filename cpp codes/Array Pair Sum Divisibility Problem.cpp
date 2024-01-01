class Solution {
public:
    bool canPair(vector<int>& nums, int k) {
        if (nums.size() % 2 == 1) return false;

        vector<int> arr(k, 0);
        for (int i = 0; i < nums.size(); ++i) arr[nums[i] % k]++;
        int i = 1, j = k - 1;
        if (arr[0] % 2 == 1) return false;

        while (i <= j) {
            if (arr[i] != arr[j]) return false;
            ++i;--j;
        }
        return true;
    }
};