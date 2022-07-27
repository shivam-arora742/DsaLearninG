// Leetcode-Array-Missing Number:

/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
Example 2:

Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
*/

//Naive Approach:
class Solution {
public:
    int missingNumber(vector<int>& nums) {
//         array size:
        int n=nums.size();
        int flag=1;
        int missingNumber=-1;
//         iterate over 0 to n:
        for(int i=0;i<=n;i++){
//             check if element ==nums[j]:
            for(int j=0;j<n;j++){
//                 if they arent equal , flag is 0
                if(i!=nums[j]){
                    flag=0;
                }
//                 for equal case flag is 1
                else{
                    flag=1;
                    break;
                }
            }
//             at last check for which position flag==0,return it:
            if(flag==0){
                missingNumber=i;
                break;
            }
        }
        return missingNumber;
    }
};

//TIme: 1481ms.
// Memory: 17.8mb(93.38% less).

// --------------------------------------------------------------------

//Better Approach:
class Solution {
public:
    int missingNumber(vector<int>& nums) {
//         array size:
        int n=nums.size();
//         for missing element:
        int missingElement=-1;
//         index array :
        vector<int> index(n+1);
        for(int i=0;i<n+1;i++){
            index[i]=-1;
        }
//         iterate over nums array & mark element's presence:
        for(int i=0;i<n;i++){
            index[nums[i]]++;
        }
    
//  now iterate over index array & check for missing number:
        for(int i=0;i<=n;i++){
            if(index[i]==-1){
                missingElement=i;
                break;
            }
        }
        return missingElement;
    }
};

//TIme: 44ms
// Memory: 18.5mb

// =--------------------------------------------------------------------=
// TIme Effecient Approach:

class Solution {
public:
    int missingNumber(vector<int>& nums) {
//         sort the array:
 sort(nums.begin(), nums.end());
        int iteration_counter = -1;
        for(auto x : nums){
            if(x != iteration_counter + 1){
                return x - 1;
            }
            iteration_counter = x;
        }
        return iteration_counter + 1;
    }
};
// Time: 29ms
// Memory: 18mb
