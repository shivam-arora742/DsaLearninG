// Leetcode-Bit Manipulation-Counting Bits:

/*
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

 

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
*/

// Code:

class Solution {
public:
    vector<int> countBits(int n) {
//      vector for result:
        vector<int>result(n+1);
//         always setbits in 0 ->0
        result[0]=0;
//         iterate from 1 to n:
        for(int i=1;i<=n;i++){
//         if i%2==0, take setbits of original subproblem as result:
            if(i%2==0){
                result[i]=result[i/2];
            }
//             if not then  take no of setbits in previous number +1 as result; 
            else if(i%2!=0){
                result[i]=result[i-1]+1;
            }
    }
        return result;
    }
    
};

// Runtime: 4ms (88% faster).
// Memory: 7.7mb (98% effecient).
