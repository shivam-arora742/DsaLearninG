#include<stdio.h>
#include<conio.h>

int rear=-1;
int front_q=-1;
int Queue[10];

void front_element(){
printf("front element:%d",Queue[front_q]);
}

int Enqueue(int x){
if(rear==9)
{
printf("\nOverflow!!!");
}
else if(rear==-1&&front_q==-1){
rear=0;
front_q=0;
}
else{
rear=rear+1;
}
Queue[rear]=x;
}

void Dequeue(){
if(front_q==-1)
{
 printf("\nunderflow");
}
else if(rear==front_q){
rear=-1;
front_q=-1;
}
else{
front_q=front_q+1;
}
}

void Display(){
   printf("\n============================\n");
   printf("\nQueue Begins:\n");
for(int i=front_q;i<=rear;i++){
printf("%d\n",Queue[i]);
}
printf("\n============================\n");
}

int main(){
Enqueue(5);
Enqueue(3);
Enqueue(2);
Dequeue();
Enqueue(0);
Enqueue(10);

front_element();
Display();
return 0;
}
