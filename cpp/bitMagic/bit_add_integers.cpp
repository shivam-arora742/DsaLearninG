//Leetcode Bit Manipulation Medium Question:
//Statement:Given two integers a and b, return the sum of the two integers without using the operators + and -.

/*Test Case:
Example 1:

Input: a = 1, b = 2
Output: 3
*/

//Solution:
class Solution {
public:
    int getSum(int a, int b) {
        long mask = 0xFFFFFFFF;            //mask for negative values:
        int xor_sum=a;
        while(b!=0){                      //repeat until b(carry) doesn't become 0
           xor_sum=a^b;                    //xor_sum=to get sum
           b=((a&b)&mask)<<1;              //for carry we will do a&b and left shift by 1.
            a=xor_sum;                    //make a as xor_sum
        }
        return a;                       //return sum;
    }
};

//Runtime:0ms(100% faster).
//Space:5.9mb(73%less space).
