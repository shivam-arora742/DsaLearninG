
//Approach-3
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int major=nums[0];
        int cnt=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(major==nums[i]){
                cnt++;
            }
            else {
                cnt--;

            }
            if(cnt==0){
                major=nums[i];
                cnt=1;
            }
        }
        return major;
    }
};
//execution time: 20 ms;
