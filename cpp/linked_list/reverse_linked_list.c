#include<stdlib.h>
#include<stdio.h>

struct Node{
int data;
struct Node* next;
};

struct Node* head;


struct Node* Insert(struct Node* head,int data){
   struct Node* temp =  (struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    if(head=NULL){
        head=temp;
    }
    else{
        struct Node* temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
    return head;
}

void Print(struct Node* head)          // print the list
 {
  while(head != NULL)
{
    printf(" %d ",head->data);
head=head->next;
}
 }

struct Node* Reverse(struct Node* head){
struct Node *current,*prev,*next;
current=head;
prev=NULL;
while(current!=NULL)
 {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
 }
head=prev;
return head;
}

int main()
{
   struct Node* head=NULL;
   head=Insert(head,2);
   head=Insert(head,4);
   head=Insert(head,6);
   head=Insert(head,5);
   Print(head);
   head=Reverse(head);
   Print(head);
}
//whole code in C language,Happy Coding :-);
