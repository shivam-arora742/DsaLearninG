// Leetcode: Strings: Fizz_Buzz:
/*
Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i if non of the above conditions are true.
 

Example 1:

Input: n = 3
Output: ["1","2","Fizz"]
*/

// Code:
class Solution {
public:
    vector<string> fizzBuzz(int n) {
    //  basic approach:
        vector<string>output;
        for(int i=1;i<=n;i++){
         if(i%3==0 && i%5==0){
             output.push_back("FizzBuzz");
         }
            else if(i%3==0){
                output.push_back("Fizz");
            }
            else if(i%5==0){
                output.push_back("Buzz");
            }
            else{
                output.push_back(to_string(i));
            }
        }
        
        return output;
    }
};

// Runtime: 0ms (100% faster)
// Memory: 8mb.