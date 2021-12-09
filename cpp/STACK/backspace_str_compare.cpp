// Leetcode: Stack:
/*
Backspace String Compare

Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
*/


// Code:
class Solution {
public:
    bool backspaceCompare(string s, string t) {
//     traverse 's' string and push alphabets to stack:
        stack<char >s_stack;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
                s_stack.push(s[i]);
            }
            else if(!s_stack.empty()){
                s_stack.pop();
            }
        }
    
 //     traverse 't' string and push alphabets to stack:
        stack<char >t_stack;
        for(int i=0;i<t.size();i++){
            if(t[i]!='#'){
                t_stack.push(t[i]);
            }
            else if(!t_stack.empty()){
                t_stack.pop();
            }
        }
        
//         compare top of both the stacks & return false if not same:
        while(!s_stack.empty() && !t_stack.empty()){
            if(s_stack.top()!=t_stack.top()){
                return false;
            }
            else{
                s_stack.pop();
                t_stack.pop();
            }
        }
        if(s_stack.empty() && t_stack.empty()){
        return true;
        }
        else{
            return false;
        }
    }
};

// Runtime: 0ms(100% faster).
// Memory: 6.5 mb.