/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/

Node* pairWiseSwap(struct Node* head) {
    // The task is to complete this method
    if(head==NULL ||head->next==NULL)return head;
    struct Node* prev=head;
    struct Node* current=head->next;
    head=current;
    while(true)
       {
        struct Node* nxt=current->next;
        //current as previous node
        current->next=prev;
        if(nxt==NULL||nxt->next==NULL){ //If next NULL or next is the last node
        prev->next = nxt;
            break;
        }
        //Change next of previous to next next
        prev->next = nxt->next;

        // Update previous and curr
        prev = nxt;
        current = prev->next;
    }
    return head;
}
