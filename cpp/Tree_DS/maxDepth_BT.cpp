/*
Leetcode-Trees-Easy: Maximum Depth of Binary Tree.

Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: 3

// Code:Recursive:

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
//         base case: for null nodes:
        if(root==NULL)return 0;
//         recursive cases:for left and right height:
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
//         return max depth of BT:
        return 1+max(left,right);
        }
};

// Time: 15ms
// Memory: 18.9mb(55.50% less)
