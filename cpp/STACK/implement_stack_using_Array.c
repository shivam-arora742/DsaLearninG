#include<stdio.h>
#include<conio.h>

int stack[10];
int top = -1;

void push(int val){
 if(top == 9)
 {
     printf("\nOverflow!!!");
 }
 else
{
 top++;
 stack[top] = val;
 }
}

void top_elem(){
 printf("Top Element in Stack:%d\n",stack[top]);
}

void pop()
{
 if(top == -1)
{
    printf("\nunderflow");
}
 else
{
 printf("\nDeleted : %d", stack[top]);
 top--;
 }
}

void display()
{
 if(top == -1)
 {
     printf("\nStack is Empty");
 }
 else
{
 int i;
 printf("\n============================\n");
 printf("\nElements in STACK are:\n");
 for(i=top; i>=0; i--){
printf("%d\n",stack[i]);
 }
 printf("============================\n");
 }
}

int main()
{
 push(2);
 push(10);
 push(4);
 pop();
 push(1);
 push(10);
 push(16);
 pop();
 display();
 top_elem();
 return 0;
}
