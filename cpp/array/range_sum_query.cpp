// Leetcode: August challenge :
// Question: Range Sum Query:

/*
Given an integer array nums, handle multiple queries of the following type:

Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
Implement the NumArray class:

NumArray(int[] nums) Initializes the object with the integer array nums.
int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).
 

Example 1:

Input
["NumArray", "sumRange", "sumRange", "sumRange"]
[[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
Output
[null, 1, -1, -3]

Explanation
NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
numArray.sumRange(0, 2); // return (-2) + 0 + 3 = 1
numArray.sumRange(2, 5); // return 3 + (-5) + 2 + (-1) = -1
numArray.sumRange(0, 5); // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3
*/

// Aproach-1: Iterative approach
class NumArray {
public:
    vector<int> res;
    NumArray(vector<int>& nums) {
        res=nums;                 //intialise 'res' array with elements of 'nums'.
    } 
    
    int sumRange(int left, int right) {
        int sum=res[left];                 //use sum variable for adding elemnts.
        for(int i=left+1;i<=right;i++){    //iterate loop from left to right and add elements
            sum+=res[i];
        }
        return sum;                    //return sum;
    }
};
// Runtime:264 ms     Memory:17mb

// Approach-2: Recursive approach
class NumArray {
public:
    vector<int> res;
    NumArray(vector<int>& nums) {
        res=nums;
    }
    
    int sumRange(int left, int right) {
        if(left>right)return 0;
        int sum=res[left]+sumRange(left+1,right);
        return sum;
    }
};
// Runtime: 456 ms                Memory Usage : 17.6 MB


// Effecient Approach:
class NumArray {
public:
    vector<int> res;
    NumArray(vector<int>& nums) {
        res=nums;
        for(int i=1;i<nums.size();i++){
            res[i]=nums[i]+res[i-1];     //determine prefix sum array (res).
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0) return res[right];   //means sum of whole array.
        else{
            return (res[right]-res[left-1]);  //difference between 2 prefix sum.
        }
    }
};
// Runtime: 24 ms, faster than 57.48% 
// Memory Usage: 17.1 MB, less than 31.47% 