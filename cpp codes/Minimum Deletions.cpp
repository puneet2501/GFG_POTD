class Solution {
public:
    int minimumNumberOfDeletions(string S) {
        int n = S.length();
        int arr[n + 1][n + 1];
        string s = S;
        reverse(s.begin(), s.end());

        for (int i = n; i >= 0; i--) {
            for (int j = n; j >= 0; j--) {
                if (i == n || j == n)
                    arr[i][j] = 0;
                else if (S[i] == s[j])
                    arr[i][j] = 1 + arr[i + 1][j + 1];
                else
                    arr[i][j] = max(arr[i][j + 1], arr[i + 1][j]);
            }
        }

        return n - arr[0][0];
    }
};
