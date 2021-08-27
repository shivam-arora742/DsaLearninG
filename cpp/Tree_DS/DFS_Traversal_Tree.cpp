// DFS-Traversal-Tree:

// Includes: Preorder,Postorder,Inorder Traversals:

#include<iostream>
using namespace std;


// Structure for tree nodes:
struct Node{
    char data;
    Node* left;
    Node* right;
};

// Node Creation:
Node* create_node(Node* root,char data){
    // for first node of tree:
    if(root==NULL){
        Node* newNode=new Node();
        newNode->data=data;
        newNode->left=NULL;
        newNode->right=NULL;
        return newNode;
    }
    // rest nodes:
    if(data<=root->data){
        root->left=create_node(root->left,data);
    }
    if(root->data<data){
        root->right=create_node(root->right,data);
    }
}

// DFS-Traversal:

// Preorder():
void PreOrder(Node*root){
    // base case:
    if(root==NULL)return ;
    // traversing root first:
    cout<<" "<<root->data;
    // then going to left subtree:
    PreOrder(root->left);
    // at last right subtree:
    PreOrder(root->right);
}

// Inorder():
void InOrder(Node*root){
    // base case:
    if(root==NULL)return ;
    // going to left subtree:
    PreOrder(root->left);
    // traversing root in between:
    cout<<" "<<root->data;
    // at last right subtree:
    PreOrder(root->right);
}


// PostOder():
void PostOrder(Node*root){
    // base case:
    if(root==NULL)return ;
    // going to left subtree:
    PreOrder(root->left);
    // then going to right subtree:
    PreOrder(root->right);
    // at last traversing root:
    cout<<" "<<root->data;
}

int main(){
Node* root=NULL;
root=create_node(root,'A');
root=create_node(root,'B');
root=create_node(root,'C');
root=create_node(root,'D');
root=create_node(root,'E');
root=create_node(root,'F');
root=create_node(root,'G');
root=create_node(root,'H');
root=create_node(root,'I');
root=create_node(root,'J');
root=create_node(root,'K');

// Output:
cout<<"Preorder:";
PreOrder(root);
cout<<endl<<"InOder:";
InOrder(root);
cout<<endl<<"PostOder:";
PostOrder(root);
return 0;
}