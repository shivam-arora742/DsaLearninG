// Find Height of Binary Tree:

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


//find height method:
int FindHeight(Node* root){
    // Base Case:
    if(root==NULL){
        return -1;
    }

    // Calculate left subtree height
    int leftHeight=FindHeight(root->left);
    // Calculate right subtree height
    int rightHeight=FindHeight(root->right);


    // Return total height of tree: 
    return max(leftHeight,rightHeight)+1;

} 


int main(){

//pointer to store root node address.
Node* root;
//Initially tree is empty:
root=NULL;

//Insert node to tree function and update root :
root=insert_node(root,15); //when tree is empty it becomes root
root=insert_node(root,10);
root=insert_node(root,50);
root=insert_node(root,100);
root=insert_node(root,99);
root=insert_node(root,1000);

cout<<FindHeight(root);

return 0;
}

// Time Complexity:O(n).