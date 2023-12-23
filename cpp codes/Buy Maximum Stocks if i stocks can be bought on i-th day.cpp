class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]) {
        // code here
        long long arr[n];
        for (int i = 0; i < n; i++) {
            arr[i] = (long long)price[i] * 100000 + (i + 1);
        }
        sort(arr, arr + n);
        int count = 0;
        for (int i = 0; i < n; i++) {
            int day = (int)(arr[i]) % 100000;
            int pr = (int)(arr[i]) / 100000;

            if ((long long)pr * day <= k) {
                count += day;
                k = k - (long long)pr * day;
            }
            else {
                count += (k / pr);
                k = k - (long long)pr * (k / pr);
            }
        }

        return count;
    }
};