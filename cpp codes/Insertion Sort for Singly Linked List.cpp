/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* insertionSort(Node* head_ref) {
        if (head_ref == nullptr || head_ref->next == nullptr)
            return head_ref;

        Node* t = head_ref;
        Node* cur = head_ref->next;
        while (cur != nullptr) {
            while (cur != t) {
                if (t->data > cur->data) {
                    int x = t->data;
                    t->data = cur->data;
                    cur->data = x;
                }
                t = t->next;
            }
            t = head_ref;
            cur = cur->next;
        }
        return t;
    }
    
};
