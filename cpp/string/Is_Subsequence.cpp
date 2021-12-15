// Leetcode: String- "isSubsequence"

/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original
string by deleting some (can be none) of the characters without disturbing
the relative positions of the remaining characters.(i.e., "ace" is a subsequence
 of "abcde" while "aec" is not).

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
*/

// Approach-1:
class Solution {
public:
    bool isSubsequence(string s, string t) {
//         sIndex: stores the index of subsequence:
        int sIndex=0;
//         iterate whole 't' string and if it matches with 's' string character
//         increment sIndex count:
        for(int i=0;i<t.size();i++){
            if(t[i]==s[sIndex]){
                sIndex++;
            }
        }
        
//         now at last if sIndex =='s' string length, it is a subsequence of it.
        if(sIndex==s.size())return true;
//         else return false;
        else return false;
    }
};

// Runtime: 2ms.
// Memory: 6.4mb(69.82% effecient).


// -----------------------------------------------------------------------------------
// Approach-2: using 2 pointers:

class Solution {
public:
    bool isSubsequence(string s, string t) {
//         Approach using 2 pointers:
        int i=0,j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
//         if i==len(s)return true:
        if(i==s.size())return true;
        else return false;
    }
};

// Runtime : 2ms
// Mmeory: 6.3mb(88.63% effecient).
