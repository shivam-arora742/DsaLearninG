// Leetcode-Array Medium:

/*
Q)- Next Permutation:

// Statement:
The next permutation of an array of integers is the next lexicographically greater permutation of its integer.

// Sample Examples:

1):
Input: nums = [1,2,3]
Output: [1,3,2]

2):
Input: nums = [3,2,1]
Output: [1,2,3]
*/


// Approaches:

// 1-use of c++ inbult function: next_permutation(nums.begin(),nums.end());

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
    }
};

// Runtime:6ms(55%faster)       Memory:12.2mb.


// -----------------------------------------------------------------------------------

// Approach-2: Optimal Solution:
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
//         array size:
       int n=nums.size();
//         break points:
        int index1=-1,index2=-1;
        for (int i=n-2;i>=0;i--){
//             count index1 from right:that needs to be swapped
            if(nums[i]<nums[i+1]){
                index1=i;
                break;
            }
        }
        
        if(index1!=-1){
         for (int i=n-1;i>=0;i--){
//             count index2 from right:that will  swapp index1 element
            if(nums[i]>nums[index1]){
                index2=i;
                break;
            }
        }
        }
        if(index1!=-1 && index2!=-1){
//         swap both breakpoint elements:
        swap(nums[index1],nums[index2]);
        
//         reverse to get lowest rank from index1:
        reverse((nums.begin()+index1+1),nums.end());
        }
//         else if the permutation is last one, get the first permutation
        else{
             reverse(nums.begin(),nums.end());
        }
    }
};

// Runtime:3ms (87.82%faster)            Memory:12.2mb
