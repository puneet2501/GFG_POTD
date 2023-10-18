class Solution {
public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int> list;
        vector<int> vis(V, 0);
        for (int i = 0; i < V; i++) if (dfs(adj, i, vis)) list.push_back(i);
        return list;
    }

    bool dfs(vector<int> adj[], int i, vector<int> &vis) {
        if (vis[i] == 1) return false;
        if (vis[i] == 2) return true;

        vis[i] = 1;
        for (int nbrs : adj[i]) {
            int a = vis[nbrs];
            if (a == 1) return false;
            if (a == 2) continue;
            if (!dfs(adj, nbrs, vis)) return false;
        }
        vis[i] = 2;
        return true;
    }
};