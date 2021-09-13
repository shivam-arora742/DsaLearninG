// Leetcode: Stack: Remove All Adjacent Duplicates In String

/*
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".

*/

// Code:
class Solution {
public:
    string removeDuplicates(string s) {
//         stack for helping:
        stack<char>st;

//         output string:
        string output="";

        // iterate over whole string:
        for(char i : s){
            // for empty stack insert the element:
            if(st.empty()){
                output.push_back(i);
                st.push(i);
            }

            else{
                // if top element of stack matches with string element , pop it out.
                if(st.top()==i){
                    st.pop();
                    output.pop_back();
                }
                //  for non adjacent duplicate cases:
                else{
                    st.push(i);
                    output.push_back(i);
                }
            }
        }
        
     return output;   
    }
};

// Runtime: 16ms (90% faster).
// memory:11.6 mb.