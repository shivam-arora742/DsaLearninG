// Leetcode-Array -3sum:

/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
*/

// Code & Approach:
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
//         resultant vector:
        vector<vector<int>> res;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
//            mark first elemnet as 'a'
            int a=nums[i];
//             now find target 't'==b+c==-a:
            int t=-a;
            int start=i+1,end=n-1;
            while(start<end){
//                 for target==start+end;
                if(nums[start]+nums[end]==t){
                    res.push_back({nums[i],nums[start],nums[end]});
//                     avoid duplicate triplets:
                    while(start<end && nums[start]==nums[start+1])start++;
                    while(start<end && nums[end]==nums[end-1])end--;
                    start++;
                    end--;
                }
//                 in case of small summation:
                else if(nums[start]+nums[end]<t){
                    start++;
                }
//                 for large summation
                else{
                    end--;
                }
            }
//             to avoid duplicate elements:
            while(i+1<n&&nums[i+1]==nums[i])i++;
        }
        return res;
    }
};
// Time:173ms
// Memory:19.8mb(85%faster)