/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
        Node* dummy = new Node(-1);
        Node* ans = dummy;
        Node* temp1 = head1;
        Node* temp2 = head2;
        while(temp1 && temp2){
            if(temp1->data == temp2->data){
                ans->next=new Node(temp1->data);
                ans=ans->next;
                temp1=temp1->next;
                temp2=temp2->next;
            }
            else if(temp1->data > temp2->data) {
                temp2 = temp2->next;
            }
            else if(temp2->data > temp1->data) {
                temp1 = temp1->next;
            }
        }
        return dummy->next;
    }
};
