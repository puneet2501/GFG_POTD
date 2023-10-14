class Solution {
public:
    Node* buildBalancedTree(Node* root) {
        vector<Node*> list;
        inorder(root, list);
        return bbst(list, 0, list.size() - 1);
    }

    void inorder(Node* node, vector<Node*>& list) {
        if (node == NULL) return;
        inorder(node->left, list);
        list.push_back(node);
        inorder(node->right, list);
    }

    Node* bbst(vector<Node*>& list, int a, int b) {
        if (a > b) return NULL;
        int c = (a + b) / 2;

        Node* root = list[c];
        root->left = bbst(list, a, c - 1);
        root->right = bbst(list, c + 1, b);
        return root;
    }
};