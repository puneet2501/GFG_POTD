class Solution {
public:
    static long maximumSumSubarray(int K, vector<int>& Arr, int N) {
        // code here
        long sum = 0, res = 0;
        int i = 0, j = 0;
        
        while (j != K) {
            sum += Arr[j++];
        }
        res = sum;

        while (j != N) {
            sum = sum + Arr[j++];
            sum = sum - Arr[i++];

            res = max(res, sum);
        }

        return res;
    }
};