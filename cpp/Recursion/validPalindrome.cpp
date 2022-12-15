// Leetcode-Recursion- Valid Palindrome:

/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
*/

// Approach- Time Effecient(beats 89.97% )

class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            // for lower case & numerical characters:
            if((s[i]>=48 && s[i]<=57)|| (s[i]>=97 && s[i]<=122)){
                str+=(s[i]);
            }
            // for upper case characters:
            else if(s[i]>=65 && s[i]<=90){
                str+=(s[i]+32);
            }
        }
        string orig_str=str;
        reverse(str.begin(),str.end());
        if(orig_str==str) return true;
        else return false; 
    }
};