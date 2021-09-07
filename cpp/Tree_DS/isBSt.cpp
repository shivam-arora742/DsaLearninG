// Check if a Binary tree is BST:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// structure for tree node:
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};


// check for BST:
// here min & max  are node type as to pass and compare between nodes.
bool isBST(Node* root,Node* min=NULL,Node* max=NULL){
    // Base Case: for empty tree is a valid BST:
    if(root==NULL){
        return true;
    }
    
    // if data of node is less than that of min node,return not a BST:
    if(min!=NULL && root->data<=min->data){
        return false;
    }

    // if data of node is greater than that of max node,return not a BST:
    if(max!=NULL && root->data>=max->data ){
        return false;
    }
    // recursive calls to check condition of BST for left and right sub-trees:
    bool leftSubtreeValid=isBST(root->left,min,root);
    bool rightSubtreeValid=isBST(root->right,root,max);

    // resultant:
    return (leftSubtreeValid and rightSubtreeValid);
}

// main method:
int main(){
    Node* root=new Node(5);
    root->left=new Node(2);
    root->right=new Node(8);

    // call for check method:
    if(isBST(root,NULL,NULL)){
        cout<<"Valid BST:";
    }
    else{
        cout<<"Not a Valid BST:";
    }

    return 0;
}