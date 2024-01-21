/*// A Tree node
struct Node
{
	int key;
	struct Node *left, *right;
};*/

class Solution {
public:
    vector<vector<int>> printPaths(Node* root, int sum) {
        vector<int> path;
        vector<vector<int>> result;
        
        solve(root, sum, path, result, 0);
        return result;
    }

    void solve(Node* root, int sum, vector<int>& path, vector<vector<int>>& result, int t) {
        if (root == nullptr) return;
        
        t = t + root->key;
        path.push_back(root->key);

        if (t == sum) result.push_back(path);

        solve(root->left, sum, path, result, t);
        solve(root->right, sum, path, result, t);

        path.pop_back();
    }
};