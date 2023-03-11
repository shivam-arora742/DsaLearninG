// Leetcode-Easy- Array-Intersect of Arrays:

/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
*/
// COde:
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // sort both arrays:
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        vector<int >res;
        while(i<nums1.size() && j<nums2.size()){
            // for intersection:
            if(nums1[i]==nums2[j]){
                res.push_back(nums1[i]);
                i++,j++;
            }
            // if elemnt less than other :
            else if(nums1[i]<nums2[j]){
                i++;
            }

            else if(nums1[i]>nums2[j]){
                j++;
            }

            // to solve repeatition of elements:
            while(i>0 && i<nums1.size() && nums1[i-1]==nums1[i]){
                i++;
            }
            while(j>0 && j<nums2.size() && nums2[j-1]==nums2[j]){
                j++;
            }
        }
        return res;
    }
};

// Time: 7ms(68% faster) 
// Memory: 9.9mb (97% less)