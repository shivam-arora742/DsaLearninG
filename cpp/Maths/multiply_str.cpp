// Leetcode-Maths-Multiply Strings:
/*
Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

 

Example 1:

Input: num1 = "2", num2 = "3"
Output: "6"
Example 2:

Input: num1 = "123", num2 = "456"
Output: "56088"
 

Constraints:

1 <= num1.length, num2.length <= 200
num1 and num2 consist of digits only.
Both num1 and num2 do not contain any leading zero, except the number 0 itself.
*/

// Code & Approach:
class Solution {
public:
    string multiply(string num1, string num2) {

        //         edge case : number =0:
        if(num1=="0"||num2=="0")return "0";
        
        int n=num1.size(),m=num2.size();

        //         vector for storing product at each step:
        vector<int> nums(n+m,0);
 
       //         iterate over both string & apply product:
        for(int i=n-1;i>=0;--i){
            for(int j=m-1;j>=0;--j){

                //                for product:
                nums[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');

                //                 for carry:
                nums[i+j]+=nums[i+j+1]/10;

                //                 for remainder:
                nums[i+j+1]%=10;
            }
        }

        //         for leading zeroes in product:
        int i=0;
        while(i<nums.size() && nums[i]==0){
            ++i;
        }
        

        //         convert vector to string as product:
        string res="";
        while(i<nums.size())
        {
            res.push_back(nums[i++]+'0');
        }
        
//         output:
        return res;
    }
};
