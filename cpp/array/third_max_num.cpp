
//Given integer array nums, return the third maximum number in this array. If the third maximum does not exist, return the maximum number.

/*Example 1:

Input: nums[] = [3,2,1]
Output: 1
Explanation: The third maximum is 1.
*/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
         int n=nums.size();      //array size;

        //making three variables to count 3 max elements,initially values of all as minimum in long;
     long first_max=nums[0],second_max=LONG_MIN,third_max=LONG_MIN;

        //iterate whole array and update all variable's value in each iteration;
        for(int i=1;i<n;i++){

            if(nums[i]>first_max){
                third_max=second_max;
                second_max=first_max;
                first_max=nums[i];
            }
            else if(nums[i]>second_max && nums[i]!=first_max ){
                third_max=second_max;
                second_max=nums[i];
            }
            else if(nums[i]>third_max && nums[i]!=second_max &&  nums[i]!=first_max){
                third_max=nums[i];
            }
        }
        //if array does not have third max , return maximum;
        if(third_max==LONG_MIN){
            return first_max;
        }
        //else return third maximum;
            return third_max;
    }
};


//runtime: 4 ms (93.61% faster)
//memory:9mb
