class Solution{
    public:
    int shortestCommonSupersequence(string X, string Y, int m, int n){
        vector<vector<int>> arr(m + 1, vector<int>(n + 1, 0));
        for (int i = m; i >= 0; i--) {
            for (int j = n; j >= 0; j--) {
                if (i == m || j == n) arr[i][j] = 0;
                else if (X[i] == Y[j]) arr[i][j] = arr[i + 1][j + 1] + 1;
                else arr[i][j] = max(arr[i + 1][j], arr[i][j + 1]);
            }
        }
        int common = arr[0][0];
        return n + m - common;
    }
};