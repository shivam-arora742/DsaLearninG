
class Solution {
public:
    void moveZeroes(vector<int>& nums){
        int n=nums.size();          //number of elements in vector
        for(int i=0;i<n;i++){      //traverse whole vector
            if(nums[i]==0){        //find first '0'
                int j=i+1;
                while(j<n){           //traverse & replace '0' with other numeric data
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
//runtime:16ms
//memory:8.8mb
