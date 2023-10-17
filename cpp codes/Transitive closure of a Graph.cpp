class Solution {
public:
    static vector<vector<int>> transitiveClosure(int N, vector<vector<int>>& graph) {
        vector<vector<int>> list;
        for (int i = 0; i < N; i++) {
            vector<int> vis(N, 0);
            dfs(i, graph, vis, N);
            list.push_back(vis);
        }
        return list;
    }

    static void dfs(int i, vector<vector<int>>& graph, vector<int>& vis, int N) {
        vis[i] = 1;
        for (int j = 0; j < N; j++) {
            if (graph[i][j] == 1 && vis[j] == 0) {
                dfs(j, graph, vis, N);
            }
        }
    }
};