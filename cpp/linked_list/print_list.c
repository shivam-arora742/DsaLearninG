/*
  Print elements of a linked list on console
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
     Node(int x){
         data = x;
         next  NULL;
     }
  }
*/
void display(struct Node *head)
{
   //add code here            
   struct Node *ptr=head;     //store addrress of first node in ptr;
   while(ptr!=NULL){          //iterate whole list untill it becomes NULL
       printf("%d ",ptr->data);   //print data of node;
       ptr=ptr->next;             //moves to next node
   }
}
