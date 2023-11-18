/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        //Your code here
        Node* prev = NULL;
        while(head!=NULL){
            swap(head->next,head->prev);
            prev=head;
            head=head->prev;
        }
        return prev;
    }
};
