class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        vector<int> result;
        for (int c = 0; c < q; c++) {
            int hop = queries[c][0];
            int row = queries[c][1];
            int col = queries[c][2];
            
            int sum = 0;
            for (int i = -hop; i <= hop; i++) {
                for (int j = -hop; j <= hop; j++) {
                    bool isValidRow = (row+i >= 0) && (row+i < n);
                    bool isValidCol = (col+j >= 0) && (col+j < m);
                    
                    if (isValidRow && isValidCol && (abs(i) == hop || abs(j) == hop)) {
                        sum += mat[row+i][col+j];
                    }
                }
            }
            
            result.push_back(sum);
        }
        return result;
    }
};