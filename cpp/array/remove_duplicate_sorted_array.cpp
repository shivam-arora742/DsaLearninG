
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();               //array size.
        int dup=0;                       //counter for duplicate elements.
        int i=0;                        //let 0th indexed   element is in correct place.
        for(int j=1;j<n;j++){           //traverse from j=1 to n
            if(nums[j]==nums[i]){       //if found duplicates: dup++
                dup++;
            }
            else{
                i=i+1;                 //else increment i and at new place add non duplicate elemnt
                nums[i]=nums[j];
            }
        }
        return (n-cnt);                 //return new size of array.
    }
};
//Runtime: 8 ms. faster than 82.80%
//Memory Usage: 13.7 MB lesser than 58.76%
