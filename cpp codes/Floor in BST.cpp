class Solution{
public:
    int floor(Node* root, int x) {
        int res = -1;

        while (root) {
            if (root->data == x)
                return x;
            if (root->data > x)
                root = root->left;
            else {
                res = root->data;
                root = root->right;
            }
        }
        return res;
    }
};