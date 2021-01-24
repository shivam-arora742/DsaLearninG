/*
  Return the no. of times search_for value is there in a linked list.
  The input list will have at least one element

  Node is defined as
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

int count(struct node* head, int search_for)
{
//add your code here
int cnt=0;              //to maintain occurance of a number
struct node* ptr=head;         //ptr to store head value
while(ptr!=NULL){            //iterate whole lists
    if(ptr->data==search_for){    //if data of node==search_for_element ,then cnt=cnt+1;
        cnt++;
    }
    ptr=ptr->next;
}
return cnt;               //return cnt;
}
//Happy Coding :-)
