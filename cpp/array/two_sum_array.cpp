//Approach-1:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //vector to store output
        vector<int> output;
        //for array size
        int n=nums.size();
        //iterate whole array and check  if we found target
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                        //assign values for output and return
                    output={i,j};
                    return output;
                }
            }
        }
        //else return empty output.
        return {};
    }
};
//execution time: 8 ms ;
//space :8.8 MB ;

//Approach-2:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //vector to store output
       vector<int> ans;
        //iterate whole array and check  if we found target
        for(int i=0;i<(nums.size())-1;i++){
            //to clear previous iteration values.
            ans.clear();
            //temporary target
            int Target =  target-nums[i];
            //insert 1st value and found corresponding next value.
            ans.push_back(i);
            for(int j=i+1;j<nums.size();j++){
                if(Target==nums[j]){
                    ans.push_back(j);
                    break;
                }
            }
            //check if we found our output ,then return
            if(ans.size()==2){
                break;
            }
        }
        return ans;
    }
};
//execution time: 4 ms ;
//space :8.9 MB ;
