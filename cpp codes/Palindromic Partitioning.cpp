class Solution {
public:
    static int palindromicPartition(string str) {
        int n = str.length();
        int arr[n + 1];
        arr[0] = 0;

        for (int i = 0; i < n; i++) {
            int minVal = 1e9;
            for (int j = i; j >= 0; j--) {
                if (isPalindrome(j, i, str)) {
                    int res = 1 + arr[j];
                    minVal = min(res, minVal);
                }
            }
            arr[i + 1] = minVal;
        }
        return arr[n] - 1;
    }

    static bool isPalindrome(int i, int j, string str) {
        while (i < j) {
            if (str[i] != str[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};