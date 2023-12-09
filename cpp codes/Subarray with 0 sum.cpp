class Solution {
public:
    // Function to check whether there is a subarray present with 0-sum or not.
    // Subarray with 0 sum
    static bool subArrayExists(int arr[], int n) {
        // Your code here
        int sum = 0;
        unordered_set<int> set;
        set.insert(0);

        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];
            if (set.find(sum) != set.end()) {
                return true;
            }
            set.insert(sum);
        }

        return false;
    }
};