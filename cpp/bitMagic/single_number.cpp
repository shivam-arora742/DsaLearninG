class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int result=0;                   //result variable ,intialized by 0;
        int n=nums.size();           //to store no of elements in a vector
        for(int i=0;i<n;i++){       //iterate whole vector
            result=result^nums[i]; //Xor btw result & nums[i];
        }                         //will cross cancelled the repeating elements
        return result;           //return single number as result
    }
};
