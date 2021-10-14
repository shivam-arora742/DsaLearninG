// GFG Tree- Easy :

/*
 Count Leaves in Binary Tree

 Given a Binary Tree of size N , You have to count leaves in it. For example, there are two leaves in following tree

        1
     /      \
   10      39
  /
5

 

Example 1:


Input:
Given Tree is 
               4
             /   \
            8     10
           /     /   \
          7     5     1
         /
        3 
Output:
3
Explanation: 
Three leaves are 3 , 5 and 1.


// Code: Recursive:

//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
int countLeaves(Node* root)
{
  // Your code here
//   if node==NULL , return false for leaf:
  if(root==NULL)
  {
      return 0;
  }
//   check for leaf node: its left & right child should be null:
  if(root->left ==NULL && root->right==NULL)
  {
     return 1;
  }
  
//   calculation for counting leaves in binary tree:
  int leaf=0;
//   for left child:
  if(root->left){
      leaf+=countLeaves(root->left);
  }
//   for right child:
  if(root->right){
      leaf+=countLeaves(root->right);
  }
//   return leaves:
  return leaf;
}


// time taken: 0.1ms
*/