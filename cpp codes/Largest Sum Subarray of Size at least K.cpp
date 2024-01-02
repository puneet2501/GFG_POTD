class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long sum = 0, maxSum = 0, prevSum = 0;
        int i = 0, j = 0;

        while (i < k) {
            sum += a[i++];
        }

        maxSum = sum;

        while (i < n) {
            sum = sum + a[i++];
            prevSum = prevSum + a[j++];
            maxSum = max(sum, maxSum);

            if (prevSum < 0) {
                sum = sum - prevSum;
                prevSum = 0;
                maxSum = max(sum, maxSum);
            }
        }

        return maxSum;
    }
};