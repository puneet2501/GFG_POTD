/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
public:
    // return true/false denoting whether the tree is Symmetric or not
    static bool isSymmetric(Node* root) {
        // add your code here
        if (root == nullptr) return true; 
        return isMirror(root->left, root->right);
    }

private:
    static bool isMirror(Node* a, Node* b) {
        if (a == nullptr && b == nullptr) return true;
        if (a == nullptr || b == nullptr || a->data != b->data) return false;
        return isMirror(a->left, b->right) && isMirror(a->right, b->left);
    }
};