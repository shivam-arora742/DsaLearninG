class Solution {
public:
    void moveZeroes(vector<int>& nums){
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                int j=i+1;
                while(j<n){
                    if(nums[j]!=0){
                        nums[i]=nums[j];
                        nums[j]=0;
                        break;
                    }
                    j++;
                }
            }
        }
    }
};