class Solution {
public:
    static int countPairs(Node* root1, Node* root2, int x) {
        std::unordered_set<int> set;
        int arr[] = {0};
        inorder(root1, set, x, arr, true);
        inorder(root2, set, x, arr, false);

        return arr[0];
    }

private:
    static void inorder(Node* node, std::unordered_set<int>& set, int x, int arr[], bool flag) {
        if (node == nullptr) return;

        if (flag) {
            inorder(node->left, set, x, arr, true);
            if (node->data < x) set.insert(node->data);
            inorder(node->right, set, x, arr, true);
        } else {
            inorder(node->left, set, x, arr, false);
            if (set.count(x - node->data)) arr[0]++;
            inorder(node->right, set, x, arr, false);
        }
    }
};
