
class Solution {
public:
    vector<int> antiDiagonalPattern(vector<vector<int>>& matrix) {
        int n = matrix.size(), k = 0, x = 0;
        vector<int> arr(n * n);

        for (int i = 0; i < n; i++) {
            k = 0;
            for (int j = i; j >= 0; j--) arr[x++] = matrix[k++][j];
        }

        for (int i = 1; i < n; i++) {
            k = i;
            for (int j = n - 1; j >= i; j--) arr[x++] = matrix[k++][j];
        }

        return arr;
    }
};