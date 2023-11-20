/*
struct Node 
{
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    private:
    int count = 0;
  public:
    int sumK(Node *root,int k)
    {
        // code here 
        unordered_map<int, int> hm;
        hm[0] = 1;
        totalPaths(root, hm, k, 0);
        return count;
    }

private:
    void totalPaths(Node* node, unordered_map<int, int>& hm, int k, int sum) {
        if (node == nullptr)
            return;

        sum += node->data;

        if (hm.find(sum - k) != hm.end())
            count += hm[sum - k];

        hm[sum]++;

        totalPaths(node->left, hm, k, sum);
        totalPaths(node->right, hm, k, sum);

        hm[sum]--;
    }
};
