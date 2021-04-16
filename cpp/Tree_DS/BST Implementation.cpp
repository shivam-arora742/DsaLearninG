//Binary Search Tree Implementation in c++ :code and approach explained.

#include<iostream>
using namespace std;

//Structure for node .
struct Node{

//to store data;
int data;

//to store address of left and right child;
Node* left;
Node* right;
};

//Function to create new node and insert data and return its address:
Node* create_node(int value){
//dynamically creating new node.
Node* newNode=new Node();

//de-referencing pointer and access node fields.
newNode->data=value;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}

//Insert node to tree function:
Node* insert_node(Node *root,int data){
//if tree is empty:
if(root==NULL){
        //create new node and insert data and then store its address to root pointer.
    root=create_node(data);
    return root;
}

//recursive case when data of node > or <= to root data.

//insert node to right subtree
else if(data>root->data){
root->right=insert_node(root->right,data);
}

//insert node to left subtree
else if(data<=root->data){
root->left=insert_node(root->left,data);
}

//return pointer of root.
return root;
}

//Search method to iterate tree and find the root node.
bool Search_node(struct Node* root,int data ){
//for empty tree:
if(root==NULL)return false;
// if we are searching root->data
if(root->data==data)return true;

//Recursive case for searching element in subtrees:
if(root->data<data)return Search_node(root->right,data);
if(root->data>=data)return Search_node(root->left,data);
}

int main(){

//pointer to store root node address.
Node* root;
//Initially tree is empty:
root=NULL;

//Insert node to tree function and update root :
root=insert_node(root,15); //when tree is empty it becomes root
root=insert_node(root,10);
root=insert_node(root,20);

//search method calling:
int x=Search_node(root,10);
if(x==1){
    cout<<"element found\n";
}
else {
    cout<<"element not found\n";
}
return 0;
}
