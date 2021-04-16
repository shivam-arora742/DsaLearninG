class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here;
        Node *res=NULL;
        Node *tmp,*prev=NULL;
        int carry=0,sum;
        while(first!=NULL || second!=NULL){
            sum=carry+((first) ? first->data : 0)+((second) ? second->data : 0);
            carry=(sum>=10) ? 1 : 0;
            sum=sum%10;
            tmp=new Node(sum);
            if(res==NULL){
                res=tmp;
            }
            else{
                prev->next=tmp;
            }
            prev=tmp;
            if(first){
                first=first->next;
            }
            if(second){
                second=second->next;
            }
        }
        if(carry>0){
            tmp->next=new Node(carry);
        }
        return res;
    }
};
