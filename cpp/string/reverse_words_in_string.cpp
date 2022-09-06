// Leetcode-Reverse Words in String:
/*
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"
Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
Example 3:

Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.

*/

// Code & Approach:
class Solution {
public:
    string reverseWords(string s) { 
        int i=0,j,n=s.size();
        string word="",res="";
        while(i<n){
//             for leading white spaces:
            while(i<n && s[i]==' ')i++;
//             i points to start of word:
//             for end of word: j=i+1'
            if(i>=n)break;
            j=i+1;
            while(j<n && s[j]!=' ')j++;
            
//             take out the substring: & append to res:
            word=s.substr(i,j-i);
            if(res.empty()){
                res=word;
            }
            else{
                res=word+' '+res;
            }
            i=j+1;
        }
        return res;
    }
};