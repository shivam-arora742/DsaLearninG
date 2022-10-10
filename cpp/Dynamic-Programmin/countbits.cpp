// Leetcode-DP-Easy: Count Bits:

/*
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

 

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
 

Constraints:

0 <= n <= 105
 

Follow up:

It is very easy to come up with a solution with a runtime of O(n log n). Can you do it in linear time O(n) and possibly in a single pass?
Can you do it without using any built-in function (i.e., like __builtin_popcount in C++)?
*/

// Code & Approach:
class Solution {
public:
    vector<int> countBits(int n) {
//         array for resultant:
        vector<int> res(n+1);
        
//         res[0] will always have 0 number of 1's:
        res[0]=0;
        
//         iterate 1 to n(inclusive):
        for(int i=1;i<=n;i++){
//             for even indexes:
            if(i%2==0){
                res[i]=res[i/2];
            }
            
//             for odd indexes:
            else{
                res[i]=res[i-1]+1;
            }
        }
        return res;
    }
};
// TIme: 7ms(76% faster)  Memory:7.7mb(87% less)
