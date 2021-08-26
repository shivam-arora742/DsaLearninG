// Level Order Traversal of Binary Tree(BST):

#include<iostream>
#include<queue>    //for traversal
using namespace std;

//Structure for node .
struct Node{

//to store data;
char data;

//to store address of left and right child;
Node* left;
Node* right;
};

// Creation of BST:

//Function to create new node and insert data and return its address:
Node* create_node(char value){
//dynamically creating new node.
Node* newNode=new Node();

//de-referencing pointer and access node fields.
newNode->data=value;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}

//Insert node to tree function:
Node* insert_node(Node *root,char data){
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

// Level Order Traversal:
void LevelOrder(Node *root){
    // queue for inserting child nodes address:
    queue<Node*>Q;
    // initially root is present node:
    Q.push(root);
    // iterate untill all nodes are traversed:
    while(!Q.empty()){
        // traverse present node:
        Node* present=Q.front();
        cout<<" "<<present->data;
        // if not null insert its children(left,right):
        if(present->left)Q.push(present->left);        
        if(present->right)Q.push(present->right);
        // pop that present node as it has been traversed.
        Q.pop();        
    }
}

// Main Fucntion:

int main(){
//pointer to store root node address.
Node* root;
//Initially tree is empty:
root=NULL;

//Insert node to tree function and update root :
root = insert_node(root,'M'); 
root = insert_node(root,'B');
root = insert_node(root,'Q'); 
root = insert_node(root,'Z'); 
root = insert_node(root,'A'); 
root = insert_node(root,'C');

// Calling the traversal method:
cout<<"Level Order Traversal:"<<endl;
LevelOrder(root);
}