//Problem Statement:
//Given a linked list of N nodes. The task is to check if the linked list has a loop.
//Linked list can contain self loop.

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
*/

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        //Method:floydd-cycle-finding-algorithm

        //for no nodes in lists:
        if(head==NULL){
            return false;
        }

        //slow ptr moves 1 node at a time:
        Node*slow=head;
         //fast ptr moves 1 node at a time:
        Node*fast=head->next;

        //iterate the whole list
        while(slow!=NULL && fast!=NULL && fast->next!=NULL){
            if(fast==slow){  //if fast& slow ptrs points to same node
                return true;     //its a loop
            }
            slow=slow->next;
            fast=fast->next->next;
        }
        return false;           //else no loop
    }
};
//Time: O(n)       Space:O(1)
//Execution Time:0.12
