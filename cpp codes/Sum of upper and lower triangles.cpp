class Solution {
public:
    static vector<int> sumTriangles(vector<vector<int>>& matrix, int n) {
        int uts = 0, lts = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                uts += matrix[i][j];
                lts += matrix[j][i];
            }
        }
        return {uts,lts};
    }
};