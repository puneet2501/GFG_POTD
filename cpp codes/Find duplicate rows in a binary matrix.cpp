class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) {
        vector<int> result;
        unordered_set<string> set;

        for (int i = 0; i < M; i++) {
            string row;
            for (int j = 0; j < N; j++) {
                row += to_string(matrix[i][j]);
            }

            if (set.count(row) > 0) {
                result.push_back(i);
            } else {
                set.insert(row);
            }
        }

        return result;
    }
};