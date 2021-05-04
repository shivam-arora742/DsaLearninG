
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n=nums.size();   //variable to store nums[] size.
        int i;               //for traversal of loop and comparing each nums value with target.
        int pos=-1;          //to store position of target in nums[] ,initially pos=-1.
        for(i=0;i<n;i++){
                //if we found the target value in nums,return the index.
                //else check if nums[i]>target,i,e correct value of target ,return the index again.
            if(nums[i]==target || nums[i]>target){
                    pos=i;
                return pos;
            }
            }
        //after whole traversal of nums[],if we havent found the target , return n.
        return n;
    }
};
//runtime: 8 ms
//memory usage: 9.6 mb
