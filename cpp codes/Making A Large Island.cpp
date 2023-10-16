class Solution {
    static unordered_map<int, int> hm;

public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int name = 2;
        vector<vector<bool>> vis(n, vector<bool>(n, false));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1 && !vis[i][j]) {
                    int count = dfs(i, j, grid, vis, name, n);
                    hm[name] = count;
                    name++;
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    int d = (i + 1 < n) ? grid[i + 1][j] : 0;
                    int u = (i - 1 >= 0) ? grid[i - 1][j] : 0;
                    int r = (j + 1 < n) ? grid[i][j + 1] : 0;
                    int l = (j - 1 >= 0) ? grid[i][j - 1] : 0;

                    unordered_set<int> s;
                    s.insert(d);
                    s.insert(u);
                    s.insert(r);
                    s.insert(l);
                    int res = 1;
                    for (int val : s) {
                        res += hm[val];
                    }
                    ans = max(ans, res);
                }
            }
        }
        if (ans == 0) return n * n;
        return ans;
    }

    static int dfs(int i, int j, vector<vector<int>>& grid, vector<vector<bool>>& vis, int name, int n) {
        if (i < 0 || j < 0 || i >= n || j >= n || grid[i][j] == 0 || vis[i][j]) return 0;
        vis[i][j] = true;
        grid[i][j] = name;
        int count = 1 + dfs(i + 1, j, grid, vis, name, n) + dfs(i - 1, j, grid, vis, name, n) + dfs(i, j - 1, grid, vis, name, n) + dfs(i, j + 1, grid, vis, name, n);
        return count;
    }
};

unordered_map<int, int> Solution::hm;

