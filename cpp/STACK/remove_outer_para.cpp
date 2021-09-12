// Leetcode-Stack -Easy:

/*
Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".
*/

// Code:
class Solution {
public:
    string removeOuterParentheses(string s) {
        
//         auxiliary stack to remove outer para :
        stack<char> st;

//         output string:
        string output="";
        
        // iterate over whole string:
        for(int i=0;i<s.size();i++){
            // for opening para , check if stack is empty, then just push it else add that '(' to output:
            if(s[i]=='('){
                if(st.size() > 0){
                    output+=s[i];
                }
                st.push(s[i]);
            }
            // for closing para , check if stack size>1 then add in output , else just pop the element from stack:
            if(s[i]==')'){
                if(st.size()>1){
                    output+=s[i];
                }
                st.pop();
            }
            }
            // return output string :
        return output;
    }
};

// Runtime: 4ms (77.39% faster) .
// Memory:6.8mb .
