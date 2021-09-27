// Inorder Successor BST:

#include<iostream>
using namespace std;

// structure for BST:
struct Node{
    int data;
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

// Find function:to calculate location/node of data:
Node* Find(Node* root,int data){
    Node* tmp=root;
    if(tmp->data<data){
        tmp=tmp->right;
    }
    else if(tmp->data > data){
        tmp=tmp->left;
    }
    else if(tmp->data==data){
        return tmp;
    }
}

// Inorder Successor:
Node* InorderSuccessor(Node* root, int data){
    // find location of data:
    Node* current=Find(root,data);
    //if node not found:
    if(current==NULL)return NULL;

    // case-1:if right subtree present:
    if(current->right!=NULL){
        Node* tmp=current->right;
        while(tmp->left!=NULL){
            tmp=tmp->left;
        }
        return tmp;
    }

    // case-2: no subtree present:
    else{
        Node* successor=NULL;
        Node* ancestor=root;
        while(ancestor!=current){
            if(ancestor->data>current->data){
                successor=ancestor;
                ancestor=ancestor->left;
            }
            else{
                ancestor=ancestor->right;
            }
        }
        return successor;
    }


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

// Output:
Node* res=InorderSuccessor(root,10);
cout<<res->data;
}