// Leetcode-DP-Nth Tribonaccci Number:

/*

The Tribonacci sequence Tn is defined as follows: 

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.

 

Example 1:

Input: n = 4
Output: 4
Explanation:
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4
Example 2:

Input: n = 25
Output: 1389537

*/

// Code:
class Solution {
public:
//     Approach- using Recursion & Memoization:

//     auxiliary function:
    int fun(int n,vector<int> &trib){
        if(n==0 || n==1)return n;
        if(n==2)return 1;
        if(trib[n]!=-1)return trib[n];
        return trib[n]=fun(n-1,trib)+fun(n-2,trib)+fun(n-3,trib);
    }
//     Main Function:
    int tribonacci(int n) {
        if(n==0 || n==1)return n;
        if(n==2)return 1;
        vector<int> trib(n+1,-1);
        trib[0]=0;trib[1]=1;trib[2]=1;
        int res=fun(n,trib);
        return res;
    }
};

// TIme: 0ms(100% faster)
// Memory:6.1mb