// TO find min and max elemnt in BST:

// FindMin()->using iterative approach
// FindMax()->using recursive approach

// BST Implementation:
#include<iostream>
using namespace std;

//Structure for node .
struct BSTNode{

//to store data;
int data;

//to store address of left and right child;
BSTNode* left;
BSTNode* right;
};

//Function to create new node and insert data and return its address:
BSTNode* create_node(int value){
//dynamically creating new node.
BSTNode* newNode=new BSTNode();

//de-referencing pointer and access node fields.
newNode->data=value;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}

//Insert node to tree function:
BSTNode* insert_node(BSTNode *root,int data){
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


// Find Min method: iterative method:
int FindMin(BSTNode* root){
    //for empty tree:
    if(root==NULL)return -1;

    // traverse leftmost leaf node .
    BSTNode* current=root;
    while(current->left!=NULL){
        current=current->left;
    }
    return current->data;
}

// Find Max method: recursive method:
int FindMax(BSTNode* root){
    //for empty tree:
    BSTNode* current=root;
    if(root==NULL){
        return -1;
    }

    //if we get rightmost leaf element , return it
    else if(current->right==NULL)
    {
        return current->data;
    }

    // traverse recursively to righmost leaf node.
    else {
        return FindMax(current->right);
    }
}


int main(){
//pointer to store root node address.
BSTNode* root;

//Initially tree is empty:
root=NULL;

//Insert node to tree function and update root :
root=insert_node(root,15);  //when tree is empty it becomes root
root=insert_node(root,10);
root=insert_node(root,20);
root=insert_node(root,8);
root=insert_node(root,12);
root=insert_node(root,17);
root=insert_node(root,25);

cout<<"Minimum Element: \n"<<FindMin(root)<<endl;
cout<<"Maximum Element: \n"<<FindMax(root);
return 0;
}

/* Output:
Minimum Element: 
8
Maximum Element: 
25
*/