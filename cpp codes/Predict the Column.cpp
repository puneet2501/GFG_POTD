class Solution {
public:
    int columnWithMaxZeros(vector<vector<int>> &arr, int N) {
        int res = -1;
        int b = 0;

        for (int i = 0; i < N; i++) {
            int zero = 0;
            for (int j = 0; j < N; j++) {
                if (arr[j][i] == 0) zero++;
            }
            if (zero > b) res = i;
            b = max(b, zero);
        }
        return res;
    }
};
