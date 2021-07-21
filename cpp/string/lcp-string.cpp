// LEETCODE-STRING: Longest Common Prefix

/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //if string array is empty:
        if(strs.size()==0)return "";
        
        //LCP->LONGEST COMMON PREFIX AS RESULT:
        string LCP="";
          //make 1st element of vector as prefix reference:
        string prefix_ref=strs[0];
        //iterate through the prefix_ref length:
        for(int i=0;i<prefix_ref.size();i++){
            
        //now select other elements of vector one by one:
            for(int j=1;j<strs.size();j++){
                
              //now check if from starting the characters match or not:
                if(strs[j][i]!=prefix_ref[i])
                {
                    return LCP;
                }
            }
             LCP+=prefix_ref[i];
        }
        return LCP;
    }
};
// Runtime: 0 ms 100.00% FASTER.
// Memory Usage: 9.3 MB. 