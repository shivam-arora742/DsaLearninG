// LEETCODE:ARRAY: Find the Duplicate Number:
/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
*/

// Code:
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int n=nums.size();   //for array size.
        for(int i=0;i<n;i++){ //iterate and take elemnt as index of array.
            int index=abs(nums[i]);
            if(nums[index]<0)return index; //check if elemnt is already negative,return index.
            else{
                nums[index]=-nums[index];  //make index elemnent as negative.
            }
        }
        return -1;    //else return -1(not found duplicate.)
    }
};

// RUNTIME:88MS (96.31% FASTER).
// MEMORY:61.3 MB .
