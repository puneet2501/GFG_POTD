class Solution{
public:
    static string matrixChainOrder(int p[], int n) {
        vector<vector<int>> m(n, vector<int>(n, 0));
        vector<vector<int>> s(n, vector<int>(n, 0));

        for (int L = 2; L < n; L++) {
            for (int i = 1; i < n - L + 1; i++) {
                int j = i + L - 1;
                m[i][j] = INT_MAX;
                for (int k = i; k < j; k++) {
                    int cost = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                    if (cost < m[i][j]) {
                        m[i][j] = cost;
                        s[i][j] = k;
                    }
                }
            }
        }

        return ans(s, 1, n - 1);
    }

    static string ans(vector<vector<int>>& s, int i, int j) {
        if (i == j) {
            return string(1, 'A' + i - 1);
        } else {
            return "(" + ans(s, i, s[i][j]) + ans(s, s[i][j] + 1, j) + ")";
        }
    }
};