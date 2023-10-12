class Solution {
public:
    int dupSub(Node* root) {
        unordered_map<string, int> hm;
        solve(root->left, hm);
        solve(root->right, hm);

        for (const auto& e : hm)
            if (e.second > 1)
                return 1;
        return 0;
    }

    string solve(Node* node, unordered_map<string, int>& hm) {
        string sb;
        if (node == nullptr)
            return "n";
        if (node->right == nullptr && node->left == nullptr)
            return to_string(node->data) + ",";

        sb.append(solve(node->left, hm));
        sb.append(solve(node->right, hm));
        sb.append(to_string(node->data) + ",");
        
        hm[sb] = hm[sb] + 1;
        return sb;
    }
};