// Leetcode-Maths-Easy:
/*
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.
 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/

// Code :
class Solution {
public:
//     reverse function:
    long int reverse_no(int x){
        long int res=0;
        while(x!=0){
            res=(res*10)+(x%10);
            x/=10;
        }
        return res;
    }
    
//  palindrome function:   
    bool isPalindrome(int x) {
//      for negative elements:
        if(x<0)return false;
        
//         reverse the number:
        long int rev_x=reverse_no(x);
        
//         check for palindrome:
        if(x==rev_x)return true;
        else return false;
    }
};
// Time: 16ms(75.87% faster)
// memory-6mb