// Leetcode-Trees:

/*
Convert Sorted Array to Binary Search Tree:

Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.


Example 1:
Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:
*/

// Code(Recursive):

/*
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
    TreeNode* MakeTree(vector<int>& nums,int left,int right){
//         for empty nodes:
        if(left>right){
            return NULL;
        }
//         make midpoint as root_node:
        int mid=left+(right-left)/2;
        TreeNode* root=new TreeNode(nums[mid]);
//         make left sub array as left child:
        root->left=MakeTree(nums,left,mid-1);
//         make right sub array as right child:
        root->right=MakeTree(nums,mid+1,right);
//         return root element;
        return root;
    }
     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         call to helper function for tree construction:
        return MakeTree(nums,0,nums.size()-1);
    }
    
};

// Runtime: 33 ms (17.11% faster)
// Memory Usage: 21.5 MB (44.08% lesser)