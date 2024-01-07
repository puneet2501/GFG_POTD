/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        Node* n1 = reverse(node1);
        Node* n2 = reverse(node2);

        return mergeRecur(n1, n2);
    }

    Node* mergeRecur(Node* A, Node* B) {
        if (A == nullptr) return B;
        if (B == nullptr) return A;

        if (A->data > B->data) {
            A->next = mergeRecur(A->next, B);
            return A;
        } else {
            B->next = mergeRecur(A, B->next);
            return B;
        }
    }

    Node* reverse(Node* node) {
        Node* prv = nullptr;
        Node* cur = node;

        while (cur != nullptr) {
            Node* next = cur->next;
            cur->next = prv;
            prv = cur;
            cur = next;
        }

        return prv;
    }  
};