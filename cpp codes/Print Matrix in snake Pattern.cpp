class Solution {
public:
    static vector<int> snakePattern(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<int> list;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i & 1) == 0) list.push_back(mat[i][j]);
                else list.push_back(mat[i][n - 1 - j]);
            }
        }
        return list;
    }
};